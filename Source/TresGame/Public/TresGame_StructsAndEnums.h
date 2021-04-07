// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Components/SkinnedMeshComponent.h"
#include"TresLevelEntitySequenceCondition.h"
#include "TresGame_StructsAndEnums.generated.h"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------
UENUM(BlueprintType)
enum ETresGrass
{
	ETresGrass_RADIAL = 0 UMETA(DisplayName = "Radial"),
	ETresGrass_CLOCKWISE = 1 UMETA(DisplayName = "Clockwise"),
	ETresGrass_CCLOCKWISE = 2 UMETA(DisplayName = "Counter Clockwise"),
	ETresGrass_ETresGrass_1_MAX = 3 UMETA(DisplayName = "MAX"),
	ETresGrass_ETresGrass_MAX = 4 UMETA(DisplayName = "Tres Grass MAX")
};

UENUM(BlueprintType)
enum ETresCollision
{
	ETresCollision_SPHERE = 0 UMETA(DisplayName = "Sphere"),
	ETresCollision_CAPSULE1 = 1 UMETA(DisplayName = "Capsule 1"),
	ETresCollision_CAPSULE2 = 2 UMETA(DisplayName = "Capsule 2"),
	ETresCollision_CAPSULE_RING = 3 UMETA(DisplayName = "Capsule Ring"),
	ETresCollision_BOX = 4 UMETA(DisplayName = "Box"),
	ETresCollision_BOX_RING = 5 UMETA(DisplayName = "Box Ring"),
	ETresCollision_CONVEX = 6 UMETA(DisplayName = "Convex"),
	ETresCollision_LASER1 = 7 UMETA(DisplayName = "Laser1"),
	ETresCollision_DCONVEX = 8 UMETA(DisplayName = "D Convex"),
	ETresCollision_1_MAX = 9 UMETA(DisplayName = "MAX"),
	ETresCollision_MAX = 10 UMETA(DisplayName = "Tres Collision MAX")
};

UENUM(BlueprintType)
enum ETresBodyCollision
{
	ETresBodyCollision_SPHERE = 0 UMETA(DisplayName = "Sphere"),
	ETresBodyCollision_CAPSULE = 1 UMETA(DisplayName = "Capsule"),
	ETresBodyCollision_BOX = 2 UMETA(DisplayName = "Box"),
	ETresBodyCollision_CONVEX = 3 UMETA(DisplayName = "Convex"),
	ETresBodyCollision_1_MAX = 4 UMETA(DisplayName = "MAX"),
	ETresBodyCollision_MAX = 5 UMETA(DisplayName = "Tres Box Collision MAX")
};

