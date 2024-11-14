#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/sand/header.h"

#define bhvWarps74 bhvSpinAirborneWarp

#define e_warp bhvWarp

#define S_coin MODEL_YELLOW_COIN

#define seqPort(a,b,c,d) WARP_NODE(a,b,c,d,WARP_NO_CHECKPOINT)

const LevelScript level_sand_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _sand_segment_7SegmentRomStart, _sand_segment_7SegmentRomEnd),
//    LOAD_MIO0(        /*seg*/ 0x0A, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd),
//    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _grass_mio0SegmentRomStart, _grass_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group1_mio0SegmentRomStart, _group1_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group1_geoSegmentRomStart,  _group1_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group14_geoSegmentRomStart,  _group14_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_2),
    JUMP_LINK(script_func_global_15),

    AREA(/*index*/ 1, RCP_Stage38Scene1),
//        OBJECT(/*model*/ MODEL_NONE, /*pos*/  0, 0, 1000, /*angle*/ 0, 0, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvWarps74),
		OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  836, 0, 1306, /*angle*/ 0, 90, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvWarp),
		OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  854, 0,-1335, /*angle*/ 0, 90, 0, /*behParam*/ 0x00140000, /*beh*/ bhvWarp),

//		seqPort(10, 38, 1, 20),
//		seqPort(20, 38, 1, 10),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_SAND, /*destArea*/ 0x01, /*destNode*/ 0x14, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x14, /*destLevel*/ LEVEL_SAND, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x26, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x23, /*flags*/ WARP_NO_CHECKPOINT),
        TERRAIN(/*terrainData*/ sand_info),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_SOUND_PLAYER),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SAND),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 0, /*pos*/ 0, 0, 1000),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
