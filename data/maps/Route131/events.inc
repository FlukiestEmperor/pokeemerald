Route131_EventObjects: @ 852CAB4
	object_event 1, EVENT_OBJ_GFX_SWIMMER_M, 0, 41, 32, 1, 29, 5, 7, 1, 3, Route131_EventScript_1F7429, 0
	object_event 2, EVENT_OBJ_GFX_SWIMMER_M, 0, 18, 19, 1, 22, 0, 7, 1, 4, Route131_EventScript_1F7440, 0
	object_event 3, EVENT_OBJ_GFX_SWIMMER_F, 0, 10, 22, 1, 20, 6, 0, 1, 4, Route131_EventScript_1F7457, 0
	object_event 4, EVENT_OBJ_GFX_SWIMMER_F, 0, 31, 25, 1, 47, 3, 5, 1, 3, Route131_EventScript_1F746E, 0
	object_event 5, EVENT_OBJ_GFX_SWIMMER_F, 0, 9, 16, 1, 8, 1, 1, 1, 1, Route131_EventScript_1F7485, 0
	object_event 6, EVENT_OBJ_GFX_TUBER_M_SWIMMING, 0, 8, 16, 1, 8, 1, 1, 1, 1, Route131_EventScript_1F74A0, 0
	object_event 7, EVENT_OBJ_GFX_SWIMMER_M, 0, 52, 20, 1, 26, 1, 3, 1, 5, Route131_EventScript_1F74D2, 0
	object_event 8, EVENT_OBJ_GFX_SWIMMER_F, 0, 52, 27, 1, 25, 1, 3, 1, 5, Route131_EventScript_1F74BB, 0

Route131_MapWarps: @ 852CB74
	warp_def 36, 6, 3, 0, MAP_SKY_PILLAR_ENTRANCE

Route131_MapEvents:: @ 852CB7C
	map_events Route131_EventObjects, Route131_MapWarps, 0x0, 0x0

