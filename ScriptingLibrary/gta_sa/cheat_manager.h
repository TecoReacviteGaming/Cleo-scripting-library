jump @__end_of_cheat_library__
/*
Library: Cheat Manager
Author: TecoReacvite
Description: This library allows you to manage the game cheats straight-forward with functions provided here in library
*/
const // eCheats
    CHEAT_WEAPON_SET1 = 0
    CHEAT_WEAPON_SET2 = 1
    CHEAT_WEAPON_SET3 = 2
    CHEAT_WEAPON_SET4 = 3
    CHEAT_TIME_TRAVEL = 4
    CHEAT_SCRIPT_BYPASS = 5
    CHEAT_SHOW_MAPPINGS = 6
    CHEAT_INVINCIBILITY = 7
    CHEAT_SHOW_TAP_TARGET = 8
    CHEAT_SHOW_TARGETING = 9
    CHEAT_MONEY_ARMOR_HEALTH = 10
    CHEAT_WANTED_LVL_UP = 11
    CHEAT_WANTED_LVL_DOWN = 12
    CHEAT_SUNNY_WEATHER = 13
    CHEAT_EXTRA_SUNNY_WEATHER = 14
    CHEAT_CLOUDY_WEATHER = 15
    CHEAT_RAINY_WEATHER = 16
    CHEAT_FOGGY_WEATHER = 17
    CHEAT_FAST_WEATHER = 18
    CHEAT_FAST_TIME = 19
    CHEAT_SLOW_TIME = 20
    CHEAT_MAYHEM = 21
    CHEAT_PEDS_ATTACK_PLAYER = 22
    CHEAT_WEAPONS_FOR_ALL = 23
    CHEAT_TANK = 24
    CHEAT_STOCK_CAR1 = 25
    CHEAT_STOCK_CAR2 = 26
    CHEAT_STOCK_CAR3 = 27
    CHEAT_STOCK_CAR4 = 28
    CHEAT_HEARSE = 29
    CHEAT_LOVEFIST = 30
    CHEAT_TRASHMASTER = 31
    CHEAT_GOLFCART = 32
    CHEAT_BLOWUP_CARS = 33
    CHEAT_ONLY_RENDER_WHEELS = 34
    CHEAT_STRONG_GRIP = 35
    CHEAT_SUICIDE = 36
    CHEAT_TRAFFICLIGHTS = 37
    CHEAT_MAD_DRIVERS = 38
    CHEAT_PINK_CARS = 39
    CHEAT_BLACK_CARS = 40
    CHEAT_BACK_TO_FUTURE = 41
    CHEAT_FLYING_FISH = 42
    CHEAT_FAT = 43
    CHEAT_MUSCLE = 44
    CHEAT_GAMBLER = 45
    CHEAT_SKINNY = 46
    CHEAT_ELVIS_LIVES = 47
    CHEAT_VILLAGE_PEOPLE = 48
    CHEAT_BEACH_PARTY = 49
    CHEAT_GANGS = 50
    CHEAT_GANGLAND = 51
    CHEAT_NINJA = 52
    CHEAT_LOVE_CONQUERS = 53
    CHEAT_ALL_BAD_CARS = 54
    CHEAT_ALL_GOOD_CARS = 55
    CHEAT_FLYING_CARS = 56
    CHEAT_CJ_PHONEHOME = 57
    CHEAT_FLYBOY = 58
    CHEAT_VORTEX = 59
    CHEAT_VEH_OF_DEATH = 60
    CHEAT_NITRO = 61
    CHEAT_SUPERPOWER_CAR = 62
    CHEAT_MIDNIGHT = 63
    CHEAT_DUSK = 64
    CHEAT_STORM = 65
    CHEAT_SANDSTORM = 66
    CHEAT_PREDATOR = 67
    CHEAT_HIGH_JMP = 68
    CHEAT_BULLETPROOF = 69
    CHEAT_SCUBA = 70
    CHEAT_PARACHUTE = 71
    CHEAT_JETPACK = 72
    CHEAT_NOTWANTED = 73
    CHEAT_WANTED = 74
    CHEAT_SUPER_PUNCH = 75
    CHEAT_NO_FOOD = 76
    CHEAT_RIOT = 77
    CHEAT_FUN_HOUSE = 78
    CHEAT_ADRENALINE = 79
    CHEAT_AMMO = 80
    CHEAT_DRIVEBY = 81
    CHEAT_WASTELAND = 82
    CHEAT_COUNTRYSIDE_INVASION = 83
    CHEAT_RECRUITME = 84
    CHEAT_RECRUITME_AK47 = 85
    CHEAT_RECRUITME_ROCKET = 86
    CHEAT_RESPECT = 87
    CHEAT_SEX_APPEAL = 88
    CHEAT_STAMINA = 89
    CHEAT_WEAPON_SKILLS = 90
    CHEAT_VEHICLE_SKILLS = 91
    CHEAT_APACHE = 92
    CHEAT_QUAD = 93
    CHEAT_TANKER = 94
    CHEAT_DOZER = 95
    CHEAT_STUNTPLANE = 96
    CHEAT_MONSTERTRUCK = 97
    CHEAT_PIMP = 98
    CHEAT_TAXI_NITRO = 99
end

/* [ FUNCTIONS ] */
:toggleCheats // toggleCheats(eCheats int)
0DD0: 1@ = get_label_addr @_ZN6CCheat15m_aCheatsActiveE // android 
0DD1: 1@ = get_func_addr_by_cstr_name 1@ // android 
0085: 4@ = 0@ // (int) 
2401: read_memory_with_offset 1@ offset 4@ size 1 store_to 2@ 
0DD0: 3@ = get_label_addr @_ZN6CCheat17m_aCheatFunctionsE // android 
0DD1: 3@ = get_func_addr_by_cstr_name 3@ // android 
0012: 0@ *= 4 
2401: read_memory_with_offset 3@ offset 0@ size 4 store_to 3@ 
if 8039:   not 3@ == 0 
then 0DDE: call_func 3@ add_ib 0 // android 
else
    if 0039:   2@ == 0 
    then 0006: 2@ = true 
    else 0006: 2@ = false 
    end
    2402: write_memory_with_offset 1@ offset 4@ size 1 value 2@ 
end
0AFF: set_compare_flag 2@ // can be used as condition
0AB2: ret 0

:disableCheats // disableCheats(eCheats int, eCheats int)
0DD0: 2@ = get_label_addr @_ZN6CCheat15m_aCheatsActiveE // android 
0DD1: 2@ = get_func_addr_by_cstr_name 2@ // android 
for 3@ = 0@ to 1@ step 1
    2401: read_memory_with_offset 2@ offset 3@ size 1 store_to 4@ 
    if 0039:   4@ == 1 
    then
        0006: 4@ = 0 
        2402: write_memory_with_offset 2@ offset 3@ size 1 value 4@ 
    end
end
0AB2: ret 0

/* [ MEMORY ADDRESSES ] */
:_ZN6CCheat17m_aCheatFunctionsE
hex
 "_ZN6CCheat17m_aCheatFunctionsE" 00
end     

:_ZN6CCheat15m_aCheatsActiveE
hex
 "_ZN6CCheat15m_aCheatsActiveE" 00
end

:__end_of_cheat_library__