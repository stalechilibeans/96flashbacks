/*i don't like this*/

Lights1 castle_inside_ceiling_lights = gdSPDefLights1(
	0x26, 0x26, 0x26,
	0x66, 0x66, 0x66, 0x28, 0x28, 0x28);

Lights1 castle_inside_ceiling_dark_lights = gdSPDefLights1(
	0x33, 0x33, 0x33,
	0x88, 0x88, 0x88, 0x28, 0x28, 0x28);

Lights1 castle_inside_upper_wall_darkest_lights = gdSPDefLights1(
	0x1F, 0x1F, 0x1F,
	0x55, 0x55, 0x55, 0x28, 0x28, 0x28);

Lights1 castle_inside_upper_wall_darker_lights = gdSPDefLights1(
	0x3F, 0x3F, 0x3F,
	0xAA, 0xAA, 0xAA, 0x28, 0x28, 0x28);

Lights1 castle_inside_upper_wall_dark_lights = gdSPDefLights1(
	0x4C, 0x4C, 0x4C,
	0xCC, 0xCC, 0xCC, 0x28, 0x28, 0x28);

Vtx castle_inside_4_dl_mesh_vtx_0[63] = {
	{{ {-869, 768, -1023}, 0, {4364, 478}, {0, 0, 127, 255} }},
	{{ {-869, 512, -1023}, 0, {4364, 990}, {0, 0, 127, 255} }},
	{{ {-511, 512, -1023}, 0, {5080, 990}, {0, 0, 127, 255} }},
	{{ {-511, 1024, -1023}, 0, {5080, 0}, {0, 0, 127, 255} }},
	{{ {-1177, 768, -1023}, 0, {3748, 478}, {0, 0, 127, 255} }},
	{{ {-1535, 1024, -1023}, 0, {3036, 0}, {0, 0, 127, 255} }},
	{{ {-1535, 512, -1023}, 0, {3036, 990}, {0, 0, 127, 255} }},
	{{ {-1177, 512, -1023}, 0, {3748, 990}, {0, 0, 127, 255} }},
	{{ {-511, 1024, -1023}, 0, {5080, 0}, {90, 0, 90, 255} }},
	{{ {-511, 512, -1023}, 0, {5080, 990}, {90, 0, 90, 255} }},
	{{ {102, 1024, -1637}, 0, {6304, 0}, {90, 0, 90, 255} }},
	{{ {102, 614, -1637}, 0, {6304, 786}, {90, 0, 90, 255} }},
	{{ {102, 1024, -1637}, 0, {6304, 0}, {0, 0, 127, 255} }},
	{{ {410, 614, -1637}, 0, {6916, 786}, {0, 0, 127, 255} }},
	{{ {410, 1024, -1637}, 0, {6916, 0}, {0, 0, 127, 255} }},
	{{ {102, 614, -1637}, 0, {6304, 786}, {0, 0, 127, 255} }},
	{{ {410, 614, -1637}, 0, {6916, 786}, {166, 0, 90, 255} }},
	{{ {553, 614, -1494}, 0, {7204, 786}, {166, 0, 90, 255} }},
	{{ {553, 870, -1494}, 0, {7204, 274}, {166, 0, 90, 255} }},
	{{ {410, 1024, -1637}, 0, {6916, 0}, {166, 0, 90, 255} }},
	{{ {1024, 1024, -1023}, 0, {8144, 0}, {166, 0, 90, 255} }},
	{{ {662, 870, -1385}, 0, {7420, 274}, {166, 0, 90, 255} }},
	{{ {662, 614, -1385}, 0, {7420, 786}, {166, 0, 90, 255} }},
	{{ {1024, 512, -1023}, 0, {8144, 990}, {166, 0, 90, 255} }},
	{{ {819, 512, -1228}, 0, {7736, 990}, {166, 0, 90, 255} }},
	{{ {1024, 512, -1023}, 0, {0, 990}, {129, 0, 0, 255} }},
	{{ {1024, 512, 0}, 0, {2012, 990}, {129, 0, 0, 255} }},
	{{ {1024, 1024, 0}, 0, {2012, 0}, {129, 0, 0, 255} }},
	{{ {1024, 1024, -1023}, 0, {0, 0}, {129, 0, 0, 255} }},
	{{ {1024, 1024, 0}, 0, {-2076, 0}, {166, 0, 166, 255} }},
	{{ {1024, 512, 0}, 0, {-2076, 990}, {166, 0, 166, 255} }},
	{{ {-511, 512, 1536}, 0, {2012, 990}, {166, 0, 166, 255} }},
	{{ {1024, 1024, 0}, 0, {-2076, 0}, {166, 0, 166, 255} }},
	{{ {-511, 512, 1536}, 0, {2012, 990}, {166, 0, 166, 255} }},
	{{ {-511, 1024, 1536}, 0, {2012, 0}, {166, 0, 166, 255} }},
	{{ {-511, 512, 1536}, 0, {0, 990}, {0, 0, 129, 255} }},
	{{ {-784, 512, 1536}, 0, {512, 990}, {0, 0, 129, 255} }},
	{{ {-921, 717, 1536}, 0, {784, 582}, {0, 0, 129, 255} }},
	{{ {-511, 1024, 1536}, 0, {0, 0}, {0, 0, 129, 255} }},
	{{ {-1535, 1024, 1536}, 0, {2012, 0}, {0, 0, 129, 255} }},
	{{ {-1125, 717, 1536}, 0, {1196, 582}, {0, 0, 129, 255} }},
	{{ {-1535, 512, 1536}, 0, {2012, 990}, {0, 0, 129, 255} }},
	{{ {-1262, 512, 1536}, 0, {1468, 990}, {0, 0, 129, 255} }},
	{{ {-3071, 1024, -1023}, 0, {0, 0}, {90, 0, 90, 255} }},
	{{ {-2866, 512, -1228}, 0, {376, 990}, {90, 0, 90, 255} }},
	{{ {-2866, 1024, -1228}, 0, {376, 0}, {90, 0, 90, 255} }},
	{{ {-3071, 512, -1023}, 0, {0, 990}, {90, 0, 90, 255} }},
	{{ {-1535, 1024, 1536}, 0, {-2076, 0}, {90, 0, 166, 255} }},
	{{ {-3071, 512, 0}, 0, {2012, 990}, {90, 0, 166, 255} }},
	{{ {-3071, 1024, 0}, 0, {2012, 0}, {90, 0, 166, 255} }},
	{{ {-1535, 512, 1536}, 0, {-2076, 990}, {90, 0, 166, 255} }},
	{{ {-3071, 512, -1023}, 0, {2012, 990}, {127, 0, 0, 255} }},
	{{ {-3071, 1024, -1023}, 0, {2012, 0}, {127, 0, 0, 255} }},
	{{ {-3071, 1024, 0}, 0, {0, 0}, {127, 0, 0, 255} }},
	{{ {-3071, 512, 0}, 0, {0, 990}, {127, 0, 0, 255} }},
	{{ {-2149, 1024, -1637}, 0, {1808, 0}, {166, 0, 90, 255} }},
	{{ {-1535, 512, -1023}, 0, {3036, 990}, {166, 0, 90, 255} }},
	{{ {-1535, 1024, -1023}, 0, {3036, 0}, {166, 0, 90, 255} }},
	{{ {-2149, 512, -1637}, 0, {1808, 990}, {166, 0, 90, 255} }},
	{{ {-2149, 1024, -1637}, 0, {1808, 0}, {0, 0, 127, 255} }},
	{{ {-2457, 512, -1637}, 0, {1196, 990}, {0, 0, 127, 255} }},
	{{ {-2149, 512, -1637}, 0, {1808, 990}, {0, 0, 127, 255} }},
	{{ {-2457, 1024, -1637}, 0, {1196, 0}, {0, 0, 127, 255} }},
};

