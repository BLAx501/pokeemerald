FortreeCity_House5_EventObjects: @ 8531044
	object_event 1, EVENT_OBJ_GFX_POKEFAN_F, 0, 6, 4, 3, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT, 0, 0, 0, 0, FortreeCity_House5_EventScript_217EF2, 0
	object_event 2, EVENT_OBJ_GFX_ZIGZAGOON_2, 0, 6, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FortreeCity_House5_EventScript_217F04, 0
	object_event 3, EVENT_OBJ_GFX_MAN_1, 0, 2, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, FortreeCity_House5_EventScript_217EFB, 0

FortreeCity_House5_MapWarps: @ 853108C
	warp_def 3, 5, 0, 7, MAP_FORTREE_CITY
	warp_def 4, 5, 0, 7, MAP_FORTREE_CITY

FortreeCity_House5_MapEvents:: @ 853109C
	map_events FortreeCity_House5_EventObjects, FortreeCity_House5_MapWarps, 0x0, 0x0

