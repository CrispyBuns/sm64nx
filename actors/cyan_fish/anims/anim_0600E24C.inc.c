// 0x0600E098
static const s16 cyan_fish_seg6_animvalue_0600E098[] = {
	 0x0000, -0x0005, -0x0003, -0x0001,  0x0001,  0x0003,  0x0005,  0x0007, 
	 0x0009,  0x000a,  0x000b,  0x000b,  0x000b,  0x000a,  0x0009,  0x0007, 
	 0x0005,  0x0003,  0x0001, -0x0001, -0x0003, -0x0005, -0x0006, -0x0008, 
	-0x0009, -0x0009, -0x0009, -0x0008, -0x0007, -0x0005, -0x0003,  0x3fff, 
	 0x017a,  0x01c2,  0x01f0,  0x0201,  0x01f2,  0x01c9,  0x018a,  0x0139, 
	 0x00d9,  0x0070,  0x0000, -0x0071, -0x00e0, -0x014a, -0x01aa, -0x01fb, 
	-0x023a, -0x0263, -0x0271, -0x0263, -0x023a, -0x01fb, -0x01aa, -0x014a, 
	-0x00e0, -0x0071,  0x0000,  0x0070,  0x00d9,  0x0139, -0x03ca, -0x046d, 
	-0x04d7, -0x04fd, -0x04dc, -0x047e, -0x03ee, -0x0334, -0x025a, -0x0169, 
	-0x006a,  0x0099,  0x0199,  0x028a,  0x0364,  0x041e,  0x04ae,  0x050c, 
	 0x052d,  0x050c,  0x04ae,  0x041e,  0x0364,  0x028a,  0x0199,  0x0099, 
	-0x006a, -0x0169, -0x025a, -0x0334,  0x0b97,  0x0ba2,  0x0baa,  0x0bac, 
	 0x0baa,  0x0ba4,  0x0b99,  0x0b8d,  0x0b7d,  0x0b6c,  0x0b5b,  0x0b49, 
	 0x0b37,  0x0b26,  0x0b17,  0x0b0a,  0x0b00,  0x0af9,  0x0af7,  0x0af9, 
	 0x0b00,  0x0b0a,  0x0b17,  0x0b26,  0x0b37,  0x0b49,  0x0b5b,  0x0b6c, 
	 0x0b7d,  0x0b8d,  0x00a8,  0x02c3,  0x04cd,  0x06b5,  0x086b,  0x09dd, 
	 0x0afa,  0x0bb1,  0x0bf2,  0x0b9e,  0x0ab2,  0x0948,  0x0778,  0x055d, 
	 0x030f,  0x00a8, -0x01be, -0x040c, -0x0627, -0x07f7, -0x0961, -0x0a4d, 
	-0x0aa1, -0x0a57, -0x0988, -0x0848, -0x06ab, -0x04c7, -0x02ae, -0x0078, 
	 0x04b8,  0x0492,  0x0429,  0x0387,  0x02b8,  0x01c7,  0x00c0, -0x0052, 
	-0x0165, -0x026c, -0x035d, -0x042c, -0x04ce, -0x0537, -0x055d, -0x053c, 
	-0x04df, -0x0450, -0x0398, -0x02c0, -0x01d0, -0x00d3,  0x002e,  0x012b, 
	 0x021a,  0x02f3,  0x03ab,  0x043a,  0x0497,  0x04b8, 
};

// 0x0600E204
static const u16 cyan_fish_seg6_animindex_0600E204[] = {
    0x001E, 0x0001, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x001F, 0x0001, 0x0000,
    0x0001, 0x0000, 0x001E, 0x0098, 0x0001, 0x0000,
    0x0001, 0x0000, 0x001E, 0x007A, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x001E, 0x0020, 0x001E, 0x003E, 0x001E, 0x005C,
};

// 0x0600E24C
static const struct Animation cyan_fish_seg6_anim_0600E24C = {
	Animation::Flags::NONE,
    0,
    0,
    0,
    0x1E,
    ANIMINDEX_NUMPARTS(cyan_fish_seg6_animindex_0600E204),
    cyan_fish_seg6_animvalue_0600E098,
    cyan_fish_seg6_animindex_0600E204,
    0,
};