Gfx castle_inside_4_dl_mesh_tri_0[] = {
	gsSPVertex(castle_inside_4_dl_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(castle_inside_4_dl_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(2, 5, 4, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSP1Triangle(8, 7, 6, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(9, 11, 12, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(castle_inside_4_dl_mesh_vtx_0 + 32, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(5, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(11, 14, 12, 0),
	gsSPVertex(castle_inside_4_dl_mesh_vtx_0 + 47, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPEndDisplayList(),
};

Vtx castle_inside_4_dl_mesh_vtx_1[42] = {
	{{ {1024, 512, 0}, 0, {-2076, 0}, {166, 0, 166, 255} }},
	{{ {-511, 0, 1536}, 0, {2012, 990}, {166, 0, 166, 255} }},
	{{ {-511, 512, 1536}, 0, {2012, 0}, {166, 0, 166, 255} }},
	{{ {1024, 0, 0}, 0, {-2076, 990}, {166, 0, 166, 255} }},
	{{ {819, 512, -1228}, 0, {1604, 0}, {166, 0, 90, 255} }},
	{{ {1024, 205, -1023}, 0, {2012, 582}, {166, 0, 90, 255} }},
	{{ {1024, 512, -1023}, 0, {2012, 0}, {166, 0, 90, 255} }},
	{{ {819, 205, -1228}, 0, {1604, 582}, {166, 0, 90, 255} }},
	{{ {1024, 205, -1023}, 0, {0, 582}, {129, 0, 0, 255} }},
	{{ {1024, 205, -306}, 0, {1400, 582}, {129, 0, 0, 255} }},
	{{ {1024, 461, -306}, 0, {1400, 70}, {129, 0, 0, 255} }},
	{{ {1024, 512, -1023}, 0, {0, 0}, {129, 0, 0, 255} }},
	{{ {1024, 512, 0}, 0, {2012, 0}, {129, 0, 0, 255} }},
	{{ {1024, 461, -153}, 0, {1704, 70}, {129, 0, 0, 255} }},
	{{ {1024, 205, 0}, 0, {2012, 582}, {129, 0, 0, 255} }},
	{{ {1024, 205, -153}, 0, {1704, 582}, {129, 0, 0, 255} }},
	{{ {-1535, 512, 1536}, 0, {2012, 0}, {0, 0, 129, 255} }},
	{{ {-1262, 512, 1536}, 0, {1468, 0}, {0, 0, 129, 255} }},
	{{ {-1330, 410, 1536}, 0, {1604, 172}, {0, 0, 129, 255} }},
	{{ {-1535, 0, 1536}, 0, {2012, 990}, {0, 0, 129, 255} }},
	{{ {-1330, 0, 1536}, 0, {1604, 990}, {0, 0, 129, 255} }},
	{{ {-1535, 512, 1536}, 0, {-2076, 0}, {90, 0, 166, 255} }},
	{{ {-3071, 0, 0}, 0, {2012, 990}, {90, 0, 166, 255} }},
	{{ {-3071, 512, 0}, 0, {2012, 0}, {90, 0, 166, 255} }},
	{{ {-1535, 0, 1536}, 0, {-2076, 990}, {90, 0, 166, 255} }},
	{{ {-511, 0, 1536}, 0, {0, 990}, {0, 0, 129, 255} }},
	{{ {-716, 0, 1536}, 0, {376, 990}, {0, 0, 129, 255} }},
	{{ {-716, 410, 1536}, 0, {376, 172}, {0, 0, 129, 255} }},
	{{ {-511, 512, 1536}, 0, {0, 0}, {0, 0, 129, 255} }},
	{{ {-784, 512, 1536}, 0, {512, 0}, {0, 0, 129, 255} }},
	{{ {-3071, 512, -1023}, 0, {0, 0}, {90, 0, 90, 255} }},
	{{ {-2866, 205, -1228}, 0, {376, 582}, {90, 0, 90, 255} }},
	{{ {-2866, 512, -1228}, 0, {376, 0}, {90, 0, 90, 255} }},
	{{ {-3071, 205, -1023}, 0, {0, 582}, {90, 0, 90, 255} }},
	{{ {-3071, 205, 0}, 0, {0, 582}, {127, 0, 0, 255} }},
	{{ {-3071, 205, -716}, 0, {1400, 582}, {127, 0, 0, 255} }},
	{{ {-3071, 461, -716}, 0, {1400, 70}, {127, 0, 0, 255} }},
	{{ {-3071, 512, 0}, 0, {0, 0}, {127, 0, 0, 255} }},
	{{ {-3071, 512, -1023}, 0, {2012, 0}, {127, 0, 0, 255} }},
	{{ {-3071, 461, -869}, 0, {1704, 70}, {127, 0, 0, 255} }},
	{{ {-3071, 205, -1023}, 0, {2012, 582}, {127, 0, 0, 255} }},
	{{ {-3071, 205, -869}, 0, {1704, 582}, {127, 0, 0, 255} }},
};

Gfx castle_inside_4_dl_mesh_tri_1[] = {
	gsSPVertex(castle_inside_4_dl_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(10, 13, 12, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(castle_inside_4_dl_mesh_vtx_1 + 16, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(5, 8, 6, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(9, 11, 12, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSPVertex(castle_inside_4_dl_mesh_vtx_1 + 30, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(6, 9, 8, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSPEndDisplayList(),
};

Vtx castle_inside_4_dl_mesh_vtx_2[6] = {
	{{ {-511, 1024, 1536}, 0, {0, 0}, {204, 225, 145, 255} }},
	{{ {-765, 1741, 1536}, 0, {222, -748}, {212, 146, 210, 255} }},
	{{ {-765, 1741, 922}, 0, {222, -748}, {221, 135, 243, 255} }},
	{{ {-1281, 1741, 922}, 0, {736, -748}, {35, 135, 243, 255} }},
	{{ {-1281, 1741, 1536}, 0, {736, -748}, {46, 191, 157, 255} }},
	{{ {-1535, 1024, 1536}, 0, {990, 0}, {57, 229, 146, 255} }},
};

Gfx castle_inside_4_dl_mesh_tri_2[] = {
	gsSPVertex(castle_inside_4_dl_mesh_vtx_2 + 0, 6, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSPEndDisplayList(),
};

Vtx castle_inside_4_dl_mesh_vtx_3[6] = {
	{{ {-765, 1741, 1536}, 0, {222, -748}, {212, 146, 210, 255} }},
	{{ {-1281, 1741, 1536}, 0, {736, -748}, {46, 191, 157, 255} }},
	{{ {-1281, 1741, 922}, 0, {736, -748}, {35, 135, 243, 255} }},
	{{ {-765, 1741, 1536}, 0, {222, -748}, {212, 146, 210, 255} }},
	{{ {-1281, 1741, 922}, 0, {736, -748}, {35, 135, 243, 255} }},
	{{ {-765, 1741, 922}, 0, {222, -748}, {221, 135, 243, 255} }},
};

Gfx castle_inside_4_dl_mesh_tri_3[] = {
	gsSPVertex(castle_inside_4_dl_mesh_vtx_3 + 0, 6, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSPEndDisplayList(),
};

Vtx castle_inside_4_dl_mesh_vtx_4[83] = {
	{{ {102, 1024, -1637}, 0, {-56, -194}, {43, 238, 118, 255} }},
	{{ {410, 1024, -1637}, 0, {-202, -194}, {196, 210, 102, 255} }},
	{{ {155, 1741, -1023}, 0, {-80, 130}, {247, 146, 63, 255} }},
	{{ {-2457, 1024, -1637}, 0, {1160, -194}, {37, 187, 100, 255} }},
	{{ {-2457, 1741, -769}, 0, {1160, 264}, {72, 156, 29, 255} }},
	{{ {-3071, 1024, -1023}, 0, {1452, 130}, {108, 219, 56, 255} }},
	{{ {-2457, 1024, -1637}, 0, {1160, -194}, {37, 187, 100, 255} }},
	{{ {-2202, 1741, -1023}, 0, {1038, 130}, {9, 139, 49, 255} }},
	{{ {-2457, 1741, -769}, 0, {1160, 264}, {72, 156, 29, 255} }},
	{{ {-2457, 1024, -1637}, 0, {1160, -194}, {37, 187, 100, 255} }},
	{{ {-2149, 1024, -1637}, 0, {1014, -194}, {213, 238, 118, 255} }},
	{{ {-2202, 1741, -1023}, 0, {1038, 130}, {9, 139, 49, 255} }},
	{{ {-2149, 1024, -1637}, 0, {1014, -194}, {213, 238, 118, 255} }},
	{{ {-1535, 1415, -1302}, 0, {722, -18}, {239, 247, 126, 255} }},
	{{ {-2202, 1741, -1023}, 0, {1038, 130}, {9, 139, 49, 255} }},
	{{ {-1535, 1415, -1302}, 0, {722, -18}, {239, 247, 126, 255} }},
	{{ {155, 1741, -1023}, 0, {-80, 130}, {247, 146, 63, 255} }},
	{{ {-2202, 1741, -1023}, 0, {1038, 130}, {9, 139, 49, 255} }},
	{{ {-2202, 1741, -1023}, 0, {1038, 130}, {9, 139, 49, 255} }},
	{{ {-765, 1741, 922}, 0, {356, 1150}, {221, 135, 243, 255} }},
	{{ {-1281, 1741, 922}, 0, {600, 1150}, {35, 135, 243, 255} }},
	{{ {-2457, 1741, -253}, 0, {1160, 534}, {51, 144, 226, 255} }},
	{{ {-2457, 1741, -769}, 0, {1160, 264}, {72, 156, 29, 255} }},
	{{ {-2202, 1741, -1023}, 0, {1038, 130}, {9, 139, 49, 255} }},
	{{ {-2457, 1741, -253}, 0, {1160, 534}, {51, 144, 226, 255} }},
	{{ {-2202, 1741, -1023}, 0, {1038, 130}, {9, 139, 49, 255} }},
	{{ {-1281, 1741, 922}, 0, {600, 1150}, {35, 135, 243, 255} }},
	{{ {-2202, 1741, -1023}, 0, {1038, 130}, {9, 139, 49, 255} }},
	{{ {155, 1741, -1023}, 0, {-80, 130}, {247, 146, 63, 255} }},
	{{ {-765, 1741, 922}, 0, {356, 1150}, {221, 135, 243, 255} }},
	{{ {-1535, 1415, -1302}, 0, {722, -18}, {239, 247, 126, 255} }},
	{{ {-511, 1415, -1302}, 0, {234, -18}, {26, 245, 124, 255} }},
	{{ {155, 1741, -1023}, 0, {-80, 130}, {247, 146, 63, 255} }},
	{{ {-511, 1415, -1302}, 0, {234, -18}, {26, 245, 124, 255} }},
	{{ {102, 1024, -1637}, 0, {-56, -194}, {43, 238, 118, 255} }},
	{{ {155, 1741, -1023}, 0, {-80, 130}, {247, 146, 63, 255} }},
	{{ {410, 1741, -769}, 0, {-202, 264}, {184, 156, 29, 255} }},
	{{ {155, 1741, -1023}, 0, {-80, 130}, {247, 146, 63, 255} }},
	{{ {410, 1024, -1637}, 0, {-202, -194}, {196, 210, 102, 255} }},
	{{ {-511, 1024, 1536}, 0, {234, 1472}, {204, 225, 145, 255} }},
	{{ {410, 1741, -253}, 0, {-202, 534}, {204, 144, 226, 255} }},
	{{ {1024, 1024, 0}, 0, {-494, 668}, {142, 216, 216, 255} }},
	{{ {-2457, 1741, -769}, 0, {1160, 264}, {72, 156, 29, 255} }},
	{{ {-2457, 1741, -253}, 0, {1160, 534}, {51, 144, 226, 255} }},
	{{ {-3071, 1024, 0}, 0, {1452, 668}, {115, 210, 227, 255} }},
	{{ {-3071, 1024, -1023}, 0, {1452, 130}, {108, 219, 56, 255} }},
	{{ {-2457, 1741, -769}, 0, {1160, 264}, {72, 156, 29, 255} }},
	{{ {-3071, 1024, 0}, 0, {1452, 668}, {115, 210, 227, 255} }},
	{{ {-3071, 1024, 0}, 0, {1452, 668}, {115, 210, 227, 255} }},
	{{ {-2457, 1741, -253}, 0, {1160, 534}, {51, 144, 226, 255} }},
	{{ {-1535, 1024, 1536}, 0, {722, 1472}, {57, 229, 146, 255} }},
	{{ {-2457, 1741, -253}, 0, {1160, 534}, {52, 144, 226, 255} }},
	{{ {-1281, 1741, 922}, 0, {600, 1150}, {35, 135, 243, 255} }},
	{{ {-1535, 1024, 1536}, 0, {722, 1472}, {57, 229, 146, 255} }},
	{{ {1024, 1024, -1023}, 0, {-494, 130}, {152, 230, 68, 255} }},
	{{ {410, 1741, -769}, 0, {-202, 264}, {184, 156, 29, 255} }},
	{{ {410, 1024, -1637}, 0, {-202, -194}, {196, 210, 102, 255} }},
	{{ {1024, 1024, 0}, 0, {-494, 668}, {142, 216, 216, 255} }},
	{{ {410, 1741, -769}, 0, {-202, 264}, {184, 156, 29, 255} }},
	{{ {1024, 1024, -1023}, 0, {-494, 130}, {152, 230, 68, 255} }},
	{{ {1024, 1024, 0}, 0, {-494, 668}, {142, 216, 216, 255} }},
	{{ {410, 1741, -253}, 0, {-202, 534}, {205, 144, 226, 255} }},
	{{ {410, 1741, -769}, 0, {-202, 264}, {184, 156, 29, 255} }},
	{{ {155, 1741, -1023}, 0, {-80, 130}, {247, 146, 63, 255} }},
	{{ {410, 1741, -769}, 0, {-202, 264}, {184, 156, 29, 255} }},
	{{ {410, 1741, -253}, 0, {-202, 534}, {205, 144, 226, 255} }},
	{{ {155, 1741, -1023}, 0, {-80, 130}, {247, 146, 63, 255} }},
	{{ {410, 1741, -253}, 0, {-202, 534}, {205, 144, 226, 255} }},
	{{ {-765, 1741, 922}, 0, {356, 1150}, {221, 135, 243, 255} }},
	{{ {-511, 1024, 1536}, 0, {234, 1472}, {204, 225, 145, 255} }},
	{{ {-765, 1741, 922}, 0, {356, 1150}, {221, 135, 243, 255} }},
	{{ {410, 1741, -253}, 0, {-202, 534}, {205, 144, 226, 255} }},
	{{ {-1535, 1024, -1023}, 0, {0, 2288}, {219, 29, 118, 255} }},
	{{ {-1535, 1415, -1302}, 0, {0, 2010}, {239, 247, 126, 255} }},
	{{ {-2149, 1024, -1637}, 0, {-644, 1676}, {213, 238, 118, 255} }},
	{{ {-511, 1024, -1023}, 0, {990, 2288}, {26, 32, 120, 255} }},
	{{ {-1535, 1415, -1302}, 0, {0, 2010}, {239, 247, 126, 255} }},
	{{ {-1535, 1024, -1023}, 0, {0, 2288}, {219, 29, 118, 255} }},
	{{ {-511, 1415, -1302}, 0, {990, 2010}, {26, 245, 124, 255} }},
	{{ {-1535, 1415, -1302}, 0, {0, 2010}, {239, 247, 126, 255} }},
	{{ {102, 1024, -1637}, 0, {1604, 1676}, {43, 238, 118, 255} }},
	{{ {-511, 1415, -1302}, 0, {990, 2010}, {26, 245, 124, 255} }},
	{{ {-511, 1024, -1023}, 0, {990, 2288}, {26, 32, 120, 255} }},
};

Gfx castle_inside_4_dl_mesh_tri_4[] = {
	gsSPVertex(castle_inside_4_dl_mesh_vtx_4 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(castle_inside_4_dl_mesh_vtx_4 + 15, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(castle_inside_4_dl_mesh_vtx_4 + 30, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(castle_inside_4_dl_mesh_vtx_4 + 45, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(castle_inside_4_dl_mesh_vtx_4 + 60, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(castle_inside_4_dl_mesh_vtx_4 + 75, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 4, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSPEndDisplayList(),
};

Vtx castle_inside_4_dl_mesh_vtx_5[5] = {
	{{ {-1281, 1741, 1536}, 0, {1336, 0}, {46, 191, 157, 255} }},
	{{ {-693, 1536, 1536}, 0, {552, 224}, {0, 0, 129, 255} }},
	{{ {-1353, 1536, 1536}, 0, {1432, 224}, {0, 0, 129, 255} }},
	{{ {-1281, 1741, 1536}, 0, {1336, 0}, {46, 191, 157, 255} }},
	{{ {-765, 1741, 1536}, 0, {648, 0}, {212, 146, 210, 255} }},
};

Gfx castle_inside_4_dl_mesh_tri_5[] = {
	gsSPVertex(castle_inside_4_dl_mesh_vtx_5 + 0, 5, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSPEndDisplayList(),
};

Vtx castle_inside_4_dl_mesh_vtx_6[4] = {
	{{ {-1353, 1536, 1536}, 0, {1648, 0}, {0, 0, 129, 255} }},
	{{ {-693, 1536, 1536}, 0, {332, 0}, {0, 0, 129, 255} }},
	{{ {-647, 1408, 1536}, 0, {240, 224}, {0, 0, 129, 255} }},
	{{ {-1399, 1408, 1536}, 0, {1740, 224}, {0, 0, 129, 255} }},
};

Gfx castle_inside_4_dl_mesh_tri_6[] = {
	gsSPVertex(castle_inside_4_dl_mesh_vtx_6 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx castle_inside_4_dl_mesh_vtx_7[4] = {
	{{ {-1399, 1408, 1536}, 0, {1536, 0}, {0, 0, 129, 255} }},
	{{ {-647, 1408, 1536}, 0, {36, 0}, {0, 0, 129, 255} }},
	{{ {-602, 1280, 1536}, 0, {-52, 224}, {0, 0, 129, 255} }},
	{{ {-1444, 1280, 1536}, 0, {1628, 224}, {0, 0, 129, 255} }},
};

Gfx castle_inside_4_dl_mesh_tri_7[] = {
	gsSPVertex(castle_inside_4_dl_mesh_vtx_7 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx castle_inside_4_dl_mesh_vtx_8[4] = {
	{{ {-1444, 1280, 1536}, 0, {1832, 0}, {0, 0, 129, 255} }},
	{{ {-602, 1280, 1536}, 0, {148, 0}, {0, 0, 129, 255} }},
	{{ {-556, 1152, 1536}, 0, {60, 224}, {0, 0, 129, 255} }},
	{{ {-1490, 1152, 1536}, 0, {1920, 224}, {0, 0, 129, 255} }},
};

Gfx castle_inside_4_dl_mesh_tri_8[] = {
	gsSPVertex(castle_inside_4_dl_mesh_vtx_8 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx castle_inside_4_dl_mesh_vtx_9[4] = {
	{{ {-1490, 1152, 1536}, 0, {1716, 0}, {0, 0, 129, 255} }},
	{{ {-511, 1024, 1536}, 0, {-232, 224}, {204, 225, 145, 255} }},
	{{ {-1535, 1024, 1536}, 0, {1808, 224}, {57, 229, 146, 255} }},
	{{ {-556, 1152, 1536}, 0, {-140, 0}, {0, 0, 129, 255} }},
};

Gfx castle_inside_4_dl_mesh_tri_9[] = {
	gsSPVertex(castle_inside_4_dl_mesh_vtx_9 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Gfx mat_castle_inside_ceiling_darker[] = {
	gsSPSetLights1(castle_inside_ceiling_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, inside_09008000),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_castle_inside_ceiling_dark[] = {
	gsSPSetLights1(castle_inside_ceiling_dark_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, inside_09008000),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_castle_inside_ceiling[] = {
	gsSPSetLights1(castle_inside_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, inside_09008000),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_castle_inside_upper_wall_darkest[] = {
	gsSPSetLights1(castle_inside_upper_wall_darkest_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, inside_09001000),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_castle_inside_upper_wall_even_darker[] = {
	gsSPSetLights1(castle_inside_ceiling_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, inside_09001000),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_castle_inside_upper_wall_much_darker[] = {
	gsSPSetLights1(castle_inside_ceiling_dark_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, inside_09001000),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_castle_inside_upper_wall_darker[] = {
	gsSPSetLights1(castle_inside_upper_wall_darker_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, inside_09001000),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_castle_inside_upper_wall_dark[] = {
	gsSPSetLights1(castle_inside_upper_wall_dark_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, inside_09001000),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx inside_castle_seg7_dl_0702A650[] = {
	gsSPDisplayList(mat_castle_inside_upper_wall),
	gsSPDisplayList(castle_inside_4_dl_mesh_tri_0),
	gsSPDisplayList(mat_revert_castle_inside_upper_wall),
	gsSPDisplayList(mat_castle_inside_step_wall),
	gsSPDisplayList(castle_inside_4_dl_mesh_tri_1),
	gsSPDisplayList(mat_revert_castle_inside_step_wall),
	gsSPDisplayList(mat_castle_inside_ceiling_darker),
	gsSPDisplayList(castle_inside_4_dl_mesh_tri_2),
	gsSPDisplayList(mat_castle_inside_ceiling_dark),
	gsSPDisplayList(castle_inside_4_dl_mesh_tri_3),
	gsSPDisplayList(mat_castle_inside_ceiling),
	gsSPDisplayList(castle_inside_4_dl_mesh_tri_4),
	gsSPDisplayList(mat_castle_inside_upper_wall_darkest),
	gsSPDisplayList(castle_inside_4_dl_mesh_tri_5),
	gsSPDisplayList(mat_castle_inside_upper_wall_even_darker),
	gsSPDisplayList(castle_inside_4_dl_mesh_tri_6),
	gsSPDisplayList(mat_castle_inside_upper_wall_much_darker),
	gsSPDisplayList(castle_inside_4_dl_mesh_tri_7),
	gsSPDisplayList(mat_castle_inside_upper_wall_darker),
	gsSPDisplayList(castle_inside_4_dl_mesh_tri_8),
	gsSPDisplayList(mat_castle_inside_upper_wall_dark),
	gsSPDisplayList(castle_inside_4_dl_mesh_tri_9),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};
