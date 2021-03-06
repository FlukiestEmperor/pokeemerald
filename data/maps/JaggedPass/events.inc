JaggedPass_EventObjects: @ 8534AE4
	object_event 1, EVENT_OBJ_GFX_HIKER, 0, 10, 8, 3, 10, 0, 0, 1, 3, JaggedPass_EventScript_230785, 0
	object_event 2, EVENT_OBJ_GFX_CAMPER, 0, 16, 35, 3, 14, 0, 0, 1, 4, JaggedPass_EventScript_2307FB, 0
	object_event 3, EVENT_OBJ_GFX_ITEM_BALL, 0, 23, 24, 3, 1, 0, 0, 0, 0, JaggedPass_EventScript_291184, 1070
	object_event 4, EVENT_OBJ_GFX_PICNICKER, 0, 9, 21, 3, 16, 1, 1, 1, 3, JaggedPass_EventScript_23079C, 0
	object_event 5, EVENT_OBJ_GFX_MAGMA_MEMBER_M, 0, 16, 19, 3, 7, 1, 1, 0, 0, JaggedPass_EventScript_230718, 847
	object_event 6, EVENT_OBJ_GFX_PICNICKER, 0, 14, 25, 3, 10, 1, 1, 1, 3, JaggedPass_EventScript_230871, 0
	object_event 7, EVENT_OBJ_GFX_CYCLING_TRIATHLETE_M, 0, 18, 25, 3, 9, 1, 1, 1, 3, JaggedPass_EventScript_23085A, 0

JaggedPass_MapWarps: @ 8534B8C
	warp_def 14, 40, 3, 2, MAP_ROUTE112
	warp_def 15, 40, 3, 3, MAP_ROUTE112
	warp_def 13, 5, 3, 2, MAP_MT_CHIMNEY
	warp_def 14, 5, 3, 3, MAP_MT_CHIMNEY
	warp_def 16, 18, 0, 0, MAP_MAGMA_HIDEOUT_1F

JaggedPass_MapCoordEvents: @ 8534BB4
	coord_event 13, 15, 3, 0, 2, 0, 0, 0x0
	coord_event 21, 12, 3, 0, 8, 0, 0, 0x0
	coord_event 14, 15, 3, 0, 2, 0, 0, 0x0
	coord_event 18, 17, 3, 0, 2, 0, 0, 0x0
	coord_event 22, 19, 3, 0, 2, 0, 0, 0x0
	coord_event 21, 15, 3, 0, VAR_0x40C8, 1, 0, JaggedPass_EventScript_2306BB
	coord_event 22, 20, 3, 0, VAR_0x40C8, 1, 0, JaggedPass_EventScript_2306BB
	coord_event 21, 20, 3, 0, VAR_0x40C8, 1, 0, JaggedPass_EventScript_2306BB
	coord_event 14, 15, 3, 0, VAR_0x40C8, 1, 0, JaggedPass_EventScript_2306BB
	coord_event 13, 15, 3, 0, VAR_0x40C8, 1, 0, JaggedPass_EventScript_2306BB

JaggedPass_MapBGEvents: @ 8534C54
	bg_event 8, 10, 3, 7, 0, ITEM_FULL_HEAL, 77, 0
	bg_event 7, 29, 3, 7, 0, ITEM_GREAT_BALL, 76, 0

JaggedPass_MapEvents:: @ 8534C6C
	map_events JaggedPass_EventObjects, JaggedPass_MapWarps, JaggedPass_MapCoordEvents, JaggedPass_MapBGEvents

