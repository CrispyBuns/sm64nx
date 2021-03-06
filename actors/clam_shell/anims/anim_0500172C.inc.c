// 0x0500166C
static const s16 clam_shell_seg5_animvalue_0500166C[] = {
	 0x0000,  0x3fff,  0x7e13,  0x7dfa,  0x7db2,  0x7d3c,  0x7c99,  0x7bcc, 
	 0x7ad5,  0x79b7,  0x7874,  0x770c,  0x7582,  0x73d8,  0x720e,  0x7027, 
	 0x6e24,  0x6c08,  0x69d3,  0x6787,  0x6527,  0x62b3,  0x602e,  0x5d98, 
	 0x5af5,  0x5845,  0x558a,  0x52c6,  0x4ffa,  0x4d28,  0x4a52,  0x477a, 
	 0x44a1,  0x41c9,  0x3ef3,  0x3c21,  0x3955,  0x3691,  0x33d6,  0x3126, 
	 0x2e83,  0x2bed,  0x2968,  0x26f4,  0x2494,  0x2248,  0x2013,  0x1df7, 
	 0x1bf4,  0x1a0d,  0x1843,  0x1699,  0x150f,  0x13a7,  0x1264,  0x1146, 
	 0x104f,  0x0f82,  0x0edf,  0x0e69,  0x0e21,  0x0e08, -0x7fff, -0x7fff, 
	-0x7fff,  0x0000, 
};

// 0x050016F0
static const u16 clam_shell_seg5_animindex_050016F0[] = {
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0040,
    0x0001, 0x003E, 0x0001, 0x003F, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x003C, 0x0002,
};

// 0x0500172C
static const struct Animation clam_shell_seg5_anim_0500172C = {
    1,
    0,
    0,
    0,
    0x3C,
    ANIMINDEX_NUMPARTS(clam_shell_seg5_animindex_050016F0),
    clam_shell_seg5_animvalue_0500166C,
    clam_shell_seg5_animindex_050016F0,
    0,
};