UENUM(BlueprintType)
enum ETresBodyCollReactionType
{
	TRES_BODY_RT_DEFAULT = 0 UMETA(DisplayName = "Default"),
	TRES_BODY_RT_NO_REACTION = 1 UMETA(DisplayName = "No Reaction"),
	TRES_BODY_RT_STRONG = 2 UMETA(DisplayName = "Strong"),
	TRES_BODY_RT_GUARD = 3 UMETA(DisplayName = "Guard"),
	TRES_BODY_RT_WEAK_GUARD = 4 UMETA(DisplayName = "Weak Guard"),
	TRES_BODY_RT_GUARD_NOREACT = 5 UMETA(DisplayName = "Guard No React"),
	TRES_BODY_RT_INVINCIBLE = 6 UMETA(DisplayName = "Invincible"),
	TRES_BODY_RT_INVINCIBLE_NOREACT = 7 UMETA(DisplayName = "Invincible No React"),
	TRES_BODY_RT_GHOST = 8 UMETA(DisplayName = "Ghost"),
	TRES_BODY_RT_GHOST_NOREACT = 9 UMETA(DisplayName = "Ghost No React"),
	TRES_BODY_RT_REFLECT1 = 10 UMETA(DisplayName = "Reflect 1"),
	TRES_BODY_RT_GHOST_INVINCIBLE = 11 UMETA(DisplayName = "Ghost Invincible"),
	_TRES_BODY_RT_MAX = 12 UMETA(DisplayName = "MAX"),
	ETresBodyCollReactionType_MAX = 13 UMETA(DisplayName = "Tres Body RT Max")
};
UENUM(BlueprintType)
enum ETresBodyCollOverlapCameraFunction
{
	TRES_BODY_OVERLAPCAMERA_FADE = 0 UMETA(DisplayName = "Fade"),
	TRES_BODY_OVERLAPCAMERA_RESET = 1 UMETA(DisplayName = "Reset"),
	TRES_BODY_OVERLAPCAMERA_MAX = 2 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresChrDataTableSetType
{
	CDTS_TYPE_PLAYER = 0 UMETA(DisplayName = "Player"),
	CDTS_TYPE_ENEMY = 1 UMETA(DisplayName = "Enemy"),
	CDTS_TYPE_GIMMICK = 2 UMETA(DisplayName = "Gimmick"),
	CDTS_TYPE_PLAYER_GIGAS = 3 UMETA(DisplayName = "Player Gigas"),
	CDTS_TYPE_PLAYER_SHIP = 4 UMETA(DisplayName = "Player Ship"),
	CDTS_TYPE_ENEMY_SHIP = 5 UMETA(DisplayName = "Enemy Ship"),
	CDTS_TYPE_MAX = 6 UMETA(DisplayName = "MAX"),
	ETresChrDataTableSetType_MAX = 7 UMETA(DisplayName = "Tres Chr Data Table Set Type MAX")
};

UENUM(BlueprintType)
enum ETresCommandKind
{
	TRES_CMD_KIND_NONE = 0 UMETA(DisplayName = "None"),
	TRES_CMD_KIND_REFLECTGUARD = 1 UMETA(DisplayName = "Reflect Guard"),
	TRES_CMD_KIND_BLOWCOUNTER = 2 UMETA(DisplayName = "Blow Counter"),
	TRES_CMD_KIND_REVENGESLASH = 3 UMETA(DisplayName = "Revenge Slash"),
	TRES_CMD_KIND_REVENGEIMPACT = 4 UMETA(DisplayName = "Revenge Impact"),
	TRES_CMD_KIND_REVENGEDIVE = 5 UMETA(DisplayName = "Revenge Dive"),
	TRES_CMD_KIND_BARRIERCRACKER = 6 UMETA(DisplayName = "Barrier Cracker"),
	TRES_CMD_KIND_HOOKUPPER = 7 UMETA(DisplayName = "Hook Upper"),
	TRES_CMD_KIND_BACKRAID = 8 UMETA(DisplayName = "Back Raid"),
	TRES_CMD_KIND_BACKRUSH = 9 UMETA(DisplayName = "Back Rush"),
	TRES_CMD_KIND_WARPSLASH = 10 UMETA(DisplayName = "Warp Slash"),
	TRES_CMD_KIND_DIVEATTACK = 11 UMETA(DisplayName = "Dive Attack"),
	TRES_CMD_KIND_REVENGESLASH2 = 12 UMETA(DisplayName = "Revenge Slash 2"),
	TRES_CMD_KIND_ANTIRAID = 13 UMETA(DisplayName = "Anti Raid"),
	TRES_CMD_KIND_SHIELDBURST = 14 UMETA(DisplayName = "Shield Burst"),
	TRES_CMD_KIND_BLADECOUNTER = 15 UMETA(DisplayName = "Blade Counter"),
	TRES_CMD_KIND_SHIELDCOUNTER = 16 UMETA(DisplayName = "Shield Counter"),
	TRES_CMD_KIND_SHIELDCOUNTER2 = 17 UMETA(DisplayName = "Shield Counter 2"),
	TRES_CMD_KIND_SHIELDCOUNTER3 = 18 UMETA(DisplayName = "Shield Counter 3"),
	TRES_CMD_KIND_SHIELDCOUNTER4 = 19 UMETA(DisplayName = "Shield Counter 4"),
	TRES_CMD_KIND_IKAZUCHI = 20 UMETA(DisplayName = "Ikazuchi"),
	TRES_CMD_KIND_SNEEZE = 21 UMETA(DisplayName = "Sneeze"),
	TRES_CMD_KIND_FR_DONALD = 22 UMETA(DisplayName = "FR Donald"),
	TRES_CMD_KIND_FR_DONALD2 = 23 UMETA(DisplayName = "FR Donald 2"),
	TRES_CMD_KIND_FR_DONALD3 = 24 UMETA(DisplayName = "FR Donald 3"),
	TRES_CMD_KIND_FR_GOOFY = 25 UMETA(DisplayName = "FR Goofy"),
	TRES_CMD_KIND_FR_GOOFY2 = 26 UMETA(DisplayName = "FR Goofy 2"),
	TRES_CMD_KIND_ATTACK = 27 UMETA(DisplayName = "Attack"),
	TRES_CMD_KIND_MAGIC = 28 UMETA(DisplayName = "Magic"),
	TRES_CMD_KIND_FIRE = 29 UMETA(DisplayName = "Fire"),
	TRES_CMD_KIND_FIRA = 30 UMETA(DisplayName = "Fira"),
	TRES_CMD_KIND_FIRAGA = 31 UMETA(DisplayName = "Firaga"),
	TRES_CMD_KIND_FIRAGAN = 32 UMETA(DisplayName = "Firagan"),
	TRES_CMD_KIND_BLIZZARD = 33 UMETA(DisplayName = "Blizzard"),
	TRES_CMD_KIND_BLIZZARA = 34 UMETA(DisplayName = "Blizzara"),
	TRES_CMD_KIND_BLIZZAGA = 35 UMETA(DisplayName = "Blizzaga"),
	TRES_CMD_KIND_BLIZZAGAN = 36 UMETA(DisplayName = "Blizzagan"),
	TRES_CMD_KIND_THUNDER = 37 UMETA(DisplayName = "Thunder"),
	TRES_CMD_KIND_THUNDARA = 38 UMETA(DisplayName = "Thundara"),
	TRES_CMD_KIND_THUNDAGA = 39 UMETA(DisplayName = "Thundaga"),
	TRES_CMD_KIND_THUNDAGAN = 40 UMETA(DisplayName = "Thundagan"),
	TRES_CMD_KIND_WATER = 41 UMETA(DisplayName = "Water"),
	TRES_CMD_KIND_WATARA = 42 UMETA(DisplayName = "Watara"),
	TRES_CMD_KIND_WATAGA = 43 UMETA(DisplayName = "Wataga"),
	TRES_CMD_KIND_WATAGAN = 44 UMETA(DisplayName = "Watagan"),
	TRES_CMD_KIND_AERO = 45 UMETA(DisplayName = "Aero"),
	TRES_CMD_KIND_AERORA = 46 UMETA(DisplayName = "Aerora"),
	TRES_CMD_KIND_AEROGA = 47 UMETA(DisplayName = "Aeroga"),
	TRES_CMD_KIND_AEROGAN = 48 UMETA(DisplayName = "Aerogan"),
	TRES_CMD_KIND_CURE = 49 UMETA(DisplayName = "Cure"),
	TRES_CMD_KIND_CURA = 50 UMETA(DisplayName = "Cura"),
	TRES_CMD_KIND_CURAGA = 51 UMETA(DisplayName = "Curaga"),
	TRES_CMD_KIND_HOLY = 52 UMETA(DisplayName = "Holy"),
	TRES_CMD_KIND_WATERFIRE = 53 UMETA(DisplayName = "Water Fire"),
	TRES_CMD_KIND_WATERBLIZZARD = 54 UMETA(DisplayName = "Water Blizzard"),
	TRES_CMD_KIND_WATERTHUNDER = 55 UMETA(DisplayName = "Water Thunder"),
	TRES_CMD_KIND_WATERAERO = 56 UMETA(DisplayName = "Water Aero"),
	TRES_CMD_KIND_ITEM = 57 UMETA(DisplayName = "Item"),
	TRES_CMD_KIND_POTION = 58 UMETA(DisplayName = "Potion"),
	TRES_CMD_KIND_HIPOTION = 59 UMETA(DisplayName = "Hi Potion"),
	TRES_CMD_KIND_MEGAPOTION = 60 UMETA(DisplayName = "Mega Potion"),
	TRES_CMD_KIND_ETHER = 61 UMETA(DisplayName = "Ether"),
	TRES_CMD_KIND_HIETHER = 62 UMETA(DisplayName = "Hi Ether"),
	TRES_CMD_KIND_MEGAETHER = 63 UMETA(DisplayName = "Mega Ether"),
	TRES_CMD_KIND_ELIXIR = 64 UMETA(DisplayName = "Elixir"),
	TRES_CMD_KIND_LASTELIXIR = 65 UMETA(DisplayName = "Last Elixir"),
	TRES_CMD_KIND_FOCUSSUPPLEMENT = 66 UMETA(DisplayName = "Focus Supplement"),
	TRES_CMD_KIND_HIFOCUSSUPPLEMENT = 67 UMETA(DisplayName = "Hi Focus Supplement"),
	TRES_CMD_KIND_ALLCURE = 68 UMETA(DisplayName = "All Cure"),
	TRES_CMD_KIND_DM = 69 UMETA(DisplayName = "DM"),
	TRES_CMD_KIND_DM_WANDANYAN = 70 UMETA(DisplayName = "DM Wandanyan"),
	TRES_CMD_KIND_DM_RALPH = 71 UMETA(DisplayName = "DM Ralph"),
	TRES_CMD_KIND_DM_SIMBA = 72 UMETA(DisplayName = "DM Simba"),
	TRES_CMD_KIND_DM_STITCH = 73 UMETA(DisplayName = "DM Stitch"),
	TRES_CMD_KIND_DM_ARIEL = 74 UMETA(DisplayName = "DM Ariel"),
	TRES_CMD_KIND_DM_FINISH = 75 UMETA(DisplayName = "DM Finish"),
	TRES_CMD_KIND_SAVE = 76 UMETA(DisplayName = "Save"),
	TRES_CMD_KIND_TALK = 77 UMETA(DisplayName = "Talk"),
	TRES_CMD_KIND_OPEN = 78 UMETA(DisplayName = "Open"),
	TRES_CMD_KIND_CHECK = 79 UMETA(DisplayName = "Check"),
	TRES_CMD_KIND_SHOP = 80 UMETA(DisplayName = "Shop"),
	TRES_CMD_KIND_RESCUE = 81 UMETA(DisplayName = "Rescue"),
	TRES_CMD_KIND_VEHICLE = 82 UMETA(DisplayName = "Vehicle"),
	TRES_CMD_KIND_SHIP = 83 UMETA(DisplayName = "Ship"),
	TRES_CMD_KIND_PLANE = 84 UMETA(DisplayName = "Plane"),
	TRES_CMD_KIND_GETOFF = 85 UMETA(DisplayName = "Get Off"),
	TRES_CMD_KIND_GIGAS_ELECTRO = 86 UMETA(DisplayName = "Gigas Electro"),
	TRES_CMD_KIND_RAIL = 87 UMETA(DisplayName = "Rail"),
	TRES_CMD_KIND_PLANEBOSS = 88 UMETA(DisplayName = "Plane Boss"),
	TRES_CMD_KIND_SLIDESHOT = 89 UMETA(DisplayName = "Slide Shot"),
	TRES_CMD_KIND_COVERSLIDE = 90 UMETA(DisplayName = "Cover Slide"),
	TRES_CMD_KIND_TRICK = 91 UMETA(DisplayName = "Trick"),
	TRES_CMD_KIND_WATERPLAY = 92 UMETA(DisplayName = "Water Play"),
	TRES_CMD_KIND_EXTENDHAND = 93 UMETA(DisplayName = "Extend Hand"),
	TRES_CMD_KIND_ENEMYSHIP = 94 UMETA(DisplayName = "Enemy Ship"),
	TRES_CMD_KIND_SPECIALSHIP_RAGINGCANNON = 95 UMETA(DisplayName = "Special Ship Raging Cannon"),
	TRES_CMD_KIND_SPECIALSHIP_WINDCHASER = 96 UMETA(DisplayName = "Special Ship Wind Chaser"),
	TRES_CMD_KIND_SPECIALSHIP_TIDALWAVE = 97 UMETA(DisplayName = "Special Ship Tidal Wave"),
	TRES_CMD_KIND_SPECIALSHIP_DASH = 98 UMETA(DisplayName = "Special Ship Dash"),
	TRES_CMD_KIND_SWING = 99 UMETA(DisplayName = "Swing"),
	TRES_CMD_KIND_PUDDING = 100 UMETA(DisplayName = "Pudding"),
	TRES_CMD_KIND_CHARGEBERSERK = 101 UMETA(DisplayName = "Charge Berserk"),
	TRES_CMD_KIND_POSTCARD = 102 UMETA(DisplayName = "Postcard"),
	TRES_CMD_KIND_ANS_ENDURE = 103 UMETA(DisplayName = "ANS Endure"),
	TRES_CMD_KIND_ANS_CHALLENGE = 104 UMETA(DisplayName = "ANS Challenge"),
	TRES_CMD_KIND_ANS_MIXING = 105 UMETA(DisplayName = "ANS Mixing"),
	TRES_CMD_KIND_ANS_BUMPING = 106 UMETA(DisplayName = "ANS Bumping"),
	TRES_CMD_KIND_ANS_BELIEVE = 107 UMETA(DisplayName = "ANS Believe"),
	TRES_CMD_KIND_ANS_ACCEPT = 108 UMETA(DisplayName = "ANS Accept"),
	TRES_CMD_KIND_FINISH_AN2 = 109 UMETA(DisplayName = "Finish AN2"),
	TRES_CMD_KIND_S_FIRA = 110 UMETA(DisplayName = "S Fira"),
	TRES_CMD_KIND_S_FIRAGA = 111 UMETA(DisplayName = "S Firaga"),
	TRES_CMD_KIND_S_FIRAGAN = 112 UMETA(DisplayName = "S Firagan"),
	TRES_CMD_KIND_S_BLIZZARA = 113 UMETA(DisplayName = "S Blizzara"),
	TRES_CMD_KIND_S_BLIZZAGA = 114 UMETA(DisplayName = "S Blizzaga"),
	TRES_CMD_KIND_S_BLIZZAGAN = 115 UMETA(DisplayName = "S Blizzagan"),
	TRES_CMD_KIND_S_THUNDARA = 116 UMETA(DisplayName = "S Thundara"),
	TRES_CMD_KIND_S_THUNDAGA = 117 UMETA(DisplayName = "S Thundaga"),
	TRES_CMD_KIND_S_THUNDAGAN = 118 UMETA(DisplayName = "S Thundagan"),
	TRES_CMD_KIND_S_WATARA = 119 UMETA(DisplayName = "S Watara"),
	TRES_CMD_KIND_S_WATAGA = 120 UMETA(DisplayName = "S Wataga"),
	TRES_CMD_KIND_S_WATAGAN = 121 UMETA(DisplayName = "S Watagan"),
	TRES_CMD_KIND_S_AERORA = 122 UMETA(DisplayName = "S Aerora"),
	TRES_CMD_KIND_S_AEROGA = 123 UMETA(DisplayName = "S Aeroga"),
	TRES_CMD_KIND_S_AEROGAN = 124 UMETA(DisplayName = "S Aerogan"),
	TRES_CMD_KIND_S_CURAGAN = 125 UMETA(DisplayName = "S Curagan"),
	TRES_CMD_KIND_S_DARKFIRAGA = 126 UMETA(DisplayName = "S Dark Firaga"),
	TRES_CMD_KIND_CHANGE_KB = 127 UMETA(DisplayName = "Change KB"),
	TRES_CMD_KIND_CHANGE_DW = 128 UMETA(DisplayName = "Change DW"),
	TRES_CMD_KIND_CHANGE_HM = 129 UMETA(DisplayName = "Change HM"),
	TRES_CMD_KIND_CHANGE_YO = 130 UMETA(DisplayName = "Change YO"),
	TRES_CMD_KIND_CHANGE_BZ = 131 UMETA(DisplayName = "Change BZ"),
	TRES_CMD_KIND_CHANGE_DR = 132 UMETA(DisplayName = "Change DR"),
	TRES_CMD_KIND_CHANGE_SK = 133 UMETA(DisplayName = "Change SK"),
	TRES_CMD_KIND_CHANGE_GM = 134 UMETA(DisplayName = "Change GM"),
	TRES_CMD_KIND_CHANGE_SW = 135 UMETA(DisplayName = "Change SW"),
	TRES_CMD_KIND_CHANGE_WA = 136 UMETA(DisplayName = "Change WA"),
	TRES_CMD_KIND_CHANGE_SH = 137 UMETA(DisplayName = "Change SH"),
	TRES_CMD_KIND_CHANGE_CL = 138 UMETA(DisplayName = "Change CL"),
	TRES_CMD_KIND_CHANGE_AN = 139 UMETA(DisplayName = "Change AN"),
	TRES_CMD_KIND_CHANGE_HL = 140 UMETA(DisplayName = "Change HL"),
	TRES_CMD_KIND_CHANGE_FL = 141 UMETA(DisplayName = "Change FL"),
	TRES_CMD_KIND_CHANGE_DW2 = 142 UMETA(DisplayName = "Change DW 2"),
	TRES_CMD_KIND_CHANGE_BZ2 = 143 UMETA(DisplayName = "Change BZ 2"),
	TRES_CMD_KIND_CHANGE_CL2 = 144 UMETA(DisplayName = "Change CL 2"),
	TRES_CMD_KIND_CHANGE_SH2 = 145 UMETA(DisplayName = "Change SH 2"),
	TRES_CMD_KIND_CHANGE_HM2 = 146 UMETA(DisplayName = "Change HM 2"),
	TRES_CMD_KIND_CHANGE_DR2 = 147 UMETA(DisplayName = "Change DR 2"),
	TRES_CMD_KIND_CHANGE_L1 = 148 UMETA(DisplayName = "Change L1"),
	TRES_CMD_KIND_CHANGE_L2 = 149 UMETA(DisplayName = "Change L2"),
	TRES_CMD_KIND_CHANGE_L3 = 150 UMETA(DisplayName = "Change L3"),
	TRES_CMD_KIND_CHANGE_L4 = 151 UMETA(DisplayName = "Change L4"),
	TRES_CMD_KIND_CHANGE_L5 = 152 UMETA(DisplayName = "Change L5"),
	TRES_CMD_KIND_CHANGE_A1 = 153 UMETA(DisplayName = "Change A1"),
	TRES_CMD_KIND_CHANGE_A2 = 154 UMETA(DisplayName = "Change A2"),
	TRES_CMD_KIND_FINISH = 155 UMETA(DisplayName = "Finish"),
	TRES_CMD_KIND_FINISH_YO = 156 UMETA(DisplayName = "Finish YO"),
	TRES_CMD_KIND_FINISH_BZ = 157 UMETA(DisplayName = "Finish BZ"),
	TRES_CMD_KIND_FINISH_DR = 158 UMETA(DisplayName = "Finish DR"),
	TRES_CMD_KIND_FINISH_SK = 159 UMETA(DisplayName = "Finish SK"),
	TRES_CMD_KIND_FINISH_GM = 160 UMETA(DisplayName = "Finish GM"),
	TRES_CMD_KIND_FINISH_SW = 161 UMETA(DisplayName = "Finish SW"),
	TRES_CMD_KIND_FINISH_WA = 162 UMETA(DisplayName = "Finish WA"),
	TRES_CMD_KIND_FINISH_SH = 163 UMETA(DisplayName = "Finish SH"),
	TRES_CMD_KIND_FINISH_CL = 164 UMETA(DisplayName = "Finish CL"),
	TRES_CMD_KIND_FINISH_AN = 165 UMETA(DisplayName = "Finish AN"),
	TRES_CMD_KIND_FINISH_FL = 166 UMETA(DisplayName = "Finish FL"),
	TRES_CMD_KIND_FINISH_AQ = 167 UMETA(DisplayName = "Finish AQ"),
	TRES_CMD_KIND_FINISH_A2 = 168 UMETA(DisplayName = "Finish A2"),
	TRES_CMD_KIND_FINISH_RI = 169 UMETA(DisplayName = "Finish RI"),
	TRES_CMD_KIND_SHEX_THUNDER = 170 UMETA(DisplayName = "Shex Thunder"),
	TRES_CMD_KIND_LM_STUNIMPACT = 171 UMETA(DisplayName = "LM Stun Impact"),
	TRES_CMD_KIND_LM_SONICRAVE = 172 UMETA(DisplayName = "LM Sonic Rave"),
	TRES_CMD_KIND_LM_LASTARCANUM = 173 UMETA(DisplayName = "LM Last Arcanum"),
	TRES_CMD_KIND_LM_UNIONDISCODE = 174 UMETA(DisplayName = "LM Union D is Code"),
	TRES_CMD_KIND_LMEX_RAVE = 175 UMETA(DisplayName = "LMEX Rave"),
	TRES_CMD_KIND_LMEX_FINISH = 176 UMETA(DisplayName = "LMEX Finish"),
	TRES_CMD_KIND_LMEX_BREAK = 177 UMETA(DisplayName = "LMEX Break"),
	TRES_CMD_KIND_LMEX_THEEND = 178 UMETA(DisplayName = "LMEX The End"),
	TRES_CMD_KIND_RISKCHARGE = 179 UMETA(DisplayName = "Risk Charge"),
	TRES_CMD_KIND_FINISH_UNIONX = 180 UMETA(DisplayName = "Finish Union X"),
	TRES_CMD_KIND_FINISH_UX1 = 181 UMETA(DisplayName = "Finish UX 1"),
	TRES_CMD_KIND_FINISH_UX2 = 182 UMETA(DisplayName = "Finish UX 2"),
	TRES_CMD_KIND_FINISH_UX3 = 183 UMETA(DisplayName = "Finish UX 3"),
	TRES_CMD_KIND_FINISH_UX4 = 184 UMETA(DisplayName = "Finish UX 4"),
	TRES_CMD_KIND_FINISH_UX5 = 185 UMETA(DisplayName = "Finish UX 5"),
	TRES_CMD_KIND_AF_JETCOASTER_BM = 186 UMETA(DisplayName = "AF Jetcoaster BM"),
	TRES_CMD_KIND_AF_VIKINGSHIP = 187 UMETA(DisplayName = "AF Viking Ship"),
	TRES_CMD_KIND_AF_TEACUP = 188 UMETA(DisplayName = "AF Teacup"),
	TRES_CMD_KIND_AF_SHOOTINGRIDE = 189 UMETA(DisplayName = "AF Shooting Ride"),
	TRES_CMD_KIND_AF_MERRYGOROUND = 190 UMETA(DisplayName = "AF Merry Go Round"),
	TRES_CMD_KIND_AF_WATERRIDE = 191 UMETA(DisplayName = "AF Water Ride"),
	TRES_CMD_KIND_AF_FINISH = 192 UMETA(DisplayName = "AF Finish"),
	TRES_CMD_KIND_FR_SHIELDGUARDIAN = 193 UMETA(DisplayName = "FR Shield Guardian"),
	TRES_CMD_KIND_FR_MOUNTCURLING = 194 UMETA(DisplayName = "FR Mount Curling"),
	TRES_CMD_KIND_FR_GOOFYSHOOT = 195 UMETA(DisplayName = "FR Goofy Shoot"),
	TRES_CMD_KIND_FR_MICKEY = 196 UMETA(DisplayName = "FR Mickey"),
	TRES_CMD_KIND_FR_MICKEYCHAIN = 197 UMETA(DisplayName = "FR Mickey Chain"),
	TRES_CMD_KIND_FR_SNOWCURLING = 198 UMETA(DisplayName = "FR Snow Curling"),
	TRES_CMD_KIND_FR_MIKEBOWLING = 199 UMETA(DisplayName = "FR Mike Bowling"),
	TRES_CMD_KIND_FR_JACKSPIN = 200 UMETA(DisplayName = "FR Jack Spin"),
	TRES_CMD_KIND_FR_SNOWCHASE = 201 UMETA(DisplayName = "FR Snow Chase"),
	TRES_CMD_KIND_FR_POWERSTRIKE = 202 UMETA(DisplayName = "FR Power Strike"),
	TRES_CMD_KIND_FR_GIANTSOLDIER = 203 UMETA(DisplayName = "FR Giant Soldier"),
	TRES_CMD_KIND_FR_ROCKETLASER = 204 UMETA(DisplayName = "FR Rocket Laser"),
	TRES_CMD_KIND_FR_SPINNINGHOLD = 205 UMETA(DisplayName = "FR Spinning Hold"),
	TRES_CMD_KIND_FR_SNOWCOVERSWING = 206 UMETA(DisplayName = "FR Snow Cover Swing"),
	TRES_CMD_KIND_FR_CALLMETEOR = 207 UMETA(DisplayName = "FR Call Me Teor"),
	TRES_CMD_KIND_FR_FLAREFORCE = 208 UMETA(DisplayName = "FR Flare Force"),
	TRES_CMD_KIND_FR_BAYMAXRIDE = 209 UMETA(DisplayName = "FR Baymax Ride"),
	TRES_CMD_KIND_FR_ICEREVENGER = 210 UMETA(DisplayName = "FR Ice Revenger"),
	TRES_CMD_KIND_S_FINISH = 211 UMETA(DisplayName = "S Finish"),
	TRES_CMD_KIND_FR_TRINITY = 212 UMETA(DisplayName = "FR Trinity"),
	TRES_CMD_KIND_FR_SORA = 213 UMETA(DisplayName = "FR Sora"),
	TRES_CMD_KIND_FR_FINISH = 214 UMETA(DisplayName = "FR Finish"),
	TRES_CMD_KIND_BARRIERCRACKER2 = 215 UMETA(DisplayName = "Barrier Cracker 2"),
	TRES_CMD_KIND_BARRIERCRACKER3 = 216 UMETA(DisplayName = "Barrier Cracker 3"),
	TRES_CMD_KIND_BARRIERCRACKER4 = 217 UMETA(DisplayName = "Barrier Cracker 4"),
	TRES_CMD_KIND_GUARDCOUNTER_RO = 218 UMETA(DisplayName = "Guard Counter RO"),
	TRES_CMD_KIND_GUARDCOUNTER_KA = 219 UMETA(DisplayName = "Guard Counter KA"),
	TRES_CMD_KIND_SLIDETURN = 220 UMETA(DisplayName = "Slide Turn"),
	TRES_CMD_KIND_CHANGE_LF = 221 UMETA(DisplayName = "Change LF"),
	TRES_CMD_KIND_CHANGE_DF = 222 UMETA(DisplayName = "Change DF"),
	TRES_CMD_KIND_CHANGE_TF = 223 UMETA(DisplayName = "Change TF"),
	TRES_CMD_KIND_CHANGE_TF2 = 224 UMETA(DisplayName = "Change TF 2"),
	TRES_CMD_KIND_FINISH_TF = 225 UMETA(DisplayName = "Finish TF"),
	TRES_CMD_KIND_FINISH_TF2 = 226 UMETA(DisplayName = "Finish TF 2"),
	TRES_CMD_KIND_FINISH_RO = 227 UMETA(DisplayName = "Finish RO"),
	TRES_CMD_KIND_FINISH_KA = 228 UMETA(DisplayName = "Finish KA"),
	TRES_CMD_KIND_DISPEL = 229 UMETA(DisplayName = "Dispel"),
	TRES_CMD_KIND_QUICKBATTLE = 230 UMETA(DisplayName = "Quick Battle"),
	TRES_CMD_KIND_S_CROSSSHOOT = 231 UMETA(DisplayName = "S Cross Shoot"),
	TRES_CMD_KIND_SWTCH_SORA = 232 UMETA(DisplayName = "Switch Sora"),
	TRES_CMD_KIND_SWTCH_AQUA = 233 UMETA(DisplayName = "Switch Aqua"),
	TRES_CMD_KIND_SWTCH_RIKU = 234 UMETA(DisplayName = "Switch Riku"),
	TRES_CMD_KIND_SWTCH_KAIRI = 235 UMETA(DisplayName = "Switch Kairi"),
	TRES_CMD_KIND_SWTCH_ROXAS = 236 UMETA(DisplayName = "Switch Roxas"),
	TRES_CMD_KIND_FR_POPPINGHOLY = 237 UMETA(DisplayName = "FR Popping Holy"),
	TRES_CMD_KIND_FR_BLIZZAGABOARD = 238 UMETA(DisplayName = "FR Blizzaga Board"),
	TRES_CMD_KIND_FR_THINKOFYOU = 239 UMETA(DisplayName = "FR Think of You"),
	TRES_CMD_KIND_FR_ULTIMATEEND = 240 UMETA(DisplayName = "FR Ultimate End"),
	TRES_CMD_KIND_FR_LINKOFHEARTS = 241 UMETA(DisplayName = "FR Link of Hearts"),
	TRES_CMD_KIND_FR_PROMISEWINGS = 242 UMETA(DisplayName = "FR Promise Wings"),
	TRES_CMD_KIND_LMEX_SLASH = 243 UMETA(DisplayName = "LMEX Slash"),
	TRES_CMD_KIND_ANS_USUAL = 244 UMETA(DisplayName = "AND Easy"),
	TRES_CMD_KIND_ANS_EASY = 245 UMETA(DisplayName = "ANS Easy"),
	TRES_CMD_KIND_ANS_CHALLENGING = 246 UMETA(DisplayName = "ANS Challenging"),
	TRES_CMD_KIND_CARDDRAW = 247 UMETA(DisplayName = "Card Draw"),
	TRES_CMD_KIND_RESERVE248 = 248 UMETA(DisplayName = "Reserve 248"),
	TRES_CMD_KIND_RESERVE249 = 249 UMETA(DisplayName = "Reserve 249"),
	TRES_CMD_KIND_RESERVE250 = 250 UMETA(DisplayName = "Reserve 250"),
	TRES_CMD_KIND_RESERVE251 = 251 UMETA(DisplayName = "Reserve 251"),
	TRES_CMD_KIND_RESERVE252 = 252 UMETA(DisplayName = "Reserve 252"),
	TRES_CMD_KIND_SHOOTFLOW = 253 UMETA(DisplayName = "Shoot Flow"),
	TRES_CMD_KIND_END = 254 UMETA(DisplayName = "End"),
	TRES_CMD_KIND_MAX = 255 UMETA(DisplayName = "MAX")
};


UENUM(BlueprintType)
enum ETresPhysDamageForceLevel
{
	TPDF_LV = 0 UMETA(DisplayName = "LV"),
	TPDF_LV01 = 1 UMETA(DisplayName = "LV 01"),
	TPDF_LV02 = 2 UMETA(DisplayName = "LV 02"),
	TPDF_LV03 = 3 UMETA(DisplayName = "LV 03"),
	_TPDF_LV_MAX = 4 UMETA(DisplayName = "MAX"),
	ETresPhysDamageForceLevel_MAX = 5 UMETA(DisplayName = "Tres Phys Damage Force Level MAX")
};

UENUM(BlueprintType)
enum ETresLevelEntityAppearMode
{
	ETresLevelEntityAppearMode_Immediate = 0 UMETA(DisplayName = "Immediate"),
	ETresLevelEntityAppearMode_Perform1 = 1 UMETA(DisplayName = "Perform 1"),
	ETresLevelEntityAppearMode_Perform2 = 2 UMETA(DisplayName = "Perform 2"),
	ETresLevelEntityAppearMode_Perform3 = 3 UMETA(DisplayName = "Perform 3"),
	ETresLevelEntityAppearMode_Perform4 = 4 UMETA(DisplayName = "Perform 4"),
	ETresLevelEntityAppearMode_Special1 = 5 UMETA(DisplayName = "Special 1"),
	ETresLevelEntityAppearMode_Special2 = 6 UMETA(DisplayName = "Special 2"),
	ETresLevelEntityAppearMode_Special3 = 7 UMETA(DisplayName = "Special 3"),
	ETresLevelEntityAppearMode_IdleWait = 8 UMETA(DisplayName = "Idle Wait"),
	ETresLevelEntityAppearMode_MAX = 9 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresPlayerUniqueID
{
	ETresPlayerUniqueID_SORA_KH3 = 0 UMETA(DisplayName = "Sora KH3"),
	ETresPlayerUniqueID_SORA_KH3CA = 1 UMETA(DisplayName = "Sora KH3: Caribbean"),
	ETresPlayerUniqueID_SORA_KH3MI = 2 UMETA(DisplayName = "Sora KH3: Monsters Inc"),
	ETresPlayerUniqueID_SORA_KH3TS = 3 UMETA(DisplayName = "Sora KH3: Toy Story"),
	ETresPlayerUniqueID_SORA_KH3BX = 4 UMETA(DisplayName = "Sora KH3: Baymax"),
	ETresPlayerUniqueID_SORA_KH3EW = 5 UMETA(DisplayName = "Sora KH3: Final World"),
	ETresPlayerUniqueID_SORA_KH2 = 6 UMETA(DisplayName = "Sora KH2"),
	ETresPlayerUniqueID_SORA_KH1 = 7 UMETA(DisplayName = "Sora KH1"),
	ETresPlayerUniqueID_RIKU_KH3 = 8 UMETA(DisplayName = "Riku KH3"),
	ETresPlayerUniqueID_RIKU_KH29 = 9 UMETA(DisplayName = "Riku 2.9"),
	ETresPlayerUniqueID_AQUA_KH3 = 10 UMETA(DisplayName = "Aqua KH3"),
	ETresPlayerUniqueID_SORA_KH3TUTO = 11 UMETA(DisplayName = "Sora KH3: Tutorial"),
	ETresPlayerUniqueID_SORA_KH3TS_GAME = 12 UMETA(DisplayName = "Sora KH3: Toy Story Game"),
	ETresPlayerUniqueID_SORA_KH3PO = 13 UMETA(DisplayName = "Sora KH3: Pooh"),
	ETresPlayerUniqueID_UNKNOWN = 14 UMETA(DisplayName = "Unknown"),
	ETresPlayerUniqueID_SORA_KH3DL = 15 UMETA(DisplayName = "Sora KH3: Remind"),
	ETresPlayerUniqueID_KAIRI_KH3 = 16 UMETA(DisplayName = "Kairi KH3"),
	ETresPlayerUniqueID_ROXAS_KH3 = 17 UMETA(DisplayName = "Roxas KH3"),
	ETresPlayerUniqueID_MICKEY_KH3MiRx = 18 UMETA(DisplayName = "Mickey KH3: Remind"),
	ETresPlayerUniqueID_SORA_KH3SoKc = 19 UMETA(DisplayName = "Sora KH3: SoKc"),
	ETresPlayerUniqueID_1_MAX = 20 UMETA(DisplayName = "MAX"),
	ETresPlayerUniqueID_MAX = 21 UMETA(DisplayName = "Tres Player Unique ID MAX")
};

UENUM(BlueprintType)
enum ETresChrUniqueID
{
	TRES_CHR_UID_UNKNOWN = 0 UMETA(DisplayName = "Unknown"),
	TRES_CHR_UID_SORA = 1 UMETA(DisplayName = "Sora"),
	TRES_CHR_UID_RIKU = 2 UMETA(DisplayName = "Riku"),
	TRES_CHR_UID_KAIRI = 3 UMETA(DisplayName = "Kairi"),
	TRES_CHR_UID_TERRA = 4 UMETA(DisplayName = "Terra"),
	TRES_CHR_UID_VENTUS = 5 UMETA(DisplayName = "Ventus"),
	TRES_CHR_UID_AQUA = 6 UMETA(DisplayName = "Aqua"),
	TRES_CHR_UID_ROXAS = 7 UMETA(DisplayName = "Roxas"),
	TRES_CHR_UID_LEA = 8 UMETA(DisplayName = "Lea"),
	TRES_CHR_UID_XION = 9 UMETA(DisplayName = "Xion"),
	TRES_CHR_UID_MICKEY = 10 UMETA(DisplayName = "Mickey"),
	TRES_CHR_UID_DONALD = 11 UMETA(DisplayName = "Donald"),
	TRES_CHR_UID_GOOFY = 12 UMETA(DisplayName = "Goofy"),
	TRES_CHR_UID_JACK_SPARROW = 13 UMETA(DisplayName = "Jack Sparrow"),
	TRES_CHR_UID_WOODY = 14 UMETA(DisplayName = "Woody"),
	TRES_CHR_UID_BUZZ = 15 UMETA(DisplayName = "Buzz"),
	TRES_CHR_UID_HERCULES = 16 UMETA(DisplayName = "Hercules"),
	TRES_CHR_UID_RAPUNZEL = 17 UMETA(DisplayName = "Rapunzel"),
	TRES_CHR_UID_FLYNN = 18 UMETA(DisplayName = "Flynn"),
	TRES_CHR_UID_SULLEY = 19 UMETA(DisplayName = "Sulley"),
	TRES_CHR_UID_MIKE = 20 UMETA(DisplayName = "Mike"),
	TRES_CHR_UID_BOO = 21 UMETA(DisplayName = "Boo"),
	TRES_CHR_UID_MARSHMALLOW = 22 UMETA(DisplayName = "Marshmallow"),
	TRES_CHR_UID_BAYMAX = 23 UMETA(DisplayName = "Baymax"),
	TRES_CHR_UID_VEHICLE_GIGAS_POWER = 24 UMETA(DisplayName = "Vehicle Gigas Power"),
	TRES_CHR_UID_VEHICLE_GIGAS_POWER_GAME = 25 UMETA(DisplayName = "Vehicle Gigas Power Game"),
	TRES_CHR_UID_VEHICLE_GIGAS_POWER_ACE = 26 UMETA(DisplayName = "Vehicle Gigas Power Ace"),
	TRES_CHR_UID_VEHICLE_GIGAS_SPEED = 27 UMETA(DisplayName = "Vehicle Gigas Speed"),
	TRES_CHR_UID_VEHICLE_GIGAS_SPEED_GAME = 28 UMETA(DisplayName = "Vehicle Gigas Speed Game"),
	TRES_CHR_UID_VEHICLE_GIGAS_SPEED_ACE = 29 UMETA(DisplayName = "Vehicle Gigas Speed Ace"),
	TRES_CHR_UID_VEHICLE_GIGAS_LONG = 30 UMETA(DisplayName = "Vehicle Gigas Long"),
	TRES_CHR_UID_VEHICLE_GIGAS_LONG_GAME = 31 UMETA(DisplayName = "Vehicle Gigas Long Game"),
	TRES_CHR_UID_VEHICLE_GIGAS_LONG_ACE = 32 UMETA(DisplayName = "Vehicle Gigas Long Ace"),
	TRES_CHR_UID_VEHICLE_SPECIAL_SHIP = 33 UMETA(DisplayName = "Vehicle Special Ship"),
	TRES_CHR_UID_VEHICLE_BLACK_PEARL = 34 UMETA(DisplayName = "Vehicle Black Pearl"),
	TRES_CHR_UID_VEHICLE_SMALLAIRPLANE = 35 UMETA(DisplayName = "Vehicle Small Airplane"),
	TRES_CHR_UID_FRD_RIKU = 36 UMETA(DisplayName = "FRD Riku"),
	TRES_CHR_UID_FRD_AQUA = 37 UMETA(DisplayName = "FRD Aqua"),
	TRES_CHR_UID_ENEMY = 38 UMETA(DisplayName = "Enemy"),
	TRES_CHR_UID_FRD_SORA = 39 UMETA(DisplayName = "FRD Sora"),
	TRES_CHR_UID_MAX = 40 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresEnemyUniqueID
{
	TRES_ENEMY_UID_UNKNOWN = 0 UMETA(DisplayName = "Unknown"),
	TRES_ENEMY_UID_EX001 = 1,
	TRES_ENEMY_UID_EX003 = 2,
	TRES_ENEMY_UID_EX004 = 3,
	TRES_ENEMY_UID_EX005 = 4,
	TRES_ENEMY_UID_EX016 = 5,
	TRES_ENEMY_UID_EX081 = 6,
	TRES_ENEMY_UID_DW401 = 7,
	TRES_ENEMY_UID_DW401_s0 = 8,
	TRES_ENEMY_UID_DW401_s1 = 9,
	TRES_ENEMY_UID_DW402 = 10,
	TRES_ENEMY_UID_DW402_s1 = 11,
	TRES_ENEMY_UID_DW405 = 12,
	TRES_ENEMY_UID_DW407 = 13,
	TRES_ENEMY_UID_EX002 = 14,
	TRES_ENEMY_UID_EX006 = 15,
	TRES_ENEMY_UID_EX007 = 16,
	TRES_ENEMY_UID_EX009 = 17,
	TRES_ENEMY_UID_EX010 = 18,
	TRES_ENEMY_UID_EX011 = 19,
	TRES_ENEMY_UID_EX012 = 20,
	TRES_ENEMY_UID_EX013 = 21,
	TRES_ENEMY_UID_EX014 = 22,
	TRES_ENEMY_UID_EX015 = 23,
	TRES_ENEMY_UID_EX017 = 24,
	TRES_ENEMY_UID_EX036 = 25,
	TRES_ENEMY_UID_EX037 = 26,
	TRES_ENEMY_UID_EX038 = 27,
	TRES_ENEMY_UID_EX018 = 28,
	TRES_ENEMY_UID_EX032 = 29,
	TRES_ENEMY_UID_EX033 = 30,
	TRES_ENEMY_UID_EX020 = 31,
	TRES_ENEMY_UID_EX021 = 32,
	TRES_ENEMY_UID_EX026 = 33,
	TRES_ENEMY_UID_EX027 = 34,
	TRES_ENEMY_UID_EX028 = 35,
	TRES_ENEMY_UID_EX035 = 36,
	TRES_ENEMY_UID_EX039 = 37,
	TRES_ENEMY_UID_EX041 = 38,
	TRES_ENEMY_UID_EX042 = 39,
	TRES_ENEMY_UID_EX043 = 40,
	TRES_ENEMY_UID_EX044 = 41,
	TRES_ENEMY_UID_EX045 = 42,
	TRES_ENEMY_UID_EX046 = 43,
	TRES_ENEMY_UID_EX047 = 44,
	TRES_ENEMY_UID_EX048 = 45,
	TRES_ENEMY_UID_EX049 = 46,
	TRES_ENEMY_UID_EX050 = 47,
	TRES_ENEMY_UID_EX051 = 48,
	TRES_ENEMY_UID_EX052 = 49,
	TRES_ENEMY_UID_EX053 = 50,
	TRES_ENEMY_UID_EX054 = 51,
	TRES_ENEMY_UID_EX055 = 52,
	TRES_ENEMY_UID_EX056 = 53,
	TRES_ENEMY_UID_EX059 = 54,
	TRES_ENEMY_UID_EX061 = 55,
	TRES_ENEMY_UID_EX065 = 56,
	TRES_ENEMY_UID_EX066 = 57,
	TRES_ENEMY_UID_EX067 = 58,
	TRES_ENEMY_UID_EX068 = 59,
	TRES_ENEMY_UID_EX073 = 60,
	TRES_ENEMY_UID_EX082 = 61,
	TRES_ENEMY_UID_EX085 = 62,
	TRES_ENEMY_UID_EX086 = 63,
	TRES_ENEMY_UID_EX086_s0 = 64,
	TRES_ENEMY_UID_EX086_s1 = 65,
	TRES_ENEMY_UID_EX087 = 66,
	TRES_ENEMY_UID_EX093 = 67,
	TRES_ENEMY_UID_EX094 = 68,
	TRES_ENEMY_UID_EX095 = 69,
	TRES_ENEMY_UID_EX101 = 70,
	TRES_ENEMY_UID_EX105 = 71,
	TRES_ENEMY_UID_EX106 = 72,
	TRES_ENEMY_UID_EX107 = 73,
	TRES_ENEMY_UID_EX110 = 74,
	TRES_ENEMY_UID_EX113 = 75,
	TRES_ENEMY_UID_EX114 = 76,
	TRES_ENEMY_UID_EX201 = 77,
	TRES_ENEMY_UID_EX202 = 78,
	TRES_ENEMY_UID_EX203 = 79,
	TRES_ENEMY_UID_EX205 = 80,
	TRES_ENEMY_UID_EX301 = 81,
	TRES_ENEMY_UID_EX302 = 82,
	TRES_ENEMY_UID_EX316 = 83,
	TRES_ENEMY_UID_EX304 = 84,
	TRES_ENEMY_UID_EX305 = 85,
	TRES_ENEMY_UID_EX306 = 86,
	TRES_ENEMY_UID_EX307 = 87,
	TRES_ENEMY_UID_EX308 = 88,
	TRES_ENEMY_UID_EX309 = 89,
	TRES_ENEMY_UID_EX310 = 90,
	TRES_ENEMY_UID_EX311 = 91,
	TRES_ENEMY_UID_EX313 = 92,
	TRES_ENEMY_UID_EX322 = 93,
	TRES_ENEMY_UID_EX325 = 94,
	TRES_ENEMY_UID_EX326 = 95,
	TRES_ENEMY_UID_EX701 = 96,
	TRES_ENEMY_UID_EX702 = 97,
	TRES_ENEMY_UID_EX703 = 98,
	TRES_ENEMY_UID_EX711 = 99,
	TRES_ENEMY_UID_EX721 = 100,
	TRES_ENEMY_UID_EX731 = 101,
	TRES_ENEMY_UID_EX732 = 102,
	TRES_ENEMY_UID_EX734 = 103,
	TRES_ENEMY_UID_EX761 = 104,
	TRES_ENEMY_UID_EX047_s0 = 105,
	TRES_ENEMY_UID_EX771 = 106,
	TRES_ENEMY_UID_EX77101 = 107,
	TRES_ENEMY_UID_EX77102 = 108,
	TRES_ENEMY_UID_EX047_s1 = 109,
	TRES_ENEMY_UID_EX801 = 110,
	TRES_ENEMY_UID_EX806 = 111,
	TRES_ENEMY_UID_EX816 = 112,
	TRES_ENEMY_UID_EX830 = 113,
	TRES_ENEMY_UID_EX831 = 114,
	TRES_ENEMY_UID_EX832 = 115,
	TRES_ENEMY_UID_EX833 = 116,
	TRES_ENEMY_UID_EX834 = 117,
	TRES_ENEMY_UID_EX840 = 118,
	TRES_ENEMY_UID_EX841 = 119,
	TRES_ENEMY_UID_EX842 = 120,
	TRES_ENEMY_UID_EX843 = 121,
	TRES_ENEMY_UID_EX844 = 122,
	TRES_ENEMY_UID_EX845 = 123,
	TRES_ENEMY_UID_BX059 = 124,
	TRES_ENEMY_UID_BX901 = 125,
	TRES_ENEMY_UID_EX047_s2 = 126,
	TRES_ENEMY_UID_BX903 = 127,
	TRES_ENEMY_UID_CA901 = 128,
	TRES_ENEMY_UID_FZ903 = 129,
	TRES_ENEMY_UID_HE001 = 130,
	TRES_ENEMY_UID_HE902 = 131,
	TRES_ENEMY_UID_HE903 = 132,
	TRES_ENEMY_UID_HE904 = 133,
	TRES_ENEMY_UID_CA401 = 134,
	TRES_ENEMY_UID_CA402 = 135,
	TRES_ENEMY_UID_CA403 = 136,
	TRES_ENEMY_UID_CA404 = 137,
	TRES_ENEMY_UID_CA405 = 138,
	TRES_ENEMY_UID_EX071 = 139,
	TRES_ENEMY_UID_EX072 = 140,
	TRES_ENEMY_UID_EX407 = 141,
	TRES_ENEMY_UID_EX064 = 142,
	TRES_ENEMY_UID_EX047_s3 = 143,
	TRES_ENEMY_UID_EX047_s4 = 144,
	TRES_ENEMY_UID_EX409 = 145,
	TRES_ENEMY_UID_EX751 = 146,
	TRES_ENEMY_UID_EX781 = 147,
	TRES_ENEMY_UID_MAX = 148 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresEncountVolumeSnapTarget
{
	Snap_Nothing = 0 UMETA(DisplayName = "Nothing"),
	Snap_Ground = 1 UMETA(DisplayName = "Ground"),
	Snap_Ocean = 2 UMETA(DisplayName = "Ocean"),
	Snap_MAX = 3 UMETA(DisplayName = "MAX")
};


UENUM(BlueprintType)
enum ETresEncountVolumeVehicleMode
{
	DoNotCare = 0 UMETA(DisplayName = "Do Not Care"),
	NoVehicle = 1 UMETA(DisplayName = "No Vehicle"),
	OnlyVehicle = 2 UMETA(DisplayName = "Only Vehicle"),
	ETresEncountVolumeVehicleMode_MAX = 3 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresEncountDisableVolumeType
{
	Type_Box = 0 UMETA(DisplayName = "Box"),
	Type_Circle = 1 UMETA(DisplayName = "Circle"),
	ETresEncountDisableVolumeType_Type_MAX = 2 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresUIHudCommandExKind
{
	ETresUIHudCommandExKind_None = 0,
	Railscope1 = 1,
	Railscope2 = 2,
	RailChange = 3,
	HeWorkshop = 4,
	HeWorkshop_Finish = 5,
	TsToyGame = 6,
	RaDanceCommand = 7,
	RaDanceRapunzel = 8,
	RaDanceRapunzel_Finish = 9,
	BxCommand = 10,
	BxDarkBaymax = 11,
	BxDarkBaymax_Rail = 12,
	BxDarkBaymax_Finish = 13,
	CaSpecialShipCommand = 14,
	CaBlackPearlCommand = 15,
	ShootFlow_Rainbow = 16,
	ShootFlow_Burst = 17,
	ShootFlow_Shining = 18,
	ShootFlow_DarkVolley = 19,
	ShootFlow_BurstR = 20,
	ETresUIHudCommandExKind_1_MAX = 21,
	ETresUIHudCommandExKind_MAX = 22 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresGameHelp
{
	Help_00100 = 0,
	Help_00200 = 1,
	Help_00300 = 2,
	Help_00400 = 3,
	Help_00450 = 4,
	Help_00500 = 5,
	Help_00600 = 6,
	Help_00700 = 7,
	Help_00800 = 8,
	Help_00900 = 9,
	Help_01000 = 10,
	Help_01100 = 11,
	Help_01200 = 12,
	Help_01300 = 13,
	Help_01400 = 14,
	Help_01500 = 15,
	Help_01600 = 16,
	Help_01700 = 17,
	Help_01800 = 18,
	Help_01900 = 19,
	Help = 20,
	Help01 = 21,
	Help02 = 22,
	Help03 = 23,
	Help04 = 24,
	Help05 = 25,
	Help06 = 26,
	Help07 = 27,
	Help08 = 28,
	Help09 = 29,
	Help10 = 30,
	Help11 = 31,
	Help12 = 32,
	Help13 = 33,
	Help14 = 34,
	Help15 = 35,
	Help16 = 36,
	Help17 = 37,
	Help18 = 38,
	Help19 = 39,
	Help20 = 40,
	Help21 = 41,
	Help22 = 42,
	Help23 = 43,
	Help24 = 44,
	Help25 = 45,
	Help26 = 46,
	Help27 = 47,
	Help28 = 48,
	Help29 = 49,
	Help30 = 50,
	Help31 = 51,
	Help32 = 52,
	Help33 = 53,
	Help34 = 54,
	Help35 = 55,
	Help36 = 56,
	Help37 = 57,
	Help38 = 58,
	Help39 = 59,
	Help40 = 60,
	Help41 = 61,
	Help42 = 62,
	Help43 = 63,
	Help44 = 64,
	Help45 = 65,
	Help46 = 66,
	Help47 = 67,
	Help48 = 68,
	Help49 = 69,
	Help50 = 70,
	Help51 = 71,
	Help52 = 72,
	Help53 = 73,
	Help54 = 74,
	Help55 = 75,
	Help56 = 76,
	Help57 = 77,
	Help58 = 78,
	Help59 = 79,
	Help60 = 80,
	Help61 = 81,
	Help62 = 82,
	Help63 = 83,
	Help64 = 84,
	Help65 = 85,
	Help66 = 86,
	Help67 = 87,
	Help68 = 88,
	Help69 = 89,
	Help70 = 90,
	Help71 = 91,
	Help72 = 92,
	Help73 = 93,
	Help74 = 94,
	Help75 = 95,
	Help76 = 96,
	Help77 = 97,
	Help78 = 98,
	Help79 = 99,
	Help80 = 100,
	Help81 = 101,
	Help82 = 102,
	Help83 = 103,
	Help84 = 104,
	Help85 = 105,
	Help86 = 106,
	Help87 = 107,
	Help88 = 108,
	Help89 = 109,
	Help90 = 110,
	Help91 = 111,
	Help92 = 112,
	Help93 = 113,
	Help94 = 114,
	Help95 = 115,
	Help96 = 116,
	Help97 = 117,
	Help98 = 118,
	Help99 = 119,
	Help100 = 120,
	Help101 = 121,
	Help102 = 122,
	Help103 = 123,
	Help104 = 124,
	ETresGameHelp_Help_00650 = 125 UMETA(DisplayName = "Help 00650"),
	ETresGameHelp_Help105 = 126 UMETA(DisplayName = "Help 105"),
	ETresGameHelp_Help106 = 127 UMETA(DisplayName = "Help 106"),
	ETresGameHelp_Help107 = 128 UMETA(DisplayName = "Help 107"),
	ETresGameHelp_Help108 = 129 UMETA(DisplayName = "Help 108"),
	Help109 = 130,
	Help110 = 131,
	Help111 = 132,
	Help112 = 133,
	Help113 = 134,
	Help114 = 135,
	Help115 = 136,
	Help116 = 137,
	Help117 = 138,
	Help118 = 139,
	Help119 = 140,
	ETresGameHelp_Help120 = 141,
	ETresGameHelp_Help121 = 142,
	ETresGameHelp_Help122 = 143,
	ETresGameHelp_Help123 = 144,
	ETresGameHelp_1_Max = 145 UMETA(DisplayName = "MAX"),
	ETresGameHelp_Invalid = 146 UMETA(DisplayName = "Invalid"),
	ETresGameHelp_MAX = 147 UMETA(DisplayName = "Tres Game Help MAX")
};

UENUM(BlueprintType)
enum ETresUISnowSlideCountDownType
{
	ETresUISnowSlideCountDownType_Three = 0,
	ETresUISnowSlideCountDownType_Two = 1,
	ETresUISnowSlideCountDownType_One = 2,
	ETresUISnowSlideCountDownType_Start = 3,
	ETresUISnowSlideCountDownType_Finish = 4,
	ETresUISnowSlideCountDownType_1_Max = 5 UMETA(DisplayName = "MAX"),
	ETresUISnowSlideCountDownType_MAX = 6 UMETA(DisplayName = "Tres UI Snow Slide Count Down Type MAX")
};

UENUM(BlueprintType)
enum ETresUITimerColor
{
	ETresUITimerColor_Common = 0 UMETA(DisplayName = "Common"),
	ETresUITimerColor_Red1 = 1 UMETA(DisplayName = "Red 1"),
	ETresUITimerColor_Red2 = 2 UMETA(DisplayName = "Red 2"),
	ETresUITimerColor_MAX = 3 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresUIMissionGageIconType
{
	ETresUIMissionGageIconType_ComicalBattle1 = 0 UMETA(DisplayName = "Comical Battle 1"),
	ETresUIMissionGageIconType_ComicalBattle2 = 1 UMETA(DisplayName = "Comical Battle 2"),
	ETresUIMissionGageIconType_ComicalBattle3 = 2 UMETA(DisplayName = "Comical Battle 3"),
	ETresUIMissionGageIconType_1_Max = 3 UMETA(DisplayName = "MAX"),
	ETresUIMissionGageIconType_MAX = 4 UMETA(DisplayName = "Tres UI Mission Gage Icon Type MAX")
};


UENUM(BlueprintType)
enum ETresUILoadingScreenType
{
	ETresUILoadingScreenType_NORMAL = 0 UMETA(DisplayName = "Normal"),
	ETresUILoadingScreenType_EXTRA = 1 UMETA(DisplayName = "Extra"),
	ETresUILoadingScreenType_1_Max = 2 UMETA(DisplayName = "MAX"),
	ETresUILoadingScreenType_MAX = 3 UMETA(DisplayName = "Tres UI Loading Screen Type MAX")
};

UENUM(BlueprintType)
enum ETresUIMissionGageColorType
{
	ETresUIMissionGageColorType_Yellow = 0 UMETA(DisplayName = "Yellow"),
	ETresUIMissionGageColorType_Red = 1 UMETA(DisplayName = "Red"),
	ETresUIMissionGageColorType_Green = 2 UMETA(DisplayName = "Green"),
	ETresUIMissionGageColorType_1_Max = 3 UMETA(DisplayName = "MAX"),
	ETresUIMissionGageColorType_MAX = 4 UMETA(DisplayName = "Tres UI Mission Gage Color Type MAX")
};

UENUM(BlueprintType)
enum ETresUIHudSpecialShipMarker
{
	ETresUIHudSpecialShipMarker_Player = 0 UMETA(DisplayName = "Player"),
	ETresUIHudSpecialShipMarker_Enemy = 1 UMETA(DisplayName = "Enemy"),
	ETresUIHudSpecialShipMarker_1_MAX = 2 UMETA(DisplayName = "MAX"),
	ETresUIHudSpecialShipMarker_MAX = 3 UMETA(DisplayName = "Tres UI HUD Special Ship Marker MAX")
};

UENUM(BlueprintType)
enum ETresUIHudPuddingCountDown
{
	ETresUIHudPuddingCountDown_Three = 0,
	ETresUIHudPuddingCountDown_Two = 1,
	ETresUIHudPuddingCountDown_One = 2,
	ETresUIHudPuddingCountDown_Start = 3,
	ETresUIHudPuddingCountDown_Finish = 4,
	ETresUIHudPuddingCountDown_1_MAX = 5,
	ETresUIHudPuddingCountDown_MAX = 6
};

UENUM(BlueprintType)
enum ETresUIHudBlackPearlMarker
{
	ETresUIHudBlackPearlMarker_Player = 0,
	ETresUIHudBlackPearlMarker_BlackPearl = 1,
	ETresUIHudBlackPearlMarker_1_MAX = 2,
	ETresUIHudBlackPearlMarker_MAX = 3
};

UENUM(BlueprintType)
enum ETresUIHudBlackPearlAlert
{
	ETresUIHudBlackPearlAlert_Normal = 0,
	ETresUIHudBlackPearlAlert_Blink1 = 1,
	ETresUIHudBlackPearlAlert_Blink2 = 2,
	ETresUIHudBlackPearlAlert_1_MAX = 3,
	ETresUIHudBlackPearlAlert_MAX = 4
};

UENUM(BlueprintType)
enum ETresUIHudBaymaxHero
{
	ETresUIHudBaymaxHero_Lemon = 0,
	ETresUIHudBaymaxHero_Tomago = 1,
	ETresUIHudBaymaxHero_Wasabi = 2,
	ETresUIHudBaymaxHero_Fred = 3,
	ETresUIHudBaymaxHero_1_MAX = 4,
	ETresUIHudBaymaxHero_MAX = 5
};

UENUM(BlueprintType)
enum ETresUIHudBaymaxCountDown
{
	ETresUIHudBaymaxCountDown_Ready = 0,
	ETresUIHudBaymaxCountDown_Three = 1,
	ETresUIHudBaymaxCountDown_Two = 2,
	ETresUIHudBaymaxCountDown_One = 3,
	ETresUIHudBaymaxCountDown_Go = 4,
	ETresUIHudBaymaxCountDown_Finish = 5,
	ETresUIHudBaymaxCountDown_Finish_End = 6,
	ETresUIHudBaymaxCountDown_1_MAX = 7,
	ETresUIHudBaymaxCountDown_MAX = 8
};

UENUM(BlueprintType)
enum ETresUICinematicCockpitID
{
	ETresUICinematicCockpitID_None = 0,
	ETresUICinematicCockpitID_HudOlaf = 1,
	ETresUICinematicCockpitID_HudLeft = 2,
	ETresUICinematicCockpitID_MAX = 3
};

UENUM(BlueprintType)
enum ETresUITextAlignH
{
	ETresUITextAlignH_Left = 0,
	ETresUITextAlignH_Center = 1,
	ETresUITextAlignH_Right = 2,
	ETresUITextAlignH_MAX = 3
};

UENUM(BlueprintType)
enum ETresUITextAlignV
{
	ETresUITextAlignV_Top = 0,
	ETresUITextAlignV_Center = 1,
	ETresUITextAlignV_Bottom = 2,
	ETresUITextAlignV_MAX = 3
};

UENUM(BlueprintType)
enum ETresUICutsceneTextShowMethod
{
	ETresUICutsceneTextShowMethod_None = 0,
	ETresUICutsceneTextShowMethod_Fade = 1,
	ETresUICutsceneTextShowMethod_LineFade = 2,
	ETresUICutsceneTextShowMethod_MAX = 3
};

UENUM(BlueprintType)
enum ETresUICutsceneTextHideMethod
{
	ETresUICutsceneTextHideMethod_None = 0,
	ETresUICutsceneTextHideMethod_Fade = 1,
	ETresUICutsceneTextHideMethod_MAX = 2
};

UENUM(BlueprintType)
enum ETresUIPadButtonType
{
	TUPBT_NONE = 0,
	TUPBT_RIGHT = 1,
	TUPBT_UP = 2,
	TUPBT_LEFT = 3,
	TUPBT_DOWN = 4,
	TUPBT_R1 = 5,
	TUPBT_L1 = 6,
	TUPBT_R2 = 7,
	TUPBT_L2 = 8,
	TUPBT_TOUCH = 9,
	TUPBT_R2HOLD = 10,
	TUPBT_DECIDE = 11,
	TUPBT_CANCEL = 12,
	TUPBT_RIGHT_L = 13,
	TUPBT_UP_L = 14,
	TUPBT_LEFT_L = 15,
	TUPBT_DOWN_L = 16,
	TUPBT_KEYUP = 17,
	TUPBT_KEYLEFT = 18,
	TUPBT_KEYDOWN = 19,
	TUPBT_KEYRIGHT = 20,
	TUPBT_KEYUP_L = 21,
	TUPBT_KEYLEFT_L = 22,
	TUPBT_KEYDOWN_L = 23,
	TUPBT_KEYRIGHT_L = 24,
	TUPBT_TOUCH_L = 25,
	TUPBT_R2_L = 26,
	TUPBT_L2_L = 27,
	TUPBT_OPTION = 28,
	TUPBT_LSTICK = 29,
	TUPBT_RSTICK = 30,
	TUPBT_LSTICK_UP = 31,
	TUPBT_LSTICK_DOWN = 32,
	TUPBT_LSTICK_LEFT = 33,
	TUPBT_LSTICK_RIGHT = 34,
	TUPBT_L3 = 35,
	TUPBT_DECIDE_L = 36,
	TUPBT_CANCEL_L = 37,
	TUPBT_MAX = 38
};

UENUM(BlueprintType)
enum ETresUISubtitleUsage
{
	ETresUISubtitleUsage_Cutscene = 0,
	ETresUISubtitleUsage_FieldVoice = 1,
	ETresUISubtitleUsage_Talk = 2,
	ETresUISubtitleUsage_MAX = 3
};

UENUM(BlueprintType)
enum ETresUISnowSlideRank
{
	ETresUISnowSlideRank_A = 0,
	ETresUISnowSlideRank_B = 1,
	ETresUISnowSlideRank_C = 2,
	ETresUISnowSlideRank_D = 3,
	ETresUISnowSlideRank_1_Max = 4,
	ETresUISnowSlideRank_MAX = 5
};

UENUM(BlueprintType)
enum ETresUIMessageBGColor
{
	MESSAGE_BG_COLOR_BLACK = 0,
	MESSAGE_BG_COLOR_RED = 1,
	MESSAGE_BG_COLOR_BLUE = 2,
	MESSAGE_BG_COLOR_DEBUG = 3,
	MESSAGE_BG_COLOR_MAX = 4
};

UENUM(BlueprintType)
enum ETresUIMessageTitleType
{
	MESSAGE_TITLE_TYPE_NONE = 0,
	MESSAGE_TITLE_TYPE_INFORMATION = 1,
	MESSAGE_TITLE_TYPE_QUESTION = 2,
	MESSAGE_TITLE_TYPE_MAX = 3
};

UENUM(BlueprintType)
enum ETresUILoadingScreenBGColor
{
	ETresUILoadingScreenBGColor_BLACK = 0,
	ETresUILoadingScreenBGColor_WHITE = 1,
	ETresUILoadingScreenBGColor_1_Max = 2,
	ETresUILoadingScreenBGColor_MAX = 3
};

UENUM(BlueprintType)
enum ETresUIHudCommonKind
{
	ETresUIHudCommonKind_None = 0,
	ETresUIHudCommonKind_Score = 1,
	ETresUIHudCommonKind_Score_Chain = 2,
	ETresUIHudCommonKind_Score5 = 3,
	ETresUIHudCommonKind_Score5_Chain = 4,
	ETresUIHudCommonKind_Score6 = 5,
	ETresUIHudCommonKind_Score6_Chain = 6,
	ETresUIHudCommonKind_Height = 7,
	ETresUIHudCommonKind_HitCount = 8,
	ETresUIHudCommonKind_1_MAX = 9,
	ETresUIHudCommonKind_MAX = 10
};

UENUM(BlueprintType)
enum ETresUIHudCommonIcon
{
	ETresUIHudCommonIcon_Attraction = 0,
	ETresUIHudCommonIcon_Ralph = 1,
	ETresUIHudCommonIcon_Ariel = 2,
	ETresUIHudCommonIcon_RaDance = 3,
	ETresUIHudCommonIcon_SnowSlide = 4,
	ETresUIHudCommonIcon_Pudding_Cherry = 5,
	ETresUIHudCommonIcon_Pudding_Strawberry = 6,
	ETresUIHudCommonIcon_Pudding_Orange = 7,
	ETresUIHudCommonIcon_Pudding_Banana = 8,
	ETresUIHudCommonIcon_Pudding_Grape = 9,
	ETresUIHudCommonIcon_Pudding_Melon = 10,
	ETresUIHudCommonIcon_Pudding_Watermelon = 11,
	ETresUIHudCommonIcon_1_MAX = 12,
	ETresUIHudCommonIcon_MAX = 13
};

UENUM(BlueprintType)
enum ETresUIHudBaymaxResult
{
	ETresUIHudBaymaxResult_RankA = 0,
	ETresUIHudBaymaxResult_RankB = 1,
	ETresUIHudBaymaxResult_RankC = 2,
	ETresUIHudBaymaxResult_RankD = 3,
	ETresUIHudBaymaxResult_1_MAX = 4,
	ETresUIHudBaymaxResult_MAX = 5
};

UENUM(BlueprintType)
enum ETresUIHudBaymaxKind
{
	ETresUIHudBaymaxKind_None = 0,
	ETresUIHudBaymaxKind_FlashTracer = 1,
	ETresUIHudBaymaxKind_FlashTracer_MiniGame = 2,
	ETresUIHudBaymaxKind_HeroRescue = 3,
	ETresUIHudBaymaxKind_DarkCube = 4,
	ETresUIHudBaymaxKind_1_MAX = 5,
	ETresUIHudBaymaxKind_MAX = 6
};

UENUM(BlueprintType)
enum ETresUIGradeTextValue
{
	ETresUIGradeTextValue_TOOFAST = 0,
	ETresUIGradeTextValue_GOOD = 1,
	ETresUIGradeTextValue_EXCELLENT = 2,
	ETresUIGradeTextValue_TOOSLOW = 3,
	ETresUIGradeTextValue_SUCCESSFUL = 4,
	ETresUIGradeTextValue_1_Max = 5,
	ETresUIGradeTextValue_None = 6,
	ETresUIGradeTextValue_MAX = 7
};

UENUM(BlueprintType)
enum ETresUIGameDataInstallMessageType
{
	ETresUIGameDataInstallMessageType_Block = 0,
	ETresUIGameDataInstallMessageType_Wait = 1,
	ETresUIGameDataInstallMessageType_MAX = 2
};

UENUM(BlueprintType)
enum ETresUIOlafPartsType
{
	ETresUIOlafPartsType_Head = 0,
	ETresUIOlafPartsType_Body = 1,
	ETresUIOlafPartsType_Leg = 2,
	ETresUIOlafPartsType_1_Max = 3,
	ETresUIOlafPartsType_MAX = 4
};

UENUM(BlueprintType)
enum ETresUIGigasGameGimmickType
{
	ETresUIGigasGameGimmickType_SparkTrap = 0,
	ETresUIGigasGameGimmickType_HeatBlast = 1,
	ETresUIGigasGameGimmickType_CrystalSmash = 2,
	ETresUIGigasGameGimmickType_MAX = 3
};

UENUM(BlueprintType)
enum ETresCinematicPlayerStateType
{
	TCPST_NONE = 0,
	TCPST_TPVIEW = 1,
	TCPST_CLEAR = 2,
	TCPST_FORCE_CLEAR = 3,
	_TCPST_MAX = 4,
	ETresCinematicPlayerStateType_MAX = 5
};

UENUM(BlueprintType)
enum ETresCinematicPlayerStyleType
{
	ETresCinematicPlayerStyleType_NONE = 0,
	WEAR_L0_WEAPON_L1 = 1,
	WEAR_L1_WEAPON_L0 = 2,
	WEAR_L1_WEAPON_L1 = 3,
	WEAR_L2_WEAPON_L0 = 4,
	WEAR_L2_WEAPON_L1 = 5,
	ETresCinematicPlayerStyleType_1_MAX = 6,
	ETresCinematicPlayerStyleType_MAX = 7
};

UENUM(BlueprintType)
enum ETresMapJumpFadeKind
{
	MAPJUMP_FADE_KIND_NONE = 0,
	MAPJUMP_FADE_KIND_FADEOUT = 1,
	MAPJUMP_FADE_KIND_WHITEOUT = 2,
	MAPJUMP_FADE_KIND_WIPEOUT = 3,
	MAPJUMP_FADE_KIND_MAX = 4
};

UENUM(BlueprintType)
enum ETresVictoryBonusKind
{
	ETresVictoryBonusKind_NONE = 0,
	HP_UP3 = 1,
	HP_UP5 = 2,
	HP_UP10 = 3,
	HP_UP15 = 4,
	HP_UP30 = 5,
	_RESERVE6 = 6,
	_RESERVE7 = 7,
	MP_UP3 = 8,
	MP_UP5 = 9,
	MP_UP10 = 10,
	MP_UP20 = 11,
	_RESERVE12 = 12,
	_RESERVE13 = 13,
	_RESERVE14 = 14,
	_RESERVE15 = 15,
	DEF_SLOT_UP1 = 16,
	ACC_SLOT_UP1 = 17,
	ITEM_SLOT_UP1 = 18,
	_RESERVE19 = 19,
	_RESERVE20 = 20,
	_RESERVE21 = 21,
	_RESERVE22 = 22,
	_RESERVE23 = 23,
	MELEM_FIRE = 24,
	MELEM_BLIZZARD = 25,
	MELEM_THUNDER = 26,
	MELEM_WATER = 27,
	MELEM_AERO = 28,
	MELEM_CURE = 29,
	_RESERVE30 = 30,
	_RESERVE31 = 31,
	ETresVictoryBonusKind_TYPE_MAX = 32,
	ETresVictoryBonusKind_MAX = 33
};

UENUM(BlueprintType)
enum ETresAbilityKind
{
	ETresAbilityKind_NONE = 0,
	AIR_RECOVERY = 1,
	BLOW_COUNTER = 2,
	REFLECT_GUARD = 3,
	GUARD_COUNTER = 4,
	REVENGEIMPACT = 5,
	REVENGEDIVE = 6,
	REVENGE_EX = 7,
	RISKDODGE = 8,
	RD_COUNTER = 9,
	SLASH_UPPER = 10,
	AIR_ROLL_BEAT = 11,
	AIR_DOWN = 12,
	TRIPPLE_SLASH = 13,
	CHARGE_THRUST = 14,
	MAGICFLUSH = 15,
	HIGHJUMP = 16,
	DOUBLEFLIGHT = 17,
	SUPERJUMP = 18,
	SUPERSLIDE = 19,
	GLIDE = 20,
	LIBRA = 21,
	DODGE = 22,
	AIRSLIDE = 23,
	AIRDODGE = 24,
	MP_SAFETY = 25,
	EXPZERO = 26,
	FRIEND_AID = 27,
	COMBO_PLUS = 28,
	AIRCOMBO_PLUS = 29,
	COMBO_MASTER = 30,
	COMBO_UP = 31,
	AIRCOMBO_UP = 32,
	FIRE_UP = 33,
	BLIZZARD_UP = 34,
	THUNDER_UP = 35,
	WATER_UP = 36,
	AERO_UP = 37,
	WIZZARD_STAR = 38,
	LUCK_UP = 39,
	ITEM_UP = 40,
	PRIZE_DRAW = 41,
	FOCUS_BOOST = 42,
	LEAF_VEIL = 43,
	LAST_LEAVE = 44,
	COMBO_LEAVE = 45,
	FOCUS_ASPIR = 46,
	ATTRACTION_TIME = 47,
	LINK_BOOST = 48,
	FORM_TIME = 49,
	DEFENDER = 50,
	CRITICAL_HALF = 51,
	DAMAGE_ASPIR = 52,
	MP_HASTE = 53,
	MP_HASTERA = 54,
	MP_HASTEGA = 55,
	MAGIC_COMBO_SAVE = 56,
	MAGIC_COMBO_UP = 57,
	WALK_REGENE = 58,
	WALK_HEALING = 59,
	MAGIC_DRAW = 60,
	MASTER_DRAW = 61,
	ATTRACTION_UP = 62,
	BURN_GUARD = 63,
	CLOUD_GUARD = 64,
	SNEEZE_GUARD = 65,
	FREEZE_GUARD = 66,
	DISCHARGE_GUARD = 67,
	STUN_GUARD = 68,
	COUNTER_UP = 69,
	AUTO_FINISH = 70,
	FORM_UP = 71,
	MAGIC_TIME = 72,
	AUTO_LOCK_MAGIC = 73,
	GUARD_REGENE = 74,
	MP_SAVE = 75,
	MP_LEAVE = 76,
	FULLMP_BURST = 77,
	HARVEST = 78,
	HP_CONVERTER = 79,
	MP_CONVERTER = 80,
	MUNNY_CONVERTER = 81,
	ENDLESS_MAGIC = 82,
	FP_CONVERTER = 83,
	FIRE_ASPIR = 84,
	BLIZZARD_ASPIR = 85,
	THUNDER_ASPIR = 86,
	WATER_ASPIR = 87,
	AERO_ASPIR = 88,
	DARK_ASPIR = 89,
	BEST_COMBI = 90,
	SONIC_SLASH = 91,
	SONIC_DOWN = 92,
	TURN_CUTTER = 93,
	SUMMERSALT = 94,
	POLE_SPIN = 95,
	POLE_SWING = 96,
	WALL_KICK = 97,
	BATTLE_GRAPHER = 98,
	CHARISMA_CHEF = 99,
	JOIN_FORCE = 100,
	HEARTLESS_BUSTER = 101,
	NOBODY_BUSTER = 102,
	POWER_CURE = 103,
	CRITICAL_COUNTER = 104,
	CRITICAL_CHARGE = 105,
	CRITICAL_CONVERTER = 106,
	QUICK_SHAFT = 107,
	FLASH_STEP = 108,
	RADIAL_CUT = 109,
	FINAL_HEAVEN = 110,
	AERIAL_SWEEP = 111,
	AERIAL_DIVE = 112,
	LUNCH_TIME = 113,
	POWER_LUNCH = 114,
	OVER_TIME = 115,
	BEST_CONDITION = 116,
	EXP_BARGAIN = 117,
	PRIZE_FEEVER = 118,
	MILLIONAIRE = 119,
	CURAGAN = 120,
	CHARGE_BERSERK = 121,
	OVERCOME = 122,
	GRAND_MAGIC = 123,
	FIRAGAN = 124,
	BLIZZAGAN = 125,
	THUNDAGAN = 126,
	WATAGAN = 127,
	AEROGAN = 128,
	MAGIC_ROULETTE = 129,
	UNISON_FIRE = 130,
	UNISON_BLIZZARD = 131,
	UNISON_THUNDER = 132,
	FUSION_SPIN = 133,
	FUSION_ROCKET = 134,
	HYPER_HEALING = 135,
	COMBI_UP = 136,
	COMBI_TIME = 137,
	SHARE_PRIZE = 138,
	MICKEY_CURE = 139,
	MICKEY_HOLY = 140,
	DONALD_FIRE = 141,
	DONALD_BLIZZARD = 142,
	DONALD_THUNDER = 143,
	DONALD_AERO = 144,
	DONALD_CURE = 145,
	GOOFY_TORNADE = 146,
	GOOFY_TURBO = 147,
	GOOFY_FLIP = 148,
	HERCULES_ROCKTHROW = 149,
	HERCULES_ENERGYBURST = 150,
	WOODY_SHOULDERTACKLE = 151,
	WOODY_ROPEATTACK = 152,
	BUZZ_BEAM = 153,
	BUZZ_DOUBLELARIAT = 154,
	RAPUNZEL_HAIRSWING = 155,
	RAPUNZEL_HAIRROTATION = 156,
	FLYNN_THROWFRYINGPAN = 157,
	FLYNN_BARRELBASH = 158,
	SULLEY_ROAR = 159,
	SULLEY_SHOULDERTACKLE = 160,
	MIKE_MIKEAPPEAL = 161,
	MIKE_SUPPORT = 162,
	SPARROW_BONECRASH = 163,
	SPARROW_TWISTROLLING = 164,
	MARSHMALLOW_JUMPSTRIKE = 165,
	MARSHMALLOW_COLDBREATH = 166,
	BAYMAX_ROCKETPUNCH = 167,
	BAYMAX_CURESPRAY = 168,
	RIKU_DARKFIRE = 169,
	RIKU_SHADOWBREAKER = 170,
	VENTUS_WINDRAID = 171,
	AQUA_BLIZZAGA = 172,
	AQUA_THUNDAGA = 173,
	AQUA_CURAGA = 174,
	ROXAS_CROSSSHOT = 175,
	ROXAS_CROSSBRADE = 176,
	XION_CURAGA = 177,
	XION_LASERRAIN = 178,
	__LEA_FIRAGARAID = 179,
	LEA_FIRAGASLICER = 180,
	KAIRI_CURE = 181,
	SORA_FIRAGA = 182,
	SORA_CURAGA = 183,
	TRES_ABI_KIND_MAX = 184,
	ETresAbilityKind_MAX = 185
};

UENUM(BlueprintType)
enum ETresSavePointDispType
{
	ETresSavePointDispType_NORMAL = 0 UMETA(DisplayName = "Normal"),
	ETresSavePointDispType_DISABLE = 1 UMETA(DisplayName = "Disable"),
	ETresSavePointDispType_DESTROY = 2 UMETA(DisplayName = "Destroy"),
	ETresSavePointDispType_1_MAX = 3 UMETA(DisplayName = "MAX"),
	ETresSavePointDispType_MAX = 4 UMETA(DisplayName = "Tres Save Point Disp Type MAX")
};

UENUM(BlueprintType)
enum ETresObjTypeProcChannel
{
	CH_COMMON = 0 UMETA(DisplayName = "Common"),
	CH_PLAYER = 1,
	CH_EVENT = 2,
	CH_MENU = 3,
	CH_ENEMY = 4,
	CH_ENEMYBOSS = 5,
	_CH_RESERVE06 = 6,
	_CH_RESERVE07 = 7,
	CH_SYSTEM1 = 8,
	_CH_RESERVE09 = 9,
	_CH_RESERVE10 = 10,
	_CH_RESERVE11 = 11,
	CH_DEBUG1 = 12,
	CH_DEBUG2 = 13,
	CH_DEBUG3 = 14,
	CH_PROFILING = 15,
	CH_MAX = 16 UMETA(DisplayName = "MAX"),
	ETresObjTypeProcChannel_MAX = 17 UMETA(DisplayName = "Tres Obj Type Proc Channel MAX")
};

UENUM(BlueprintType)
enum ETresEnemyXIIIPhaseType
{
	ETresEnemyXIIIPhaseType_PHASE1 = 0 UMETA(DisplayName = "Phase 1"),
	ETresEnemyXIIIPhaseType_PHASE2 = 1 UMETA(DisplayName = "Phase 2"),
	ETresEnemyXIIIPhaseType_PHASE3 = 2 UMETA(DisplayName = "Phase 3"),
	ETresEnemyXIIIPhaseType_PHASE4 = 3 UMETA(DisplayName = "Phase 4"),
	ETresEnemyXIIIPhaseType_PHASE_EX1 = 4 UMETA(DisplayName = "Phase EX1"),
	ETresEnemyXIIIPhaseType_1_MAX = 5 UMETA(DisplayName = "MAX"),
	ETresEnemyXIIIPhaseType_MAX = 6 UMETA(DisplayName = "Tres Enemy XIII Phase Type MAX")
};

UENUM(BlueprintType)
enum ERemyAccessMethod
{
	ERemyAccessMethod_None = 0 UMETA(DisplayName = "None"),
	ERemyAccessMethod_FromEntrance = 1 UMETA(DisplayName = "From Entrance"),
	ERemyAccessMethod_FromSaveMenu = 2 UMETA(DisplayName = "From Save Menu"),
	ERemyAccessMethod_FromWorldMap = 3 UMETA(DisplayName = "From World Map"),
	RemyAccessMethod_MAX = 4 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresGumiShipDirectNotifyType
{
	DNT_FINISHED_BATTLE_MISSION = 0 UMETA(DisplayName = "Finished Battle Mission"),
	DNT_ENCOUNT_BATTLE_START_CAMERA_SIGNAL = 1 UMETA(DisplayName = "Encount Battle Start Camera Signal"),
	DNT_MAX = 2 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresWorldAreaCode
{
	TRES_WAID_AREA_00 = 0 UMETA(DisplayName = "Area 00"),
	TRES_WAID_AREA_01 = 1,
	TRES_WAID_AREA_02 = 2,
	TRES_WAID_AREA_03 = 3,
	TRES_WAID_AREA_04 = 4,
	TRES_WAID_AREA_05 = 5,
	TRES_WAID_AREA_06 = 6,
	TRES_WAID_AREA_07 = 7,
	TRES_WAID_AREA_08 = 8,
	TRES_WAID_AREA_09 = 9,
	TRES_WAID_AREA = 10 UMETA(DisplayName = "Area"),
	TRES_WAID_AREA01 = 11,
	TRES_WAID_AREA02 = 12,
	TRES_WAID_AREA03 = 13,
	TRES_WAID_AREA04 = 14,
	TRES_WAID_AREA05 = 15 UMETA(DisplayName = "Area 05"),
	TRES_WAID_AREA_MAX = 16 UMETA(DisplayName = "MAX")
};


UENUM(BlueprintType)
enum ETresWorldCode
{
	TRES_WCID_EX = 0 UMETA(DisplayName = "EX"),
	TRES_WCID_BT = 1,
	TRES_WCID_DB = 2,
	TRES_WCID_DW = 3,
	TRES_WCID_HE = 4,
	TRES_WCID_TS = 5,
	TRES_WCID_CS = 6,
	TRES_WCID_RA = 7,
	TRES_WCID_FZ = 8,
	TRES_WCID_CA = 9,
	TRES_WCID_PO = 10,
	TRES_WCID_MI = 11,
	TRES_WCID_TT = 12,
	TRES_WCID_YT = 13,
	TRES_WCID_KG = 14,
	TRES_WCID_RE = 15,
	TRES_WCID_DC = 16,
	TRES_WCID_WI = 17,
	TRES_WCID_IN = 18,
	TRES_WCID_BX = 19,
	TRES_WCID_SR = 20,
	TRES_WCID_CO = 21,
	TRES_WCID_EW = 22,
	TRES_WCID_DI = 23,
	TRES_WCID_RG = 24,
	TRES_WCID_DP = 25,
	TRES_WCID_SF = 26,
	TRES_WCID_GM = 27,
	TRES_WCID_WM = 28,
	TRES_WCID_SP = 29,
	TRES_WCID_00 = 30,
	TRES_WCID_ZZ = 31 UMETA(DisplayName = "ZZ"),
	TRES_WCID_MAX = 32 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresBoneSpacesType
{
	TBST_WorldSpace = 0 UMETA(DisplayName = "World Space"),
	TBST_LocalSpace = 1 UMETA(DisplayName = "Local Space"),
	TBST_ComponentSpace = 2 UMETA(DisplayName = "Component Space"),
	TBST_MAX = 3 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum EPRIZE_KIND
{
	PRIZE_KIND_HpPrizeS = 0 UMETA(DisplayName = "HP Prize S"),
	PRIZE_KIND_HpPrizeL = 1,
	PRIZE_KIND_MpPrizeS = 2,
	PRIZE_KIND_MpPrizeL = 3,
	PRIZE_KIND_MunnyPrizeS = 4,
	PRIZE_KIND_MunnyPrizeM = 5,
	PRIZE_KIND_MunnyPrizeL = 6,
	PRIZE_KIND_FocusPrizeS = 7,
	PRIZE_KIND_FocusPrizeL = 8,
	PRIZE_KIND_CrabPrize = 9,
	PRIZE_KIND_MovableCrabPrize = 10,
	PRIZE_KIND_LightPrizeS = 11,
	PRIZE_KIND_LightPrizeL = 12,
	PRIZE_KIND_HealPrizeBox = 13,
	PRIZE_KIND_MatePrizeBox = 14,
	PRIZE_KIND_FstfPrizeBox = 15,
	PRIZE_KIND_RarePrizeBox = 16,
	PRIZE_KIND_MAX = 17 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresDlcChallengeRecordID
{
	ETresDlcChallengeRecordID_REC0101 = 0 UMETA(DisplayName = "REC 0201"),
	ETresDlcChallengeRecordID_REC0201 = 1,
	ETresDlcChallengeRecordID_REC0202 = 2,
	ETresDlcChallengeRecordID_REC0301 = 3,
	ETresDlcChallengeRecordID_REC0401 = 4,
	ETresDlcChallengeRecordID_REC0501 = 5,
	ETresDlcChallengeRecordID_REC0601 = 6,
	ETresDlcChallengeRecordID_REC0701 = 7,
	ETresDlcChallengeRecordID_REC0801 = 8,
	ETresDlcChallengeRecordID_REC0901 = 9,
	ETresDlcChallengeRecordID_REC1001 = 10,
	ETresDlcChallengeRecordID_REC1101 = 11,
	ETresDlcChallengeRecordID_REC1201 = 12,
	ETresDlcChallengeRecordID_REC1301 = 13,
	ETresDlcChallengeRecordID_REC1401 = 14,
	ETresDlcChallengeRecordID_REC1402 = 15,
	ETresDlcChallengeRecordID_REC1501 = 16,
	ETresDlcChallengeRecordID_REC1502 = 17,
	ETresDlcChallengeRecordID_REC1601 = 18,
	ETresDlcChallengeRecordID_REC1602 = 19,
	ETresDlcChallengeRecordID_REC1603 = 20,
	ETresDlcChallengeRecordID_REC1701 = 21,
	ETresDlcChallengeRecordID_REC1801 = 22,
	ETresDlcChallengeRecordID_REC1802 = 23,
	ETresDlcChallengeRecordID_REC1803 = 24,
	ETresDlcChallengeRecordID_REC1901 = 25,
	ETresDlcChallengeRecordID_REC1902 = 26,
	ETresDlcChallengeRecordID_REC2001 = 27,
	ETresDlcChallengeRecordID_REC2002 = 28,
	ETresDlcChallengeRecordID_REC2101 = 29,
	ETresDlcChallengeRecordID_REC2201 = 30,
	ETresDlcChallengeRecordID_REC2301 = 31,
	ETresDlcChallengeRecordID_REC2401 = 32,
	ETresDlcChallengeRecordID_REC2501 = 33,
	ETresDlcChallengeRecordID_REC2601 = 34,
	ETresDlcChallengeRecordID_REC2701 = 35,
	ETresDlcChallengeRecordID_REC2801 = 36,
	ETresDlcChallengeRecordID_REC2901 = 37,
	ETresDlcChallengeRecordID_REC3001 = 38,
	ETresDlcChallengeRecordID_REC3101 = 39,
	ETresDlcChallengeRecordID_REC3201 = 40,
	ETresDlcChallengeRecordID_REC3301 = 41,
	ETresDlcChallengeRecordID_REC3401 = 42,
	ETresDlcChallengeRecordID_ScoreCheckMax = 43,
	ETresDlcChallengeRecordID_1_Max = 44 UMETA(DisplayName = "MAX"),
	ETresDlcChallengeRecordID_MAX = 45 UMETA(DisplayName = "Tres DLC Challenge Record ID MAX")
};

UENUM(BlueprintType)
enum ETresGameOverKind
{
	GAMEOVER_KIND_NORMAL = 0 UMETA(DisplayName = "Normal"),
	GAMEOVER_KIND_MISSION_FAILED = 1 UMETA(DisplayName = "Mission Failed"),
	GAMEOVER_KIND_GUMISHIP = 2 UMETA(DisplayName = "Gumiship"),
	GAMEOVER_KIND_MAX = 3 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresDlcCheatAchievementID
{
	ETresDlcCheatAchievementID_RiskeyChallenge = 0 UMETA(DisplayName = "Riskey Challenge"),
	ETresDlcCheatAchievementID_GlideChallenge = 1,
	ETresDlcCheatAchievementID_GumiSGeistChallenge = 2,
	ETresDlcCheatAchievementID_AerialChallenge = 3,
	ETresDlcCheatAchievementID_GigasChallenge = 4,
	ETresDlcCheatAchievementID_BowlingChallenge = 5,
	ETresDlcCheatAchievementID_FreezeChallenge = 6,
	ETresDlcCheatAchievementID_RageChallenge = 7,
	ETresDlcCheatAchievementID_LinkChallenge = 8,
	ETresDlcCheatAchievementID_AllClearCheck = 9,
	ETresDlcCheatAchievementID_1_Max = 10 UMETA(DisplayName = "MAX"),
	ETresDlcCheatAchievementID_MAX = 11 UMETA(DisplayName = "Tres DLC Cheat Achievement ID MAX")
};

UENUM(BlueprintType)
enum ETresPlayerGrowthType
{
	ETresPlayerGrowthType_POWER = 0 UMETA(DisplayName = "Power"),
	ETresPlayerGrowthType_MAGIC = 1 UMETA(DisplayName = "Magic"),
	ETresPlayerGrowthType_DEFENSE = 2 UMETA(DisplayName = "Defense"),
	ETresPlayerGrowthType_1_MAX = 3 UMETA(DisplayName = "MAX"),
	ETresPlayerGrowthType_MAX = 4 UMETA(DisplayName = "Tres Player Growth Type MAX")
};

UENUM(BlueprintType)
enum ETresPlayerAbilityGrowthType
{
	ETresPlayerAbilityGrowthType_TYPE_A = 0 UMETA(DisplayName = "Type A"),
	ETresPlayerAbilityGrowthType_TYPE_B = 1 UMETA(DisplayName = "Type B"),
	ETresPlayerAbilityGrowthType_TYPE_C = 2 UMETA(DisplayName = "Type C"),
	ETresPlayerAbilityGrowthType_1_MAX = 3 UMETA(DisplayName = "MAX"),
	ETresPlayerAbilityGrowthType_MAX = 4 UMETA(DisplayName = "Tres Player Ability Growth Type MAX")
};

UENUM(BlueprintType)
enum ETresGameOverMenuType
{
	ETresGameOverMenuType_NORMAL = 0 UMETA(DisplayName = "Normal"),
	ETresGameOverMenuType_BOSSBATTLE = 1 UMETA(DisplayName = "Boss Battle"),
	ETresGameOverMenuType_MISSION_FAILED = 2 UMETA(DisplayName = "Mission Failed"),
	ETresGameOverMenuType_MAX = 3 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresForceFeedbackKind
{
	ETresForceFeedbackKind_TFFK_SMALL = 0 UMETA(DisplayName = "Small"),
	ETresForceFeedbackKind_TFFK_MIDDLE = 1 UMETA(DisplayName = "Middle"),
	ETresForceFeedbackKind_LARGE = 2 UMETA(DisplayName = "Large"),
	ETresForceFeedbackKind_TFFK_MAX = 3 UMETA(DisplayName = "MAX"),
	ETresForceFeedbackKind_MAX = 4 UMETA(DisplayName = "Tres Force Feedback Kind MAX")
};

UENUM(BlueprintType)
enum ETresMiRxHolySealType
{
	ETresMiRxHolySealType_HOLY_SEAL_TYPE_NONE = 0 UMETA(DisplayName = "None"),
	ETresMiRxHolySealType_HOLY_SEAL_TYPE_SINGLE = 1 UMETA(DisplayName = "Single"),
	ETresMiRxHolySealType_HOLY_SEAL_TYPE_FULL_FIRE = 2 UMETA(DisplayName = "Full Fire"),
	ETresMiRxHolySealType_HOLY_SEAL_TYPE_MAX = 3 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresGameMiniGameType
{
	ETresGameMiniGameType_NORMAL = 0 UMETA(DisplayName = "Normal"),
	ETresGameMiniGameType_TS_GIGAS_BATTLE = 1 UMETA(DisplayName = "TS Gigas Battle"),
	ETresGameMiniGameType_TS_GIGAS_GAME = 2,
	ETresGameMiniGameType_RA_FESTIVAL_DANCE = 3,
	ETresGameMiniGameType_FZ_SNOWCURLING = 4,
	ETresGameMiniGameType_BX_FLASHTRACER = 5,
	ETresGameMiniGameType_BX_DARKBAYMAX_RAIL = 6,
	ETresGameMiniGameType_BX_DARKBAYMAX_NEAR = 7,
	ETresGameMiniGameType_CA_BP_TUTORIAL = 8,
	ETresGameMiniGameType_CA_BOARD_ENEMYSHIP = 9,
	ETresGameMiniGameType_CA_LUXORD_COMPE = 10,
	ETresGameMiniGameType_CA_FD_MAELSTROM = 11,
	ETresGameMiniGameType_HE_PUDDING = 12,
	ETresGameMiniGameType_TS_PUDDING = 13,
	ETresGameMiniGameType_RA_PUDDING = 14,
	ETresGameMiniGameType_MI_PUDDING = 15,
	ETresGameMiniGameType_FZ_PUDDING = 16,
	ETresGameMiniGameType_BX_PUDDING = 17,
	ETresGameMiniGameType_CA_PUDDING = 18,
	ETresGameMiniGameType_MAX = 19 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresItemDefKeyItem
{
	ETresItemDefKeyItem_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemDefKeyItem_ITEM01 = 1 UMETA(DisplayName = "Item 01"),
	ETresItemDefKeyItem_ITEM02 = 2 UMETA(DisplayName = "Item 02"),
	ETresItemDefKeyItem_ITEM03 = 3 UMETA(DisplayName = "Item 03"),
	ETresItemDefKeyItem_ITEM04 = 4 UMETA(DisplayName = "Item 04"),
	ETresItemDefKeyItem_ITEM05 = 5 UMETA(DisplayName = "Item 05"),
	ETresItemDefKeyItem_ITEM06 = 6 UMETA(DisplayName = "Item 06"),
	ETresItemDefKeyItem_ITEM07 = 7 UMETA(DisplayName = "Item 07"),
	ETresItemDefKeyItem_ITEM08 = 8 UMETA(DisplayName = "Item 08"),
	ETresItemDefKeyItem_ITEM09 = 9 UMETA(DisplayName = "Item 09"),
	ETresItemDefKeyItem_ITEM10 = 10 UMETA(DisplayName = "Item 10"),
	ETresItemDefKeyItem_ITEM11 = 11 UMETA(DisplayName = "Item 11"),
	ETresItemDefKeyItem_ITEM12 = 12 UMETA(DisplayName = "Item 12"),
	ETresItemDefKeyItem_ITEM13 = 13 UMETA(DisplayName = "Item 13"),
	ETresItemDefKeyItem_1_MAX = 14 UMETA(DisplayName = "MAX"),
	ETresItemDefKeyItem_MAX = 15 UMETA(DisplayName = "Tres Item Def Key Item MAX")
};

UENUM(BlueprintType)
enum ETresItemDefWeapon
{
	WEP_NOEQUIP = 0 UMETA(DisplayName = "No Equip"),
	WEP_KEYBLADE00 = 1 UMETA(DisplayName = "Keyblade 00"),
	WEP_KEYBLADE02 = 2 UMETA(DisplayName = "Keyblade 02"),
	WEP_KEYBLADE01 = 3 UMETA(DisplayName = "Keyblade 01"),
	WEP_KEYBLADE03 = 4 UMETA(DisplayName = "Keyblade 03"),
	WEP_KEYBLADE04 = 5,
	WEP_KEYBLADE09 = 6,
	WEP_KEYBLADE06 = 7,
	WEP_KEYBLADE07 = 8,
	WEP_KEYBLADE08 = 9,
	WEP_KEYBLADE05 = 10,
	WEP_KEYBLADE11 = 11,
	WEP_KEYBLADE10 = 12,
	WEP_KEYBLADE12 = 13,
	WEP_KEYBLADE13 = 14,
	WEP_KEYBLADE14 = 15,
	WEP_KEYBLADE15 = 16,
	WEP_KEYBLADE16 = 17,
	WEP_KEYBLADE17 = 18,
	WEP_KEYBLADE18 = 19,
	WEP_KEYBLADE19 = 20,
	WEP_DONALD00 = 21,
	WEP_DONALD01 = 22,
	WEP_DONALD02 = 23,
	WEP_DONALD03 = 24,
	WEP_DONALD04 = 25,
	WEP_DONALD05 = 26,
	WEP_DONALD06 = 27,
	WEP_DONALD07 = 28,
	WEP_DONALD08 = 29,
	WEP_DONALD09 = 30,
	WEP_DONALD10 = 31,
	WEP_DONALD11 = 32,
	WEP_DONALD12 = 33,
	WEP_DONALD13 = 34,
	WEP_DONALD14 = 35,
	WEP_DONALD15 = 36,
	WEP_DONALD16 = 37,
	WEP_DONALD17 = 38,
	WEP_DONALD18 = 39,
	WEP_DONALD19 = 40,
	WEP_GOOFY00 = 41,
	WEP_GOOFY01 = 42,
	WEP_GOOFY02 = 43,
	WEP_GOOFY03 = 44,
	WEP_GOOFY04 = 45,
	WEP_GOOFY05 = 46,
	WEP_GOOFY06 = 47,
	WEP_GOOFY07 = 48,
	WEP_GOOFY08 = 49,
	WEP_GOOFY09 = 50,
	WEP_GOOFY10 = 51,
	WEP_GOOFY11 = 52,
	WEP_GOOFY12 = 53,
	WEP_GOOFY13 = 54,
	WEP_GOOFY14 = 55,
	WEP_GOOFY15 = 56,
	WEP_GOOFY16 = 57,
	WEP_GOOFY17 = 58,
	WEP_GOOFY18 = 59,
	WEP_GOOFY19 = 60,
	WEP_AQUA00 = 61,
	WEP_AQUA01 = 62,
	WEP_AQUA02 = 63,
	WEP_AQUA03 = 64,
	WEP_MICKEY00 = 65,
	WEP_MICKEY01 = 66,
	WEP_MICKEY02 = 67,
	WEP_MICKEY03 = 68,
	WEP_HERCULES00 = 69,
	WEP_WOODY00 = 70,
	WEP_BUZZ00 = 71,
	WEP_RAPUNZEL00 = 72,
	WEP_FLYNN00 = 73,
	WEP_JACK_SPARROW00 = 74,
	WEP_MARSHMALLOW00 = 75,
	WEP_BAYMAX00 = 76,
	WEP_SULLEY00 = 77,
	WEP_MIKE00 = 78,
	WEP_RIKU00 = 79,
	WEP_RIKU01 = 80,
	WEP_RIKU02 = 81,
	WEP_RIKU03 = 82,
	WEP_KAIRI00 = 83,
	WEP_LEA00 = 84,
	WEP_TERRA00 = 85,
	WEP_VENTUS00 = 86,
	WEP_ROXAS00 = 87,
	WEP_XION00 = 88 UMETA(DisplayName = "Xion 00"),
	WEP_FRD_SORA00 = 89 UMETA(DisplayName = "FRD Sora 00"),
	_WEP_MAX = 90 UMETA(DisplayName = "MAX"),
	ETresItemDefWeapon_MAX = 91 UMETA(DisplayName = "Tres Item Def Weapon MAX")
};

UENUM(BlueprintType)
enum ETresItemDefReport
{
	ETresForceFeedbackKind_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresForceFeedbackKind_ITEM01 = 1,
	ETresForceFeedbackKind_ITEM02 = 2,
	ETresForceFeedbackKind_ITEM03 = 3,
	ETresForceFeedbackKind_ITEM04 = 4,
	ETresForceFeedbackKind_ITEM05 = 5,
	ETresForceFeedbackKind_ITEM06 = 6,
	ETresForceFeedbackKind_ITEM07 = 7,
	ETresForceFeedbackKind_ITEM08 = 8,
	ETresForceFeedbackKind_ITEM09 = 9,
	ETresForceFeedbackKind_ITEM10 = 10,
	ETresForceFeedbackKind_ITEM11 = 11,
	ETresForceFeedbackKind_ITEM12 = 12,
	ETresForceFeedbackKind_ITEM13 = 13,
	ETresForceFeedbackKind_ITEM14 = 14,
	ETresItemDefReport_1_MAX = 15,
	ETresItemDefReport_MAX = 16
};

UENUM(BlueprintType)
enum ETresItemDefProtector
{
	ETresItemDefProtector_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemDefProtector_ITEM01 = 1,
	ETresItemDefProtector_ITEM02 = 2,
	ETresItemDefProtector_ITEM03 = 3,
	ETresItemDefProtector_ITEM04 = 4,
	ETresItemDefProtector_ITEM05 = 5,
	ETresItemDefProtector_ITEM06 = 6,
	ETresItemDefProtector_ITEM07 = 7,
	ETresItemDefProtector_ITEM08 = 8,
	ETresItemDefProtector_ITEM09 = 9,
	ETresItemDefProtector_ITEM10 = 10,
	ETresItemDefProtector_ITEM11 = 11,
	ETresItemDefProtector_ITEM12 = 12,
	ETresItemDefProtector_ITEM13 = 13,
	ETresItemDefProtector_ITEM14 = 14,
	ETresItemDefProtector_ITEM15 = 15,
	ETresItemDefProtector_ITEM16 = 16,
	ETresItemDefProtector_ITEM17 = 17,
	ETresItemDefProtector_ITEM18 = 18,
	ETresItemDefProtector_ITEM19 = 19,
	ETresItemDefProtector_ITEM20 = 20,
	ETresItemDefProtector_ITEM21 = 21,
	ETresItemDefProtector_ITEM22 = 22,
	ETresItemDefProtector_ITEM23 = 23,
	ETresItemDefProtector_ITEM24 = 24,
	ETresItemDefProtector_ITEM25 = 25,
	ETresItemDefProtector_ITEM26 = 26,
	ETresItemDefProtector_ITEM27 = 27,
	ETresItemDefProtector_ITEM28 = 28,
	ETresItemDefProtector_ITEM29 = 29,
	ETresItemDefProtector_ITEM30 = 30,
	ETresItemDefProtector_ITEM31 = 31,
	ETresItemDefProtector_ITEM32 = 32,
	ETresItemDefProtector_ITEM33 = 33,
	ETresItemDefProtector_ITEM34 = 34,
	ETresItemDefProtector_ITEM35 = 35,
	ETresItemDefProtector_ITEM36 = 36,
	ETresItemDefProtector_ITEM37 = 37,
	ETresItemDefProtector_ITEM38 = 38,
	ETresItemDefProtector_ITEM39 = 39,
	ETresItemDefProtector_ITEM40 = 40,
	ETresItemDefProtector_ITEM41 = 41,
	ETresItemDefProtector_ITEM42 = 42,
	ETresItemDefProtector_ITEM43 = 43,
	ETresItemDefProtector_ITEM44 = 44,
	ETresItemDefProtector_ITEM45 = 45,
	ETresItemDefProtector_ITEM46 = 46,
	ETresItemDefProtector_ITEM47 = 47,
	ETresItemDefProtector_ITEM48 = 48,
	ETresItemDefProtector_ITEM49 = 49,
	ETresItemDefProtector_ITEM50 = 50,
	ETresItemDefProtector_ITEM51 = 51,
	ETresItemDefProtector_ITEM52 = 52,
	ETresItemDefProtector_1_MAX = 53 UMETA(DisplayName = "MAX"),
	ETresItemDefProtector_MAX = 54 UMETA(DisplayName = "Tres Item Def Protector")
};

UENUM(BlueprintType)
enum ETresItemDefNavimap
{
	NM_WCID_DW01 = 0 UMETA(DisplayName = "DW 01"),
	NM_WCID_DW02 = 1 UMETA(DisplayName = "DW 02"),
	NM_WCID_DW03 = 2 UMETA(DisplayName = "DW 03"),
	NM_WCID_DW04 = 3 UMETA(DisplayName = "DW 04"),
	NM_WCID_MI01 = 4,
	NM_WCID_MI02 = 5,
	NM_WCID_MI03 = 6,
	NM_WCID_MI04 = 7,
	NM_WCID_TS01 = 8,
	NM_WCID_TS02 = 9,
	NM_WCID_TS03 = 10,
	NM_WCID_TS04 = 11,
	NM_WCID_FZ01 = 12,
	NM_WCID_FZ02 = 13,
	NM_WCID_FZ03 = 14,
	NM_WCID_FZ04 = 15,
	NM_WCID_RA01 = 16,
	NM_WCID_RA02 = 17,
	NM_WCID_RA03 = 18,
	NM_WCID_RA04 = 19,
	NM_WCID_CA01 = 20,
	NM_WCID_CA02 = 21,
	NM_WCID_CA03 = 22,
	NM_WCID_CA04 = 23,
	NM_WCID_HE01 = 24,
	NM_WCID_HE02 = 25,
	NM_WCID_HE03 = 26,
	NM_WCID_HE04 = 27,
	NM_WCID_BX01 = 28,
	NM_WCID_BX02 = 29,
	NM_WCID_BX03 = 30,
	NM_WCID_BX04 = 31,
	NM_WCID_TT01 = 32,
	NM_WCID_TT02 = 33,
	NM_WCID_TT03 = 34,
	NM_WCID_TT04 = 35,
	NM_WCID_PO01 = 36,
	NM_WCID_PO02 = 37,
	NM_WCID_PO03 = 38,
	NM_WCID_PO04 = 39,
	NM_WCID_KG01 = 40,
	NM_WCID_KG02 = 41,
	NM_WCID_KG03 = 42,
	NM_WCID_KG04 = 43,
	NM_WCID_EW01 = 44,
	NM_WCID_EW02 = 45,
	NM_WCID_EW03 = 46,
	NM_WCID_EW04 = 47,
	NM_WCID_BT01 = 48,
	NM_WCID_BT02 = 49,
	NM_WCID_BT03 = 50,
	NM_WCID_BT04 = 51,
	NM_WCID_CA05 = 52 UMETA(DisplayName = "CA 05"),
	ETresItemDefNavimap_1_MAX = 53 UMETA(DisplayName = "MAX"),
	ETresItemDefNavimap_MAX = 54 UMETA(DisplayName = "Tres Item Def Navimap MAX")
};

UENUM(BlueprintType)
enum ETresItemDefMognetItem
{
	ETresItemDefMognetItem_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemDefMognetItem_ITEM01 = 1 UMETA(DisplayName = "Item 01"),
	ETresItemDefMognetItem_1_MAX = 2 UMETA(DisplayName = "MAX"),
	ETresItemDefMognetItem_MAX = 3 UMETA(DisplayName = "Tres Item Def Mognet Item MAX")
};

UENUM(BlueprintType)
enum ETresItemDefMaterial
{
	ETresItemDefMaterial_NOTHING = 0,
	ETresItemDefMaterial_ITEM01 = 1,
	ETresItemDefMaterial_ITEM02 = 2,
	ETresItemDefMaterial_ITEM03 = 3,
	ETresItemDefMaterial_ITEM04 = 4,
	ETresItemDefMaterial_ITEM05 = 5,
	ETresItemDefMaterial_ITEM06 = 6,
	ETresItemDefMaterial_ITEM07 = 7,
	ETresItemDefMaterial_ITEM08 = 8,
	ETresItemDefMaterial_ITEM09 = 9,
	ETresItemDefMaterial_ITEM10 = 10,
	ETresItemDefMaterial_ITEM11 = 11,
	ETresItemDefMaterial_ITEM12 = 12,
	ETresItemDefMaterial_ITEM13 = 13,
	ETresItemDefMaterial_ITEM14 = 14,
	ETresItemDefMaterial_ITEM15 = 15,
	ETresItemDefMaterial_ITEM16 = 16,
	ETresItemDefMaterial_ITEM17 = 17,
	ETresItemDefMaterial_ITEM18 = 18,
	ETresItemDefMaterial_ITEM19 = 19,
	ETresItemDefMaterial_ITEM20 = 20,
	ETresItemDefMaterial_ITEM21 = 21,
	ETresItemDefMaterial_ITEM22 = 22,
	ETresItemDefMaterial_ITEM23 = 23,
	ETresItemDefMaterial_ITEM24 = 24,
	ETresItemDefMaterial_ITEM25 = 25,
	ETresItemDefMaterial_ITEM26 = 26,
	ETresItemDefMaterial_ITEM27 = 27,
	ETresItemDefMaterial_ITEM28 = 28,
	ETresItemDefMaterial_ITEM29 = 29,
	ETresItemDefMaterial_ITEM30 = 30,
	ETresItemDefMaterial_ITEM31 = 31,
	ETresItemDefMaterial_ITEM32 = 32,
	ETresItemDefMaterial_ITEM33 = 33,
	ETresItemDefMaterial_ITEM34 = 34,
	ETresItemDefMaterial_ITEM35 = 35,
	ETresItemDefMaterial_ITEM36 = 36,
	ETresItemDefMaterial_ITEM37 = 37,
	ETresItemDefMaterial_ITEM38 = 38,
	ETresItemDefMaterial_ITEM39 = 39,
	ETresItemDefMaterial_ITEM40 = 40,
	ETresItemDefMaterial_ITEM41 = 41,
	ETresItemDefMaterial_ITEM42 = 42,
	ETresItemDefMaterial_ITEM43 = 43,
	ETresItemDefMaterial_ITEM44 = 44,
	ETresItemDefMaterial_ITEM45 = 45,
	ETresItemDefMaterial_ITEM46 = 46,
	ETresItemDefMaterial_ITEM47 = 47,
	ETresItemDefMaterial_ITEM48 = 48,
	ETresItemDefMaterial_ITEM49 = 49,
	ETresItemDefMaterial_ITEM50 = 50,
	ETresItemDefMaterial_ITEM51 = 51,
	ETresItemDefMaterial_ITEM52 = 52,
	ETresItemDefMaterial_ITEM53 = 53,
	ETresItemDefMaterial_ITEM54 = 54,
	ETresItemDefMaterial_ITEM55 = 55,
	ETresItemDefMaterial_ITEM56 = 56,
	ETresItemDefMaterial_ITEM57 = 57,
	ETresItemDefMaterial_ITEM58 = 58,
	ETresItemDefMaterial_ITEM59 = 59,
	ETresItemDefMaterial_ITEM60 = 60,
	ETresItemDefMaterial_1_MAX = 61,
	ETresItemDefMaterial_MAX = 62
};

UENUM(BlueprintType)
enum ETresItemDefLSIGameItem
{
	ETresItemDefLSIGameItem_NOTHING = 0,
	ETresItemDefLSIGameItem_ITEM01 = 1,
	ETresItemDefLSIGameItem_ITEM02 = 2,
	ETresItemDefLSIGameItem_ITEM03 = 3,
	ETresItemDefLSIGameItem_ITEM04 = 4,
	ETresItemDefLSIGameItem_ITEM05 = 5,
	ETresItemDefLSIGameItemITEM06 = 6,
	ETresItemDefLSIGameItem_ITEM07 = 7,
	ETresItemDefLSIGameItem_ITEM08 = 8,
	ETresItemDefLSIGameItem_ITEM09 = 9,
	ETresItemDefLSIGameItem_ITEM10 = 10,
	ETresItemDefLSIGameItem_ITEM11 = 11,
	ETresItemDefLSIGameItem_ITEM12 = 12,
	ETresItemDefLSIGameItem_ITEM13 = 13,
	ETresItemDefLSIGameItem_ITEM14 = 14,
	ETresItemDefLSIGameItem_ITEM15 = 15,
	ETresItemDefLSIGameItem_ITEM16 = 16,
	ETresItemDefLSIGameItem_ITEM17 = 17,
	ETresItemDefLSIGameItem_ITEM18 = 18,
	ETresItemDefLSIGameItem_ITEM19 = 19,
	ETresItemDefLSIGameItem_ITEM20 = 20,
	ETresItemDefLSIGameItem_ITEM21 = 21,
	ETresItemDefLSIGameItem_ITEM22 = 22,
	ETresItemDefLSIGameItem_ITEM23 = 23,
	ETresItemDefLSIGameItem_1_MAX = 24,
	ETresItemDefLSIGameItem_MAX = 25
};

UENUM(BlueprintType)
enum ETresItemDefGumiSticker
{
	ETresItemDefGumiSticker_NOTHING = 0,
	ETresItemDefGumiSticker_ITEM001 = 1,
	ETresItemDefGumiSticker_ITEM002 = 2,
	ETresItemDefGumiSticker_ITEM003 = 3,
	ETresItemDefGumiSticker_ITEM004 = 4,
	ETresItemDefGumiSticker_ITEM005 = 5,
	ETresItemDefGumiSticker_ITEM006 = 6,
	ETresItemDefGumiSticker_ITEM007 = 7,
	ETresItemDefGumiSticker_ITEM008 = 8,
	ETresItemDefGumiSticker_ITEM009 = 9,
	ETresItemDefGumiSticker_ITEM010 = 10,
	ETresItemDefGumiSticker_ITEM011 = 11,
	ETresItemDefGumiSticker_ITEM012 = 12,
	ETresItemDefGumiSticker_ITEM013 = 13,
	ETresItemDefGumiSticker_ITEM014 = 14,
	ETresItemDefGumiSticker_ITEM015 = 15,
	ETresItemDefGumiSticker_ITEM016 = 16,
	ETresItemDefGumiSticker_ITEM017 = 17,
	ETresItemDefGumiSticker_ITEM018 = 18,
	ETresItemDefGumiSticker_ITEM019 = 19,
	ETresItemDefGumiSticker_ITEM020 = 20,
	ETresItemDefGumiSticker_ITEM021 = 21,
	ETresItemDefGumiSticker_ITEM022 = 22,
	ETresItemDefGumiSticker_ITEM023 = 23,
	ETresItemDefGumiSticker_ITEM024 = 24,
	ETresItemDefGumiSticker_ITEM025 = 25,
	ETresItemDefGumiSticker_ITEM026 = 26,
	ETresItemDefGumiSticker_ITEM027 = 27,
	ETresItemDefGumiSticker_ITEM028 = 28,
	ETresItemDefGumiSticker_ITEM029 = 29,
	ETresItemDefGumiSticker_ITEM030 = 30,
	ETresItemDefGumiSticker_ITEM031 = 31,
	ETresItemDefGumiSticker_ITEM032 = 32,
	ETresItemDefGumiSticker_ITEM033 = 33,
	ETresItemDefGumiSticker_ITEM034 = 34,
	ETresItemDefGumiSticker_ITEM035 = 35,
	ETresItemDefGumiSticker_ITEM036 = 36,
	ETresItemDefGumiSticker_ITEM037 = 37,
	ETresItemDefGumiSticker_ITEM038 = 38,
	ETresItemDefGumiSticker_ITEM039 = 39,
	ETresItemDefGumiSticker_ITEM040 = 40,
	ETresItemDefGumiSticker_ITEM041 = 41,
	ETresItemDefGumiSticker_ITEM042 = 42,
	ETresItemDefGumiSticker_ITEM043 = 43,
	ETresItemDefGumiSticker_ITEM044 = 44,
	ETresItemDefGumiSticker_ITEM045 = 45,
	ETresItemDefGumiSticker_ITEM046 = 46,
	ETresItemDefGumiSticker_ITEM047 = 47,
	ETresItemDefGumiSticker_ITEM048 = 48,
	ETresItemDefGumiSticker_ITEM049 = 49,
	ETresItemDefGumiSticker_ITEM050 = 50,
	ETresItemDefGumiSticker_ITEM051 = 51,
	ETresItemDefGumiSticker_ITEM052 = 52,
	ETresItemDefGumiSticker_ITEM053 = 53,
	ETresItemDefGumiSticker_ITEM054 = 54,
	ETresItemDefGumiSticker_ITEM055 = 55,
	ETresItemDefGumiSticker_ITEM056 = 56,
	ETresItemDefGumiSticker_ITEM057 = 57,
	ETresItemDefGumiSticker_ITEM058 = 58,
	ETresItemDefGumiSticker_ITEM059 = 59,
	ETresItemDefGumiSticker_ITEM060 = 60,
	ETresItemDefGumiSticker_ITEM061 = 61,
	ETresItemDefGumiSticker_ITEM062 = 62,
	ETresItemDefGumiSticker_ITEM063 = 63,
	ETresItemDefGumiSticker_ITEM064 = 64,
	ETresItemDefGumiSticker_ITEM065 = 65,
	ETresItemDefGumiSticker_ITEM066 = 66,
	ETresItemDefGumiSticker_ITEM067 = 67,
	ETresItemDefGumiSticker_ITEM068 = 68,
	ETresItemDefGumiSticker_ITEM069 = 69,
	ETresItemDefGumiSticker_ITEM070 = 70,
	ETresItemDefGumiSticker_ITEM071 = 71,
	ETresItemDefGumiSticker_ITEM072 = 72,
	ETresItemDefGumiSticker_ITEM073 = 73,
	ETresItemDefGumiSticker_ITEM074 = 74,
	ETresItemDefGumiSticker_ITEM075 = 75,
	ETresItemDefGumiSticker_ITEM076 = 76,
	ETresItemDefGumiSticker_ITEM077 = 77,
	ETresItemDefGumiSticker_ITEM078 = 78,
	ETresItemDefGumiSticker_ITEM079 = 79,
	ETresItemDefGumiSticker_ITEM080 = 80,
	ETresItemDefGumiSticker_ITEM081 = 81,
	ETresItemDefGumiSticker_ITEM082 = 82,
	ETresItemDefGumiSticker_ITEM083 = 83,
	ETresItemDefGumiSticker_ITEM084 = 84,
	ETresItemDefGumiSticker_ITEM085 = 85,
	ETresItemDefGumiSticker_1_MAX = 86,
	ETresItemDefGumiSticker_MAX = 87
};

UENUM(BlueprintType)
enum ETresItemDefGumiShipBP
{
	ETresItemDefGumiShipBP_NOTHING = 0,
	ETresItemDefGumiShipBP_ITEM001 = 1,
	ETresItemDefGumiShipBP_ITEM002 = 2,
	ETresItemDefGumiShipBP_ITEM003 = 3,
	ETresItemDefGumiShipBP_ITEM004 = 4,
	ETresItemDefGumiShipBP_ITEM005 = 5,
	ETresItemDefGumiShipBP_ITEM006 = 6,
	ETresItemDefGumiShipBP_ITEM007 = 7,
	ETresItemDefGumiShipBP_ITEM008 = 8,
	ETresItemDefGumiShipBP_ITEM009 = 9,
	ETresItemDefGumiShipBP_ITEM010 = 10,
	ETresItemDefGumiShipBP_ITEM011 = 11,
	ETresItemDefGumiShipBP_ITEM012 = 12,
	ETresItemDefGumiShipBP_ITEM013 = 13,
	ETresItemDefGumiShipBP_ITEM014 = 14,
	ETresItemDefGumiShipBP_ITEM015 = 15,
	ETresItemDefGumiShipBP_ITEM016 = 16,
	ETresItemDefGumiShipBP_ITEM017 = 17,
	ETresItemDefGumiShipBP_ITEM018 = 18,
	ETresItemDefGumiShipBP_ITEM019 = 19,
	ETresItemDefGumiShipBP_ITEM020 = 20,
	ETresItemDefGumiShipBP_ITEM021 = 21,
	ETresItemDefGumiShipBP_ITEM022 = 22,
	ETresItemDefGumiShipBP_ITEM023 = 23,
	ETresItemDefGumiShipBP_ITEM024 = 24,
	ETresItemDefGumiShipBP_ITEM025 = 25,
	ETresItemDefGumiShipBP_ITEM026 = 26,
	ETresItemDefGumiShipBP_ITEM027 = 27,
	ETresItemDefGumiShipBP_ITEM028 = 28,
	ETresItemDefGumiShipBP_ITEM029 = 29,
	ETresItemDefGumiShipBP_ITEM030 = 30,
	ETresItemDefGumiShipBP_ITEM031 = 31,
	ETresItemDefGumiShipBP_ITEM032 = 32,
	ETresItemDefGumiShipBP_ITEM033 = 33,
	ETresItemDefGumiShipBP_ITEM034 = 34,
	ETresItemDefGumiShipBP_ITEM035 = 35,
	ETresItemDefGumiShipBP_ITEM036 = 36,
	ETresItemDefGumiShipBP_ITEM037 = 37,
	ETresItemDefGumiShipBP_ITEM038 = 38,
	ETresItemDefGumiShipBP_ITEM039 = 39,
	ETresItemDefGumiShipBP_ITEM040 = 40,
	ETresItemDefGumiShipBP_ITEM041 = 41,
	ETresItemDefGumiShipBP_ITEM042 = 42,
	ETresItemDefGumiShipBP_ITEM043 = 43,
	ETresItemDefGumiShipBP_ITEM044 = 44,
	ETresItemDefGumiShipBP_ITEM045 = 45,
	ETresItemDefGumiShipBP_ITEM046 = 46,
	ETresItemDefGumiShipBP_ITEM047 = 47,
	ETresItemDefGumiShipBP_ITEM048 = 48,
	ETresItemDefGumiShipBP_ITEM049 = 49,
	ETresItemDefGumiShipBP_ITEM050 = 50,
	ETresItemDefGumiShipBP_ITEM051 = 51,
	ETresItemDefGumiShipBP_ITEM052 = 52,
	ETresItemDefGumiShipBP_ITEM053 = 53,
	ETresItemDefGumiShipBP_ITEM054 = 54,
	ETresItemDefGumiShipBP_ITEM055 = 55,
	ETresItemDefGumiShipBP_ITEM056 = 56,
	ETresItemDefGumiShipBP_ITEM057 = 57,
	ETresItemDefGumiShipBP_ITEM058 = 58,
	ETresItemDefGumiShipBP_ITEM059 = 59,
	ETresItemDefGumiShipBP_ITEM060 = 60,
	ETresItemDefGumiShipBP_ITEM061 = 61,
	ETresItemDefGumiShipBP_ITEM062 = 62,
	ETresItemDefGumiShipBP_ITEM063 = 63,
	ETresItemDefGumiShipBP_ITEM064 = 64,
	ETresItemDefGumiShipBP_ITEM065 = 65,
	ETresItemDefGumiShipBP_ITEM066 = 66,
	ETresItemDefGumiShipBP_ITEM067 = 67,
	ETresItemDefGumiShipBP_ITEM068 = 68,
	ETresItemDefGumiShipBP_ITEM069 = 69,
	ETresItemDefGumiShipBP_ITEM070 = 70,
	ETresItemDefGumiShipBP_ITEM071 = 71,
	ETresItemDefGumiShipBP_ITEM072 = 72,
	ETresItemDefGumiShipBP_ITEM073 = 73,
	ETresItemDefGumiShipBP_ITEM074 = 74,
	ETresItemDefGumiShipBP_ITEM075 = 75,
	ETresItemDefGumiShipBP_ITEM076 = 76,
	ETresItemDefGumiShipBP_ITEM077 = 77,
	ETresItemDefGumiShipBP_ITEM078 = 78,
	ETresItemDefGumiShipBP_ITEM079 = 79,
	ETresItemDefGumiShipBP_ITEM080 = 80,
	ETresItemDefGumiShipBP_ITEM081 = 81,
	ETresItemDefGumiShipBP_ITEM082 = 82,
	ETresItemDefGumiShipBP_ITEM083 = 83,
	ETresItemDefGumiShipBP_ITEM084 = 84,
	ETresItemDefGumiShipBP_ITEM085 = 85,
	ETresItemDefGumiShipBP_ITEM086 = 86,
	ETresItemDefGumiShipBP_ITEM087 = 87,
	ETresItemDefGumiShipBP_ITEM088 = 88,
	ETresItemDefGumiShipBP_ITEM089 = 89,
	ETresItemDefGumiShipBP_ITEM090 = 90,
	ETresItemDefGumiShipBP_ITEM091 = 91,
	ETresItemDefGumiShipBP_ITEM092 = 92,
	ETresItemDefGumiShipBP_ITEM093 = 93,
	ETresItemDefGumiShipBP_ITEM094 = 94,
	ETresItemDefGumiShipBP_ITEM095 = 95,
	ETresItemDefGumiShipBP_ITEM096 = 96,
	ETresItemDefGumiShipBP_ITEM097 = 97,
	ETresItemDefGumiShipBP_ITEM098 = 98,
	ETresItemDefGumiShipBP_ITEM099 = 99,
	ETresItemDefGumiShipBP_ITEM100 = 100,
	ETresItemDefGumiShipBP_ITEM101 = 101,
	ETresItemDefGumiShipBP_ITEM102 = 102,
	ETresItemDefGumiShipBP_ITEM103 = 103,
	ETresItemDefGumiShipBP_ITEM104 = 104,
	ETresItemDefGumiShipBP_ITEM105 = 105,
	ETresItemDefGumiShipBP_ITEM106 = 106,
	ETresItemDefGumiShipBP_ITEM107 = 107,
	ETresItemDefGumiShipBP_ITEM108 = 108,
	ETresItemDefGumiShipBP_ITEM109 = 109,
	ETresItemDefGumiShipBP_ITEM110 = 110,
	ETresItemDefGumiShipBP_ITEM111 = 111,
	ETresItemDefGumiShipBP_ITEM112 = 112,
	ETresItemDefGumiShipBP_ITEM113 = 113,
	ETresItemDefGumiShipBP_ITEM114 = 114,
	ETresItemDefGumiShipBP_ITEM115 = 115,
	ETresItemDefGumiShipBP_ITEM116 = 116,
	ETresItemDefGumiShipBP_ITEM117 = 117,
	ETresItemDefGumiShipBP_ITEM118 = 118,
	ETresItemDefGumiShipBP_ITEM119 = 119,
	ETresItemDefGumiShipBP_ITEM120 = 120,
	ETresItemDefGumiShipBP_ITEM121 = 121,
	ETresItemDefGumiShipBP_ITEM122 = 122,
	ETresItemDefGumiShipBP_ITEM123 = 123,
	ETresItemDefGumiShipBP_ITEM124 = 124,
	ETresItemDefGumiShipBP_ITEM125 = 125,
	ETresItemDefGumiShipBP_ITEM126 = 126,
	ETresItemDefGumiShipBP_ITEM127 = 127,
	ETresItemDefGumiShipBP_ITEM128 = 128,
	ETresItemDefGumiShipBP_ITEM129 = 129,
	ETresItemDefGumiShipBP_ITEM130 = 130,
	ETresItemDefGumiShipBP_ITEM131 = 131,
	ETresItemDefGumiShipBP_ITEM132 = 132,
	ETresItemDefGumiShipBP_ITEM133 = 133,
	ETresItemDefGumiShipBP_ITEM134 = 134,
	ETresItemDefGumiShipBP_ITEM135 = 135,
	ETresItemDefGumiShipBP_ITEM136 = 136,
	ETresItemDefGumiShipBP_ITEM137 = 137,
	ETresItemDefGumiShipBP_ITEM138 = 138,
	ETresItemDefGumiShipBP_ITEM139 = 139,
	ETresItemDefGumiShipBP_ITEM140 = 140,
	ETresItemDefGumiShipBP_ITEM141 = 141,
	ETresItemDefGumiShipBP_ITEM142 = 142,
	ETresItemDefGumiShipBP_ITEM143 = 143,
	ETresItemDefGumiShipBP_ITEM144 = 144,
	ETresItemDefGumiShipBP_ITEM145 = 145,
	ETresItemDefGumiShipBP_ITEM146 = 146,
	ETresItemDefGumiShipBP_ITEM147 = 147,
	ETresItemDefGumiShipBP_ITEM148 = 148,
	ETresItemDefGumiShipBP_ITEM149 = 149,
	ETresItemDefGumiShipBP_ITEM150 = 150,
	ETresItemDefGumiShipBP_ITEM151 = 151,
	ETresItemDefGumiShipBP_ITEM152 = 152,
	ETresItemDefGumiShipBP_ITEM153 = 153,
	ETresItemDefGumiShipBP_ITEM154 = 154,
	ETresItemDefGumiShipBP_ITEM155 = 155,
	ETresItemDefGumiShipBP_ITEM156 = 156,
	ETresItemDefGumiShipBP_ITEM157 = 157,
	ETresItemDefGumiShipBP_ITEM158 = 158,
	ETresItemDefGumiShipBP_ITEM159 = 159,
	ETresItemDefGumiShipBP_ITEM160 = 160,
	ETresItemDefGumiShipBP_ITEM161 = 161,
	ETresItemDefGumiShipBP_ITEM162 = 162,
	ETresItemDefGumiShipBP_ITEM163 = 163,
	ETresItemDefGumiShipBP_ITEM164 = 164,
	ETresItemDefGumiShipBP_ITEM165 = 165,
	ETresItemDefGumiShipBP_ITEM166 = 166,
	ETresItemDefGumiShipBP_ITEM167 = 167,
	ETresItemDefGumiShipBP_ITEM168 = 168,
	ETresItemDefGumiShipBP_ITEM169 = 169,
	ETresItemDefGumiShipBP_ITEM170 = 170,
	ETresItemDefGumiShipBP_ITEM171 = 171,
	ETresItemDefGumiShipBP_ITEM172 = 172,
	ETresItemDefGumiShipBP_ITEM173 = 173,
	ETresItemDefGumiShipBP_ITEM174 = 174,
	ETresItemDefGumiShipBP_ITEM175 = 175,
	ETresItemDefGumiShipBP_ITEM176 = 176,
	ETresItemDefGumiShipBP_ITEM177 = 177,
	ETresItemDefGumiShipBP_ITEM178 = 178,
	ETresItemDefGumiShipBP_ITEM179 = 179,
	ETresItemDefGumiShipBP_ITEM180 = 180,
	ETresItemDefGumiShipBP_ITEM181 = 181,
	ETresItemDefGumiShipBP_ITEM182 = 182,
	ETresItemDefGumiShipBP_ITEM183 = 183,
	ETresItemDefGumiShipBP_ITEM184 = 184,
	ETresItemDefGumiShipBP_ITEM185 = 185,
	ETresItemDefGumiShipBP_ITEM186 = 186,
	ETresItemDefGumiShipBP_ITEM187 = 187,
	ETresItemDefGumiShipBP_ITEM188 = 188,
	ETresItemDefGumiShipBP_ITEM189 = 189,
	ETresItemDefGumiShipBP_ITEM190 = 190,
	ETresItemDefGumiShipBP_ITEM191 = 191,
	ETresItemDefGumiShipBP_ITEM192 = 192,
	ETresItemDefGumiShipBP_ITEM193 = 193,
	ETresItemDefGumiShipBP_ITEM194 = 194,
	ETresItemDefGumiShipBP_ITEM195 = 195,
	ETresItemDefGumiShipBP_1_MAX = 196,
	ETresItemDefGumiShipBP_MAX = 197
};

UENUM(BlueprintType)
enum ETresItemDefGumiPattern
{
	ETresItemDefGumiPattern_NOTHING = 0,
	ETresItemDefGumiPattern_ITEM001 = 1,
	ETresItemDefGumiPattern_ITEM002 = 2,
	ETresItemDefGumiPattern_ITEM003 = 3,
	ETresItemDefGumiPattern_ITEM004 = 4,
	ETresItemDefGumiPattern_ITEM005 = 5,
	ETresItemDefGumiPattern_ITEM006 = 6,
	ETresItemDefGumiPattern_ITEM007 = 7,
	ETresItemDefGumiPattern_ITEM008 = 8,
	ETresItemDefGumiPattern_ITEM009 = 9,
	ETresItemDefGumiPattern_ITEM010 = 10,
	ETresItemDefGumiPattern_ITEM011 = 11,
	ETresItemDefGumiPattern_ITEM012 = 12,
	ETresItemDefGumiPattern_ITEM013 = 13,
	ETresItemDefGumiPattern_ITEM014 = 14,
	ETresItemDefGumiPattern_ITEM015 = 15,
	ETresItemDefGumiPattern_ITEM016 = 16,
	ETresItemDefGumiPattern_ITEM017 = 17,
	ETresItemDefGumiPattern_ITEM018 = 18,
	ETresItemDefGumiPattern_ITEM019 = 19,
	ETresItemDefGumiPattern_ITEM020 = 20,
	ETresItemDefGumiPattern_ITEM021 = 21,
	ETresItemDefGumiPattern_ITEM022 = 22,
	ETresItemDefGumiPattern_ITEM023 = 23,
	ETresItemDefGumiPattern_ITEM024 = 24,
	ETresItemDefGumiPattern_ITEM025 = 25,
	ETresItemDefGumiPattern_ITEM026 = 26,
	ETresItemDefGumiPattern_ITEM027 = 27,
	ETresItemDefGumiPattern_ITEM028 = 28,
	ETresItemDefGumiPattern_ITEM029 = 29,
	ETresItemDefGumiPattern_ITEM030 = 30,
	ETresItemDefGumiPattern_ITEM031 = 31,
	ETresItemDefGumiPattern_ITEM032 = 32,
	ETresItemDefGumiPattern_ITEM033 = 33,
	ETresItemDefGumiPattern_ITEM034 = 34,
	ETresItemDefGumiPattern_ITEM035 = 35,
	ETresItemDefGumiPattern_ITEM036 = 36,
	ETresItemDefGumiPattern_ITEM037 = 37,
	ETresItemDefGumiPattern_ITEM038 = 38,
	ETresItemDefGumiPattern_ITEM039 = 39,
	ETresItemDefGumiPattern_ITEM040 = 40,
	ETresItemDefGumiPattern_ITEM041 = 41,
	ETresItemDefGumiPattern_ITEM042 = 42,
	ETresItemDefGumiPattern_ITEM043 = 43,
	ETresItemDefGumiPattern_ITEM044 = 44,
	ETresItemDefGumiPattern_ITEM045 = 45,
	ETresItemDefGumiPattern_ITEM046 = 46,
	ETresItemDefGumiPattern_ITEM047 = 47,
	ETresItemDefGumiPattern_ITEM048 = 48,
	ETresItemDefGumiPattern_ITEM049 = 49,
	ETresItemDefGumiPattern_ITEM050 = 50,
	ETresItemDefGumiPattern_ITEM051 = 51,
	ETresItemDefGumiPattern_ITEM052 = 52,
	ETresItemDefGumiPattern_ITEM053 = 53,
	ETresItemDefGumiPattern_ITEM054 = 54,
	ETresItemDefGumiPattern_ITEM055 = 55,
	ETresItemDefGumiPattern_ITEM056 = 56,
	ETresItemDefGumiPattern_ITEM057 = 57,
	ETresItemDefGumiPattern_ITEM058 = 58,
	ETresItemDefGumiPattern_ITEM059 = 59,
	ETresItemDefGumiPattern_ITEM060 = 60,
	ETresItemDefGumiPattern_ITEM061 = 61,
	ETresItemDefGumiPattern_ITEM062 = 62,
	ETresItemDefGumiPattern_ITEM063 = 63,
	ETresItemDefGumiPattern_ITEM064 = 64,
	ETresItemDefGumiPattern_ITEM065 = 65,
	ETresItemDefGumiPattern_ITEM066 = 66,
	ETresItemDefGumiPattern_ITEM067 = 67,
	ETresItemDefGumiPattern_ITEM068 = 68,
	ETresItemDefGumiPattern_ITEM069 = 69,
	ETresItemDefGumiPattern_ITEM070 = 70,
	ETresItemDefGumiPattern_ITEM071 = 71,
	ETresItemDefGumiPattern_ITEM072 = 72,
	ETresItemDefGumiPattern_ITEM073 = 73,
	ETresItemDefGumiPattern_ITEM074 = 74,
	ETresItemDefGumiPattern_ITEM075 = 75,
	ETresItemDefGumiPattern_ITEM076 = 76,
	ETresItemDefGumiPattern_ITEM077 = 77,
	ETresItemDefGumiPattern_ITEM078 = 78,
	ETresItemDefGumiPattern_ITEM079 = 79,
	ETresItemDefGumiPattern_ITEM080 = 80,
	ETresItemDefGumiPattern_ITEM081 = 81,
	ETresItemDefGumiPattern_ITEM082 = 82,
	ETresItemDefGumiPattern_ITEM083 = 83,
	ETresItemDefGumiPattern_ITEM084 = 84,
	ETresItemDefGumiPattern_ITEM085 = 85,
	ETresItemDefGumiPattern_ITEM086 = 86,
	ETresItemDefGumiPattern_ITEM087 = 87,
	ETresItemDefGumiPattern_ITEM088 = 88,
	ETresItemDefGumiPattern_ITEM089 = 89,
	ETresItemDefGumiPattern_ITEM090 = 90,
	ETresItemDefGumiPattern_ITEM091 = 91,
	ETresItemDefGumiPattern_ITEM092 = 92,
	ETresItemDefGumiPattern_ITEM093 = 93,
	ETresItemDefGumiPattern_ITEM094 = 94,
	ETresItemDefGumiPattern_ITEM095 = 95,
	ETresItemDefGumiPattern_ITEM096 = 96,
	ETresItemDefGumiPattern_ITEM097 = 97,
	ETresItemDefGumiPattern_ITEM098 = 98,
	ETresItemDefGumiPattern_ITEM099 = 99,
	ETresItemDefGumiPattern_ITEM100 = 100,
	ETresItemDefGumiPattern_ITEM101 = 101,
	ETresItemDefGumiPattern_ITEM102 = 102,
	ETresItemDefGumiPattern_ITEM103 = 103,
	ETresItemDefGumiPattern_ITEM104 = 104,
	ETresItemDefGumiPattern_ITEM105 = 105,
	ETresItemDefGumiPattern_ITEM106 = 106,
	ETresItemDefGumiPattern_ITEM107 = 107,
	ETresItemDefGumiPattern_1_MAX = 108,
	ETresItemDefGumiPattern_MAX = 109
};

UENUM(BlueprintType)
enum ETresItemDefGumiParts
{
	ETresItemDefGumiParts_NOTHING = 0,
	ETresItemDefGumiParts_ITEM001 = 1,
	ETresItemDefGumiParts_ITEM002 = 2,
	ETresItemDefGumiParts_ITEM003 = 3,
	ETresItemDefGumiParts_ITEM004 = 4,
	ETresItemDefGumiParts_ITEM005 = 5,
	ETresItemDefGumiParts_ITEM006 = 6,
	ETresItemDefGumiParts_ITEM007 = 7,
	ETresItemDefGumiParts_ITEM008 = 8,
	ETresItemDefGumiParts_ITEM009 = 9,
	ETresItemDefGumiParts_ITEM010 = 10,
	ETresItemDefGumiParts_ITEM011 = 11,
	ETresItemDefGumiParts_ITEM012 = 12,
	ETresItemDefGumiParts_ITEM013 = 13,
	ETresItemDefGumiParts_ITEM014 = 14,
	ETresItemDefGumiParts_ITEM015 = 15,
	ETresItemDefGumiParts_ITEM016 = 16,
	ETresItemDefGumiParts_ITEM017 = 17,
	ETresItemDefGumiParts_ITEM018 = 18,
	ETresItemDefGumiParts_ITEM019 = 19,
	ETresItemDefGumiParts_ITEM020 = 20,
	ETresItemDefGumiParts_ITEM021 = 21,
	ETresItemDefGumiParts_ITEM022 = 22,
	ETresItemDefGumiParts_ITEM023 = 23,
	ETresItemDefGumiParts_ITEM024 = 24,
	ETresItemDefGumiParts_ITEM025 = 25,
	ETresItemDefGumiParts_ITEM026 = 26,
	ETresItemDefGumiParts_ITEM027 = 27,
	ETresItemDefGumiParts_ITEM028 = 28,
	ETresItemDefGumiParts_ITEM029 = 29,
	ETresItemDefGumiParts_ITEM030 = 30,
	ETresItemDefGumiParts_ITEM031 = 31,
	ETresItemDefGumiParts_ITEM032 = 32,
	ETresItemDefGumiParts_ITEM033 = 33,
	ETresItemDefGumiParts_ITEM034 = 34,
	ETresItemDefGumiParts_ITEM035 = 35,
	ETresItemDefGumiParts_ITEM036 = 36,
	ETresItemDefGumiParts_ITEM037 = 37,
	ETresItemDefGumiParts_ITEM038 = 38,
	ETresItemDefGumiParts_ITEM039 = 39,
	ETresItemDefGumiParts_ITEM040 = 40,
	ETresItemDefGumiParts_ITEM041 = 41,
	ETresItemDefGumiParts_ITEM042 = 42,
	ETresItemDefGumiParts_ITEM043 = 43,
	ETresItemDefGumiParts_ITEM044 = 44,
	ETresItemDefGumiParts_ITEM045 = 45,
	ETresItemDefGumiParts_ITEM046 = 46,
	ETresItemDefGumiParts_ITEM047 = 47,
	ETresItemDefGumiParts_ITEM048 = 48,
	ETresItemDefGumiParts_ITEM049 = 49,
	ETresItemDefGumiParts_ITEM050 = 50,
	ETresItemDefGumiParts_ITEM051 = 51,
	ETresItemDefGumiParts_ITEM052 = 52,
	ETresItemDefGumiParts_ITEM053 = 53,
	ETresItemDefGumiParts_ITEM054 = 54,
	ETresItemDefGumiParts_ITEM055 = 55,
	ETresItemDefGumiParts_ITEM056 = 56,
	ETresItemDefGumiParts_ITEM057 = 57,
	ETresItemDefGumiParts_ITEM058 = 58,
	ETresItemDefGumiParts_ITEM059 = 59,
	ETresItemDefGumiParts_ITEM060 = 60,
	ETresItemDefGumiParts_ITEM061 = 61,
	ETresItemDefGumiParts_ITEM062 = 62,
	ETresItemDefGumiParts_ITEM063 = 63,
	ETresItemDefGumiParts_ITEM064 = 64,
	ETresItemDefGumiParts_ITEM065 = 65,
	ETresItemDefGumiParts_ITEM066 = 66,
	ETresItemDefGumiParts_ITEM067 = 67,
	ETresItemDefGumiParts_ITEM068 = 68,
	ETresItemDefGumiParts_ITEM069 = 69,
	ETresItemDefGumiParts_ITEM070 = 70,
	ETresItemDefGumiParts_ITEM071 = 71,
	ETresItemDefGumiParts_ITEM072 = 72,
	ETresItemDefGumiParts_ITEM073 = 73,
	ETresItemDefGumiParts_ITEM074 = 74,
	ETresItemDefGumiParts_ITEM075 = 75,
	ETresItemDefGumiParts_ITEM076 = 76,
	ETresItemDefGumiParts_ITEM077 = 77,
	ETresItemDefGumiParts_ITEM078 = 78,
	ETresItemDefGumiParts_ITEM079 = 79,
	ETresItemDefGumiParts_ITEM080 = 80,
	ETresItemDefGumiParts_ITEM081 = 81,
	ETresItemDefGumiParts_ITEM082 = 82,
	ETresItemDefGumiParts_ITEM083 = 83,
	ETresItemDefGumiParts_ITEM084 = 84,
	ETresItemDefGumiParts_ITEM085 = 85,
	ETresItemDefGumiParts_ITEM086 = 86,
	ETresItemDefGumiParts_ITEM087 = 87,
	ETresItemDefGumiParts_ITEM088 = 88,
	ETresItemDefGumiParts_ITEM089 = 89,
	ETresItemDefGumiParts_ITEM090 = 90,
	ETresItemDefGumiParts_ITEM091 = 91,
	ETresItemDefGumiParts_ITEM092 = 92,
	ETresItemDefGumiParts_ITEM093 = 93,
	ETresItemDefGumiParts_ITEM094 = 94,
	ETresItemDefGumiParts_ITEM095 = 95,
	ETresItemDefGumiParts_ITEM096 = 96,
	ETresItemDefGumiParts_ITEM097 = 97,
	ETresItemDefGumiParts_ITEM098 = 98,
	ETresItemDefGumiParts_ITEM099 = 99,
	ETresItemDefGumiParts_ITEM100 = 100,
	ETresItemDefGumiParts_ITEM101 = 101,
	ETresItemDefGumiParts_ITEM102 = 102,
	ETresItemDefGumiParts_ITEM103 = 103,
	ETresItemDefGumiParts_ITEM104 = 104,
	ETresItemDefGumiParts_ITEM105 = 105,
	ETresItemDefGumiParts_ITEM106 = 106,
	ETresItemDefGumiParts_ITEM107 = 107,
	ETresItemDefGumiParts_ITEM108 = 108,
	ETresItemDefGumiParts_ITEM109 = 109,
	ETresItemDefGumiParts_ITEM110 = 110,
	ETresItemDefGumiParts_ITEM111 = 111,
	ETresItemDefGumiParts_ITEM112 = 112,
	ETresItemDefGumiParts_ITEM113 = 113,
	ETresItemDefGumiParts_ITEM114 = 114,
	ETresItemDefGumiParts_ITEM115 = 115,
	ETresItemDefGumiParts_ITEM116 = 116,
	ETresItemDefGumiParts_ITEM117 = 117,
	ETresItemDefGumiParts_ITEM118 = 118,
	ETresItemDefGumiParts_ITEM119 = 119,
	ETresItemDefGumiParts_ITEM120 = 120,
	ETresItemDefGumiParts_ITEM121 = 121,
	ETresItemDefGumiParts_ITEM122 = 122,
	ETresItemDefGumiParts_ITEM123 = 123,
	ETresItemDefGumiParts_ITEM124 = 124,
	ETresItemDefGumiParts_ITEM125 = 125,
	ETresItemDefGumiParts_ITEM126 = 126,
	ETresItemDefGumiParts_ITEM127 = 127,
	ETresItemDefGumiParts_ITEM128 = 128,
	ETresItemDefGumiParts_ITEM129 = 129,
	ETresItemDefGumiParts_ITEM130 = 130,
	ETresItemDefGumiParts_ITEM131 = 131,
	ETresItemDefGumiParts_ITEM132 = 132,
	ETresItemDefGumiParts_ITEM133 = 133,
	ETresItemDefGumiParts_ITEM134 = 134,
	ETresItemDefGumiParts_ITEM135 = 135,
	ETresItemDefGumiParts_ITEM136 = 136,
	ETresItemDefGumiParts_ITEM137 = 137,
	ETresItemDefGumiParts_ITEM138 = 138,
	ETresItemDefGumiParts_ITEM139 = 139,
	ETresItemDefGumiParts_ITEM140 = 140,
	ETresItemDefGumiParts_ITEM141 = 141,
	ETresItemDefGumiParts_ITEM142 = 142,
	ETresItemDefGumiParts_ITEM143 = 143,
	ETresItemDefGumiParts_ITEM144 = 144,
	ETresItemDefGumiParts_ITEM145 = 145,
	ETresItemDefGumiParts_ITEM146 = 146,
	ETresItemDefGumiParts_ITEM147 = 147,
	ETresItemDefGumiParts_ITEM148 = 148,
	ETresItemDefGumiParts_ITEM149 = 149,
	ETresItemDefGumiParts_ITEM150 = 150,
	ETresItemDefGumiParts_ITEM151 = 151,
	ETresItemDefGumiParts_ITEM152 = 152,
	ETresItemDefGumiParts_ITEM153 = 153,
	ETresItemDefGumiParts_ITEM154 = 154,
	ETresItemDefGumiParts_ITEM155 = 155,
	ETresItemDefGumiParts_ITEM156 = 156,
	ETresItemDefGumiParts_ITEM157 = 157,
	ETresItemDefGumiParts_ITEM158 = 158,
	ETresItemDefGumiParts_ITEM159 = 159,
	ETresItemDefGumiParts_ITEM160 = 160,
	ETresItemDefGumiParts_ITEM161 = 161,
	ETresItemDefGumiParts_ITEM162 = 162,
	ETresItemDefGumiParts_ITEM163 = 163,
	ETresItemDefGumiParts_ITEM164 = 164,
	ETresItemDefGumiParts_ITEM165 = 165,
	ETresItemDefGumiParts_ITEM166 = 166,
	ETresItemDefGumiParts_ITEM167 = 167,
	ETresItemDefGumiParts_ITEM168 = 168,
	ETresItemDefGumiParts_ITEM169 = 169,
	ETresItemDefGumiParts_ITEM170 = 170,
	ETresItemDefGumiParts_ITEM171 = 171,
	ETresItemDefGumiParts_ITEM172 = 172,
	ETresItemDefGumiParts_ITEM173 = 173,
	ETresItemDefGumiParts_ITEM174 = 174,
	ETresItemDefGumiParts_ITEM175 = 175,
	ETresItemDefGumiParts_ITEM176 = 176,
	ETresItemDefGumiParts_ITEM177 = 177,
	ETresItemDefGumiParts_ITEM178 = 178,
	ETresItemDefGumiParts_ITEM179 = 179,
	ETresItemDefGumiParts_ITEM180 = 180,
	ETresItemDefGumiParts_ITEM181 = 181,
	ETresItemDefGumiParts_ITEM182 = 182,
	ETresItemDefGumiParts_1_MAX = 183,
	ETresItemDefGumiParts_MAX = 184
};

UENUM(BlueprintType)
enum ETresItemDefGumiMaterial
{
	ETresItemDefGumiMaterial_NOTHING = 0,
	ETresItemDefGumiMaterial_ITEM001 = 1,
	ETresItemDefGumiMaterial_ITEM002 = 2,
	ETresItemDefGumiMaterial_ITEM003 = 3,
	ETresItemDefGumiMaterial_ITEM004 = 4,
	ETresItemDefGumiMaterial_ITEM005 = 5,
	ETresItemDefGumiMaterial_ITEM006 = 6,
	ETresItemDefGumiMaterial_ITEM007 = 7,
	ETresItemDefGumiMaterial_ITEM008 = 8,
	ETresItemDefGumiMaterial_ITEM009 = 9,
	ETresItemDefGumiMaterial_ITEM010 = 10,
	ETresItemDefGumiMaterial_ITEM011 = 11,
	ETresItemDefGumiMaterial_ITEM012 = 12,
	ETresItemDefGumiMaterial_ITEM013 = 13,
	ETresItemDefGumiMaterial_ITEM014 = 14,
	ETresItemDefGumiMaterial_ITEM015 = 15,
	ETresItemDefGumiMaterial_ITEM016 = 16,
	ETresItemDefGumiMaterial_ITEM017 = 17,
	ETresItemDefGumiMaterial_ITEM018 = 18,
	ETresItemDefGumiMaterial_ITEM019 = 19,
	ETresItemDefGumiMaterial_ITEM020 = 20,
	ETresItemDefGumiMaterial_ITEM021 = 21,
	ETresItemDefGumiMaterial_ITEM022 = 22,
	ETresItemDefGumiMaterial_ITEM023 = 23,
	ETresItemDefGumiMaterial_ITEM024 = 24,
	ETresItemDefGumiMaterial_ITEM025 = 25,
	ETresItemDefGumiMaterial_ITEM026 = 26,
	ETresItemDefGumiMaterial_ITEM027 = 27,
	ETresItemDefGumiMaterial_ITEM028 = 28,
	ETresItemDefGumiMaterial_ITEM029 = 29,
	ETresItemDefGumiMaterial_ITEM030 = 30,
	ETresItemDefGumiMaterial_ITEM031 = 31,
	ETresItemDefGumiMaterial_ITEM032 = 32,
	ETresItemDefGumiMaterial_ITEM033 = 33,
	ETresItemDefGumiMaterial_ITEM034 = 34,
	ETresItemDefGumiMaterial_ITEM035 = 35,
	ETresItemDefGumiMaterial_ITEM036 = 36,
	ETresItemDefGumiMaterial_ITEM037 = 37,
	ETresItemDefGumiMaterial_ITEM038 = 38,
	ETresItemDefGumiMaterial_ITEM039 = 39,
	ETresItemDefGumiMaterial_ITEM040 = 40,
	ETresItemDefGumiMaterial_ITEM041 = 41,
	ETresItemDefGumiMaterial_ITEM042 = 42,
	ETresItemDefGumiMaterial_ITEM043 = 43,
	ETresItemDefGumiMaterial_ITEM044 = 44,
	ETresItemDefGumiMaterial_ITEM045 = 45,
	ETresItemDefGumiMaterial_ITEM046 = 46,
	ETresItemDefGumiMaterial_ITEM047 = 47,
	ETresItemDefGumiMaterial_ITEM048 = 48,
	ETresItemDefGumiMaterial_ITEM049 = 49,
	ETresItemDefGumiMaterial_ITEM050 = 50,
	ETresItemDefGumiMaterial_ITEM051 = 51,
	ETresItemDefGumiMaterial_ITEM052 = 52,
	ETresItemDefGumiMaterial_ITEM053 = 53,
	ETresItemDefGumiMaterial_ITEM054 = 54,
	ETresItemDefGumiMaterial_ITEM055 = 55,
	ETresItemDefGumiMaterial_ITEM056 = 56,
	ETresItemDefGumiMaterial_ITEM057 = 57,
	ETresItemDefGumiMaterial_ITEM058 = 58,
	ETresItemDefGumiMaterial_ITEM059 = 59,
	ETresItemDefGumiMaterial_ITEM060 = 60,
	ETresItemDefGumiMaterial_ITEM061 = 61,
	ETresItemDefGumiMaterial_ITEM062 = 62,
	ETresItemDefGumiMaterial_ITEM063 = 63,
	ETresItemDefGumiMaterial_ITEM064 = 64,
	ETresItemDefGumiMaterial_ITEM065 = 65,
	ETresItemDefGumiMaterial_ITEM066 = 66,
	ETresItemDefGumiMaterial_ITEM067 = 67,
	ETresItemDefGumiMaterial_ITEM068 = 68,
	ETresItemDefGumiMaterial_1_MAX = 69,
	ETresItemDefGumiMaterial_MAX = 70
};

UENUM(BlueprintType)
enum ETresItemDefGumiEtc
{
	ETresItemDefGumiEtc_NOTHING = 0,
	ETresItemDefGumiEtc_ITEM001 = 1,
	ETresItemDefGumiEtc_ITEM002 = 2,
	ETresItemDefGumiEtc_ITEM003 = 3,
	ETresItemDefGumiEtc_ITEM004 = 4,
	ETresItemDefGumiEtc_ITEM005 = 5,
	ETresItemDefGumiEtc_ITEM006 = 6,
	ETresItemDefGumiEtc_ITEM007 = 7,
	ETresItemDefGumiEtc_ITEM008 = 8,
	ETresItemDefGumiEtc_ITEM009 = 9,
	ETresItemDefGumiEtc_ITEM010 = 10,
	ETresItemDefGumiEtc_ITEM011 = 11,
	ETresItemDefGumiEtc_ITEM012 = 12,
	ETresItemDefGumiEtc_ITEM013 = 13,
	ETresItemDefGumiEtc_ITEM014 = 14,
	ETresItemDefGumiEtc_ITEM015 = 15,
	ETresItemDefGumiEtc_ITEM016 = 16,
	ETresItemDefGumiEtc_ITEM017 = 17,
	ETresItemDefGumiEtc_ITEM018 = 18,
	ETresItemDefGumiEtc_ITEM019 = 19,
	ETresItemDefGumiEtc_ITEM020 = 20,
	ETresItemDefGumiEtc_ITEM021 = 21,
	ETresItemDefGumiEtc_ITEM022 = 22,
	ETresItemDefGumiEtc_ITEM023 = 23,
	ETresItemDefGumiEtc_ITEM024 = 24,
	ETresItemDefGumiEtc_ITEM025 = 25,
	ETresItemDefGumiEtc_ITEM026 = 26,
	ETresItemDefGumiEtc_ITEM027 = 27,
	ETresItemDefGumiEtc_ITEM028 = 28,
	ETresItemDefGumiEtc_ITEM029 = 29,
	ETresItemDefGumiEtc_ITEM030 = 30,
	ETresItemDefGumiEtc_ITEM031 = 31,
	ETresItemDefGumiEtc_ITEM032 = 32,
	ETresItemDefGumiEtc_ITEM033 = 33,
	ETresItemDefGumiEtc_ITEM034 = 34,
	ETresItemDefGumiEtc_ITEM035 = 35,
	ETresItemDefGumiEtc_ITEM036 = 36,
	ETresItemDefGumiEtc_ITEM037 = 37,
	ETresItemDefGumiEtc_ITEM038 = 38,
	ETresItemDefGumiEtc_ITEM039 = 39,
	ETresItemDefGumiEtc_ITEM040 = 40,
	ETresItemDefGumiEtc_ITEM041 = 41,
	ETresItemDefGumiEtc_ITEM042 = 42,
	ETresItemDefGumiEtc_ITEM043 = 43,
	ETresItemDefGumiEtc_ITEM044 = 44,
	ETresItemDefGumiEtc_ITEM045 = 45,
	ETresItemDefGumiEtc_ITEM046 = 46,
	ETresItemDefGumiEtc_ITEM047 = 47,
	ETresItemDefGumiEtc_ITEM048 = 48,
	ETresItemDefGumiEtc_ITEM049 = 49,
	ETresItemDefGumiEtc_ITEM050 = 50,
	ETresItemDefGumiEtc_ITEM051 = 51,
	ETresItemDefGumiEtc_ITEM052 = 52,
	ETresItemDefGumiEtc_ITEM053 = 53,
	ETresItemDefGumiEtc_ITEM054 = 54,
	ETresItemDefGumiEtc_ITEM055 = 55,
	ETresItemDefGumiEtc_ITEM056 = 56,
	ETresItemDefGumiEtc_ITEM057 = 57,
	ETresItemDefGumiEtc_ITEM058 = 58,
	ETresItemDefGumiEtc_ITEM059 = 59,
	ETresItemDefGumiEtc_ITEM060 = 60,
	ETresItemDefGumiEtc_ITEM061 = 61,
	ETresItemDefGumiEtc_ITEM062 = 62,
	ETresItemDefGumiEtc_ITEM063 = 63,
	ETresItemDefGumiEtc_ITEM064 = 64,
	ETresItemDefGumiEtc_ITEM065 = 65,
	ETresItemDefGumiEtc_ITEM066 = 66,
	ETresItemDefGumiEtc_ITEM067 = 67,
	ETresItemDefGumiEtc_ITEM068 = 68,
	ETresItemDefGumiEtc_ITEM069 = 69,
	ETresItemDefGumiEtc_ITEM070 = 70,
	ETresItemDefGumiEtc_ITEM071 = 71,
	ETresItemDefGumiEtc_ITEM072 = 72,
	ETresItemDefGumiEtc_ITEM073 = 73,
	ETresItemDefGumiEtc_ITEM074 = 74,
	ETresItemDefGumiEtc_ITEM075 = 75,
	ETresItemDefGumiEtc_ITEM076 = 76,
	ETresItemDefGumiEtc_1_MAX = 77,
	ETresItemDefGumiEtc_MAX = 78
};

UENUM(BlueprintType)
enum ETresItemDefFoodstuff
{
	ETresItemDefFoodstuff_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemDefFoodstuff_ITEM01 = 1,
	ETresItemDefFoodstuff_ITEM02 = 2,
	ETresItemDefFoodstuff_ITEM03 = 3,
	ETresItemDefFoodstuff_ITEM04 = 4,
	ETresItemDefFoodstuff_ITEM05 = 5,
	ETresItemDefFoodstuff_ITEM06 = 6,
	ETresItemDefFoodstuff_ITEM07 = 7,
	ETresItemDefFoodstuff_ITEM08 = 8,
	ETresItemDefFoodstuff_ITEM09 = 9,
	ETresItemDefFoodstuff_ITEM10 = 10,
	ETresItemDefFoodstuff_ITEM11 = 11,
	ETresItemDefFoodstuff_ITEM12 = 12,
	ETresItemDefFoodstuff_ITEM13 = 13,
	ETresItemDefFoodstuff_ITEM14 = 14,
	ETresItemDefFoodstuff_ITEM15 = 15,
	ETresItemDefFoodstuff_ITEM16 = 16,
	ETresItemDefFoodstuff_ITEM17 = 17,
	ETresItemDefFoodstuff_ITEM18 = 18,
	ETresItemDefFoodstuff_ITEM19 = 19,
	ETresItemDefFoodstuff_ITEM20 = 20,
	ETresItemDefFoodstuff_ITEM21 = 21,
	ETresItemDefFoodstuff_ITEM22 = 22,
	ETresItemDefFoodstuff_ITEM23 = 23,
	ETresItemDefFoodstuff_ITEM24 = 24,
	ETresItemDefFoodstuff_ITEM25 = 25,
	ETresItemDefFoodstuff_ITEM26 = 26,
	ETresItemDefFoodstuff_ITEM27 = 27,
	ETresItemDefFoodstuff_ITEM28 = 28,
	ETresItemDefFoodstuff_ITEM29 = 29,
	ETresItemDefFoodstuff_ITEM30 = 30,
	ETresItemDefFoodstuff_ITEM31 = 31,
	ETresItemDefFoodstuff_ITEM32 = 32,
	ETresItemDefFoodstuff_ITEM33 = 33,
	ETresItemDefFoodstuff_ITEM34 = 34,
	ETresItemDefFoodstuff_ITEM35 = 35,
	ETresItemDefFoodstuff_ITEM36 = 36,
	ETresItemDefFoodstuff_ITEM37 = 37,
	ETresItemDefFoodstuff_ITEM38 = 38,
	ETresItemDefFoodstuff_ITEM39 = 39,
	ETresItemDefFoodstuff_ITEM40 = 40,
	ETresItemDefFoodstuff_ITEM41 = 41,
	ETresItemDefFoodstuff_ITEM42 = 42,
	ETresItemDefFoodstuff_ITEM43 = 43,
	ETresItemDefFoodstuff_ITEM44 = 44,
	ETresItemDefFoodstuff_ITEM45 = 45,
	ETresItemDefFoodstuff_ITEM46 = 46,
	ETresItemDefFoodstuff_ITEM47 = 47,
	ETresItemDefFoodstuff_ITEM48 = 48,
	ETresItemDefFoodstuff_ITEM49 = 49,
	ETresItemDefFoodstuff_ITEM50 = 50,
	ETresItemDefFoodstuff_ITEM51 = 51,
	ETresItemDefFoodstuff_ITEM52 = 52,
	ETresItemDefFoodstuff_ITEM53 = 53,
	ETresItemDefFoodstuff_ITEM54 = 54,
	ETresItemDefFoodstuff_ITEM55 = 55,
	ETresItemDefFoodstuff_ITEM56 = 56,
	ETresItemDefFoodstuff_ITEM57 = 57,
	ETresItemDefFoodstuff_ITEM58 = 58,
	ETresItemDefFoodstuff_ITEM59 = 59,
	ETresItemDefFoodstuff_1_MAX = 60 UMETA(DisplayName = "MAX"),
	ETresItemDefFoodstuff_MAX = 61 UMETA(DisplayName = "Tres Item Def Food Stuff MAX")
};

UENUM(BlueprintType)
enum ETresItemDefFood
{
	ETresItemDefFood_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemDefFood_SOUP01 = 1 UMETA(DisplayName = "Soup 01"),
	ETresItemDefFood_SOUP02 = 2 UMETA(DisplayName = "Soup 02"),
	ETresItemDefFood_SOUP03 = 3 UMETA(DisplayName = "Soup 03"),
	ETresItemDefFood_SOUP04 = 4 UMETA(DisplayName = "Soup 04"),
	ETresItemDefFood_SOUP05 = 5 UMETA(DisplayName = "Soup 05"),
	ETresItemDefFood_APPETIZER01 = 6 UMETA(DisplayName = "Appetizer 01"),
	ETresItemDefFood_APPETIZER02 = 7 UMETA(DisplayName = "Appetizer 02"),
	ETresItemDefFood_APPETIZER03 = 8 UMETA(DisplayName = "Appetizer 03"),
	ETresItemDefFood_APPETIZER04 = 9 UMETA(DisplayName = "Appetizer 04"),
	ETresItemDefFood_APPETIZER05 = 10 UMETA(DisplayName = "Appetizer 05"),
	ETresItemDefFood_FISHDISH01 = 11,
	ETresItemDefFood_FISHDISH02 = 12,
	ETresItemDefFood_FISHDISH03 = 13,
	ETresItemDefFood_FISHDISH04 = 14,
	ETresItemDefFood_FISHDISH05 = 15,
	ETresItemDefFood_FISHDISH06 = 16,
	ETresItemDefFood_MEETDISH01 = 17,
	ETresItemDefFood_MEETDISH02 = 18,
	ETresItemDefFood_MEETDISH03 = 19,
	ETresItemDefFood_MEETDISH04 = 20,
	ETresItemDefFood_MEETDISH05 = 21,
	ETresItemDefFood_DESSERT01 = 22,
	ETresItemDefFood_DESSERT02 = 23,
	ETresItemDefFood_DESSERT03 = 24,
	ETresItemDefFood_DESSERT04 = 25,
	ETresItemDefFood_DESSERT05 = 26,
	ETresItemDefFood_DESSERT06 = 27,
	ETresItemDefFood_DESSERT07 = 28,
	ETresItemDefFood_SOUP01P = 29,
	ETresItemDefFood_SOUP02P = 30,
	ETresItemDefFood_SOUP03P = 31,
	ETresItemDefFood_SOUP04P = 32,
	ETresItemDefFood_SOUP05P = 33,
	ETresItemDefFood_APPETIZER01P = 34,
	ETresItemDefFood_APPETIZER02P = 35,
	ETresItemDefFood_APPETIZER03P = 36,
	ETresItemDefFood_APPETIZER04P = 37,
	ETresItemDefFood_APPETIZER05P = 38,
	ETresItemDefFood_FISHDISH01P = 39,
	ETresItemDefFood_FISHDISH02P = 40,
	ETresItemDefFood_FISHDISH03P = 41,
	ETresItemDefFood_FISHDISH04P = 42,
	ETresItemDefFood_FISHDISH05P = 43,
	ETresItemDefFood_FISHDISH06P = 44,
	ETresItemDefFood_MEETDISH01P = 45,
	ETresItemDefFood_MEETDISH02P = 46,
	ETresItemDefFood_MEETDISH03P = 47,
	ETresItemDefFood_MEETDISH04P = 48,
	ETresItemDefFood_MEETDISH05P = 49,
	ETresItemDefFood_DESSERT01P = 50,
	ETresItemDefFood_DESSERT02P = 51,
	ETresItemDefFood_DESSERT03P = 52,
	ETresItemDefFood_DESSERT04P = 53,
	ETresItemDefFood_DESSERT05P = 54,
	ETresItemDefFood_DESSERT06P = 55,
	ETresItemDefFood_DESSERT07P = 56,
	ETresItemDefFood_1_MAX = 57 UMETA(DisplayName = "MAX"),
	ETresItemDefFood_MAX = 58 UMETA(DisplayName = "Tres Item Def Food MAX")
};

UENUM(BlueprintType)
enum ETresItemDefCampItem
{
	ETresItemDefCampItem_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemDefCampItem_TENT = 1 UMETA(DisplayName = "Tent"),
	ETresItemDefCampItem_POWERUP = 2 UMETA(DisplayName = "Power Up"),
	ETresItemDefCampItem_MAGICUP = 3 UMETA(DisplayName = "Magic Up"),
	ETresItemDefCampItem_GUARDUP = 4 UMETA(DisplayName = "Guard Up"),
	ETresItemDefCampItem_APUP = 5 UMETA(DisplayName = "AP Up"),
	ETresItemDefCampItem_1_MAX = 6 UMETA(DisplayName = "MAX"),
	ETresItemDefCampItem_MAX = 7 UMETA(DisplayName = "Tres Item Def Camp Item MAX")
};

UENUM(BlueprintType)
enum ETresItemDefBattleItem
{
	BI_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	BI_POTION = 1 UMETA(DisplayName = "Potion"),
	BI_HIGHPOTION = 2 UMETA(DisplayName = "High Potion"),
	BI_MEGAPOTION = 3 UMETA(DisplayName = "Mega Potion"),
	BI_ETHER = 4 UMETA(DisplayName = "Ether"),
	BI_MEGAETHER = 5 UMETA(DisplayName = "Mega Ether"),
	BI_ELIXIR = 6 UMETA(DisplayName = "Elixir"),
	BI_LASTELIXIR = 7 UMETA(DisplayName = "Last Elixir"),
	BI_FOCUSSUPPLY = 8 UMETA(DisplayName = "Focus Supply"),
	BI_HIGHFOCUSSUPPLY = 9 UMETA(DisplayName = "High Focus Supply"),
	BI_ALLCURE = 10 UMETA(DisplayName = "All Cure"),
	BI_HIGHETHER = 11 UMETA(DisplayName = "High Ether"),
	ETresItemDefBattleItem_1_MAX = 12 UMETA(DisplayName = "MAX"),
	ETresItemDefBattleItem_MAX = 13 UMETA(DisplayName = "Tres Item Def Battle Item MAX")
};

UENUM(BlueprintType)
enum ETresItemDefAccessory
{
	ETresItemDefAccessory_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemDefAccessory_ITEM01 = 1 UMETA(DisplayName = "1"),
	ETresItemDefAccessory_ITEM02 = 2 UMETA(DisplayName = "2"),
	ETresItemDefAccessory_ITEM03 = 3 UMETA(DisplayName = "3"),
	ETresItemDefAccessory_ITEM04 = 4 UMETA(DisplayName = "4"),
	ETresItemDefAccessory_ITEM05 = 5 UMETA(DisplayName = "5"),
	ETresItemDefAccessory_ITEM06 = 6 UMETA(DisplayName = "6"),
	ETresItemDefAccessory_ITEM07 = 7 UMETA(DisplayName = "7"),
	ETresItemDefAccessory_ITEM08 = 8 UMETA(DisplayName = "8"),
	ETresItemDefAccessory_ITEM09 = 9 UMETA(DisplayName = "9"),
	ETresItemDefAccessory_ITEM10 = 10 UMETA(DisplayName = "10"),
	ETresItemDefAccessory_ITEM11 = 11,
	ETresItemDefAccessory_ITEM12 = 12,
	ETresItemDefAccessory_ITEM13 = 13,
	ETresItemDefAccessory_ITEM14 = 14,
	ETresItemDefAccessory_ITEM15 = 15,
	ETresItemDefAccessory_ITEM16 = 16,
	ETresItemDefAccessory_ITEM17 = 17,
	ETresItemDefAccessory_ITEM18 = 18,
	ETresItemDefAccessory_ITEM19 = 19,
	ETresItemDefAccessory_ITEM20 = 20,
	ETresItemDefAccessory_ITEM21 = 21,
	ETresItemDefAccessory_ITEM22 = 22,
	ETresItemDefAccessory_ITEM23 = 23,
	ETresItemDefAccessory_ITEM24 = 24,
	ETresItemDefAccessory_ITEM25 = 25,
	ETresItemDefAccessory_ITEM26 = 26,
	ETresItemDefAccessory_ITEM27 = 27,
	ETresItemDefAccessory_ITEM28 = 28,
	ETresItemDefAccessory_ITEM29 = 29,
	ETresItemDefAccessory_ITEM30 = 30,
	ETresItemDefAccessory_ITEM31 = 31,
	ETresItemDefAccessory_ITEM32 = 32,
	ETresItemDefAccessory_ITEM33 = 33,
	ETresItemDefAccessory_ITEM34 = 34,
	ETresItemDefAccessory_ITEM35 = 35,
	ETresItemDefAccessory_ITEM36 = 36,
	ETresItemDefAccessory_ITEM37 = 37,
	ETresItemDefAccessory_ITEM38 = 38,
	ETresItemDefAccessory_ITEM39 = 39,
	ETresItemDefAccessory_ITEM40 = 40,
	ETresItemDefAccessory_ITEM41 = 41,
	ETresItemDefAccessory_ITEM42 = 42,
	ETresItemDefAccessory_ITEM43 = 43,
	ETresItemDefAccessory_ITEM44 = 44,
	ETresItemDefAccessory_ITEM45 = 45,
	ETresItemDefAccessory_ITEM46 = 46,
	ETresItemDefAccessory_ITEM47 = 47,
	ETresItemDefAccessory_ITEM48 = 48,
	ETresItemDefAccessory_ITEM49 = 49,
	ETresItemDefAccessory_ITEM50 = 50,
	ETresItemDefAccessory_ITEM51 = 51,
	ETresItemDefAccessory_ITEM52 = 52,
	ETresItemDefAccessory_ITEM53 = 53,
	ETresItemDefAccessory_ITEM54 = 54,
	ETresItemDefAccessory_ITEM55 = 55,
	ETresItemDefAccessory_ITEM56 = 56,
	ETresItemDefAccessory_ITEM57 = 57,
	ETresItemDefAccessory_ITEM58 = 58,
	ETresItemDefAccessory_ITEM59 = 59,
	ETresItemDefAccessory_ITEM60 = 60,
	ETresItemDefAccessory_ITEM61 = 61,
	ETresItemDefAccessory_ITEM62 = 62,
	ETresItemDefAccessory_ITEM63 = 63,
	ETresItemDefAccessory_ITEM64 = 64,
	ETresItemDefAccessory_ITEM65 = 65,
	ETresItemDefAccessory_ITEM66 = 66,
	ETresItemDefAccessory_ITEM67 = 67,
	ETresItemDefAccessory_ITEM68 = 68,
	ETresItemDefAccessory_ITEM69 = 69,
	ETresItemDefAccessory_ITEM70 = 70,
	ETresItemDefAccessory_ITEM71 = 71,
	ETresItemDefAccessory_ITEM72 = 72,
	ETresItemDefAccessory_ITEM73 = 73,
	ETresItemDefAccessory_ITEM74 = 74,
	ETresItemDefAccessory_ITEM75 = 75,
	ETresItemDefAccessory_ITEM76 = 76,
	ETresItemDefAccessory_ITEM77 = 77,
	ETresItemDefAccessory_ITEM78 = 78,
	ETresItemDefAccessory_ITEM79 = 79,
	ETresItemDefAccessory_ITEM80 = 80 UMETA(DisplayName = "Item 80"),
	ETresItemDefAccessory_ITEM81 = 81 UMETA(DisplayName = "Item 81"),
	ETresItemDefAccessory_ITEM82 = 82 UMETA(DisplayName = "Item 82"),
	ETresItemDefAccessory_ITEM83 = 83 UMETA(DisplayName = "Item 83"),
	ETresItemDefAccessory_ITEM84 = 84 UMETA(DisplayName = "Item 84"),
	ETresItemDefAccessory_ITEM85 = 85 UMETA(DisplayName = "Item 85"),
	ETresItemDefAccessory_ITEM86 = 86 UMETA(DisplayName = "Item 86"),
	ETresItemDefAccessory_ITEM87 = 87 UMETA(DisplayName = "Item 87"),
	ETresItemDefAccessory_ITEM88 = 88 UMETA(DisplayName = "Item 88"),
	ETresItemDefAccessory_ITEM89 = 89 UMETA(DisplayName = "Item 89"),
	ETresItemDefAccessory_ITEM90 = 90 UMETA(DisplayName = "Item 90"),
	ETresItemDefAccessory_ITEM91 = 91 UMETA(DisplayName = "Item 91"),
	ETresItemDefAccessory_ITEM92 = 92 UMETA(DisplayName = "Item 92"),
	ETresItemDefAccessory_ITEM93 = 93 UMETA(DisplayName = "Item 93"),
	ETresItemDefAccessory_ITEM94 = 94 UMETA(DisplayName = "Item 94"),
	ETresItemDefAccessory_ITEM95 = 95 UMETA(DisplayName = "Item 95"),
	ETresItemDefAccessory_ITEM96 = 96 UMETA(DisplayName = "Item 96"),
	ETresItemDefAccessory_ITEM97 = 97 UMETA(DisplayName = "Item 97"),
	ETresItemDefAccessory_ITEM98 = 98 UMETA(DisplayName = "Item 98"),
	ETresItemDefAccessory_ITEM99 = 99 UMETA(DisplayName = "Item 99"),
	ETresItemDefAccessory_ITEM100 = 100 UMETA(DisplayName = "Item 100"),
	ETresItemDefAccessory_ITEM101 = 101 UMETA(DisplayName = "Item 101"),
	ETresItemDefAccessory_ITEM102 = 102 UMETA(DisplayName = "Item 102"),
	ETresItemDefAccessory_ITEM103 = 103 UMETA(DisplayName = "Item 103"),
	ETresItemDefAccessory_ITEM104 = 104 UMETA(DisplayName = "Item 104"),
	ETresItemDefAccessory_ITEM105 = 105 UMETA(DisplayName = "Item 105"),
	ETresItemDefAccessory_ITEM106 = 106 UMETA(DisplayName = "Item 106"),
	ETresItemDefAccessory_ITEM107 = 107 UMETA(DisplayName = "Item 107"),
	ETresItemDefAccessory_ITEM108 = 108 UMETA(DisplayName = "Item 108"),
	ETresItemDefAccessory_ITEM109 = 109 UMETA(DisplayName = "Item 109"),
	ETresItemDefAccessory_ITEM110 = 110 UMETA(DisplayName = "Item 110"),
	ETresItemDefAccessory_ITEM111 = 111 UMETA(DisplayName = "Item 111"),
	ETresItemDefAccessory_ITEM112 = 112 UMETA(DisplayName = "Item 112"),
	ETresItemDefAccessory_1_MAX = 113 UMETA(DisplayName = "MAX"),
	ETresItemDefAccessory_MAX = 114 UMETA(DisplayName = "Tres Item Def Accessory MAX")
};

UENUM(BlueprintType)
enum ETresdirectionType
{
	TRES_DIR_FRONT = 0 UMETA(DisplayName = "Front"),
	TRES_DIR_BACK = 1 UMETA(DisplayName = "Back"),
	TRES_DIR_RIGHT = 2 UMETA(DisplayName = "Right"),
	TRES_DIR_LEFT = 3 UMETA(DisplayName = "Left"),
	TRES_DIR_UP = 4 UMETA(DisplayName = "Up"),
	TRES_DIR_DOWN = 5 UMETA(DisplayName = "Down"),
	TRES_DIR_MAX = 6 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresGameLevelID
{
	TRES_GAME_LVID_BEGINNER = 0 UMETA(DisplayName = "Beginner"),
	TRES_GAME_LVID_STANDARD = 1 UMETA(DisplayName = "Standard"),
	TRES_GAME_LVID_PROUD = 2 UMETA(DisplayName = "Proud"),
	TRES_GAME_LVID_CRITICAL = 3 UMETA(DisplayName = "Critical"),
	TRES_GAME_LVID_MAX = 4 UMETA(DisplayName = "MAX")
};

USTRUCT(BlueprintType)
struct FTresCollShapeAssetUnit
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCollShapeAssetUnit")
	FName m_GrpName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCollShapeAssetUnit")
	TEnumAsByte<ETresCollision> ShapeType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCollShapeAssetUnit")
	FVector Size;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCollShapeAssetUnit")
	FVector RelativeLocation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCollShapeAssetUnit")
	FRotator RelativeRocation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCollShapeAssetUnit")
	FVector Scale;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCollShapeAssetUnit")
	class UStaticMesh* Mesh;
};

struct FTresRootComponentPostPhysicsTickFunction : public FTickFunction
{
	//appears empty
};

USTRUCT(BlueprintType)
struct FTresOverlapInfo
{
	GENERATED_BODY()
public:
	//appears empty
};

USTRUCT(BlueprintType)
struct FTresBodyTakeDamageEffect
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBodyTakeDamageEffect")
	class UParticleSystem* m_DamageEffect;
};

USTRUCT(BlueprintType)
struct FTresLevelEntityAppearInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLevelEntityAppearInfo")
	TEnumAsByte<ETresLevelEntityAppearMode> m_AppearMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLevelEntityAppearInfo")
	float m_AppearWaitMin;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLevelEntityAppearInfo")
	float m_AppearWaitMax;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLevelEntityAppearInfo")
	bool m_Visible;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLevelEntityAppearInfo")
	int m_CoopNo;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLevelEntityAppearInfo")
	FVector m_Location;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLevelEntityAppearInfo")
	FRotator m_Rotation;
};

USTRUCT(BlueprintType)
struct FTresLevelEntityUserData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLevelEntityUserData")
	UObject* m_UserObject;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLevelEntityUserData")
	float m_UserParams;
};

USTRUCT(BlueprintType)
struct FTresEncountSpawnRequest
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEncountSpawnRequest")
	class UClass* m_Class;

	//TODO
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEncountSpawnRequest")
	class ATresEncountVolume* m_EncountVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEncountSpawnRequest")
	TArray<FName> m_Groups;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEncountSpawnRequest")
	TWeakObjectPtr<AActor> m_Template;
};
/*
USTRUCT(BlueprintType)
struct FTresInterpGroupInstUpdateSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresInterpGroupInstUpdateSettings")
	class USkeletalMeshComponent* m_SkeletalMeshComponent;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresInterpGroupInstUpdateSettings")
	//TEnumAsByte<EMeshComponentUpdateFlag> m_UpdateFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresInterpGroupInstUpdateSettings")
	bool m_UpdateRateOptimizations;
};
*/
USTRUCT(BlueprintType)
struct FTresVoiceGroupUnit
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVoiceGroupUnit")
	int m_GroupNo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVoiceGroupUnit")
	class USoundBase* m_pVoice;
};

USTRUCT(BlueprintType)
struct FTresVoiceGroup
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVoiceGroup")
	FName m_GroupName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVoiceGroup")
	bool m_bPlayOnGroupNotFound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVoiceGroup")
	class USoundBase* m_pDefaultVoice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVoiceGroup")
	TArray<struct FTresVoiceGroupUnit> m_Table;
};

USTRUCT(BlueprintType)
struct FTresEncountVolumeEntry
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEncountVolumeEntry")
	TArray<FName> m_GroupNames;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEncountVolumeEntry")
	FVector m_StartOffset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEncountVolumeEntry")
	FVector m_EndOffset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEncountVolumeEntry")
	bool m_WorldOffsetZ;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEncountVolumeEntry")
	int m_TryCount;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEncountVolumeEntry")
	float m_EscapeDistance;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEncountVolumeEntry")
	int m_LotteryWeight;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEncountVolumeEntry")
	bool m_bSkipNextTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEncountVolumeEntry")
	class UClass* m_Troops;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEncountVolumeEntry")
	FName m_InternalGroupName;
};

USTRUCT(BlueprintType)
struct FTresLevelEntitySequenceConditionalAction
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLevelEntitySequenceConditionalAction")
	class UTresLevelEntitySequenceCondition* m_Condition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLevelEntitySequenceConditionalAction")
	class UTresLevelEntitySequenceAction* m_Action;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLevelEntitySequenceConditionalAction")
	bool m_Abandonable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLevelEntitySequenceConditionalAction")
	class UTresLevelEntitySequenceCondition* m_AbandonCondition;
};

USTRUCT(BlueprintType)
struct FTresAttractionFlowDrawingEntry
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttractionFlowDrawingEntry")
	TEnumAsByte<ETresCommandKind> m_Command;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttractionFlowDrawingEntry")
	float m_Weight;
};

USTRUCT(BlueprintType)
struct FTresGumiShipCinematicModeEventData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresGumiShipCinematicModeEventData")
	int m_eEventFlags;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresGumiShipCinematicModeEventData")
	FName m_EventName;
};

USTRUCT(BlueprintType)
struct FTresLocText
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLocText")
	FString Namespace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLocText")
	FString Key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLocText")
	TArray<FString> Params;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLocText")
	FString LocalizedText;
};