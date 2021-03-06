// mushroom_1up.c.inc

void bhv_1up_interact(void)
{
	UNUSED s32 sp1C;

	if(are_objects_collided(o, gMarioObject) == 1)
	{
		play_sound(SOUND_GENERAL_COLLECT_1UP, gDefaultSoundArgs);
		if(!sm64::config().cheats().unlimitedLives())
		{
			gMarioState->numLives++;
		}
		o->activeFlags = 0;
	}
}

void bhv_1up_common_init(void)
{
	o->oMoveAnglePitch = -0x4000;
	o->oGravity	   = 3.0f;
	o->oFriction	   = 1.0f;
	o->oBuoyancy	   = 1.0f;
}

void bhv_1up_init(void)
{
	bhv_1up_common_init();
	if(o->oBehParams2ndByte == 1)
	{
		if((save_file_get_flags() & 0x50) == 0)
			o->activeFlags = 0;
	}
	else if(o->oBehParams2ndByte == 2)
	{
		if((save_file_get_flags() & 0xa0) == 0)
			o->activeFlags = 0;
	}
}

void func_802F2D40(void)
{
	if(o->oTimer < 5 * FRAME_RATE_SCALER_INV)
	{
		o->oVelY = 40.0f;
	}
	else
	{
		o->oAngleVelPitch = -0x1000;
		o->oMoveAnglePitch += o->oAngleVelPitch * FRAME_RATE_SCALER;
		o->oVelY       = coss(o->oMoveAnglePitch) * 30.0f + 2.0f;
		o->oForwardVel = -sins(o->oMoveAnglePitch) * 30.0f;
	}
}

void func_802F2E18(void)
{
	f32 sp34 = gMarioObject->header.gfx.pos[0] - o->oPosX;
	f32 sp30 = gMarioObject->header.gfx.pos[1] + 120.0f - o->oPosY;
	f32 sp2C = gMarioObject->header.gfx.pos[2] - o->oPosZ;
	s16 sp2A = atan2s(sqrtf(sqr(sp34) + sqr(sp2C)), sp30);

	obj_turn_toward_object(o, gMarioObject, 16, 0x1000);
	o->oMoveAnglePitch = approach_s16_symmetric(o->oMoveAnglePitch, sp2A, 0x1000 / FRAME_RATE_SCALER_INV);
	o->oVelY	   = sins(o->oMoveAnglePitch) * 30.0f;
	o->oForwardVel	   = coss(o->oMoveAnglePitch) * 30.0f;
	bhv_1up_interact();
}

void func_802F2F8C(s16 sp1A)
{
	o->oForwardVel	 = 8.0f;
	o->oMoveAngleYaw = o->oAngleToMario + 0x8000;
	bhv_1up_interact();
	if(sp1A & 0x02)
		o->oAction = 2;

	if(!is_point_within_radius_of_mario(o->oPosX, o->oPosY, o->oPosZ, 3000))
		o->oAction = 2;
}

void bhv_1up_walking_loop(void)
{
	object_step();

	switch(o->oAction)
	{
		case 0:
			if(o->oTimer >= 18 * FRAME_RATE_SCALER_INV)
				spawn_object(o, MODEL_NONE, sm64::bhv::bhvSparkleSpawn());

			if(o->oTimer == 0)
				play_sound(SOUND_GENERAL2_1UP_APPEAR, gDefaultSoundArgs);

			func_802F2D40();

			if(o->oTimer == 37 * FRAME_RATE_SCALER_INV)
			{
				obj_become_tangible();
				o->oAction     = 1;
				o->oForwardVel = 2.0f;
			}
			break;

		case 1:
			if(o->oTimer > 300 * FRAME_RATE_SCALER_INV)
				o->oAction = 2;

			bhv_1up_interact();
			break;

		case 2:
			obj_flicker_and_disappear(o, 30);
			bhv_1up_interact();
			break;
	}

	set_object_visibility(o, 3000);
}

void bhv_1up_running_away_loop(void)
{
	s16 sp26;

	sp26 = object_step();
	switch(o->oAction)
	{
		case 0:
			if(o->oTimer >= 18 * FRAME_RATE_SCALER_INV)
				spawn_object(o, MODEL_NONE, sm64::bhv::bhvSparkleSpawn());

			if(o->oTimer == 0)
				play_sound(SOUND_GENERAL2_1UP_APPEAR, gDefaultSoundArgs);

			func_802F2D40();

			if(o->oTimer == 37 * FRAME_RATE_SCALER_INV)
			{
				obj_become_tangible();
				o->oAction     = 1;
				o->oForwardVel = 8.0f;
			}
			break;

		case 1:
			spawn_object(o, MODEL_NONE, sm64::bhv::bhvSparkleSpawn());
			func_802F2F8C(sp26);
			break;

		case 2:
			obj_flicker_and_disappear(o, 30);
			bhv_1up_interact();
			break;
	}

	set_object_visibility(o, 3000);
}

void func_802F3328(void)
{
	s16 sp1E;

	sp1E = object_step();
	if(sp1E & 0x01)
	{
		o->oForwardVel += 25.0f * FRAME_RATE_SCALER;
		o->oVelY = 0;
	}
	else
	{
		o->oForwardVel *= 0.98;
	}

	if(o->oForwardVel > 40.0)
		o->oForwardVel = 40.0f;

	if(!is_point_within_radius_of_mario(o->oPosX, o->oPosY, o->oPosZ, 5000))
		o->oAction = 2;
}

