SootopolisCity_MysteryEventsHouse_1F_EventObjects: @ 8533598
	object_event 1, EVENT_OBJ_GFX_OLD_MAN_2, 0, 6, 4, 0, 10, 0, 0, 0, 0, SootopolisCity_MysteryEventsHouse_1F_EventScript_227A24, 0

SootopolisCity_MysteryEventsHouse_1F_MapWarps: @ 85335B0
	warp_def 3, 7, 0, 12, MAP_SOOTOPOLIS_CITY
	warp_def 4, 7, 0, 12, MAP_SOOTOPOLIS_CITY
	warp_def 3, 1, 3, 0, MAP_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_B1F

SootopolisCity_MysteryEventsHouse_1F_MapEvents:: @ 85335C8
	map_events SootopolisCity_MysteryEventsHouse_1F_EventObjects, SootopolisCity_MysteryEventsHouse_1F_MapWarps, 0x0, 0x0

