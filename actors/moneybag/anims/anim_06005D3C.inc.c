// 0x06005CB0
static const s16 moneybag_seg6_animvalue_06005CB0[] = {
	 0x0000,  0x00e9,  0x00de,  0x00d0, -0x00e6,  0x3fff,  0x3b84,  0x3fff, 
	 0x56cc,  0x58bf,  0x5ad8,  0x0f8b, -0x03db, -0x16c5,  0x0e14, -0x05fe, 
	-0x1883, -0x7fff, -0x7fff,  0x56cc,  0x58bf,  0x5ad8, 
};

// 0x06005CDC
static const u16 moneybag_seg6_animindex_06005CDC[] = {
    0x0001, 0x0000, 0x0003, 0x0001, 0x0001, 0x0004, 0x0001, 0x0005, 0x0001, 0x0006, 0x0001, 0x0007,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0003, 0x0013,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0012,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0003, 0x000B,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0011,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0003, 0x000E,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0003, 0x0008,
};

// 0x06005D3C
static const struct Animation moneybag_seg6_anim_06005D3C = {
	Animation::Flags::NONE,
    0,
    0,
    0,
    0x03,
    ANIMINDEX_NUMPARTS(moneybag_seg6_animindex_06005CDC),
    moneybag_seg6_animvalue_06005CB0,
    moneybag_seg6_animindex_06005CDC,
    0,
};