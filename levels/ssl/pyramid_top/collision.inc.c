// 0x070125F4 - 0x07012642
const Collision ssl_seg7_collision_pyramid_top[] = {
	COL_INIT(),
	COL_VERTEX_INIT(14),
	COL_VERTEX(0, -255, 0),
	COL_VERTEX(0, -255, -255),
	COL_VERTEX(256, -255, -255),
	COL_VERTEX(-255, -255, 0),
	COL_VERTEX(256, -255, 0),
	COL_VERTEX(-256, 0, 256),
	COL_VERTEX(256, 0, 256),
	COL_VERTEX(0, 256, 0),
	COL_VERTEX(0, -255, 256),
	COL_VERTEX(256, -255, 256),
	COL_VERTEX(-256, 1, -256),
	COL_VERTEX(-255, -255, -255),
	COL_VERTEX(256, 1, -256),
	COL_VERTEX(-255, -255, 256),
	COL_TRI_INIT(SURFACE_HARD_SLIPPERY, 24),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 3, 1),
	COL_TRI(0, 2, 4),
	COL_TRI(5, 6, 7),
	COL_TRI(5, 8, 6),
	COL_TRI(8, 9, 6),
	COL_TRI(10, 5, 7),
	COL_TRI(11, 3, 10),
	COL_TRI(12, 10, 7),
	COL_TRI(10, 1, 11),
	COL_TRI(12, 2, 1),
	COL_TRI(6, 12, 7),
	COL_TRI(6, 4, 12),
	COL_TRI(4, 2, 12),
	COL_TRI(9, 8, 4),
	COL_TRI(8, 0, 4),
	COL_TRI(6, 9, 4),
	COL_TRI(1, 10, 12),
	COL_TRI(1, 3, 11),
	COL_TRI(13, 3, 0),
	COL_TRI(13, 0, 8),
	COL_TRI(5, 13, 8),
	COL_TRI(10, 3, 5),
	COL_TRI(5, 3, 13),
	COL_TRI_STOP(),
	COL_END()
};