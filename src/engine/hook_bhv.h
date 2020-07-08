#pragma once
#include "sm64.h"

namespace sm64::hook::bhv
{
	enum class Id : u64
	{
		NONE = 0,
		bhvStarDoor = 0xe184db96687e21f9,
		bhvMrI = 0x1f64dd987ac140d6,
		bhvMrIBody = 0xe6fe7df0e6bed214,
		bhvMrIParticle = 0xf95b0d66d9cbc9b8,
		bhvPurpleParticle = 0x051f39159021f65f,
		bhvGiantPole = 0x0dc8d6cdfb6b46d5,
		bhvPoleGrabbing = 0x04e2a9de9722e24d,
		bhvThiHugeIslandTop = 0xc2e8ed275a5bc89c,
		bhvThiTinyIslandTop = 0x6ec11627292775c6,
		bhvCapSwitchBase = 0x747c191cd5682b67,
		bhvCapSwitch = 0x8f7b97658d8eb909,
		bhvKingBobomb = 0x3307dcbfc407defa,
		bhvBobombAnchorMario = 0x1ccb09a1108a2d4c,
		bhvBetaChestBottom = 0xcbfcc92ce881b6ce,
		bhvBetaChestLid = 0xa78f8b5a6f14b09c,
		bhvBubbleMario = 0x1f473a612f146ffb,
		bhvBubbleMaybe = 0xeed67d96e88ab5d2,
		bhvSmallWaterWave = 0x4db89afc20a20611,
		bhvSmallWaterWave398 = 0x411bcf6cdcfb28bc,
		bhvWaterAirBubble = 0x8e35455dccc615f3,
		bhvSmallParticle = 0x2c504ffd0096a961,
		bhvWaterWaves = 0x449ca911798d55fe,
		bhvSmallParticleSnow = 0xed038ba10eaeb0f8,
		bhvSmallParticleBubbles = 0x42072da321b834c4,
		bhvFishGroup = 0x955135cc34d222a3,
		bhvCannon = 0x853c9ccb941fc65a,
		bhvCannonBarrel = 0x998618009e537dba,
		bhvCannonBaseUnused = 0x7473db8ff545d61d,
		bhvChuckya = 0xbd16f4e39a00633a,
		bhvChuckyaAnchorMario = 0xadf6e152eba4b4c2,
		bhvUnused05A8 = 0x2943a83492fbcfe7,
		bhvRotatingPlatform = 0xf970700556babbb9,
		bhvTower = 0x4369f06ef20bb195,
		bhvBulletBillCannon = 0x54d4c5a6a9e9d994,
		bhvWfBreakableWallRight = 0x5967ade3a533abed,
		bhvWfBreakableWallLeft = 0xfaa138e2d53037e4,
		bhvKickableBoard = 0x284beb292158ab48,
		bhvTowerDoor = 0x1f8400fea62caaa7,
		bhvRotatingCounterClockwise = 0x764822ddac298deb,
		bhvWfRotatingWoodenPlatform = 0x1a4a57aa535d2c90,
		bhvKoopaShellUnderwater = 0xee7423ca376e45d7,
		bhvExitPodiumWarp = 0x5b6d3bc6228c1dca,
		bhvFadingWarp = 0x3e0ef5cf91224239,
		bhvWarp = 0xde7849432ae7d8e5,
		bhvWarpPipe = 0x5850e83cc04d758c,
		bhvWhitePuffExplosion = 0xb918c767b01e4a5a,
		bhvSpawnedStar = 0x593538f6b9b3ac04,
		bhvSpawnedStarNoLevelExit = 0x3a85ce827736954e,
		bhvMrIBlueCoin = 0xb6e90dbaa6d5149a,
		bhvCoinInsideBoo = 0xf6944f915a92f076,
		bhvCoinFormationSpawn = 0xe1a2d6f90cf42da2,
		bhvCoinFormation = 0x9354bc370948e1fb,
		bhvOneCoin = 0x81750bf83ba85acc,
		bhvYellowCoin = 0x6491def6dbf92277,
		bhvTemporaryYellowCoin = 0x35c84c809a7e70ac,
		bhvThreeCoinsSpawn = 0x657c4e5f37900604,
		bhvTenCoinsSpawn = 0x0651bc7770e889ee,
		bhvSingleCoinGetsSpawned = 0xea72f8f971030838,
		bhvCoinSparkles = 0x4c83e9d43db04e14,
		bhvGoldenCoinSparkles = 0x6909bfeb523e0e8e,
		bhvWallTinyStarParticle = 0x3504e600a6b1ec1d,
		bhvWallTinyStarParticleSpawn = 0xf56616dde5e668e1,
		bhvPoundTinyStarParticle = 0xd4eced65cdf27b85,
		bhvPoundTinyStarParticleSpawn = 0x8186760399f0a5da,
		bhvPunchTinyTriangle = 0x05ab177f57e18d32,
		bhvPunchTinyTriangleSpawn = 0xe1e80935a53f7219,
		bhvDoorWarp = 0x9d9fbd53e5800e87,
		bhvDoor = 0x5210bcf82e80aa9a,
		bhvGrindel = 0x3d435566a1cce563,
		bhvThwomp2 = 0x4801b058c8c738db,
		bhvThwomp = 0xbecd300b748d68c1,
		bhvTumblingBridgePlatform = 0xb05d8955afd0cae1,
		bhvWfTumblingBridge = 0x33baab8df376a3b4,
		bhvBbhTumblingBridge = 0x0ef9875967936ae1,
		bhvLllTumblingBridge = 0x799bb636f72257ee,
		bhvFlame = 0x36a39e760f9e1b95,
		bhvAnotherElavator = 0x836c26f134c1dede,
		bhvRrElevatorPlatform = 0x19e5539fefafdc92,
		bhvHmcElevatorPlatform = 0xd67c891b45bf5553,
		bhvWaterMist = 0x1b88715f18fd3cb4,
		bhvWaterMistSpawn = 0x742dab0d6093da42,
		bhvBreakBoxTriangle = 0x4406ebd2ea4c0656,
		bhvWaterMist2 = 0xcaa3b57ace1c1ef6,
		bhvUnused0DFC = 0x37e72e106ccfce52,
		bhvPoundWhitePuffs = 0x33c7769eb054cd35,
		bhvGroundSand = 0x6cf5d038e5292b66,
		bhvGroundSnow = 0x6d324c79546ec337,
		bhvWind = 0x399be2806c2ad23d,
		bhvEndToad = 0xf2a27296d5285873,
		bhvEndPeach = 0x1075d0201218befc,
		bhvUnusedParticleSpawn = 0x84770f6c7447547c,
		bhvUkiki = 0xd56c45c9a2b44792,
		bhvUkikiCageChild = 0x3a9544e3e2281ce1,
		bhvUkikiCageStar = 0xa405e41231a61898,
		bhvUkikiCage = 0x359d02447ff2729b,
		bhvBitfsSinkingPlatforms = 0xacc4f9b63511d48c,
		bhvBitfsSinkingCagePlatform = 0x0a090769a3eba1b7,
		bhvDddMovingPole = 0x3f3fe12ea58594e3,
		bhvBitfsTiltingInvertedPyramid = 0xae4e55dad0511ccf,
		bhvSquishablePlatform = 0x2ea42db7425dedc9,
		bhvCutOutObject = 0xf249972db13a1bf3,
		bhvBetaMovingFlamesSpawn = 0xf38fcc0b7a4db07f,
		bhvBetaMovingFlames = 0x745ada811bb2aa22,
		bhvRrRotatingBridgePlatform = 0x3a69e2acf7508b05,
		bhvFlamethrower = 0x9830e179511eb83d,
		bhvFlamethrowerFlame = 0xcee9c1934caa4eb4,
		bhvBouncingFireball = 0x0ab0b8cf4da3b75c,
		bhvBouncingFireballFlame = 0x2e7a70f076d66cd8,
		bhvBouncingFireballFlame2 = 0x7ba69f722019f88d,
		bhvBowserShockWave = 0xcd8a8ffa5cdafefb,
		bhvFlameMario = 0x09ef75c9968f04f8,
		bhvBlackSmokeMario = 0x9bfd1854b0edca30,
		bhvBlackSmokeBowser = 0x699e97e877c02844,
		bhvBlackSmokeUpward = 0xfae5beba4cac0309,
		bhvBetaFishSplashSpawner = 0x9ffd754518bce4a7,
		bhvSpindrift = 0x9e040de311d96911,
		bhvTowerPlatformGroup = 0xe42967266e4b4515,
		bhvWfSlidingTowerPlatform = 0x290c8d5a2d2c0483,
		bhvWfElevatorTowerPlatform = 0x3f707818ee862053,
		bhvWfSolidTowerPlatform = 0x07bfeb1c4c102308,
		bhvSnowLeafParticleSpawn = 0x4b633e7d94f9f10f,
		bhvTreeSnow = 0x60a5c837564a7467,
		bhvTreeLeaf = 0xb3cf6951c7ca957b,
		bhvAnotherTiltingPlatform = 0x079bcfb5ac4c4c0c,
		bhvSquarishPathMoving = 0xd9574d3f029285ad,
		bhvPiranhaPlantBubble = 0x5be21fc101edde1d,
		bhvPiranhaPlantWakingBubbles = 0x24938c29bfe8cc97,
		bhvFloorSwitchAnimatesObject = 0xee5e46a6d4038a5d,
		bhvFloorSwitchGrills = 0x93b1741edb2077f5,
		bhvFloorSwitchHardcodedModel = 0x66e746f9317b4e31,
		bhvFloorSwitchHiddenObjects = 0xfeb2a058cf4d9b6a,
		bhvHiddenObject = 0x9502d11522ada2d7,
		bhvBreakableBox = 0xe2336575e9ebf895,
		bhvPushableMetalBox = 0x8acb16b505235b70,
		bhvHeaveHo = 0x099d8092e70764ee,
		bhvHeaveHoThrowMario = 0xf498d28c19ef042b,
		bhvCcmTouchedStarSpawn = 0x7fe22d9564f98f57,
		bhvUnusedPoundablePlatform = 0xfeff19173a473d9c,
		bhvBetaTrampolineTop = 0x7e2b88126d9cb0a6,
		bhvBetaTrampolineSpring = 0x562a15eaf7746d98,
		bhvJumpingBox = 0xe34d688dc0a7c66b,
		bhvBooCage = 0xfca9625cc224b0b7,
		bhvStub = 0xe1c3bf2fa363f968,
		bhvIgloo = 0x9cc2ef6635a7e51a,
		bhvBowserKey = 0xc41024b6dc15e215,
		bhvGrandStar = 0x814b2521dfa8ed31,
		bhvBetaBooKey = 0x0db252ee9093ceac,
		bhvAlphaBooKey = 0xb45042773ef6ed78,
		bhvBulletBill = 0x0f35d6ac70eff9e8,
		bhvWhitePuffSmoke = 0xdfee9298fa1b314d,
		bhvUnused1820 = 0x1894349e653697a1,
		bhvBowserTailAnchor = 0xb982601619bed45c,
		bhvBowser = 0xc8569d1773682c96,
		bhvBowserBodyAnchor = 0xde74c584248ce2ed,
		bhvBowserFlameSpawn = 0xe2090cbca7258258,
		bhvTiltingBowserLavaPlatform = 0x20d434944b631091,
		bhvFallingBowserPlatform = 0xbe4ff14a22d411de,
		bhvBlueBowserFlame = 0x703d241017949df9,
		bhvFlameFloatingLanding = 0xa7ab26e21d2b723e,
		bhvBlueFlamesGroup = 0xb817bc3268746b14,
		bhvFlameBouncing = 0x5ccfda10ea1339be,
		bhvFlameMovingForwardGrowing = 0x701a3679cdae2601,
		bhvFlameBowser = 0xcb96f6721ced0615,
		bhvFlameLargeBurningOut = 0x38359e5aeadb0645,
		bhvBlueFish = 0x281d1fb0f73ae726,
		bhvTankFishGroup = 0xe7b4d8d496481564,
		bhvCheckerboardElevatorGroup = 0x77e8a5124e6aaae8,
		bhvCheckerboardPlatformSub = 0x6caeb4aa2102a654,
		bhvBowserKeyUnlockDoor = 0xe6a97cd4a29baf40,
		bhvBowserKeyCourseExit = 0xef3d8ad4cade436f,
		bhvInvisibleObjectsUnderBridge = 0xa62e55c635ff50a0,
		bhvWaterLevelPillar = 0xdc1844787ad8366b,
		bhvDddWarp = 0x322b75ff4632a406,
		bhvMoatGrills = 0xb6d9689c7d6cc466,
		bhvClockMinuteHand = 0x9013993b07fa4e69,
		bhvClockHourHand = 0x44a33eaffdfecb25,
		bhvMacroUkiki = 0xd391a13cda240df8,
		bhvStub1D0C = 0x290dc852d2b1dbf5,
		bhvLllRotatingHexagonalPlatform = 0xb87edc85fed493df,
		bhvLllSinkingRockBlock = 0x179e690bad6dc578,
		bhvStub1D70 = 0x577ff08999b8251f,
		bhvLllMovingOctagonalMeshPlatform = 0x7e14617b92697d54,
		bhvSnowBall = 0x001ab1f322e54498,
		bhvLllRotatingBlockWithFireBars = 0xab540ec964e65d2b,
		bhvLllRotatingHexFlame = 0x2707a4843a39510c,
		bhvLllWoodPiece = 0x7b0ce7e76b155c2c,
		bhvLllFloatingWoodBridge = 0xeab9d96cbab5eb6d,
		bhvVolcanoFlames = 0x2206bd74e93634b3,
		bhvLllRotatingHexagonalRing = 0x0c13c029b3b09ed5,
		bhvLllSinkingRectangularPlatform = 0x240edbc62d443569,
		bhvLllSinkingSquarePlatforms = 0x9fdf5ec8cb59a446,
		bhvLllTiltingInvertedPyramid = 0x27f1b70ecbe33aab,
		bhvUnused1F30 = 0x1dbb1e9223784e87,
		bhvKoopaShell = 0x026fa7956265c2fb,
		bhvKoopaShellFlame = 0x75a6271a96707c82,
		bhvToxBox = 0x71bc96037215a6a8,
		bhvPiranhaPlant = 0x8a9acb7ed3e80cbd,
		bhvLllHexagonalMesh = 0x2b2d6e0ec13123e7,
		bhvLllBowserPuzzlePiece = 0xa6c30a3839adaf24,
		bhvLllBowserPuzzle = 0x368c559f14deb2c6,
		bhvTuxiesMother = 0xe13db3eaa085fd79,
		bhvPenguinBaby = 0x9444c2d1950347cc,
		bhvUnused20E0 = 0x28a69c2b51451dd1,
		bhvSmallPenguin = 0x73ee5c9cef275d2a,
		bhvFish2 = 0x3f597f3cf4d5984c,
		bhvFish3 = 0x874dec68ccfe3fe3,
		bhvLargeFishGroup = 0x78da99238b9a6836,
		bhvFishGroup2 = 0x1cfbb079cfc49c5b,
		bhvWdwExpressElevator = 0x77383676dca6f1b0,
		bhvWdwExpressElevatorPlatform = 0x963afcd349364389,
		bhvChirpChirp = 0x5b552275aa27b98c,
		bhvChirpChirpUnused = 0x77939774bf3d0bfe,
		bhvBub = 0x74cf962068d8542f,
		bhvExclamationBox = 0xbf2f67188c770842,
		bhvRotatingExclamationMark = 0xdff4c9039ab7be5c,
		bhvSoundSpawner = 0xaef88b490530f86c,
		bhvRockSolid = 0x6d2aee33b6747c3c,
		bhvBowserSubDoor = 0xee07bc8c9655d0b1,
		bhvBowsersSub = 0xb0965e34d24d5fe1,
		bhvSushiShark = 0x13575f676345129b,
		bhvSushiSharkCollisionChild = 0x061b226a1be5bc19,
		bhvJrbSlidingBox = 0xc44186bc08194526,
		bhvShipPart3 = 0xc517faea69816bd6,
		bhvInSunkenShip3 = 0x221e478992cf83ce,
		bhvSunkenShipPart = 0xe36866228babd55a,
		bhvSunkenShipSetRotation = 0x5465cb1b0c0fc2c4,
		bhvSunkenShipPart2 = 0x1cc902a9d2fd4db7,
		bhvInSunkenShip = 0x0027f4153b178d9a,
		bhvInSunkenShip2 = 0x1b90a5adb1f1be7e,
		bhvMarioDustGenerator = 0x3f2c6c6c7c940027,
		bhvWhitePuff1 = 0xacc557b9d57a1daa,
		bhvWhitePuff2 = 0x45e00840ea114121,
		bhvWhitePuffSmoke2 = 0xb1be683afc4943cf,
		bhvPurpleSwitchHiddenBoxes = 0x332e1b02a38565d2,
		bhvBlueCoinSwitch = 0xf4d5802e19e40005,
		bhvHiddenBlueCoin = 0xf3d431833dedef12,
		bhvOpenableCageDoor = 0x5bd4da7315e284b7,
		bhvOpenableGrill = 0x337c21a45f3c0643,
		bhvWaterLevelDiamond = 0x77c28ee8ec6b5f71,
		bhvInitializeChangingWaterLevel = 0x84172917d1c706e4,
		bhvTornadoSandParticle = 0xf4261bce04766779,
		bhvTornado = 0x4e9fa947f9afb6bc,
		bhvMerryGoRoundBooManager = 0x2f65f9d3a03da9f1,
		bhvAnimatedTexture = 0x2f1adbf1635d2867,
		bhvBooInCastle = 0x4f6aee611a5abe87,
		bhvBooWithCage = 0x344994863c248847,
		bhvBalconyBigBoo = 0x3de6573c1eca07d1,
		bhvMerryGoRoundBigBoo = 0x4a3116375307d776,
		bhvGhostHuntBigBoo = 0xbeeafe850fcd97c8,
		bhvCourtyardBooTriplet = 0x4d73741aa68b8e90,
		bhvBoo = 0x9af38a32e6a84422,
		bhvMerryGoRoundBoo = 0x2e4e91075ad8fa60,
		bhvGhostHuntBoo = 0x119265d71a82eb26,
		bhvHiddenStaircaseStep = 0x608c861e798a561c,
		bhvBooBossSpawnedBridge = 0x77ae84b30c64c83f,
		bhvBbhTiltingTrapPlatform = 0x7f332183b06adf44,
		bhvHauntedBookshelf = 0x88140013f237505c,
		bhvMeshElevator = 0x172b4c8d57364d9f,
		bhvMerryGoRound = 0xc365a3b82f79dba9,
		bhvPlaysMusicTrackWhenTouched = 0x11e58a99332fac35,
		bhvInsideCannon = 0x9a9f0c78880bc2d7,
		bhvBetaBowserAnchor = 0x32f0ef80560ee282,
		bhvStaticCheckeredPlatform = 0x30efe32049a8f437,
		bhvUnused2A10 = 0x025fc308bc36a566,
		bhvUnusedFakeStar = 0xe507a3492a2d720a,
		bhvStaticObject = 0x1a07a0f10b895b87,
		bhvUnused2A54 = 0x05369cdaa70ac49e,
		bhvCastleFloorTrap = 0xc01181f59d3e7e53,
		bhvFloorTrapInCastle = 0x42c252b5bae925ce,
		bhvTree = 0x2053eadaf576cc3c,
		bhvSparkle = 0x8c223a829088b9c7,
		bhvSparkleSpawn = 0xce31132c06c3938e,
		bhvSpecialTripleJumpSparkles = 0x6250ed1261e43032,
		bhvScuttlebug = 0x4b06dfcd56e507a9,
		bhvScuttlebugSpawn = 0x0cc967756e4bd510,
		bhvWhompKingBoss = 0x36fb9702625d6ae8,
		bhvSmallWhomp = 0x4c5fdf4c1af061f9,
		bhvWaterSplash = 0x4dd0ca5c55dbfe27,
		bhvWaterDrops = 0x671dcf4ea0564b32,
		bhvWaterSurfaceWhiteWave = 0x1ce7a0329c12a9bc,
		bhvObjectBubbleRipples = 0x1c64563639806e56,
		bhvSurfaceWaves = 0x1d2f32629ed9f6b0,
		bhvWaterSurfaceWhiteWave2 = 0xc3f6b8f492e7a140,
		bhvWavesGenerator = 0x0823e9df9e3347a4,
		bhvSurfaceWaveShrinking = 0xc7d95b38f09be867,
		bhvWaterType = 0xaa0b4cc3252d411e,
		bhvWaveTrailOnSurface = 0xa2ac5f74520742fa,
		bhvTinyWhiteWindParticle = 0xc5e3ccb8c8192c47,
		bhvWindParticle = 0xc4f23c5a02ea25a5,
		bhvSnowmanWindBlowing = 0x74899ddebf22db9c,
		bhvWalkingPenguin = 0x3451263655793983,
		bhvYellowBall = 0xf590a85870e8699d,
		bhvMario = 0x55719b3d90def3d6,
		bhvToadMessage = 0xc61aefe85c43dcf0,
		bhvUnlockDoorStar = 0xd09be906a192c9e2,
		bhvWarps60 = 0x7a0678182f284b87,
		bhvWarps64 = 0x3cfad82c46b82d92,
		bhvWarps68 = 0xbf89f218d2e96a88,
		bhvWarps6C = 0x6b3274ebb92313a2,
		bhvWarps70 = 0xa47cf3cd8d348871,
		bhvWarps74 = 0x9af3fb46f480f505,
		bhvWarps78 = 0x27bd4d8649a93dd3,
		bhvWarps7C = 0xafa21569d5f7b061,
		bhvWarps80 = 0x35a33ce56005a883,
		bhvWarps84 = 0x6d433ccb3ffc0bc0,
		bhvWarps88 = 0x92460b7ec8507ec6,
		bhvWarps8C = 0x264a91b1c8fbdf8c,
		bhvWarps90 = 0x122acff9b44e9792,
		bhvWarps94 = 0x6d9f45494f32b565,
		bhvRandomAnimatedTexture = 0xf5857dc03da3e46e,
		bhvYellowBackgroundInMenu = 0x805b955310579567,
		bhvMenuButton = 0x4a11603843939582,
		bhvMenuButtonManager = 0xe25c6369e74d0617,
		bhvActSelectorStarType = 0xbbb60e8194528578,
		bhvActSelector = 0x4cb2cdab5394e3eb,
		bhvMovingYellowCoin = 0x2aefdecd77767ade,
		bhvMovingBlueCoin = 0x2986666ab87ad639,
		bhvBlueCoinSliding = 0xa56e183df7b1436c,
		bhvBlueCoinJumping = 0xe83732a583b83de7,
		bhvSeaweed = 0x8c342897aeb61ad6,
		bhvSeaweedBundle = 0xc895e8083e99b64c,
		bhvBobomb = 0xae793e77c5cfd593,
		bhvBobombFuseSmoke = 0xbb80d09ed290c729,
		bhvBobombBuddy = 0xbdf29a20b2e58f10,
		bhvBobombBuddyOpensCannon = 0xa37bcc0e3e14e624,
		bhvCannonClosed = 0xf1d6568293ed575b,
		bhvWhirlpool = 0x152a4513b9179a14,
		bhvJetStream = 0x3d68687e910663b6,
		bhvMessagePanel = 0x20d9c68cd941b6be,
		bhvSignOnWall = 0x2c084b6c9aea3596,
		bhvHomingAmp = 0xec5adbe32f42d7f5,
		bhvCirclingAmp = 0xdba3d216b84c2dcf,
		bhvButterfly = 0x28410d4328e0994e,
		bhvHoot = 0x48c39d644a7d0c55,
		bhvBetaHoldableObject = 0xfbb3e24983c3fdca,
		bhvCarrySomething1 = 0x7fc64882c723b0ff,
		bhvCarrySomething2 = 0x8fbcbc84a7eccb99,
		bhvCarrySomething3 = 0x168e7119eafbd592,
		bhvCarrySomething4 = 0x5058fa71272ce688,
		bhvCarrySomething5 = 0xc9bdee610aefcbb6,
		bhvCarrySomething6 = 0x9b66a97519529be3,
		bhvObjectBubble = 0x33468028d5d51306,
		bhvObjectWaterWave = 0xc08f2679a734424b,
		bhvExplosion = 0x8d39dda6715ff002,
		bhvBobombBullyDeathSmoke = 0xa12784a5d5dc0c40,
		bhvSmoke = 0x404a3fa5307ca562,
		bhvBobombExplosionBubble = 0xcb371ad600b1549c,
		bhvBobombExplosionBubble3600 = 0x7d68189981bb473a,
		bhvRespawner = 0x82b3bc5db05df70a,
		bhvSmallBully = 0x5c1d69a073f67469,
		bhvBigBully = 0x4fd4d16948ebe198,
		bhvBigBullyWithMinions = 0x12669fe53be200d5,
		bhvSmallChillBully = 0x6b75410f8165c013,
		bhvBigChillBully = 0x06942aa1b92f9c6c,
		bhvJetStreamRingSpawner = 0xcd2886f589bd08e0,
		bhvJetStreamWaterRing = 0x9c50cf9e8a2ac376,
		bhvMantaRayWaterRing = 0xc331f34245311fd2,
		bhvMantaRayRingManager = 0x952a4dcd7aa0f276,
		bhvBowserBomb = 0xd643e3589ea98b69,
		bhvBowserBombExplosion = 0x26b827e171e9ea64,
		bhvBowserBombSmoke = 0x235a6e8ed30dc2a2,
		bhvCelebrationStar = 0x4ad1cf6b524ac680,
		bhvCelebrationStarSparkle = 0xaa76e8f4a4c61dbb,
		bhvStarKeyCollectionPuffSpawner = 0x2284691fe0eac2a1,
		bhvLllDrawbridgeSpawner = 0xb1cfe58af4806ac6,
		bhvLllDrawbridge = 0x32aab9572e7533da,
		bhvSmallBomp = 0x9a6e2258075a2ee4,
		bhvLargeBomp = 0x9f3cf3207ab802e8,
		bhvWfSlidingPlatform = 0x657ab77f3b3e7119,
		bhvMoneybag = 0x3c91f8e233fb8fc5,
		bhvMoneybagHidden = 0x0fff8762d3c85bab,
		bhvPitBowlingBall = 0x3593981f505f0fa7,
		bhvFreeBowlingBall = 0x4449553556d2e50e,
		bhvBowlingBall = 0x57cc1b51c9790b17,
		bhvTtmBowlingBallSpawner = 0xe6bdb595f667d76f,
		bhvBobBowlingBallSpawner = 0xae62920a54f8f6f0,
		bhvThiBowlingBallSpawner = 0xf0382b3bc126e4c3,
		bhvRrCruiserWing = 0xc0f3821eba93e8af,
		bhvSpindel = 0xc989ce635b4a6460,
		bhvSslMovingPyramidWall = 0x437249bb7fc0f7d1,
		bhvPyramidElevator = 0x8de880934bd1d893,
		bhvPyramidElevatorTrajectoryMarkerBall = 0x06f19188a5854dbf,
		bhvPyramidTop = 0x209f8b96f2afa1dd,
		bhvPyramidTopFragment = 0xf7e5ffa799bf9039,
		bhvPyramidPillarTouchDetector = 0x18903f6b8f88d33a,
		bhvWaterfallSoundLoop = 0x7e001a5ae9391d65,
		bhvVolcanoSoundLoop = 0xd150bbec7683dd5b,
		bhvCastleFlagWaving = 0x23a1862485657630,
		bhvBirdsSoundLoop = 0xebc908d37c711997,
		bhvAmbientSounds = 0xc9a7e40f9a2c08e5,
		bhvSandSoundLoop = 0x235c2de4f1b125fe,
		bhvHiddenAt120Stars = 0x1bb6abad38cd6b70,
		bhvSnowmansBottom = 0x040ff000c8f28a3b,
		bhvSnowmansHead = 0x7f8850c1bbfc5d1e,
		bhvSnowmansBodyCheckpoint = 0x2af10ee0a86b4b26,
		bhvBigSnowmanWhole = 0xfdab2e9e65bcbc06,
		bhvBigBoulder = 0x739e688588aede23,
		bhvBigBoulderGenerator = 0xf85872a50760a3fe,
		bhvWingCap = 0x57955b8cee5889ca,
		bhvMetalCap = 0x5058bb2c3cf78fcb,
		bhvNormalCap = 0x253c3a263afcd275,
		bhvVanishCap = 0x5805abec513fddcd,
		bhvStar = 0x6d8554726f38dfdd,
		bhvStarSpawnCoordinates = 0x1fd6b670150e2cea,
		bhvHiddenRedCoinStar = 0x60e6a0deafca5a62,
		bhvRedCoin = 0x9783373ff6b2639a,
		bhvBowserCourseRedCoinStar = 0xefed91144f181360,
		bhvHiddenStar = 0x3046ded56d4dc58b,
		bhvHiddenStarTrigger = 0x9e884f0c8c4cb510,
		bhvTtmRollingLog = 0x471e2a989d69a4de,
		bhvLllVolcanoFallingTrap = 0xd8fbac34ac6a840f,
		bhvLllRollingLog = 0x0cc5e904b4369aa6,
		bhv1upWalking = 0x5a0bae660372fba9,
		bhv1upRunningAway = 0x77afc28a982bb5d6,
		bhv1upSliding = 0x55147bf0b1cd8f9e,
		bhv1Up = 0x7c1792863d4608fa,
		bhv1upJumpOnApproach = 0xd1d0db33b522d581,
		bhvHidden1up = 0x03ed62fde8de1d98,
		bhvHidden1upTrigger = 0x8075081771161ed0,
		bhvHidden1upInPole = 0x52d48ed620023f48,
		bhvHidden1upInPoleTrigger = 0xfdc715bdd155050d,
		bhvHidden1upInPoleSpawner = 0x50f05a2b1e791728,
		bhvControllablePlatform = 0xe1a6ae9a591f3da1,
		bhvControllablePlatformSub = 0x511a6d9e4546a1ad,
		bhvBreakableBoxSmall = 0xbdff16c9712a981c,
		bhvSlidingSnowMound = 0x01970870249f2fd1,
		bhvSnowMoundSpawn = 0xc8e7c08437260556,
		bhvWdwSquareFloatingPlatform = 0x35f69a5411d22d74,
		bhvWdwRectangularFloatingPlatform = 0x93284a016223dc87,
		bhvJrbFloatingPlatform = 0xab136cd135c833a8,
		bhvArrowLift = 0xc7538e325222b635,
		bhvOrangeNumber = 0x5bde826d1fe9cbeb,
		bhvMantaRay = 0x7e356d3b77df2fae,
		bhvFallingPillar = 0x7e76bfdfe1342ac6,
		bhvFallingPillarHitbox = 0x882f53616d7e6428,
		bhvPillarBase = 0x8126bd2268991e94,
		bhvJrbFloatingBox = 0x7bf2a34f3904b209,
		bhvDecorativePendulum = 0x67088039211b63e9,
		bhvTreasureChestsShip = 0x3aeaaec3d7ddfb54,
		bhvTreasureChestsJrb = 0x9d4009aab1db397c,
		bhvTreasureChests = 0x76a92e7723a0c137,
		bhvTreasureChestBottom = 0x41a85817ae018753,
		bhvTreasureChestTop = 0xf9749f780a9e60fc,
		bhvMips = 0x6960c74a0a32b244,
		bhvYoshi = 0x72a6c7873760f994,
		bhvKoopa = 0xca51a1e215377826,
		bhvKoopaRaceEndpoint = 0xd22c60042d996b98,
		bhvKoopaFlag = 0x618991d21364817c,
		bhvPokey = 0x74ef177ec84bf63c,
		bhvPokeyBodyPart = 0xc752cb7f73a51c80,
		bhvSwoop = 0xa9f415cf6f0d5752,
		bhvFlyGuy = 0x21173a1b57749e7a,
		bhvGoomba = 0xdcd228cfc94a4be3,
		bhvGoombaTripletSpawner = 0x0722f59bfc176441,
		bhvChainChomp = 0x8e952f33879d98ff,
		bhvChainChompChainPart = 0x52b069e228ff75bd,
		bhvWoodenPost = 0x3f22ea9973b2811b,
		bhvChainChompGate = 0xd417f626ccdaab0a,
		bhvWigglerHead = 0x77ef3e30af7eae4a,
		bhvWigglerBody = 0x00e8f5332c2050ae,
		bhvEnemyLakitu = 0x8f4e4a5226c60d6c,
		bhvCameraLakitu = 0x7ef4a0eb14294788,
		bhvCloud = 0x5901eb0c2ae9322c,
		bhvCloudPart = 0xa3349b00b25aa44d,
		bhvSpiny = 0xd5d8bbae2457caf7,
		bhvMontyMole = 0x70a49504f692e8c2,
		bhvMontyMoleHole = 0xfa9c57fae1df7cd9,
		bhvMontyMoleRock = 0xfb24c28415db20b5,
		bhvPlatformOnTrack = 0x32fc71e9fdbb3c65,
		bhvTrackBall = 0x8d2622b99c04dcac,
		bhvSeesawPlatform = 0x6014f2ae04b1c8c1,
		bhvFerrisWheelAxle = 0x53b9710200756248,
		bhvFerrisWheelPlatform = 0x9527424a48a58b06,
		bhvWaterBombSpawner = 0x2fdc595365c5e5a1,
		bhvWaterBomb = 0x263bc7c4bd9df0c9,
		bhvWaterBombShadow = 0x93540c9fc53781f3,
		bhvTTCRotatingSolid = 0x81286cba37c82054,
		bhvTTCPendulum = 0x34d81a634bc9a1f2,
		bhvTTCTreadmill = 0x7b2d5d2a9a0cc2a6,
		bhvTTCMovingBar = 0x9dc2e6f90d2bc157,
		bhvTTCCog = 0xe09930df80cda74c,
		bhvTTCPitBlock = 0x4e857895a670e2b9,
		bhvTTCElevator = 0x94bd7d655b827299,
		bhvTTC2DRotator = 0x4ed2bff3aef4bcfc,
		bhvTTCSpinner = 0x19b7701e434b1427,
		bhvMrBlizzard = 0xaf5045d4bdbfda6c,
		bhvMrBlizzardSnowball = 0x4dd2f7eada8fd7b9,
		bhvSlidingPlatform2 = 0x54300152008d0a47,
		bhvOctagonalPlatformRotating = 0xce41e792bdd6e584,
		bhvAnimatesOnFloorSwitchPress = 0x76b372ffef85e87a,
		bhvActivatedBackAndForthPlatform = 0xabf2d30bef2226fc,
		bhvRecoveryHeart = 0x1440c48d7bc12080,
		bhvWaterBombCannon = 0x54f49d680927e664,
		bhvCannonBarrelBubbles = 0x7cafb135f15ea595,
		bhvUnagi = 0x621006c20531c9cc,
		bhvUnagiSubobject = 0xa3862c5b94fa94bf,
		bhvDorrie = 0xf38043b185d76414,
		bhvHauntedChair = 0xa0b3cc999acd4f20,
		bhvMadPiano = 0xf54c8b829050ab01,
		bhvFlyingBookend = 0x7bbf2afc8f90b712,
		bhvBookendSpawn = 0x0f83954aac227d9a,
		bhvHauntedBookshelfManager = 0x22a1254f92f8de1f,
		bhvBookSwitch = 0x451b0a414f1c2faa,
		bhvFirePiranhaPlant = 0xbd6a79fc0d4357ce,
		bhvSmallPiranhaFlame = 0xc0a8d54b2a89bf97,
		bhvFireSpitter = 0x4e0d4894eaf5dcfe,
		bhvFlyguyFlame = 0x86ae4191b2c574e1,
		bhvSnufit = 0xb7901d25f1c7932b,
		bhvSnufitBalls = 0xd627b44e72807e6d,
		bhvHorizontalGrindel = 0xb0ca8a4bf6d5574a,
		bhvEyerokBoss = 0x8210642063b1472c,
		bhvEyerokHand = 0x08f3f1514bf35efa,
		bhvKlepto = 0x01f1ddec663bccec,
		bhvBird = 0x02d4470ba421a409,
		bhvRacingPenguin = 0xe7a6b755f93530fe,
		bhvPenguinRaceFinishLine = 0xe711d7be507cc359,
		bhvPenguinRaceShortcutCheck = 0x85b1fdd10d1efc8f,
		bhvCoffinManager = 0xfa7244eefc62835b,
		bhvCoffin = 0x2b400f50ad7c1c26,
		bhvClamShell = 0xd6aa5b30ffe11272,
		bhvSkeeter = 0x6175982efd9fe5fd,
		bhvSkeeterWave = 0x6ac4aba9eead33ed,
		bhvSwingPlatform = 0xe4f0b35b0cedb19b,
		bhvDonutPlatformSpawner = 0xd0f490d183c7ed86,
		bhvDonutPlatform = 0xc8e8ffb455e0fe8a,
		bhvDDDPole = 0x0259048dd5ef450c,
		bhvRedCoinStarMarker = 0x5cac001fd1952e86,
		bhvTripletButterfly = 0x5e862d8299dd9ddc,
		bhvBubba = 0xdde44753c5612f26,
		bhvBeginningLakitu = 0x50a9eccddf827814,
		bhvBeginningPeach = 0x1546aef52a665fcf,
		bhvEndBirds1 = 0x3ee6ed377bc7f7ed,
		bhvEndBirds2 = 0x7260721867c51319,
		bhvIntroScene = 0x871a2dac642eedcf,
		bhvShyGuy = 0x63ed29ab77a66b77
	};

	void reg(const BehaviorScript* bhv, u64 hash);
	const BehaviorScript* apply(const BehaviorScript* func, const Id id = Id::NONE);
	BhvCallback function(BhvCallback func);
	BehaviorScript* mount(BehaviorScript* func, u64 size);
}