void bhv_1up_sliding_loop(void)
{
	switch(o->oAction)
	{
		case 0:
			set_object_visibility(o, 3000);
			if(is_point_within_radius_of_mario(o->oPosX, o->oPosY, o->oPosZ, 1000))
				o->oAction = 1;
			break;

		case 1:
			func_802F3328();
			break;

		case 2:
			obj_flicker_and_disappear(o, 30);
			bhv_1up_interact();
			break;
	}

	bhv_1up_interact();
	spawn_object(o, MODEL_NONE, sm64::bhv::bhvSparkleSpawn());
}

void bhv_1up_loop(void)
{
	bhv_1up_interact();
	set_object_visibility(o, 3000);
}

void bhv_1up_jump_on_approach_loop(void)
{
	s16 sp26;

	switch(o->oAction)
	{
		case 0:
			if(is_point_within_radius_of_mario(o->oPosX, o->oPosY, o->oPosZ, 1000))
			{
				o->oVelY   = 40.0f;
				o->oAction = 1;
			}
			break;

		case 1:
			sp26 = object_step();
			func_802F2F8C(sp26);
			spawn_object(o, MODEL_NONE, sm64::bhv::bhvSparkleSpawn());
			break;

		case 2:
			sp26 = object_step();
			bhv_1up_interact();
			obj_flicker_and_disappear(o, 30);
			break;
	}

	set_object_visibility(o, 3000);
}

void bhv_1up_hidden_loop(void)
{
	s16 sp26;
	switch(o->oAction)
	{
		case 0:
			o->header.gfx.node.flags |= 0x10;
			if(o->o1UpHiddenUnkF4 == o->oBehParams2ndByte)
			{
				o->oVelY   = 40.0f;
				o->oAction = 3;
				o->header.gfx.node.flags &= ~0x10;
				play_sound(SOUND_GENERAL2_1UP_APPEAR, gDefaultSoundArgs);
			}
			break;

		case 1:
			sp26 = object_step();
			func_802F2F8C(sp26);
			spawn_object(o, MODEL_NONE, sm64::bhv::bhvSparkleSpawn());
			break;

		case 2:
			sp26 = object_step();
			bhv_1up_interact();
			obj_flicker_and_disappear(o, 30);
			break;

		case 3:
			sp26 = object_step();
			if(o->oTimer >= 18 * FRAME_RATE_SCALER_INV)
				spawn_object(o, MODEL_NONE, sm64::bhv::bhvSparkleSpawn());

			func_802F2D40();

			if(o->oTimer == 37 * FRAME_RATE_SCALER_INV)
			{
				obj_become_tangible();
				o->oAction     = 1;
				o->oForwardVel = 8.0f;
			}
			break;
	}
}

void bhv_1up_hidden_trigger_loop(void)
{
	struct Object* sp1C;
	if(are_objects_collided(o, gMarioObject) == 1)
	{
		sp1C = obj_nearest_object_with_behavior(sm64::bhv::bhvHidden1up());
		if(sp1C != NULL)
			sp1C->o1UpHiddenUnkF4++;

		o->activeFlags = 0;
	}
}

void bhv_1up_hidden_in_pole_loop(void)
{
	UNUSED s16 sp26;
	switch(o->oAction)
	{
		case 0:
			o->header.gfx.node.flags |= 0x10;
			if(o->o1UpHiddenUnkF4 == o->oBehParams2ndByte)
			{
				o->oVelY   = 40.0f;
				o->oAction = 3;
				o->header.gfx.node.flags &= ~0x10;
				play_sound(SOUND_GENERAL2_1UP_APPEAR, gDefaultSoundArgs);
			}
			break;

		case 1:
			func_802F2E18();
			sp26 = object_step();
			break;

		case 3:
			sp26 = object_step();
			if(o->oTimer >= 18 * FRAME_RATE_SCALER_INV)
				spawn_object(o, MODEL_NONE, sm64::bhv::bhvSparkleSpawn());

			func_802F2D40();

			if(o->oTimer == 37 * FRAME_RATE_SCALER_INV)
			{
				obj_become_tangible();
				o->oAction     = 1;
				o->oForwardVel = 10.0f;
			}
			break;
	}
}

void bhv_1up_hidden_in_pole_trigger_loop(void)
{
	struct Object* sp1C;

	if(are_objects_collided(o, gMarioObject) == 1)
	{
		sp1C = obj_nearest_object_with_behavior(sm64::bhv::bhvHidden1upInPole());
		if(sp1C != NULL)
		{
			sp1C->o1UpHiddenUnkF4++;
			;
		}

		o->activeFlags = 0;
	}
}

void bhv_1up_hidden_in_pole_spawner_loop(void)
{
	s8 sp2F;

	if(is_point_within_radius_of_mario(o->oPosX, o->oPosY, o->oPosZ, 700))
	{
		spawn_object_relative(2, 0, 50, 0, o, MODEL_1UP, sm64::bhv::bhvHidden1upInPole());
		for(sp2F = 0; sp2F < 2; sp2F++)
		{
			spawn_object_relative(0, 0, sp2F * -200, 0, o, MODEL_NONE, sm64::bhv::bhvHidden1upInPoleTrigger());
		}

		o->activeFlags = 0;
	}
}
