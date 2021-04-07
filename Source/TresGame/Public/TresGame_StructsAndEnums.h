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
	TRES_ENEMY_UID_EX001 = 1 UMETA(DisplayName = "EX 001"),
	TRES_ENEMY_UID_EX003 = 2 UMETA(DisplayName = "EX 003"),
	TRES_ENEMY_UID_EX004 = 3 UMETA(DisplayName = "EX 004"),
	TRES_ENEMY_UID_EX005 = 4 UMETA(DisplayName = "EX 005"),
	TRES_ENEMY_UID_EX016 = 5 UMETA(DisplayName = "EX 016"),
	TRES_ENEMY_UID_EX081 = 6 UMETA(DisplayName = "EX 081"),
	TRES_ENEMY_UID_DW401 = 7 UMETA(DisplayName = "DW 401"),
	TRES_ENEMY_UID_DW401_s0 = 8 UMETA(DisplayName = "DW 401 S0"),
	TRES_ENEMY_UID_DW401_s1 = 9 UMETA(DisplayName = "DW 401 S1"),
	TRES_ENEMY_UID_DW402 = 10 UMETA(DisplayName = "DW 402"),
	TRES_ENEMY_UID_DW402_s1 = 11 UMETA(DisplayName = "DW 402 S1"),
	TRES_ENEMY_UID_DW405 = 12 UMETA(DisplayName = "DW 405"),
	TRES_ENEMY_UID_DW407 = 13 UMETA(DisplayName = "DW 407"),
	TRES_ENEMY_UID_EX002 = 14 UMETA(DisplayName = "EX 002"),
	TRES_ENEMY_UID_EX006 = 15 UMETA(DisplayName = "EX 006"),
	TRES_ENEMY_UID_EX007 = 16 UMETA(DisplayName = "EX 007"),
	TRES_ENEMY_UID_EX009 = 17 UMETA(DisplayName = "EX 009"),
	TRES_ENEMY_UID_EX010 = 18 UMETA(DisplayName = "EX 010"),
	TRES_ENEMY_UID_EX011 = 19 UMETA(DisplayName = "EX 011"),
	TRES_ENEMY_UID_EX012 = 20 UMETA(DisplayName = "EX 012"),
	TRES_ENEMY_UID_EX013 = 21 UMETA(DisplayName = "EX 013"),
	TRES_ENEMY_UID_EX014 = 22 UMETA(DisplayName = "EX 014"),
	TRES_ENEMY_UID_EX015 = 23 UMETA(DisplayName = "EX 015"),
	TRES_ENEMY_UID_EX017 = 24 UMETA(DisplayName = "EX 017"),
	TRES_ENEMY_UID_EX036 = 25 UMETA(DisplayName = "EX 036"),
	TRES_ENEMY_UID_EX037 = 26 UMETA(DisplayName = "EX 037"),
	TRES_ENEMY_UID_EX038 = 27 UMETA(DisplayName = "EX 038"),
	TRES_ENEMY_UID_EX018 = 28 UMETA(DisplayName = "EX 018"),
	TRES_ENEMY_UID_EX032 = 29 UMETA(DisplayName = "EX 032"),
	TRES_ENEMY_UID_EX033 = 30 UMETA(DisplayName = "EX 033"),
	TRES_ENEMY_UID_EX020 = 31 UMETA(DisplayName = "EX 020"),
	TRES_ENEMY_UID_EX021 = 32 UMETA(DisplayName = "EX 021"),
	TRES_ENEMY_UID_EX026 = 33 UMETA(DisplayName = "EX 026"),
	TRES_ENEMY_UID_EX027 = 34 UMETA(DisplayName = "EX 027"),
	TRES_ENEMY_UID_EX028 = 35 UMETA(DisplayName = "EX 028"),
	TRES_ENEMY_UID_EX035 = 36 UMETA(DisplayName = "EX 035"),
	TRES_ENEMY_UID_EX039 = 37 UMETA(DisplayName = "EX 039"),
	TRES_ENEMY_UID_EX041 = 38 UMETA(DisplayName = "EX 041"),
	TRES_ENEMY_UID_EX042 = 39 UMETA(DisplayName = "EX 042"),
	TRES_ENEMY_UID_EX043 = 40 UMETA(DisplayName = "EX 043"),
	TRES_ENEMY_UID_EX044 = 41 UMETA(DisplayName = "EX 044"),
	TRES_ENEMY_UID_EX045 = 42 UMETA(DisplayName = "EX 045"),
	TRES_ENEMY_UID_EX046 = 43 UMETA(DisplayName = "EX 046"),
	TRES_ENEMY_UID_EX047 = 44 UMETA(DisplayName = "EX 047"),
	TRES_ENEMY_UID_EX048 = 45 UMETA(DisplayName = "EX 048"),
	TRES_ENEMY_UID_EX049 = 46 UMETA(DisplayName = "EX 049"),
	TRES_ENEMY_UID_EX050 = 47 UMETA(DisplayName = "EX 050"),
	TRES_ENEMY_UID_EX051 = 48 UMETA(DisplayName = "EX 051"),
	TRES_ENEMY_UID_EX052 = 49 UMETA(DisplayName = "EX 052"),
	TRES_ENEMY_UID_EX053 = 50 UMETA(DisplayName = "EX 053"),
	TRES_ENEMY_UID_EX054 = 51 UMETA(DisplayName = "EX 054"),
	TRES_ENEMY_UID_EX055 = 52 UMETA(DisplayName = "EX 055"),
	TRES_ENEMY_UID_EX056 = 53 UMETA(DisplayName = "EX 056"),
	TRES_ENEMY_UID_EX059 = 54 UMETA(DisplayName = "EX 059"),
	TRES_ENEMY_UID_EX061 = 55 UMETA(DisplayName = "EX 061"),
	TRES_ENEMY_UID_EX065 = 56 UMETA(DisplayName = "EX 065"),
	TRES_ENEMY_UID_EX066 = 57 UMETA(DisplayName = "EX 066"),
	TRES_ENEMY_UID_EX067 = 58 UMETA(DisplayName = "EX 067"),
	TRES_ENEMY_UID_EX068 = 59 UMETA(DisplayName = "EX 068"),
	TRES_ENEMY_UID_EX073 = 60 UMETA(DisplayName = "EX 073"),
	TRES_ENEMY_UID_EX082 = 61 UMETA(DisplayName = "EX 082"),
	TRES_ENEMY_UID_EX085 = 62 UMETA(DisplayName = "EX 085"),
	TRES_ENEMY_UID_EX086 = 63 UMETA(DisplayName = "EX 086"),
	TRES_ENEMY_UID_EX086_s0 = 64 UMETA(DisplayName = "EX 086 S0"),
	TRES_ENEMY_UID_EX086_s1 = 65 UMETA(DisplayName = "EX 086 S1"),
	TRES_ENEMY_UID_EX087 = 66 UMETA(DisplayName = "EX 087"),
	TRES_ENEMY_UID_EX093 = 67 UMETA(DisplayName = "EX 093"),
	TRES_ENEMY_UID_EX094 = 68 UMETA(DisplayName = "EX 094"),
	TRES_ENEMY_UID_EX095 = 69 UMETA(DisplayName = "EX 095"),
	TRES_ENEMY_UID_EX101 = 70 UMETA(DisplayName = "EX 101"),
	TRES_ENEMY_UID_EX105 = 71 UMETA(DisplayName = "EX 105"),
	TRES_ENEMY_UID_EX106 = 72 UMETA(DisplayName = "EX 106"),
	TRES_ENEMY_UID_EX107 = 73 UMETA(DisplayName = "EX 107"),
	TRES_ENEMY_UID_EX110 = 74 UMETA(DisplayName = "EX 110"),
	TRES_ENEMY_UID_EX113 = 75 UMETA(DisplayName = "EX 113"),
	TRES_ENEMY_UID_EX114 = 76 UMETA(DisplayName = "EX 114"),
	TRES_ENEMY_UID_EX201 = 77 UMETA(DisplayName = "EX 201"),
	TRES_ENEMY_UID_EX202 = 78 UMETA(DisplayName = "EX 202"),
	TRES_ENEMY_UID_EX203 = 79 UMETA(DisplayName = "EX 203"),
	TRES_ENEMY_UID_EX205 = 80 UMETA(DisplayName = "EX 205"),
	TRES_ENEMY_UID_EX301 = 81 UMETA(DisplayName = "EX 301"),
	TRES_ENEMY_UID_EX302 = 82 UMETA(DisplayName = "EX 301"),
	TRES_ENEMY_UID_EX316 = 83 UMETA(DisplayName = "EX 316"),
	TRES_ENEMY_UID_EX304 = 84 UMETA(DisplayName = "EX 304"),
	TRES_ENEMY_UID_EX305 = 85 UMETA(DisplayName = "EX 305"),
	TRES_ENEMY_UID_EX306 = 86 UMETA(DisplayName = "EX 306"),
	TRES_ENEMY_UID_EX307 = 87 UMETA(DisplayName = "EX 307"),
	TRES_ENEMY_UID_EX308 = 88 UMETA(DisplayName = "EX 308"),
	TRES_ENEMY_UID_EX309 = 89 UMETA(DisplayName = "EX 309"),
	TRES_ENEMY_UID_EX310 = 90 UMETA(DisplayName = "EX 310"),
	TRES_ENEMY_UID_EX311 = 91 UMETA(DisplayName = "EX 311"),
	TRES_ENEMY_UID_EX313 = 92 UMETA(DisplayName = "EX 313"),
	TRES_ENEMY_UID_EX322 = 93 UMETA(DisplayName = "EX 322"),
	TRES_ENEMY_UID_EX325 = 94 UMETA(DisplayName = "EX 325"),
	TRES_ENEMY_UID_EX326 = 95 UMETA(DisplayName = "EX 326"),
	TRES_ENEMY_UID_EX701 = 96 UMETA(DisplayName = "EX 701"),
	TRES_ENEMY_UID_EX702 = 97 UMETA(DisplayName = "EX 702"),
	TRES_ENEMY_UID_EX703 = 98 UMETA(DisplayName = "EX 703"),
	TRES_ENEMY_UID_EX711 = 99 UMETA(DisplayName = "EX 711"),
	TRES_ENEMY_UID_EX721 = 100 UMETA(DisplayName = "EX 721"),
	TRES_ENEMY_UID_EX731 = 101 UMETA(DisplayName = "EX 731"),
	TRES_ENEMY_UID_EX732 = 102 UMETA(DisplayName = "EX 732"),
	TRES_ENEMY_UID_EX734 = 103 UMETA(DisplayName = "EX 734"),
	TRES_ENEMY_UID_EX761 = 104 UMETA(DisplayName = "EX 761"),
	TRES_ENEMY_UID_EX047_s0 = 105 UMETA(DisplayName = "EX 047 S0"),
	TRES_ENEMY_UID_EX771 = 106 UMETA(DisplayName = "EX 771"),
	TRES_ENEMY_UID_EX77101 = 107 UMETA(DisplayName = "EX 771 01"),
	TRES_ENEMY_UID_EX77102 = 108 UMETA(DisplayName = "EX 771 02"),
	TRES_ENEMY_UID_EX047_s1 = 109 UMETA(DisplayName = "EX 047 S1"),
	TRES_ENEMY_UID_EX801 = 110 UMETA(DisplayName = "EX 801"),
	TRES_ENEMY_UID_EX806 = 111 UMETA(DisplayName = "EX 806"),
	TRES_ENEMY_UID_EX816 = 112 UMETA(DisplayName = "EX 816"),
	TRES_ENEMY_UID_EX830 = 113 UMETA(DisplayName = "EX 830"),
	TRES_ENEMY_UID_EX831 = 114 UMETA(DisplayName = "EX 831"),
	TRES_ENEMY_UID_EX832 = 115 UMETA(DisplayName = "EX 832"),
	TRES_ENEMY_UID_EX833 = 116 UMETA(DisplayName = "EX 833"),
	TRES_ENEMY_UID_EX834 = 117 UMETA(DisplayName = "EX 834"),
	TRES_ENEMY_UID_EX840 = 118 UMETA(DisplayName = "EX 840"),
	TRES_ENEMY_UID_EX841 = 119 UMETA(DisplayName = "EX 841"),
	TRES_ENEMY_UID_EX842 = 120 UMETA(DisplayName = "EX 842"),
	TRES_ENEMY_UID_EX843 = 121 UMETA(DisplayName = "EX 843"),
	TRES_ENEMY_UID_EX844 = 122 UMETA(DisplayName = "EX 844"),
	TRES_ENEMY_UID_EX845 = 123 UMETA(DisplayName = "EX 845"),
	TRES_ENEMY_UID_BX059 = 124 UMETA(DisplayName = "BX 059"),
	TRES_ENEMY_UID_BX901 = 125 UMETA(DisplayName = "BX 901"),
	TRES_ENEMY_UID_EX047_s2 = 126 UMETA(DisplayName = "EX 047 S2"),
	TRES_ENEMY_UID_BX903 = 127 UMETA(DisplayName = "BX 903"),
	TRES_ENEMY_UID_CA901 = 128 UMETA(DisplayName = "CA 901"),
	TRES_ENEMY_UID_FZ903 = 129 UMETA(DisplayName = "FZ 903"),
	TRES_ENEMY_UID_HE001 = 130 UMETA(DisplayName = "HE 001"),
	TRES_ENEMY_UID_HE902 = 131 UMETA(DisplayName = "HE 902"),
	TRES_ENEMY_UID_HE903 = 132 UMETA(DisplayName = "HE 903"),
	TRES_ENEMY_UID_HE904 = 133 UMETA(DisplayName = "HE 904"),
	TRES_ENEMY_UID_CA401 = 134 UMETA(DisplayName = "CA 401"),
	TRES_ENEMY_UID_CA402 = 135 UMETA(DisplayName = "CA 402"),
	TRES_ENEMY_UID_CA403 = 136 UMETA(DisplayName = "CA 403"),
	TRES_ENEMY_UID_CA404 = 137 UMETA(DisplayName = "CA 404"),
	TRES_ENEMY_UID_CA405 = 138 UMETA(DisplayName = "CA 405"),
	TRES_ENEMY_UID_EX071 = 139 UMETA(DisplayName = "EX 071"),
	TRES_ENEMY_UID_EX072 = 140 UMETA(DisplayName = "EX 072"),
	TRES_ENEMY_UID_EX407 = 141 UMETA(DisplayName = "EX 407"),
	TRES_ENEMY_UID_EX064 = 142 UMETA(DisplayName = "EX 064"),
	TRES_ENEMY_UID_EX047_s3 = 143 UMETA(DisplayName = "EX 047 S3"),
	TRES_ENEMY_UID_EX047_s4 = 144 UMETA(DisplayName = "EX 047 S4"),
	TRES_ENEMY_UID_EX409 = 145 UMETA(DisplayName = "EX 409"),
	TRES_ENEMY_UID_EX751 = 146 UMETA(DisplayName = "EX 751"),
	TRES_ENEMY_UID_EX781 = 147 UMETA(DisplayName = "EX 781"),
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
	ETresUIHudCommandExKind_None = 0 UMETA(DisplayName = "None"),
	ETresUIHudCommandExKind_Railscope1 = 1 UMETA(DisplayName = "Rail Scope 1"),
	ETresUIHudCommandExKind_Railscope2 = 2 UMETA(DisplayName = "Rail Scope 2"),
	ETresUIHudCommandExKind_RailChange = 3 UMETA(DisplayName = "Rail Change"),
	ETresUIHudCommandExKind_HeWorkshop = 4 UMETA(DisplayName = "HE Workshop"),
	ETresUIHudCommandExKind_HeWorkshop_Finish = 5 UMETA(DisplayName = "HE Workshop Finish"),
	ETresUIHudCommandExKind_TsToyGame = 6 UMETA(DisplayName = "TS Toy Game"),
	ETresUIHudCommandExKind_RaDanceCommand = 7 UMETA(DisplayName = "RA Dance Command"),
	ETresUIHudCommandExKind_RaDanceRapunzel = 8 UMETA(DisplayName = "RA Dance Rapunzel"),
	ETresUIHudCommandExKind_RaDanceRapunzel_Finish = 9 UMETA(DisplayName = "RA Dance Rapunzel Finish"),
	ETresUIHudCommandExKind_BxCommand = 10 UMETA(DisplayName = "BX Command"),
	ETresUIHudCommandExKind_BxDarkBaymax = 11 UMETA(DisplayName = "BX Dark Baymax"),
	ETresUIHudCommandExKind_BxDarkBaymax_Rail = 12 UMETA(DisplayName = "BX Dark Baymax Rail"),
	ETresUIHudCommandExKind_BxDarkBaymax_Finish = 13 UMETA(DisplayName = "BX Dark Baymax Finish"),
	ETresUIHudCommandExKind_CaSpecialShipCommand = 14 UMETA(DisplayName = "CA Special Ship Command"),
	ETresUIHudCommandExKind_CaBlackPearlCommand = 15 UMETA(DisplayName = "CA Black Pearl Command"),
	ETresUIHudCommandExKind_ShootFlow_Rainbow = 16 UMETA(DisplayName = "Shoot Flow Rainbow"),
	ETresUIHudCommandExKind_ShootFlow_Burst = 17 UMETA(DisplayName = "Shoot Flow Burst"),
	ETresUIHudCommandExKind_ShootFlow_Shining = 18 UMETA(DisplayName = "Shoot Flow Shining"),
	ETresUIHudCommandExKind_ShootFlow_DarkVolley = 19 UMETA(DisplayName = "Shoot Flow Dark Volley"),
	ETresUIHudCommandExKind_ShootFlow_BurstR = 20 UMETA(DisplayName = "Shoot Flow Burst R"),
	ETresUIHudCommandExKind_1_MAX = 21 UMETA(DisplayName = "MAX"),
	ETresUIHudCommandExKind_MAX = 22 UMETA(DisplayName = "Tres UI HUD Command Ex Kind MAX")
};

UENUM(BlueprintType)
enum ETresGameHelp
{
	ETresGameHelp_Help_00100 = 0 UMETA(DisplayName = "Help 00100"),
	ETresGameHelp_Help_00200 = 1 UMETA(DisplayName = "Help 00200"),
	ETresGameHelp_Help_00300 = 2 UMETA(DisplayName = "Help 00300"),
	ETresGameHelp_Help_00400 = 3 UMETA(DisplayName = "Help 00400"),
	ETresGameHelp_Help_00450 = 4 UMETA(DisplayName = "Help 00450"),
	ETresGameHelp_Help_00500 = 5 UMETA(DisplayName = "Help 00600"),
	ETresGameHelp_Help_00600 = 6 UMETA(DisplayName = "Help 00700"),
	ETresGameHelp_Help_00700 = 7 UMETA(DisplayName = "Help 00700"),
	ETresGameHelp_Help_00800 = 8 UMETA(DisplayName = "Help 00800"),
	ETresGameHelp_Help_00900 = 9 UMETA(DisplayName = "Help 00900"),
	ETresGameHelp_Help_01000 = 10 UMETA(DisplayName = "Help 01000"),
	ETresGameHelp_Help_01100 = 11 UMETA(DisplayName = "Help 01100"),
	ETresGameHelp_Help_01200 = 12 UMETA(DisplayName = "Help 01200"),
	ETresGameHelp_Help_01300 = 13 UMETA(DisplayName = "Help 01300"),
	ETresGameHelp_Help_01400 = 14 UMETA(DisplayName = "Help 01400"),
	ETresGameHelp_Help_01500 = 15 UMETA(DisplayName = "Help 01500"),
	ETresGameHelp_Help_01600 = 16 UMETA(DisplayName = "Help 01600"),
	ETresGameHelp_Help_01700 = 17 UMETA(DisplayName = "Help 01700"),
	ETresGameHelp_Help_01800 = 18 UMETA(DisplayName = "Help 01800"),
	ETresGameHelp_Help_01900 = 19 UMETA(DisplayName = "Help 01900"),
	ETresGameHelp_Help = 20 UMETA(DisplayName = "Help"),
	ETresGameHelp_Help01 = 21 UMETA(DisplayName = "Help 01"),
	ETresGameHelp_Help02 = 22 UMETA(DisplayName = "Help 02"),
	ETresGameHelp_Help03 = 23 UMETA(DisplayName = "Help 03"),
	ETresGameHelp_Help04 = 24 UMETA(DisplayName = "Help 04"),
	ETresGameHelp_Help05 = 25 UMETA(DisplayName = "Help 05"),
	ETresGameHelp_Help06 = 26 UMETA(DisplayName = "Help 06"),
	ETresGameHelp_Help07 = 27 UMETA(DisplayName = "Help 07"),
	ETresGameHelp_Help08 = 28 UMETA(DisplayName = "Help 08"),
	ETresGameHelp_Help09 = 29 UMETA(DisplayName = "Help 09"),
	ETresGameHelp_Help10 = 30 UMETA(DisplayName = "Help 10"),
	ETresGameHelp_Help11 = 31 UMETA(DisplayName = "Help 11"),
	ETresGameHelp_Help12 = 32 UMETA(DisplayName = "Help 12"),
	ETresGameHelp_Help13 = 33 UMETA(DisplayName = "Help 13"),
	ETresGameHelp_Help14 = 34 UMETA(DisplayName = "Help 14"),
	ETresGameHelp_Help15 = 35 UMETA(DisplayName = "Help 15"),
	ETresGameHelp_Help16 = 36 UMETA(DisplayName = "Help 16"),
	ETresGameHelp_Help17 = 37 UMETA(DisplayName = "Help 17"),
	ETresGameHelp_Help18 = 38 UMETA(DisplayName = "Help 18"),
	ETresGameHelp_Help19 = 39 UMETA(DisplayName = "Help 19"),
	ETresGameHelp_Help20 = 40 UMETA(DisplayName = "Help 20"),
	ETresGameHelp_Help21 = 41 UMETA(DisplayName = "Help 21"),
	ETresGameHelp_Help22 = 42 UMETA(DisplayName = "Help 22"),
	ETresGameHelp_Help23 = 43 UMETA(DisplayName = "Help 23"),
	ETresGameHelp_Help24 = 44 UMETA(DisplayName = "Help 24"),
	ETresGameHelp_Help25 = 45 UMETA(DisplayName = "Help 25"),
	ETresGameHelp_Help26 = 46 UMETA(DisplayName = "Help 26"),
	ETresGameHelp_Help27 = 47 UMETA(DisplayName = "Help 27"),
	ETresGameHelp_Help28 = 48 UMETA(DisplayName = "Help 28"),
	ETresGameHelp_Help29 = 49 UMETA(DisplayName = "Help 29"),
	ETresGameHelp_Help30 = 50 UMETA(DisplayName = "Help 30"),
	ETresGameHelp_Help31 = 51 UMETA(DisplayName = "Help 31"),
	ETresGameHelp_Help32 = 52 UMETA(DisplayName = "Help 32"),
	ETresGameHelp_Help33 = 53 UMETA(DisplayName = "Help 33"),
	ETresGameHelp_Help34 = 54 UMETA(DisplayName = "Help 34"),
	ETresGameHelp_Help35 = 55 UMETA(DisplayName = "Help 35"),
	ETresGameHelp_Help36 = 56 UMETA(DisplayName = "Help 36"),
	ETresGameHelp_Help37 = 57 UMETA(DisplayName = "Help 37"),
	ETresGameHelp_Help38 = 58 UMETA(DisplayName = "Help 38"),
	ETresGameHelp_Help39 = 59 UMETA(DisplayName = "Help 39"),
	ETresGameHelp_Help40 = 60 UMETA(DisplayName = "Help 40"),
	ETresGameHelp_Help41 = 61 UMETA(DisplayName = "Help 41"),
	ETresGameHelp_Help42 = 62 UMETA(DisplayName = "Help 42"),
	ETresGameHelp_Help43 = 63 UMETA(DisplayName = "Help 43"),
	ETresGameHelp_Help44 = 64 UMETA(DisplayName = "Help 44"),
	ETresGameHelp_Help45 = 65 UMETA(DisplayName = "Help 45"),
	ETresGameHelp_Help46 = 66 UMETA(DisplayName = "Help 46"),
	ETresGameHelp_Help47 = 67 UMETA(DisplayName = "Help 47"),
	ETresGameHelp_Help48 = 68 UMETA(DisplayName = "Help 48"),
	ETresGameHelp_Help49 = 69 UMETA(DisplayName = "Help 49"),
	ETresGameHelp_Help50 = 70 UMETA(DisplayName = "Help 50"),
	ETresGameHelp_Help51 = 71 UMETA(DisplayName = "Help 51"),
	ETresGameHelp_Help52 = 72 UMETA(DisplayName = "Help 52"),
	ETresGameHelp_Help53 = 73 UMETA(DisplayName = "Help 53"),
	ETresGameHelp_Help54 = 74 UMETA(DisplayName = "Help 54"),
	ETresGameHelp_Help55 = 75 UMETA(DisplayName = "Help 55"),
	ETresGameHelp_Help56 = 76 UMETA(DisplayName = "Help 56"),
	ETresGameHelp_Help57 = 77 UMETA(DisplayName = "Help 57"),
	ETresGameHelp_Help58 = 78 UMETA(DisplayName = "Help 58"),
	ETresGameHelp_Help59 = 79 UMETA(DisplayName = "Help 59"),
	ETresGameHelp_Help60 = 80 UMETA(DisplayName = "Help 60"),
	ETresGameHelp_Help61 = 81 UMETA(DisplayName = "Help 61"),
	ETresGameHelp_Help62 = 82 UMETA(DisplayName = "Help 62"),
	ETresGameHelp_Help63 = 83 UMETA(DisplayName = "Help 63"),
	ETresGameHelp_Help64 = 84 UMETA(DisplayName = "Help 64"),
	ETresGameHelp_Help65 = 85 UMETA(DisplayName = "Help 65"),
	ETresGameHelp_Help66 = 86 UMETA(DisplayName = "Help 66"),
	ETresGameHelp_Help67 = 87 UMETA(DisplayName = "Help 67"),
	ETresGameHelp_Help68 = 88 UMETA(DisplayName = "Help 68"),
	ETresGameHelp_Help69 = 89 UMETA(DisplayName = "Help 69"),
	ETresGameHelp_Help70 = 90 UMETA(DisplayName = "Help 70"),
	ETresGameHelp_Help71 = 91 UMETA(DisplayName = "Help 71"),
	ETresGameHelp_Help72 = 92 UMETA(DisplayName = "Help 72"),
	ETresGameHelp_Help73 = 93 UMETA(DisplayName = "Help 73"),
	ETresGameHelp_Help74 = 94 UMETA(DisplayName = "Help 74"),
	ETresGameHelp_Help75 = 95 UMETA(DisplayName = "Help 75"),
	ETresGameHelp_Help76 = 96 UMETA(DisplayName = "Help 76"),
	ETresGameHelp_Help77 = 97 UMETA(DisplayName = "Help 77"),
	ETresGameHelp_Help78 = 98 UMETA(DisplayName = "Help 78"),
	ETresGameHelp_Help79 = 99 UMETA(DisplayName = "Help 79"),
	ETresGameHelp_Help80 = 100 UMETA(DisplayName = "Help 80"),
	ETresGameHelp_Help81 = 101 UMETA(DisplayName = "Help 81"),
	ETresGameHelp_Help82 = 102 UMETA(DisplayName = "Help 82"),
	ETresGameHelp_Help83 = 103 UMETA(DisplayName = "Help 83"),
	ETresGameHelp_Help84 = 104 UMETA(DisplayName = "Help 84"),
	ETresGameHelp_Help85 = 105 UMETA(DisplayName = "Help 85"),
	ETresGameHelp_Help86 = 106 UMETA(DisplayName = "Help 86"),
	ETresGameHelp_Help87 = 107 UMETA(DisplayName = "Help 87"),
	ETresGameHelp_Help88 = 108 UMETA(DisplayName = "Help 88"),
	ETresGameHelp_Help89 = 109 UMETA(DisplayName = "Help 89"),
	ETresGameHelp_Help90 = 110 UMETA(DisplayName = "Help 90"),
	ETresGameHelp_Help91 = 111 UMETA(DisplayName = "Help 91"),
	ETresGameHelp_Help92 = 112 UMETA(DisplayName = "Help 92"),
	ETresGameHelp_Help93 = 113 UMETA(DisplayName = "Help 93"),
	ETresGameHelp_Help94 = 114 UMETA(DisplayName = "Help 94"),
	ETresGameHelp_Help95 = 115 UMETA(DisplayName = "Help 95"),
	ETresGameHelp_Help96 = 116 UMETA(DisplayName = "Help 96"),
	ETresGameHelp_Help97 = 117 UMETA(DisplayName = "Help 97"),
	ETresGameHelp_Help98 = 118 UMETA(DisplayName = "Help 98"),
	ETresGameHelp_Help99 = 119 UMETA(DisplayName = "Help 99"),
	ETresGameHelp_Help100 = 120 UMETA(DisplayName = "Help 100"),
	ETresGameHelp_Help101 = 121 UMETA(DisplayName = "Help 101"),
	ETresGameHelp_Help102 = 122 UMETA(DisplayName = "Help 102"),
	ETresGameHelp_Help103 = 123 UMETA(DisplayName = "Help 103"),
	ETresGameHelp_Help104 = 124 UMETA(DisplayName = "Help 104"),
	ETresGameHelp_Help_00650 = 125 UMETA(DisplayName = "Help 00650"),
	ETresGameHelp_Help105 = 126 UMETA(DisplayName = "Help 105"),
	ETresGameHelp_Help106 = 127 UMETA(DisplayName = "Help 106"),
	ETresGameHelp_Help107 = 128 UMETA(DisplayName = "Help 107"),
	ETresGameHelp_Help108 = 129 UMETA(DisplayName = "Help 108"),
	ETresGameHelp_Help109 = 130 UMETA(DisplayName = "Help 109"),
	ETresGameHelp_Help110 = 131 UMETA(DisplayName = "Help 110"),
	ETresGameHelp_Help111 = 132 UMETA(DisplayName = "Help 111"),
	ETresGameHelp_Help112 = 133 UMETA(DisplayName = "Help 112"),
	ETresGameHelp_Help113 = 134 UMETA(DisplayName = "Help 113"),
	ETresGameHelp_Help114 = 135 UMETA(DisplayName = "Help 114"),
	ETresGameHelp_Help115 = 136 UMETA(DisplayName = "Help 115"),
	ETresGameHelp_Help116 = 137 UMETA(DisplayName = "Help 116"),
	ETresGameHelp_Help117 = 138 UMETA(DisplayName = "Help 117"),
	ETresGameHelp_Help118 = 139 UMETA(DisplayName = "Help 118"),
	ETresGameHelp_Help119 = 140 UMETA(DisplayName = "Help 119"),
	ETresGameHelp_Help120 = 141 UMETA(DisplayName = "Help 120"),
	ETresGameHelp_Help121 = 142 UMETA(DisplayName = "Help 121"),
	ETresGameHelp_Help122 = 143 UMETA(DisplayName = "Help 122"),
	ETresGameHelp_Help123 = 144 UMETA(DisplayName = "Help 123"),
	ETresGameHelp_1_Max = 145 UMETA(DisplayName = "MAX"),
	ETresGameHelp_Invalid = 146 UMETA(DisplayName = "Invalid"),
	ETresGameHelp_MAX = 147 UMETA(DisplayName = "Tres Game Help MAX")
};

UENUM(BlueprintType)
enum ETresUISnowSlideCountDownType
{
	ETresUISnowSlideCountDownType_Three = 0 UMETA(DisplayName = "Three"),
	ETresUISnowSlideCountDownType_Two = 1 UMETA(DisplayName = "Two"),
	ETresUISnowSlideCountDownType_One = 2 UMETA(DisplayName = "One"),
	ETresUISnowSlideCountDownType_Start = 3 UMETA(DisplayName = "Start"),
	ETresUISnowSlideCountDownType_Finish = 4 UMETA(DisplayName = "Finish"),
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
	ETresUIHudPuddingCountDown_Three = 0 UMETA(DisplayName = "Three"),
	ETresUIHudPuddingCountDown_Two = 1 UMETA(DisplayName = "Two"),
	ETresUIHudPuddingCountDown_One = 2 UMETA(DisplayName = "One"),
	ETresUIHudPuddingCountDown_Start = 3 UMETA(DisplayName = "Start"),
	ETresUIHudPuddingCountDown_Finish = 4 UMETA(DisplayName = "Finish"),
	ETresUIHudPuddingCountDown_1_MAX = 5 UMETA(DisplayName = "MAX"),
	ETresUIHudPuddingCountDown_MAX = 6 UMETA(DisplayName = "Tres UI HUD Pudding Count Down MAX")
};

UENUM(BlueprintType)
enum ETresUIHudBlackPearlMarker
{
	ETresUIHudBlackPearlMarker_Player = 0 UMETA(DisplayName = "Player"),
	ETresUIHudBlackPearlMarker_BlackPearl = 1 UMETA(DisplayName = "Black Pearl"),
	ETresUIHudBlackPearlMarker_1_MAX = 2 UMETA(DisplayName = "MAX"),
	ETresUIHudBlackPearlMarker_MAX = 3 UMETA(DisplayName = "Tres UI HUD Black Pearl Marker MAX")
};

UENUM(BlueprintType)
enum ETresUIHudBlackPearlAlert
{
	ETresUIHudBlackPearlAlert_Normal = 0 UMETA(DisplayName = "Normal"),
	ETresUIHudBlackPearlAlert_Blink1 = 1 UMETA(DisplayName = "Blink 1"),
	ETresUIHudBlackPearlAlert_Blink2 = 2 UMETA(DisplayName = "Blink 2"),
	ETresUIHudBlackPearlAlert_1_MAX = 3 UMETA(DisplayName = "MAX"),
	ETresUIHudBlackPearlAlert_MAX = 4 UMETA(DisplayName = "Tres UI HUD Black Pearl Alert MAX")
};

UENUM(BlueprintType)
enum ETresUIHudBaymaxHero
{
	ETresUIHudBaymaxHero_Lemon = 0 UMETA(DisplayName = "Lemon"),
	ETresUIHudBaymaxHero_Tomago = 1 UMETA(DisplayName = "Tomago"),
	ETresUIHudBaymaxHero_Wasabi = 2 UMETA(DisplayName = "Wasabi"),
	ETresUIHudBaymaxHero_Fred = 3 UMETA(DisplayName = "Fred"),
	ETresUIHudBaymaxHero_1_MAX = 4 UMETA(DisplayName = "MAX"),
	ETresUIHudBaymaxHero_MAX = 5 UMETA(DisplayName = "Tres UI HUD Baymax Hero MAX")
};

UENUM(BlueprintType)
enum ETresUIHudBaymaxCountDown
{
	ETresUIHudBaymaxCountDown_Ready = 0 UMETA(DisplayName = "Ready"),
	ETresUIHudBaymaxCountDown_Three = 1 UMETA(DisplayName = "Three"),
	ETresUIHudBaymaxCountDown_Two = 2 UMETA(DisplayName = "Two"),
	ETresUIHudBaymaxCountDown_One = 3 UMETA(DisplayName = "One"),
	ETresUIHudBaymaxCountDown_Go = 4 UMETA(DisplayName = "Go"),
	ETresUIHudBaymaxCountDown_Finish = 5 UMETA(DisplayName = "Finish"),
	ETresUIHudBaymaxCountDown_Finish_End = 6 UMETA(DisplayName = "Finish End"),
	ETresUIHudBaymaxCountDown_1_MAX = 7 UMETA(DisplayName = "MAX"),
	ETresUIHudBaymaxCountDown_MAX = 8 UMETA(DisplayName = "Tres UI HUD Baymax Countdown MAX")
};

UENUM(BlueprintType)
enum ETresUICinematicCockpitID
{
	ETresUICinematicCockpitID_None = 0 UMETA(DisplayName = "None"),
	ETresUICinematicCockpitID_HudOlaf = 1 UMETA(DisplayName = "HUD Olaf"),
	ETresUICinematicCockpitID_HudLeft = 2 UMETA(DisplayName = "HUD Left"),
	ETresUICinematicCockpitID_MAX = 3 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresUITextAlignH
{
	ETresUITextAlignH_Left = 0 UMETA(DisplayName = "Left"),
	ETresUITextAlignH_Center = 1 UMETA(DisplayName = "Center"),
	ETresUITextAlignH_Right = 2 UMETA(DisplayName = "Right"),
	ETresUITextAlignH_MAX = 3 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresUITextAlignV
{
	ETresUITextAlignV_Top = 0 UMETA(DisplayName = "Top"),
	ETresUITextAlignV_Center = 1 UMETA(DisplayName = "Center"),
	ETresUITextAlignV_Bottom = 2 UMETA(DisplayName = "Bottom"),
	ETresUITextAlignV_MAX = 3 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresUICutsceneTextShowMethod
{
	ETresUICutsceneTextShowMethod_None = 0 UMETA(DisplayName = "None"),
	ETresUICutsceneTextShowMethod_Fade = 1 UMETA(DisplayName = "Fade"),
	ETresUICutsceneTextShowMethod_LineFade = 2 UMETA(DisplayName = "Line Fade"),
	ETresUICutsceneTextShowMethod_MAX = 3 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresUICutsceneTextHideMethod
{
	ETresUICutsceneTextHideMethod_None = 0 UMETA(DisplayName = "None"),
	ETresUICutsceneTextHideMethod_Fade = 1 UMETA(DisplayName = "Fade"),
	ETresUICutsceneTextHideMethod_MAX = 2 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresUIPadButtonType
{
	TUPBT_NONE = 0 UMETA(DisplayName = "None"),
	TUPBT_RIGHT = 1 UMETA(DisplayName = "Right"),
	TUPBT_UP = 2 UMETA(DisplayName = "Up"),
	TUPBT_LEFT = 3 UMETA(DisplayName = "Left"),
	TUPBT_DOWN = 4 UMETA(DisplayName = "Down"),
	TUPBT_R1 = 5 UMETA(DisplayName = "R1"),
	TUPBT_L1 = 6 UMETA(DisplayName = "L1"),
	TUPBT_R2 = 7 UMETA(DisplayName = "R2"),
	TUPBT_L2 = 8 UMETA(DisplayName = "L2"),
	TUPBT_TOUCH = 9 UMETA(DisplayName = "Touch"),
	TUPBT_R2HOLD = 10 UMETA(DisplayName = "R2 Hold"),
	TUPBT_DECIDE = 11 UMETA(DisplayName = "Decide"),
	TUPBT_CANCEL = 12 UMETA(DisplayName = "Cancel"),
	TUPBT_RIGHT_L = 13 UMETA(DisplayName = "Right L"),
	TUPBT_UP_L = 14 UMETA(DisplayName = "Up L"),
	TUPBT_LEFT_L = 15 UMETA(DisplayName = "Left L"),
	TUPBT_DOWN_L = 16 UMETA(DisplayName = "Down L"),
	TUPBT_KEYUP = 17 UMETA(DisplayName = "Key Up"),
	TUPBT_KEYLEFT = 18 UMETA(DisplayName = "Key Left"),
	TUPBT_KEYDOWN = 19 UMETA(DisplayName = "Key Down"),
	TUPBT_KEYRIGHT = 20 UMETA(DisplayName = "Key Right"),
	TUPBT_KEYUP_L = 21 UMETA(DisplayName = "Key Up L"),
	TUPBT_KEYLEFT_L = 22 UMETA(DisplayName = "Key Left L"),
	TUPBT_KEYDOWN_L = 23 UMETA(DisplayName = "Key Down L"),
	TUPBT_KEYRIGHT_L = 24 UMETA(DisplayName = "Key RIght L"),
	TUPBT_TOUCH_L = 25 UMETA(DisplayName = "Touch L"),
	TUPBT_R2_L = 26 UMETA(DisplayName = "R2 L"),
	TUPBT_L2_L = 27 UMETA(DisplayName = "L2 L"),
	TUPBT_OPTION = 28 UMETA(DisplayName = "Option"),
	TUPBT_LSTICK = 29 UMETA(DisplayName = "L Stick"),
	TUPBT_RSTICK = 30 UMETA(DisplayName = "R Stick"),
	TUPBT_LSTICK_UP = 31 UMETA(DisplayName = "LStick Up"),
	TUPBT_LSTICK_DOWN = 32 UMETA(DisplayName = "LStick Down"),
	TUPBT_LSTICK_LEFT = 33 UMETA(DisplayName = "LStick Left"),
	TUPBT_LSTICK_RIGHT = 34 UMETA(DisplayName = "LStick Right"),
	TUPBT_L3 = 35 UMETA(DisplayName = "L3"),
	TUPBT_DECIDE_L = 36 UMETA(DisplayName = "Decide L"),
	TUPBT_CANCEL_L = 37 UMETA(DisplayName = "Cancel L"),
	TUPBT_MAX = 38 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresUISubtitleUsage
{
	ETresUISubtitleUsage_Cutscene = 0 UMETA(DisplayName = "Cutscene"),
	ETresUISubtitleUsage_FieldVoice = 1 UMETA(DisplayName = "Field Voice"),
	ETresUISubtitleUsage_Talk = 2 UMETA(DisplayName = "Talk"),
	ETresUISubtitleUsage_MAX = 3 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresUISnowSlideRank
{
	ETresUISnowSlideRank_A = 0 UMETA(DisplayName = "A"),
	ETresUISnowSlideRank_B = 1 UMETA(DisplayName = "B"),
	ETresUISnowSlideRank_C = 2 UMETA(DisplayName = "C"),
	ETresUISnowSlideRank_D = 3 UMETA(DisplayName = "D"),
	ETresUISnowSlideRank_1_Max = 4 UMETA(DisplayName = "MAX"),
	ETresUISnowSlideRank_MAX = 5 UMETA(DisplayName = "Tres UI Snow Slide Rank MAX")
};

UENUM(BlueprintType)
enum ETresUIMessageBGColor
{
	MESSAGE_BG_COLOR_BLACK = 0 UMETA(DisplayName = "Black"),
	MESSAGE_BG_COLOR_RED = 1 UMETA(DisplayName = "Red"),
	MESSAGE_BG_COLOR_BLUE = 2 UMETA(DisplayName = "Blue"),
	MESSAGE_BG_COLOR_DEBUG = 3 UMETA(DisplayName = "Debug"),
	MESSAGE_BG_COLOR_MAX = 4 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresUIMessageTitleType
{
	MESSAGE_TITLE_TYPE_NONE = 0 UMETA(DisplayName = "None"),
	MESSAGE_TITLE_TYPE_INFORMATION = 1 UMETA(DisplayName = "Information"),
	MESSAGE_TITLE_TYPE_QUESTION = 2 UMETA(DisplayName = "Question"),
	MESSAGE_TITLE_TYPE_MAX = 3 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresUILoadingScreenBGColor
{
	ETresUILoadingScreenBGColor_BLACK = 0 UMETA(DisplayName = "Black"),
	ETresUILoadingScreenBGColor_WHITE = 1 UMETA(DisplayName = "White"),
	ETresUILoadingScreenBGColor_1_Max = 2 UMETA(DisplayName = "MAX"),
	ETresUILoadingScreenBGColor_MAX = 3 UMETA(DisplayName = "Tres UI Loading Screen BG Color MAX")
};

UENUM(BlueprintType)
enum ETresUIHudCommonKind
{
	ETresUIHudCommonKind_None = 0 UMETA(DisplayName = "None"),
	ETresUIHudCommonKind_Score = 1 UMETA(DisplayName = "Score"),
	ETresUIHudCommonKind_Score_Chain = 2 UMETA(DisplayName = "Score Chain"),
	ETresUIHudCommonKind_Score5 = 3 UMETA(DisplayName = "Score 5"),
	ETresUIHudCommonKind_Score5_Chain = 4 UMETA(DisplayName = "Score 5 Chain"),
	ETresUIHudCommonKind_Score6 = 5 UMETA(DisplayName = "Score 6"),
	ETresUIHudCommonKind_Score6_Chain = 6 UMETA(DisplayName = "Score 6 Chain"),
	ETresUIHudCommonKind_Height = 7 UMETA(DisplayName = "Height"),
	ETresUIHudCommonKind_HitCount = 8 UMETA(DisplayName = "Hit Count"),
	ETresUIHudCommonKind_1_MAX = 9 UMETA(DisplayName = "MAX"),
	ETresUIHudCommonKind_MAX = 10 UMETA(DisplayName = "Tres UI HUD Common Kind MAX")
};

UENUM(BlueprintType)
enum ETresUIHudCommonIcon
{
	ETresUIHudCommonIcon_Attraction = 0 UMETA(DisplayName = "Attraction"),
	ETresUIHudCommonIcon_Ralph = 1 UMETA(DisplayName = "Ralph"),
	ETresUIHudCommonIcon_Ariel = 2 UMETA(DisplayName = "Ariel"),
	ETresUIHudCommonIcon_RaDance = 3 UMETA(DisplayName = "RA Dance"),
	ETresUIHudCommonIcon_SnowSlide = 4 UMETA(DisplayName = "Snow Slide"),
	ETresUIHudCommonIcon_Pudding_Cherry = 5 UMETA(DisplayName = "Pudding Cherry"),
	ETresUIHudCommonIcon_Pudding_Strawberry = 6 UMETA(DisplayName = "Pudding Strawberry"),
	ETresUIHudCommonIcon_Pudding_Orange = 7 UMETA(DisplayName = "Pudding Orange"),
	ETresUIHudCommonIcon_Pudding_Banana = 8 UMETA(DisplayName = "Pudding Banana"),
	ETresUIHudCommonIcon_Pudding_Grape = 9 UMETA(DisplayName = "Pudding Grape"),
	ETresUIHudCommonIcon_Pudding_Melon = 10 UMETA(DisplayName = "Pudding Melon"),
	ETresUIHudCommonIcon_Pudding_Watermelon = 11 UMETA(DisplayName = "Pudding Watermelon"),
	ETresUIHudCommonIcon_1_MAX = 12 UMETA(DisplayName = "MAX"),
	ETresUIHudCommonIcon_MAX = 13 UMETA(DisplayName = "Tres UI HUD Common Icon MAX")
};

UENUM(BlueprintType)
enum ETresUIHudBaymaxResult
{
	ETresUIHudBaymaxResult_RankA = 0 UMETA(DisplayName = "Rank A"),
	ETresUIHudBaymaxResult_RankB = 1 UMETA(DisplayName = "Rank B"),
	ETresUIHudBaymaxResult_RankC = 2 UMETA(DisplayName = "Rank C"),
	ETresUIHudBaymaxResult_RankD = 3 UMETA(DisplayName = "Rank D"),
	ETresUIHudBaymaxResult_1_MAX = 4 UMETA(DisplayName = "MAX"),
	ETresUIHudBaymaxResult_MAX = 5 UMETA(DisplayName = "Black")
};

UENUM(BlueprintType)
enum ETresUIHudBaymaxKind
{
	ETresUIHudBaymaxKind_None = 0 UMETA(DisplayName = "None"),
	ETresUIHudBaymaxKind_FlashTracer = 1 UMETA(DisplayName = "Flash Tracer"),
	ETresUIHudBaymaxKind_FlashTracer_MiniGame = 2 UMETA(DisplayName = "Flash Tracer Minigame"),
	ETresUIHudBaymaxKind_HeroRescue = 3 UMETA(DisplayName = "Hero Rescue"),
	ETresUIHudBaymaxKind_DarkCube = 4 UMETA(DisplayName = "Dark Cube"),
	ETresUIHudBaymaxKind_1_MAX = 5 UMETA(DisplayName = "MAX"),
	ETresUIHudBaymaxKind_MAX = 6 UMETA(DisplayName = "Tres UI HUD Baymax Kind MAX")
};

UENUM(BlueprintType)
enum ETresUIGradeTextValue
{
	ETresUIGradeTextValue_TOOFAST = 0 UMETA(DisplayName = "Too Fast"),
	ETresUIGradeTextValue_GOOD = 1 UMETA(DisplayName = "Good"),
	ETresUIGradeTextValue_EXCELLENT = 2 UMETA(DisplayName = "Excellent"),
	ETresUIGradeTextValue_TOOSLOW = 3 UMETA(DisplayName = "Too Slow"),
	ETresUIGradeTextValue_SUCCESSFUL = 4 UMETA(DisplayName = "Successful"),
	ETresUIGradeTextValue_1_Max = 5 UMETA(DisplayName = "Max"),
	ETresUIGradeTextValue_None = 6 UMETA(DisplayName = "None"),
	ETresUIGradeTextValue_MAX = 7 UMETA(DisplayName = "Tres UI Grade Text Value MAX")
};

UENUM(BlueprintType)
enum ETresUIGameDataInstallMessageType
{
	ETresUIGameDataInstallMessageType_Block = 0 UMETA(DisplayName = "Block"),
	ETresUIGameDataInstallMessageType_Wait = 1 UMETA(DisplayName = "Wait"),
	ETresUIGameDataInstallMessageType_MAX = 2 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresUIOlafPartsType
{
	ETresUIOlafPartsType_Head = 0 UMETA(DisplayName = "Head"),
	ETresUIOlafPartsType_Body = 1 UMETA(DisplayName = "Body"),
	ETresUIOlafPartsType_Leg = 2 UMETA(DisplayName = "Leg"),
	ETresUIOlafPartsType_1_Max = 3 UMETA(DisplayName = "MAX"),
	ETresUIOlafPartsType_MAX = 4 UMETA(DisplayName = "Tres UI Olaf Parts Type MAX")
};

UENUM(BlueprintType)
enum ETresUIGigasGameGimmickType
{
	ETresUIGigasGameGimmickType_SparkTrap = 0 UMETA(DisplayName = "Spark Trap"),
	ETresUIGigasGameGimmickType_HeatBlast = 1 UMETA(DisplayName = "Heat Blast"),
	ETresUIGigasGameGimmickType_CrystalSmash = 2 UMETA(DisplayName = "Crystal Smash"),
	ETresUIGigasGameGimmickType_MAX = 3 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresCinematicPlayerStateType
{
	TCPST_NONE = 0 UMETA(DisplayName = "None"),
	TCPST_TPVIEW = 1 UMETA(DisplayName = "TP View"),
	TCPST_CLEAR = 2 UMETA(DisplayName = "Clear"),
	TCPST_FORCE_CLEAR = 3 UMETA(DisplayName = "Force Clear"),
	_TCPST_MAX = 4 UMETA(DisplayName = "MAX"),
	ETresCinematicPlayerStateType_MAX = 5 UMETA(DisplayName = "Tres Cinematic Player State Type MAX")
};

UENUM(BlueprintType)
enum ETresCinematicPlayerStyleType
{
	ETresCinematicPlayerStyleType_NONE = 0 UMETA(DisplayName = "None"),
	WEAR_L0_WEAPON_L1 = 1 UMETA(DisplayName = "L0 Weapon L1"),
	WEAR_L1_WEAPON_L0 = 2 UMETA(DisplayName = "L1 Weapon L0"),
	WEAR_L1_WEAPON_L1 = 3 UMETA(DisplayName = "L1 Weapon L1"),
	WEAR_L2_WEAPON_L0 = 4 UMETA(DisplayName = "L2 Weapon L0"),
	WEAR_L2_WEAPON_L1 = 5 UMETA(DisplayName = "L2 Weapon L1"),
	ETresCinematicPlayerStyleType_1_MAX = 6 UMETA(DisplayName = "MAX"),
	ETresCinematicPlayerStyleType_MAX = 7 UMETA(DisplayName = "Tres Cinematic Player Style Type MAX")
};

UENUM(BlueprintType)
enum ETresMapJumpFadeKind
{
	MAPJUMP_FADE_KIND_NONE = 0 UMETA(DisplayName = "None"),
	MAPJUMP_FADE_KIND_FADEOUT = 1 UMETA(DisplayName = "Fade Out"),
	MAPJUMP_FADE_KIND_WHITEOUT = 2 UMETA(DisplayName = "White Out"),
	MAPJUMP_FADE_KIND_WIPEOUT = 3 UMETA(DisplayName = "Wipe Out"),
	MAPJUMP_FADE_KIND_MAX = 4 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresVictoryBonusKind
{
	ETresVictoryBonusKind_NONE = 0 UMETA(DisplayName = "None"),
	ETresVictoryBonusKind_HP_UP3 = 1 UMETA(DisplayName = "HP Up 3"),
	ETresVictoryBonusKind_HP_UP5 = 2 UMETA(DisplayName = "HP Up 5"),
	ETresVictoryBonusKind_HP_UP10 = 3 UMETA(DisplayName = "HP Up 10"),
	ETresVictoryBonusKind_HP_UP15 = 4 UMETA(DisplayName = "HP Up 15"),
	ETresVictoryBonusKind_HP_UP30 = 5 UMETA(DisplayName = "HP Up 30"),
	ETresVictoryBonusKind__RESERVE6 = 6 UMETA(DisplayName = "Reserve 6"),
	ETresVictoryBonusKind__RESERVE7 = 7 UMETA(DisplayName = "Reserve 7"),
	ETresVictoryBonusKind_MP_UP3 = 8 UMETA(DisplayName = "MP Up 3"),
	ETresVictoryBonusKind_MP_UP5 = 9 UMETA(DisplayName = "MP Up 5"),
	ETresVictoryBonusKind_MP_UP10 = 10 UMETA(DisplayName = "MP Up 10"),
	ETresVictoryBonusKind_MP_UP20 = 11 UMETA(DisplayName = "MP Up 20"),
	ETresVictoryBonusKind__RESERVE12 = 12 UMETA(DisplayName = "Reserve 12"),
	ETresVictoryBonusKind__RESERVE13 = 13 UMETA(DisplayName = "Reserve 13"),
	ETresVictoryBonusKind__RESERVE14 = 14 UMETA(DisplayName = "Reserve 14"),
	ETresVictoryBonusKind__RESERVE15 = 15 UMETA(DisplayName = "Reserve 15"),
	ETresVictoryBonusKind_DEF_SLOT_UP1 = 16 UMETA(DisplayName = "Def Slot Up 1"),
	ETresVictoryBonusKind_ACC_SLOT_UP1 = 17 UMETA(DisplayName = "Acc Slot Up 1"),
	ETresVictoryBonusKind_ITEM_SLOT_UP1 = 18 UMETA(DisplayName = "Item Slot Up 1"),
	ETresVictoryBonusKind__RESERVE19 = 19 UMETA(DisplayName = "Reserve 19"),
	ETresVictoryBonusKind__RESERVE20 = 20 UMETA(DisplayName = "Reserve 20"),
	ETresVictoryBonusKind__RESERVE21 = 21 UMETA(DisplayName = "Reserve 21"),
	ETresVictoryBonusKind__RESERVE22 = 22 UMETA(DisplayName = "Reserve 22"),
	ETresVictoryBonusKind__RESERVE23 = 23 UMETA(DisplayName = "Reserve 23"),
	ETresVictoryBonusKind_MELEM_FIRE = 24 UMETA(DisplayName = "Melem Fire"),
	ETresVictoryBonusKind_MELEM_BLIZZARD = 25 UMETA(DisplayName = "Melem Blizzard"),
	ETresVictoryBonusKind_MELEM_THUNDER = 26 UMETA(DisplayName = "Melem Thunder"),
	ETresVictoryBonusKind_MELEM_WATER = 27 UMETA(DisplayName = "Melem Water"),
	ETresVictoryBonusKind_MELEM_AERO = 28 UMETA(DisplayName = "Melem Aero"),
	ETresVictoryBonusKind_MELEM_CURE = 29 UMETA(DisplayName = "Melem Cure"),
	ETresVictoryBonusKind__RESERVE30 = 30 UMETA(DisplayName = "Reserve 30"),
	ETresVictoryBonusKind__RESERVE31 = 31 UMETA(DisplayName = "Reserve 31"),
	ETresVictoryBonusKind_TYPE_MAX = 32 UMETA(DisplayName = "MAX"),
	ETresVictoryBonusKind_MAX = 33 UMETA(DisplayName = "Tres Victory Bonus Kind MAX")
};

UENUM(BlueprintType)
enum ETresAbilityKind
{
	TRES_ABI_KIND_NONE = 0 UMETA(DisplayName = "None"),
	TRES_ABI_KIND_AIR_RECOVERY = 1 UMETA(DisplayName = "Air Recovery"),
	TRES_ABI_KIND_BLOW_COUNTER = 2 UMETA(DisplayName = "Blow Counter"),
	TRES_ABI_KIND_REFLECT_GUARD = 3 UMETA(DisplayName = "Reflect Guard"),
	TRES_ABI_KIND_GUARD_COUNTER = 4 UMETA(DisplayName = "Guard Counter"),
	TRES_ABI_KIND_REVENGEIMPACT = 5 UMETA(DisplayName = "Revenge Impact"),
	TRES_ABI_KIND_REVENGEDIVE = 6 UMETA(DisplayName = "Revenge Dive"),
	TRES_ABI_KIND_REVENGE_EX = 7 UMETA(DisplayName = "Revenge EX"),
	TRES_ABI_KIND_RISKDODGE = 8 UMETA(DisplayName = "Risk Dodge"),
	TRES_ABI_KIND_RD_COUNTER = 9 UMETA(DisplayName = "RD Counter"),
	TRES_ABI_KIND_SLASH_UPPER = 10 UMETA(DisplayName = "Slash Upper"),
	TRES_ABI_KIND_AIR_ROLL_BEAT = 11 UMETA(DisplayName = "Air Roll Beat"),
	TRES_ABI_KIND_AIR_DOWN = 12 UMETA(DisplayName = "Air Down"),
	TRES_ABI_KIND_TRIPPLE_SLASH = 13 UMETA(DisplayName = "Tripple Slash"),
	TRES_ABI_KIND_CHARGE_THRUST = 14 UMETA(DisplayName = "Charge Thrust"),
	TRES_ABI_KIND_MAGICFLUSH = 15 UMETA(DisplayName = "Magic Flush"),
	TRES_ABI_KIND_HIGHJUMP = 16 UMETA(DisplayName = "High Jump"),
	TRES_ABI_KIND_DOUBLEFLIGHT = 17 UMETA(DisplayName = "Double Flight"),
	TRES_ABI_KIND_SUPERJUMP = 18 UMETA(DisplayName = "Super Jump"),
	TRES_ABI_KIND_SUPERSLIDE = 19 UMETA(DisplayName = "Super Slide"),
	TRES_ABI_KIND_GLIDE = 20 UMETA(DisplayName = "Glide"),
	TRES_ABI_KIND_LIBRA = 21 UMETA(DisplayName = "Libra"),
	TRES_ABI_KIND_DODGE = 22 UMETA(DisplayName = "Dodge"),
	TRES_ABI_KIND_AIRSLIDE = 23 UMETA(DisplayName = "Air Slide"),
	TRES_ABI_KIND_AIRDODGE = 24 UMETA(DisplayName = "Air Dodge"),
	TRES_ABI_KIND_MP_SAFETY = 25 UMETA(DisplayName = "MP Safety"),
	TRES_ABI_KIND_EXPZERO = 26 UMETA(DisplayName = "EXP Zero"),
	TRES_ABI_KIND_FRIEND_AID = 27 UMETA(DisplayName = "Friend Aid"),
	TRES_ABI_KIND_COMBO_PLUS = 28 UMETA(DisplayName = "Combo Plus"),
	TRES_ABI_KIND_AIRCOMBO_PLUS = 29 UMETA(DisplayName = "Air Combo Plus"),
	TRES_ABI_KIND_COMBO_MASTER = 30 UMETA(DisplayName = "Combo Master"),
	TRES_ABI_KIND_COMBO_UP = 31 UMETA(DisplayName = "Combo Up"),
	TRES_ABI_KIND_AIRCOMBO_UP = 32 UMETA(DisplayName = "Air Combo Up"),
	TRES_ABI_KIND_FIRE_UP = 33 UMETA(DisplayName = "Fire Up"),
	TRES_ABI_KIND_BLIZZARD_UP = 34 UMETA(DisplayName = "Blizzard Up"),
	TRES_ABI_KIND_THUNDER_UP = 35 UMETA(DisplayName = "Thunder Up"),
	TRES_ABI_KIND_WATER_UP = 36 UMETA(DisplayName = "Water Up"),
	TRES_ABI_KIND_AERO_UP = 37 UMETA(DisplayName = "Aero Up"),
	TRES_ABI_KIND_WIZZARD_STAR = 38 UMETA(DisplayName = "Wizzard Star"),
	TRES_ABI_KIND_LUCK_UP = 39 UMETA(DisplayName = "Luck Up"),
	TRES_ABI_KIND_ITEM_UP = 40 UMETA(DisplayName = "Item Up"),
	TRES_ABI_KIND_PRIZE_DRAW = 41 UMETA(DisplayName = "Prize Draw"),
	TRES_ABI_KIND_FOCUS_BOOST = 42 UMETA(DisplayName = "Focus Boost"),
	TRES_ABI_KIND_LEAF_VEIL = 43 UMETA(DisplayName = "Leaf Veil"),
	TRES_ABI_KIND_LAST_LEAVE = 44 UMETA(DisplayName = "Last Leave"),
	TRES_ABI_KIND_COMBO_LEAVE = 45 UMETA(DisplayName = "Combo Leave"),
	TRES_ABI_KIND_FOCUS_ASPIR = 46 UMETA(DisplayName = "Focus Aspir"),
	TRES_ABI_KIND_ATTRACTION_TIME = 47 UMETA(DisplayName = "Attraction Time"),
	TRES_ABI_KIND_LINK_BOOST = 48 UMETA(DisplayName = "Link Boost"),
	TRES_ABI_KIND_FORM_TIME = 49 UMETA(DisplayName = "Form Time"),
	TRES_ABI_KIND_DEFENDER = 50 UMETA(DisplayName = "Defender"),
	TRES_ABI_KIND_CRITICAL_HALF = 51 UMETA(DisplayName = "Critical Half"),
	TRES_ABI_KIND_DAMAGE_ASPIR = 52 UMETA(DisplayName = "Damage Aspir"),
	TRES_ABI_KIND_MP_HASTE = 53 UMETA(DisplayName = "MP Haste"),
	TRES_ABI_KIND_MP_HASTERA = 54 UMETA(DisplayName = "MP Hastera"),
	TRES_ABI_KIND_MP_HASTEGA = 55 UMETA(DisplayName = "MP Hastega"),
	TRES_ABI_KIND_MAGIC_COMBO_SAVE = 56 UMETA(DisplayName = "Magic Combo Save"),
	TRES_ABI_KIND_MAGIC_COMBO_UP = 57 UMETA(DisplayName = "Magic Combo Up"),
	TRES_ABI_KIND_WALK_REGENE = 58 UMETA(DisplayName = "Walk Regene"),
	TRES_ABI_KIND_WALK_HEALING = 59 UMETA(DisplayName = "Walk Healing"),
	TRES_ABI_KIND_MAGIC_DRAW = 60 UMETA(DisplayName = "Magic Draw"),
	TRES_ABI_KIND_MASTER_DRAW = 61 UMETA(DisplayName = "Master Draw"),
	TRES_ABI_KIND_ATTRACTION_UP = 62 UMETA(DisplayName = "Attraction Up"),
	TRES_ABI_KIND_BURN_GUARD = 63 UMETA(DisplayName = "Burn Guard"),
	TRES_ABI_KIND_CLOUD_GUARD = 64 UMETA(DisplayName = "Cloud Guard"),
	TRES_ABI_KIND_SNEEZE_GUARD = 65 UMETA(DisplayName = "Sneeze Guard"),
	TRES_ABI_KIND_FREEZE_GUARD = 66 UMETA(DisplayName = "Freeze Guard"),
	TRES_ABI_KIND_DISCHARGE_GUARD = 67 UMETA(DisplayName = "Discharge Guard"),
	TRES_ABI_KIND_STUN_GUARD = 68 UMETA(DisplayName = "Stun Guard"),
	TRES_ABI_KIND_COUNTER_UP = 69 UMETA(DisplayName = "Counter Up"),
	TRES_ABI_KIND_AUTO_FINISH = 70 UMETA(DisplayName = "Auto Finish"),
	TRES_ABI_KIND_FORM_UP = 71 UMETA(DisplayName = "Form Up"),
	TRES_ABI_KIND_MAGIC_TIME = 72 UMETA(DisplayName = "Magic Time"),
	TRES_ABI_KIND_AUTO_LOCK_MAGIC = 73 UMETA(DisplayName = "Auto Lock Magic"),
	TRES_ABI_KIND_GUARD_REGENE = 74 UMETA(DisplayName = "Guard Regene"),
	TRES_ABI_KIND_MP_SAVE = 75 UMETA(DisplayName = "MP Save"),
	TRES_ABI_KIND_MP_LEAVE = 76 UMETA(DisplayName = "MP Leave"),
	TRES_ABI_KIND_FULLMP_BURST = 77 UMETA(DisplayName = "Full MP Burst"),
	TRES_ABI_KIND_HARVEST = 78 UMETA(DisplayName = "Harvest"),
	TRES_ABI_KIND_HP_CONVERTER = 79 UMETA(DisplayName = "HP Converter"),
	TRES_ABI_KIND_MP_CONVERTER = 80 UMETA(DisplayName = "MP Converter"),
	TRES_ABI_KIND_MUNNY_CONVERTER = 81 UMETA(DisplayName = "Munny Converter"),
	TRES_ABI_KIND_ENDLESS_MAGIC = 82 UMETA(DisplayName = "Endless Magic"),
	TRES_ABI_KIND_FP_CONVERTER = 83 UMETA(DisplayName = "FP Converter"),
	TRES_ABI_KIND_FIRE_ASPIR = 84 UMETA(DisplayName = "Fire Aspir"),
	TRES_ABI_KIND_BLIZZARD_ASPIR = 85 UMETA(DisplayName = "Blizzard Aspir"),
	TRES_ABI_KIND_THUNDER_ASPIR = 86 UMETA(DisplayName = "Thunder Aspir"),
	TRES_ABI_KIND_WATER_ASPIR = 87 UMETA(DisplayName = "Water Aspir"),
	TRES_ABI_KIND_AERO_ASPIR = 88 UMETA(DisplayName = "Aero Aspir"),
	TRES_ABI_KIND_DARK_ASPIR = 89 UMETA(DisplayName = "Dark Aspir"),
	TRES_ABI_KIND_BEST_COMBI = 90 UMETA(DisplayName = "Best Combi"),
	TRES_ABI_KIND_SONIC_SLASH = 91 UMETA(DisplayName = "Sonic Slash"),
	TRES_ABI_KIND_SONIC_DOWN = 92 UMETA(DisplayName = "Sonic Down"),
	TRES_ABI_KIND_TURN_CUTTER = 93 UMETA(DisplayName = "Turn Cutter"),
	TRES_ABI_KIND_SUMMERSALT = 94 UMETA(DisplayName = "Summer Salt"),
	TRES_ABI_KIND_POLE_SPIN = 95 UMETA(DisplayName = "Pole Spin"),
	TRES_ABI_KIND_POLE_SWING = 96 UMETA(DisplayName = "Pole Swing"),
	TRES_ABI_KIND_WALL_KICK = 97 UMETA(DisplayName = "Wall Kick"),
	TRES_ABI_KIND_BATTLE_GRAPHER = 98 UMETA(DisplayName = "Battle Grapher"),
	TRES_ABI_KIND_CHARISMA_CHEF = 99 UMETA(DisplayName = "Charisma Chef"),
	TRES_ABI_KIND_JOIN_FORCE = 100 UMETA(DisplayName = "Join Force"),
	TRES_ABI_KIND_HEARTLESS_BUSTER = 101 UMETA(DisplayName = "Heartless Buster"),
	TRES_ABI_KIND_NOBODY_BUSTER = 102 UMETA(DisplayName = "Nobody Buster"),
	TRES_ABI_KIND_POWER_CURE = 103 UMETA(DisplayName = "Power Cure"),
	TRES_ABI_KIND_CRITICAL_COUNTER = 104 UMETA(DisplayName = "Critical Counter"),
	TRES_ABI_KIND_CRITICAL_CHARGE = 105 UMETA(DisplayName = "Critical Charge"),
	TRES_ABI_KIND_CRITICAL_CONVERTER = 106 UMETA(DisplayName = "Critical Converter"),
	TRES_ABI_KIND_QUICK_SHAFT = 107 UMETA(DisplayName = "Quick Shaft"),
	TRES_ABI_KIND_FLASH_STEP = 108 UMETA(DisplayName = "Flash Step"),
	TRES_ABI_KIND_RADIAL_CUT = 109 UMETA(DisplayName = "Radial Cut"),
	TRES_ABI_KIND_FINAL_HEAVEN = 110 UMETA(DisplayName = "Final Heaven"),
	TRES_ABI_KIND_AERIAL_SWEEP = 111 UMETA(DisplayName = "Aerial Sweep"),
	TRES_ABI_KIND_AERIAL_DIVE = 112 UMETA(DisplayName = "Aerial Dive"),
	TRES_ABI_KIND_LUNCH_TIME = 113 UMETA(DisplayName = "Lunch Time"),
	TRES_ABI_KIND_POWER_LUNCH = 114 UMETA(DisplayName = "Power Lunch"),
	TRES_ABI_KIND_OVER_TIME = 115 UMETA(DisplayName = "Over Time"),
	TRES_ABI_KIND_BEST_CONDITION = 116 UMETA(DisplayName = "Best Condition"),
	TRES_ABI_KIND_EXP_BARGAIN = 117 UMETA(DisplayName = "EXP Bargain"),
	TRES_ABI_KIND_PRIZE_FEEVER = 118 UMETA(DisplayName = "Prize Feever"),
	TRES_ABI_KIND_MILLIONAIRE = 119 UMETA(DisplayName = "Millionaire"),
	TRES_ABI_KIND_CURAGAN = 120 UMETA(DisplayName = "Curagan"),
	TRES_ABI_KIND_CHARGE_BERSERK = 121 UMETA(DisplayName = "Charge Berserk"),
	TRES_ABI_KIND_OVERCOME = 122 UMETA(DisplayName = "Overcome"),
	TRES_ABI_KIND_GRAND_MAGIC = 123 UMETA(DisplayName = "Grand Magic"),
	TRES_ABI_KIND_FIRAGAN = 124 UMETA(DisplayName = "Firagan"),
	TRES_ABI_KIND_BLIZZAGAN = 125 UMETA(DisplayName = "Blizzagan"),
	TRES_ABI_KIND_THUNDAGAN = 126 UMETA(DisplayName = "Thundagan"),
	TRES_ABI_KIND_WATAGAN = 127 UMETA(DisplayName = "Watagan"),
	TRES_ABI_KIND_AEROGAN = 128 UMETA(DisplayName = "Aerogan"),
	TRES_ABI_KIND_MAGIC_ROULETTE = 129 UMETA(DisplayName = "Magic Roulette"),
	TRES_ABI_KIND_UNISON_FIRE = 130 UMETA(DisplayName = "Unison Fire"),
	TRES_ABI_KIND_UNISON_BLIZZARD = 131 UMETA(DisplayName = "Unison Blizzard"),
	TRES_ABI_KIND_UNISON_THUNDER = 132 UMETA(DisplayName = "Unison Thunder"),
	TRES_ABI_KIND_FUSION_SPIN = 133 UMETA(DisplayName = "Fusion Spin"),
	TRES_ABI_KIND_FUSION_ROCKET = 134 UMETA(DisplayName = "Fusion Rocket"),
	TRES_ABI_KIND_HYPER_HEALING = 135 UMETA(DisplayName = "Hyper Healing"),
	TRES_ABI_KIND_COMBI_UP = 136 UMETA(DisplayName = "Combi Up"),
	TRES_ABI_KIND_COMBI_TIME = 137 UMETA(DisplayName = "Combi Time"),
	TRES_ABI_KIND_SHARE_PRIZE = 138 UMETA(DisplayName = "Share Prize"),
	TRES_ABI_KIND_MICKEY_CURE = 139 UMETA(DisplayName = "Mickey Cure"),
	TRES_ABI_KIND_MICKEY_HOLY = 140 UMETA(DisplayName = "Mickey Holy"),
	TRES_ABI_KIND_DONALD_FIRE = 141 UMETA(DisplayName = "Donald Fire"),
	TRES_ABI_KIND_DONALD_BLIZZARD = 142 UMETA(DisplayName = "Donald Blizzard"),
	TRES_ABI_KIND_DONALD_THUNDER = 143 UMETA(DisplayName = "Donald Thunder"),
	TRES_ABI_KIND_DONALD_AERO = 144 UMETA(DisplayName = "Donald Aero"),
	TRES_ABI_KIND_DONALD_CURE = 145 UMETA(DisplayName = "Donald Cure"),
	TRES_ABI_KIND_GOOFY_TORNADE = 146 UMETA(DisplayName = "Goofy Tornade"),
	TRES_ABI_KIND_GOOFY_TURBO = 147 UMETA(DisplayName = "Goofy Turbo"),
	TRES_ABI_KIND_GOOFY_FLIP = 148 UMETA(DisplayName = "Goofy Flip"),
	TRES_ABI_KIND_HERCULES_ROCKTHROW = 149 UMETA(DisplayName = "Hercules Rock Throw"),
	TRES_ABI_KIND_HERCULES_ENERGYBURST = 150 UMETA(DisplayName = "Hercules Energy Burst"),
	TRES_ABI_KIND_WOODY_SHOULDERTACKLE = 151 UMETA(DisplayName = "Woody Shoulder Tackle"),
	TRES_ABI_KIND_WOODY_ROPEATTACK = 152 UMETA(DisplayName = "Woody Rope Attack"),
	TRES_ABI_KIND_BUZZ_BEAM = 153 UMETA(DisplayName = "Buzz Beam"),
	TRES_ABI_KIND_BUZZ_DOUBLELARIAT = 154 UMETA(DisplayName = "Buzz Double Lariat"),
	TRES_ABI_KIND_RAPUNZEL_HAIRSWING = 155 UMETA(DisplayName = "Rapunzel Hair Swing"),
	TRES_ABI_KIND_RAPUNZEL_HAIRROTATION = 156 UMETA(DisplayName = "Rapunzel Hair Rotation"),
	TRES_ABI_KIND_FLYNN_THROWFRYINGPAN = 157 UMETA(DisplayName = "Flynn Throw Frying Pan"),
	TRES_ABI_KIND_FLYNN_BARRELBASH = 158 UMETA(DisplayName = "Flynn Barrel Bash"),
	TRES_ABI_KIND_SULLEY_ROAR = 159 UMETA(DisplayName = "Sulley Roar"),
	TRES_ABI_KIND_SULLEY_SHOULDERTACKLE = 160 UMETA(DisplayName = "Sulley Shoulder Tackle"),
	TRES_ABI_KIND_MIKE_MIKEAPPEAL = 161 UMETA(DisplayName = "Mike Appeal"),
	TRES_ABI_KIND_MIKE_SUPPORT = 162 UMETA(DisplayName = "Mike Support"),
	TRES_ABI_KIND_SPARROW_BONECRASH = 163 UMETA(DisplayName = "Sparrow Bone Crash"),
	TRES_ABI_KIND_SPARROW_TWISTROLLING = 164 UMETA(DisplayName = "Sparrow Twist Rolling"),
	TRES_ABI_KIND_MARSHMALLOW_JUMPSTRIKE = 165 UMETA(DisplayName = "Marshmallow Jump Strike"),
	TRES_ABI_KIND_MARSHMALLOW_COLDBREATH = 166 UMETA(DisplayName = "Marshmallow Cold Breath"),
	TRES_ABI_KIND_BAYMAX_ROCKETPUNCH = 167 UMETA(DisplayName = "Baymax Rocket Punch"),
	TRES_ABI_KIND_BAYMAX_CURESPRAY = 168 UMETA(DisplayName = "Baymax Cure Spray"),
	TRES_ABI_KIND_RIKU_DARKFIRE = 169 UMETA(DisplayName = "Riku Dark Fire"),
	TRES_ABI_KIND_RIKU_SHADOWBREAKER = 170 UMETA(DisplayName = "Riku Shadow Breaker"),
	TRES_ABI_KIND_VENTUS_WINDRAID = 171 UMETA(DisplayName = "Ventus Wind Raid"),
	TRES_ABI_KIND_AQUA_BLIZZAGA = 172 UMETA(DisplayName = "Aqua Blizzaga"),
	TRES_ABI_KIND_AQUA_THUNDAGA = 173 UMETA(DisplayName = "Aqua Thundaga"),
	TRES_ABI_KIND_AQUA_CURAGA = 174 UMETA(DisplayName = "Aqua Curaga"),
	TRES_ABI_KIND_ROXAS_CROSSSHOT = 175 UMETA(DisplayName = "Roxas Cross Shot"),
	TRES_ABI_KIND_ROXAS_CROSSBRADE = 176 UMETA(DisplayName = "Roxas Cross Brade"),
	TRES_ABI_KIND_XION_CURAGA = 177 UMETA(DisplayName = "Xion Curaga"),
	TRES_ABI_KIND_XION_LASERRAIN = 178 UMETA(DisplayName = "Xion Laser Rain"),
	TRES_ABI_KIND_LEA_FIRAGARAID = 179 UMETA(DisplayName = "Lea Firaga Raid"),
	TRES_ABI_KIND_LEA_FIRAGASLICER = 180 UMETA(DisplayName = "Lea Firaga Slicer"),
	TRES_ABI_KIND_KAIRI_CURE = 181 UMETA(DisplayName = "Kairi Cure"),
	TRES_ABI_KIND_SORA_FIRAGA = 182 UMETA(DisplayName = "Sora Firaga"),
	TRES_ABI_KIND_SORA_CURAGA = 183 UMETA(DisplayName = "Sora Curaga"),
	TRES_ABI_KIND_MAX = 184 UMETA(DisplayName = "MAX"),
	ETresAbilityKind_MAX = 185 UMETA(DisplayName = "Tres Ability Kind MAX")
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
	CH_PLAYER = 1 UMETA(DisplayName = "Player"),
	CH_EVENT = 2 UMETA(DisplayName = "Event"),
	CH_MENU = 3 UMETA(DisplayName = "Menu"),
	CH_ENEMY = 4 UMETA(DisplayName = "Enemy"),
	CH_ENEMYBOSS = 5 UMETA(DisplayName = "Enemy Boss"),
	_CH_RESERVE06 = 6 UMETA(DisplayName = "Reserve 06"),
	_CH_RESERVE07 = 7 UMETA(DisplayName = "Reserve 07"),
	CH_SYSTEM1 = 8 UMETA(DisplayName = "System 1"),
	_CH_RESERVE09 = 9 UMETA(DisplayName = "Reserve 09"),
	_CH_RESERVE10 = 10 UMETA(DisplayName = "Reserve 10"),
	_CH_RESERVE11 = 11 UMETA(DisplayName = "Reserve 11"),
	CH_DEBUG1 = 12 UMETA(DisplayName = "Debug 1"),
	CH_DEBUG2 = 13 UMETA(DisplayName = "Debug 2"),
	CH_DEBUG3 = 14 UMETA(DisplayName = "Debug 3"),
	CH_PROFILING = 15 UMETA(DisplayName = "Profiling"),
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
	TRES_WAID_AREA_01 = 1 UMETA(DisplayName = "Area 01"),
	TRES_WAID_AREA_02 = 2 UMETA(DisplayName = "Area 02"),
	TRES_WAID_AREA_03 = 3 UMETA(DisplayName = "Area 03"),
	TRES_WAID_AREA_04 = 4 UMETA(DisplayName = "Area 04"),
	TRES_WAID_AREA_05 = 5 UMETA(DisplayName = "Area 05"),
	TRES_WAID_AREA_06 = 6 UMETA(DisplayName = "Area 06"),
	TRES_WAID_AREA_07 = 7 UMETA(DisplayName = "Area 07"),
	TRES_WAID_AREA_08 = 8 UMETA(DisplayName = "Area 08"),
	TRES_WAID_AREA_09 = 9 UMETA(DisplayName = "Area 09"),
	TRES_WAID_AREA = 10 UMETA(DisplayName = "Area"),
	TRES_WAID_AREA01 = 11 UMETA(DisplayName = "Area01"),
	TRES_WAID_AREA02 = 12 UMETA(DisplayName = "Area02"),
	TRES_WAID_AREA03 = 13 UMETA(DisplayName = "Area03"),
	TRES_WAID_AREA04 = 14 UMETA(DisplayName = "Area04"),
	TRES_WAID_AREA05 = 15 UMETA(DisplayName = "Area05"),
	TRES_WAID_AREA_MAX = 16 UMETA(DisplayName = "MAX")
};


UENUM(BlueprintType)
enum ETresWorldCode
{
	TRES_WCID_EX = 0 UMETA(DisplayName = "EX"),
	TRES_WCID_BT = 1 UMETA(DisplayName = "BT"),
	TRES_WCID_DB = 2 UMETA(DisplayName = "DB"),
	TRES_WCID_DW = 3 UMETA(DisplayName = "DW"),
	TRES_WCID_HE = 4 UMETA(DisplayName = "HE"),
	TRES_WCID_TS = 5 UMETA(DisplayName = "TS"),
	TRES_WCID_CS = 6 UMETA(DisplayName = "CS"),
	TRES_WCID_RA = 7 UMETA(DisplayName = "RA"),
	TRES_WCID_FZ = 8 UMETA(DisplayName = "FZ"),
	TRES_WCID_CA = 9 UMETA(DisplayName = "CA"),
	TRES_WCID_PO = 10 UMETA(DisplayName = "PO"),
	TRES_WCID_MI = 11 UMETA(DisplayName = "MI"),
	TRES_WCID_TT = 12 UMETA(DisplayName = "TT"),
	TRES_WCID_YT = 13 UMETA(DisplayName = "YT"),
	TRES_WCID_KG = 14 UMETA(DisplayName = "KG"),
	TRES_WCID_RE = 15 UMETA(DisplayName = "RE"),
	TRES_WCID_DC = 16 UMETA(DisplayName = "DC"),
	TRES_WCID_WI = 17 UMETA(DisplayName = "WI"),
	TRES_WCID_IN = 18 UMETA(DisplayName = "IN"),
	TRES_WCID_BX = 19 UMETA(DisplayName = "BX"),
	TRES_WCID_SR = 20 UMETA(DisplayName = "SR"),
	TRES_WCID_CO = 21 UMETA(DisplayName = "CO"),
	TRES_WCID_EW = 22 UMETA(DisplayName = "EW"),
	TRES_WCID_DI = 23 UMETA(DisplayName = "DI"),
	TRES_WCID_RG = 24 UMETA(DisplayName = "RG"),
	TRES_WCID_DP = 25 UMETA(DisplayName = "DP"),
	TRES_WCID_SF = 26 UMETA(DisplayName = "SF"),
	TRES_WCID_GM = 27 UMETA(DisplayName = "GM"),
	TRES_WCID_WM = 28 UMETA(DisplayName = "WM"),
	TRES_WCID_SP = 29 UMETA(DisplayName = "SP"),
	TRES_WCID_00 = 30 UMETA(DisplayName = "00"),
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
	PRIZE_KIND_HpPrizeL = 1 UMETA(DisplayName = "HP Prize L"),
	PRIZE_KIND_MpPrizeS = 2 UMETA(DisplayName = "HP Prize S"),
	PRIZE_KIND_MpPrizeL = 3 UMETA(DisplayName = "MP Prize L"),
	PRIZE_KIND_MunnyPrizeS = 4 UMETA(DisplayName = "Munny Prize S"),
	PRIZE_KIND_MunnyPrizeM = 5 UMETA(DisplayName = "Munny Prize M"),
	PRIZE_KIND_MunnyPrizeL = 6 UMETA(DisplayName = "Munny Prize L"),
	PRIZE_KIND_FocusPrizeS = 7 UMETA(DisplayName = "Focus Prize S"),
	PRIZE_KIND_FocusPrizeL = 8 UMETA(DisplayName = "Focus Prize L"),
	PRIZE_KIND_CrabPrize = 9 UMETA(DisplayName = "Crab Prize"),
	PRIZE_KIND_MovableCrabPrize = 10 UMETA(DisplayName = "Movable Crab Prize"),
	PRIZE_KIND_LightPrizeS = 11 UMETA(DisplayName = "Light Prize S"),
	PRIZE_KIND_LightPrizeL = 12 UMETA(DisplayName = "Light Prize L"),
	PRIZE_KIND_HealPrizeBox = 13 UMETA(DisplayName = "Heal Prize Box"),
	PRIZE_KIND_MatePrizeBox = 14 UMETA(DisplayName = "Mate Prize Box"),
	PRIZE_KIND_FstfPrizeBox = 15 UMETA(DisplayName = "Fstf Prize Box"),
	PRIZE_KIND_RarePrizeBox = 16 UMETA(DisplayName = "Rare Prize Box"),
	PRIZE_KIND_MAX = 17 UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum ETresDlcChallengeRecordID
{
	ETresDlcChallengeRecordID_REC0101 = 0 UMETA(DisplayName = "REC 0101"),
	ETresDlcChallengeRecordID_REC0201 = 1 UMETA(DisplayName = "REC 0201"),
	ETresDlcChallengeRecordID_REC0202 = 2 UMETA(DisplayName = "REC 0202"),
	ETresDlcChallengeRecordID_REC0301 = 3 UMETA(DisplayName = "REC 0301"),
	ETresDlcChallengeRecordID_REC0401 = 4 UMETA(DisplayName = "REC 0401"),
	ETresDlcChallengeRecordID_REC0501 = 5 UMETA(DisplayName = "REC 0501"),
	ETresDlcChallengeRecordID_REC0601 = 6 UMETA(DisplayName = "REC 0601"),
	ETresDlcChallengeRecordID_REC0701 = 7 UMETA(DisplayName = "REC 0701"),
	ETresDlcChallengeRecordID_REC0801 = 8 UMETA(DisplayName = "REC 0801"),
	ETresDlcChallengeRecordID_REC0901 = 9 UMETA(DisplayName = "REC 0901"),
	ETresDlcChallengeRecordID_REC1001 = 10 UMETA(DisplayName = "REC 1001"),
	ETresDlcChallengeRecordID_REC1101 = 11 UMETA(DisplayName = "REC 1101"),
	ETresDlcChallengeRecordID_REC1201 = 12 UMETA(DisplayName = "REC 1201"),
	ETresDlcChallengeRecordID_REC1301 = 13 UMETA(DisplayName = "REC 1301"),
	ETresDlcChallengeRecordID_REC1401 = 14 UMETA(DisplayName = "REC 1401"),
	ETresDlcChallengeRecordID_REC1402 = 15 UMETA(DisplayName = "REC 1402"),
	ETresDlcChallengeRecordID_REC1501 = 16 UMETA(DisplayName = "REC 1501"),
	ETresDlcChallengeRecordID_REC1502 = 17 UMETA(DisplayName = "REC 1502"),
	ETresDlcChallengeRecordID_REC1601 = 18 UMETA(DisplayName = "REC 1601"),
	ETresDlcChallengeRecordID_REC1602 = 19 UMETA(DisplayName = "REC 1602"),
	ETresDlcChallengeRecordID_REC1603 = 20 UMETA(DisplayName = "REC 1603"),
	ETresDlcChallengeRecordID_REC1701 = 21 UMETA(DisplayName = "REC 1701"),
	ETresDlcChallengeRecordID_REC1801 = 22 UMETA(DisplayName = "REC 1801"),
	ETresDlcChallengeRecordID_REC1802 = 23 UMETA(DisplayName = "REC 1802"),
	ETresDlcChallengeRecordID_REC1803 = 24 UMETA(DisplayName = "REC 1803"),
	ETresDlcChallengeRecordID_REC1901 = 25 UMETA(DisplayName = "REC 1901"),
	ETresDlcChallengeRecordID_REC1902 = 26 UMETA(DisplayName = "REC 1902"),
	ETresDlcChallengeRecordID_REC2001 = 27 UMETA(DisplayName = "REC 2001"),
	ETresDlcChallengeRecordID_REC2002 = 28 UMETA(DisplayName = "REC 2002"),
	ETresDlcChallengeRecordID_REC2101 = 29 UMETA(DisplayName = "REC 2101"),
	ETresDlcChallengeRecordID_REC2201 = 30 UMETA(DisplayName = "REC 2201"),
	ETresDlcChallengeRecordID_REC2301 = 31 UMETA(DisplayName = "REC 2301"),
	ETresDlcChallengeRecordID_REC2401 = 32 UMETA(DisplayName = "REC 2401"),
	ETresDlcChallengeRecordID_REC2501 = 33 UMETA(DisplayName = "REC 2501"),
	ETresDlcChallengeRecordID_REC2601 = 34 UMETA(DisplayName = "REC 2601"),
	ETresDlcChallengeRecordID_REC2701 = 35 UMETA(DisplayName = "REC 2701"),
	ETresDlcChallengeRecordID_REC2801 = 36 UMETA(DisplayName = "REC 2801"),
	ETresDlcChallengeRecordID_REC2901 = 37 UMETA(DisplayName = "REC 2901"),
	ETresDlcChallengeRecordID_REC3001 = 38 UMETA(DisplayName = "REC 3001"),
	ETresDlcChallengeRecordID_REC3101 = 39 UMETA(DisplayName = "REC 3101"),
	ETresDlcChallengeRecordID_REC3201 = 40 UMETA(DisplayName = "REC 3201"),
	ETresDlcChallengeRecordID_REC3301 = 41 UMETA(DisplayName = "REC 3301"),
	ETresDlcChallengeRecordID_REC3401 = 42 UMETA(DisplayName = "REC 3401"),
	ETresDlcChallengeRecordID_ScoreCheckMax = 43 UMETA(DisplayName = "Score Check Max"),
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
	ETresDlcCheatAchievementID_GlideChallenge = 1 UMETA(DisplayName = "Glide Challenge"),
	ETresDlcCheatAchievementID_GumiSGeistChallenge = 2 UMETA(DisplayName = "Gumi S Geist Challenge"),
	ETresDlcCheatAchievementID_AerialChallenge = 3 UMETA(DisplayName = "Aerial Challenge"),
	ETresDlcCheatAchievementID_GigasChallenge = 4 UMETA(DisplayName = "Gigas Challenge"),
	ETresDlcCheatAchievementID_BowlingChallenge = 5 UMETA(DisplayName = "Bowling Challenge"),
	ETresDlcCheatAchievementID_FreezeChallenge = 6 UMETA(DisplayName = "Freeze Challenge"),
	ETresDlcCheatAchievementID_RageChallenge = 7 UMETA(DisplayName = "Rage Challenge"),
	ETresDlcCheatAchievementID_LinkChallenge = 8 UMETA(DisplayName = "Link Challenge"),
	ETresDlcCheatAchievementID_AllClearCheck = 9 UMETA(DisplayName = "All Clear Check"),
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
	ETresGameMiniGameType_TS_GIGAS_GAME = 2 UMETA(DisplayName = "TS Gigas Game"),
	ETresGameMiniGameType_RA_FESTIVAL_DANCE = 3 UMETA(DisplayName = "RA Festival Dance"),
	ETresGameMiniGameType_FZ_SNOWCURLING = 4 UMETA(DisplayName = "FZ Snow Curling"),
	ETresGameMiniGameType_BX_FLASHTRACER = 5 UMETA(DisplayName = "BX Flash Tracer"),
	ETresGameMiniGameType_BX_DARKBAYMAX_RAIL = 6 UMETA(DisplayName = "BX Dark Baymax Rail"),
	ETresGameMiniGameType_BX_DARKBAYMAX_NEAR = 7 UMETA(DisplayName = "BX Dark Baymax Near"),
	ETresGameMiniGameType_CA_BP_TUTORIAL = 8 UMETA(DisplayName = "CA BP Tutorial"),
	ETresGameMiniGameType_CA_BOARD_ENEMYSHIP = 9 UMETA(DisplayName = "CA Board Enemy Ship"),
	ETresGameMiniGameType_CA_LUXORD_COMPE = 10 UMETA(DisplayName = "CA Luxord Compe"),
	ETresGameMiniGameType_CA_FD_MAELSTROM = 11 UMETA(DisplayName = "CA FB Maelstrom"),
	ETresGameMiniGameType_HE_PUDDING = 12 UMETA(DisplayName = "HE Pudding"),
	ETresGameMiniGameType_TS_PUDDING = 13 UMETA(DisplayName = "TS Pudding"),
	ETresGameMiniGameType_RA_PUDDING = 14 UMETA(DisplayName = "RA Pudding"),
	ETresGameMiniGameType_MI_PUDDING = 15 UMETA(DisplayName = "MI Pudding"),
	ETresGameMiniGameType_FZ_PUDDING = 16 UMETA(DisplayName = "FZ Pudding"),
	ETresGameMiniGameType_BX_PUDDING = 17 UMETA(DisplayName = "BX Pudding"),
	ETresGameMiniGameType_CA_PUDDING = 18 UMETA(DisplayName = "CA Pudding"),
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
	WEP_KEYBLADE04 = 5 UMETA(DisplayName = "Keyblade 04"),
	WEP_KEYBLADE09 = 6 UMETA(DisplayName = "Keyblade 09"),
	WEP_KEYBLADE06 = 7 UMETA(DisplayName = "Keyblade 06"),
	WEP_KEYBLADE07 = 8 UMETA(DisplayName = "Keyblade 07"),
	WEP_KEYBLADE08 = 9 UMETA(DisplayName = "Keyblade 08"),
	WEP_KEYBLADE05 = 10 UMETA(DisplayName = "Keyblade 05"),
	WEP_KEYBLADE11 = 11 UMETA(DisplayName = "Keyblade 11"),
	WEP_KEYBLADE10 = 12 UMETA(DisplayName = "Keyblade 10"),
	WEP_KEYBLADE12 = 13 UMETA(DisplayName = "Keyblade 12"),
	WEP_KEYBLADE13 = 14 UMETA(DisplayName = "Keyblade 13"),
	WEP_KEYBLADE14 = 15 UMETA(DisplayName = "Keyblade 14"),
	WEP_KEYBLADE15 = 16 UMETA(DisplayName = "Keyblade 15"),
	WEP_KEYBLADE16 = 17 UMETA(DisplayName = "Keyblade 16"),
	WEP_KEYBLADE17 = 18 UMETA(DisplayName = "Keyblade 17"),
	WEP_KEYBLADE18 = 19 UMETA(DisplayName = "Keyblade 18"),
	WEP_KEYBLADE19 = 20 UMETA(DisplayName = "Keyblade 19"),
	WEP_DONALD00 = 21 UMETA(DisplayName = "Donald 00"),
	WEP_DONALD01 = 22 UMETA(DisplayName = "Donald 01"),
	WEP_DONALD02 = 23 UMETA(DisplayName = "Donald 02"),
	WEP_DONALD03 = 24 UMETA(DisplayName = "Donald 03"),
	WEP_DONALD04 = 25 UMETA(DisplayName = "Donald 04"),
	WEP_DONALD05 = 26 UMETA(DisplayName = "Donald 05"),
	WEP_DONALD06 = 27 UMETA(DisplayName = "Donald 06"),
	WEP_DONALD07 = 28 UMETA(DisplayName = "Donald 07"),
	WEP_DONALD08 = 29 UMETA(DisplayName = "Donald 08"),
	WEP_DONALD09 = 30 UMETA(DisplayName = "Donald 09"),
	WEP_DONALD10 = 31 UMETA(DisplayName = "Donald 10"),
	WEP_DONALD11 = 32 UMETA(DisplayName = "Donald 11"),
	WEP_DONALD12 = 33 UMETA(DisplayName = "Donald 12"),
	WEP_DONALD13 = 34 UMETA(DisplayName = "Donald 13"),
	WEP_DONALD14 = 35 UMETA(DisplayName = "Donald 14"),
	WEP_DONALD15 = 36 UMETA(DisplayName = "Donald 15"),
	WEP_DONALD16 = 37 UMETA(DisplayName = "Donald 16"),
	WEP_DONALD17 = 38 UMETA(DisplayName = "Donald 17"),
	WEP_DONALD18 = 39 UMETA(DisplayName = "Donald 18"),
	WEP_DONALD19 = 40 UMETA(DisplayName = "Donald 19"),
	WEP_GOOFY00 = 41 UMETA(DisplayName = "Goofy 00"),
	WEP_GOOFY01 = 42 UMETA(DisplayName = "Goofy 01"),
	WEP_GOOFY02 = 43 UMETA(DisplayName = "Goofy 02"),
	WEP_GOOFY03 = 44 UMETA(DisplayName = "Goofy 03"),
	WEP_GOOFY04 = 45 UMETA(DisplayName = "Goofy 04"),
	WEP_GOOFY05 = 46 UMETA(DisplayName = "Goofy 05"),
	WEP_GOOFY06 = 47 UMETA(DisplayName = "Goofy 06"),
	WEP_GOOFY07 = 48 UMETA(DisplayName = "Goofy 07"),
	WEP_GOOFY08 = 49 UMETA(DisplayName = "Goofy 08"),
	WEP_GOOFY09 = 50 UMETA(DisplayName = "Goofy 09"),
	WEP_GOOFY10 = 51 UMETA(DisplayName = "Goofy 10"),
	WEP_GOOFY11 = 52 UMETA(DisplayName = "Goofy 11"),
	WEP_GOOFY12 = 53 UMETA(DisplayName = "Goofy 12"),
	WEP_GOOFY13 = 54 UMETA(DisplayName = "Goofy 13"),
	WEP_GOOFY14 = 55 UMETA(DisplayName = "Goofy 14"),
	WEP_GOOFY15 = 56 UMETA(DisplayName = "Goofy 15"),
	WEP_GOOFY16 = 57 UMETA(DisplayName = "Goofy 16"),
	WEP_GOOFY17 = 58 UMETA(DisplayName = "Goofy 17"),
	WEP_GOOFY18 = 59 UMETA(DisplayName = "Goofy 18"),
	WEP_GOOFY19 = 60 UMETA(DisplayName = "Goofy 19"),
	WEP_AQUA00 = 61 UMETA(DisplayName = "Aqua 00"),
	WEP_AQUA01 = 62 UMETA(DisplayName = "Aqua 01"),
	WEP_AQUA02 = 63 UMETA(DisplayName = "Aqua 02"),
	WEP_AQUA03 = 64 UMETA(DisplayName = "Aqua 03"),
	WEP_MICKEY00 = 65 UMETA(DisplayName = "Mickey 00"),
	WEP_MICKEY01 = 66 UMETA(DisplayName = "Mickey 01"),
	WEP_MICKEY02 = 67 UMETA(DisplayName = "Mickey 02"),
	WEP_MICKEY03 = 68 UMETA(DisplayName = "Mickey 03"),
	WEP_HERCULES00 = 69 UMETA(DisplayName = "Hercules 00"),
	WEP_WOODY00 = 70 UMETA(DisplayName = "Woody 00"),
	WEP_BUZZ00 = 71 UMETA(DisplayName = "Buzz 00"),
	WEP_RAPUNZEL00 = 72 UMETA(DisplayName = "Rapunzel 00"),
	WEP_FLYNN00 = 73 UMETA(DisplayName = "Flynn 00"),
	WEP_JACK_SPARROW00 = 74 UMETA(DisplayName = "Jack Sparrow 00"),
	WEP_MARSHMALLOW00 = 75 UMETA(DisplayName = "Marshmallow 00"),
	WEP_BAYMAX00 = 76 UMETA(DisplayName = "Baymax 00"),
	WEP_SULLEY00 = 77 UMETA(DisplayName = "Sulley 00"),
	WEP_MIKE00 = 78 UMETA(DisplayName = "Mike 00"),
	WEP_RIKU00 = 79 UMETA(DisplayName = "Riku 00"),
	WEP_RIKU01 = 80 UMETA(DisplayName = "Riku 01"),
	WEP_RIKU02 = 81 UMETA(DisplayName = "Riku 02"),
	WEP_RIKU03 = 82 UMETA(DisplayName = "Riku 03"),
	WEP_KAIRI00 = 83 UMETA(DisplayName = "Kairi 00"),
	WEP_LEA00 = 84 UMETA(DisplayName = "Lea 00"),
	WEP_TERRA00 = 85 UMETA(DisplayName = "Terra 00"),
	WEP_VENTUS00 = 86 UMETA(DisplayName = "Ventus 00"),
	WEP_ROXAS00 = 87 UMETA(DisplayName = "Roxas 00"),
	WEP_XION00 = 88 UMETA(DisplayName = "Xion 00"),
	WEP_FRD_SORA00 = 89 UMETA(DisplayName = "FRD Sora 00"),
	_WEP_MAX = 90 UMETA(DisplayName = "MAX"),
	ETresItemDefWeapon_MAX = 91 UMETA(DisplayName = "Tres Item Def Weapon MAX")
};

UENUM(BlueprintType)
enum ETresItemDefReport
{
	ETresForceFeedbackKind_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresForceFeedbackKind_ITEM01 = 1 UMETA(DisplayName = "Item 1"),
	ETresForceFeedbackKind_ITEM02 = 2 UMETA(DisplayName = "Item 2"),
	ETresForceFeedbackKind_ITEM03 = 3 UMETA(DisplayName = "Item 3"),
	ETresForceFeedbackKind_ITEM04 = 4 UMETA(DisplayName = "Item 4"),
	ETresForceFeedbackKind_ITEM05 = 5 UMETA(DisplayName = "Item 5"),
	ETresForceFeedbackKind_ITEM06 = 6 UMETA(DisplayName = "Item 6"),
	ETresForceFeedbackKind_ITEM07 = 7 UMETA(DisplayName = "Item 7"),
	ETresForceFeedbackKind_ITEM08 = 8 UMETA(DisplayName = "Item 8"),
	ETresForceFeedbackKind_ITEM09 = 9 UMETA(DisplayName = "Item 9"),
	ETresForceFeedbackKind_ITEM10 = 10 UMETA(DisplayName = "Item 10"),
	ETresForceFeedbackKind_ITEM11 = 11 UMETA(DisplayName = "Item 11"),
	ETresForceFeedbackKind_ITEM12 = 12 UMETA(DisplayName = "Item 12"),
	ETresForceFeedbackKind_ITEM13 = 13 UMETA(DisplayName = "Item 13"),
	ETresForceFeedbackKind_ITEM14 = 14 UMETA(DisplayName = "Item 14"),
	ETresItemDefReport_1_MAX = 15 UMETA(DisplayName = "MAX"),
	ETresItemDefReport_MAX = 16 UMETA(DisplayName = "Tres Item Def Report MAX")
};

UENUM(BlueprintType)
enum ETresItemDefProtector
{
	ETresItemDefProtector_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemDefProtector_ITEM01 = 1 UMETA(DisplayName = "Item 01"),
	ETresItemDefProtector_ITEM02 = 2 UMETA(DisplayName = "Item 02"),
	ETresItemDefProtector_ITEM03 = 3 UMETA(DisplayName = "Item 03"),
	ETresItemDefProtector_ITEM04 = 4 UMETA(DisplayName = "Item 04"),
	ETresItemDefProtector_ITEM05 = 5 UMETA(DisplayName = "Item 05"),
	ETresItemDefProtector_ITEM06 = 6 UMETA(DisplayName = "Item 06"),
	ETresItemDefProtector_ITEM07 = 7 UMETA(DisplayName = "Item 07"),
	ETresItemDefProtector_ITEM08 = 8 UMETA(DisplayName = "Item 08"),
	ETresItemDefProtector_ITEM09 = 9 UMETA(DisplayName = "Item 09"),
	ETresItemDefProtector_ITEM10 = 10 UMETA(DisplayName = "Item 10"),
	ETresItemDefProtector_ITEM11 = 11 UMETA(DisplayName = "Item 11"),
	ETresItemDefProtector_ITEM12 = 12 UMETA(DisplayName = "Item 12"),
	ETresItemDefProtector_ITEM13 = 13 UMETA(DisplayName = "Item 13"),
	ETresItemDefProtector_ITEM14 = 14 UMETA(DisplayName = "Item 14"),
	ETresItemDefProtector_ITEM15 = 15 UMETA(DisplayName = "Item 15"),
	ETresItemDefProtector_ITEM16 = 16 UMETA(DisplayName = "Item 16"),
	ETresItemDefProtector_ITEM17 = 17 UMETA(DisplayName = "Item 17"),
	ETresItemDefProtector_ITEM18 = 18 UMETA(DisplayName = "Item 18"),
	ETresItemDefProtector_ITEM19 = 19 UMETA(DisplayName = "Item 19"),
	ETresItemDefProtector_ITEM20 = 20 UMETA(DisplayName = "Item 20"),
	ETresItemDefProtector_ITEM21 = 21 UMETA(DisplayName = "Item 21"),
	ETresItemDefProtector_ITEM22 = 22 UMETA(DisplayName = "Item 22"),
	ETresItemDefProtector_ITEM23 = 23 UMETA(DisplayName = "Item 23"),
	ETresItemDefProtector_ITEM24 = 24 UMETA(DisplayName = "Item 24"),
	ETresItemDefProtector_ITEM25 = 25 UMETA(DisplayName = "Item 25"),
	ETresItemDefProtector_ITEM26 = 26 UMETA(DisplayName = "Item 26"),
	ETresItemDefProtector_ITEM27 = 27 UMETA(DisplayName = "Item 27"),
	ETresItemDefProtector_ITEM28 = 28 UMETA(DisplayName = "Item 28"),
	ETresItemDefProtector_ITEM29 = 29 UMETA(DisplayName = "Item 29"),
	ETresItemDefProtector_ITEM30 = 30 UMETA(DisplayName = "Item 30"),
	ETresItemDefProtector_ITEM31 = 31 UMETA(DisplayName = "Item 31"),
	ETresItemDefProtector_ITEM32 = 32 UMETA(DisplayName = "Item 32"),
	ETresItemDefProtector_ITEM33 = 33 UMETA(DisplayName = "Item 33"),
	ETresItemDefProtector_ITEM34 = 34 UMETA(DisplayName = "Item 34"),
	ETresItemDefProtector_ITEM35 = 35 UMETA(DisplayName = "Item 35"),
	ETresItemDefProtector_ITEM36 = 36 UMETA(DisplayName = "Item 36"),
	ETresItemDefProtector_ITEM37 = 37 UMETA(DisplayName = "Item 37"),
	ETresItemDefProtector_ITEM38 = 38 UMETA(DisplayName = "Item 38"),
	ETresItemDefProtector_ITEM39 = 39 UMETA(DisplayName = "Item 39"),
	ETresItemDefProtector_ITEM40 = 40 UMETA(DisplayName = "Item 40"),
	ETresItemDefProtector_ITEM41 = 41 UMETA(DisplayName = "Item 41"),
	ETresItemDefProtector_ITEM42 = 42 UMETA(DisplayName = "Item 42"),
	ETresItemDefProtector_ITEM43 = 43 UMETA(DisplayName = "Item 43"),
	ETresItemDefProtector_ITEM44 = 44 UMETA(DisplayName = "Item 44"),
	ETresItemDefProtector_ITEM45 = 45 UMETA(DisplayName = "Item 45"),
	ETresItemDefProtector_ITEM46 = 46 UMETA(DisplayName = "Item 46"),
	ETresItemDefProtector_ITEM47 = 47 UMETA(DisplayName = "Item 47"),
	ETresItemDefProtector_ITEM48 = 48 UMETA(DisplayName = "Item 48"),
	ETresItemDefProtector_ITEM49 = 49 UMETA(DisplayName = "Item 49"),
	ETresItemDefProtector_ITEM50 = 50 UMETA(DisplayName = "Item 50"),
	ETresItemDefProtector_ITEM51 = 51 UMETA(DisplayName = "Item 51"),
	ETresItemDefProtector_ITEM52 = 52 UMETA(DisplayName = "Item 52"),
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
	NM_WCID_MI01 = 4 UMETA(DisplayName = "MI 01"),
	NM_WCID_MI02 = 5 UMETA(DisplayName = "MI 02"),
	NM_WCID_MI03 = 6 UMETA(DisplayName = "MI 03"),
	NM_WCID_MI04 = 7 UMETA(DisplayName = "MI 04"),
	NM_WCID_TS01 = 8 UMETA(DisplayName = "TS 01"),
	NM_WCID_TS02 = 9 UMETA(DisplayName = "TS 02"),
	NM_WCID_TS03 = 10 UMETA(DisplayName = "TS 03"),
	NM_WCID_TS04 = 11 UMETA(DisplayName = "TS 04"),
	NM_WCID_FZ01 = 12 UMETA(DisplayName = "FZ 01"),
	NM_WCID_FZ02 = 13 UMETA(DisplayName = "FZ 02"),
	NM_WCID_FZ03 = 14 UMETA(DisplayName = "FZ 03"),
	NM_WCID_FZ04 = 15 UMETA(DisplayName = "FZ 04"),
	NM_WCID_RA01 = 16 UMETA(DisplayName = "RA 01"),
	NM_WCID_RA02 = 17 UMETA(DisplayName = "RA 02"),
	NM_WCID_RA03 = 18 UMETA(DisplayName = "RA 03"),
	NM_WCID_RA04 = 19 UMETA(DisplayName = "RA 04"),
	NM_WCID_CA01 = 20 UMETA(DisplayName = "CA 01"),
	NM_WCID_CA02 = 21 UMETA(DisplayName = "CA 02"),
	NM_WCID_CA03 = 22 UMETA(DisplayName = "CA 03"),
	NM_WCID_CA04 = 23 UMETA(DisplayName = "CA 04"),
	NM_WCID_HE01 = 24 UMETA(DisplayName = "HE 01"),
	NM_WCID_HE02 = 25 UMETA(DisplayName = "HE 02"),
	NM_WCID_HE03 = 26 UMETA(DisplayName = "HE 03"),
	NM_WCID_HE04 = 27 UMETA(DisplayName = "HE 04"),
	NM_WCID_BX01 = 28 UMETA(DisplayName = "BX 01"),
	NM_WCID_BX02 = 29 UMETA(DisplayName = "BX 02"),
	NM_WCID_BX03 = 30 UMETA(DisplayName = "BX 03"),
	NM_WCID_BX04 = 31 UMETA(DisplayName = "BX 04"),
	NM_WCID_TT01 = 32 UMETA(DisplayName = "TT 01"),
	NM_WCID_TT02 = 33 UMETA(DisplayName = "TT 02"),
	NM_WCID_TT03 = 34 UMETA(DisplayName = "TT 03"),
	NM_WCID_TT04 = 35 UMETA(DisplayName = "TT 04"),
	NM_WCID_PO01 = 36 UMETA(DisplayName = "PO 01"),
	NM_WCID_PO02 = 37 UMETA(DisplayName = "PO 02"),
	NM_WCID_PO03 = 38 UMETA(DisplayName = "PO 03"),
	NM_WCID_PO04 = 39 UMETA(DisplayName = "PO 04"),
	NM_WCID_KG01 = 40 UMETA(DisplayName = "KG 01"),
	NM_WCID_KG02 = 41 UMETA(DisplayName = "KG 02"),
	NM_WCID_KG03 = 42 UMETA(DisplayName = "KG 03"),
	NM_WCID_KG04 = 43 UMETA(DisplayName = "KG 04"),
	NM_WCID_EW01 = 44 UMETA(DisplayName = "EW 01"),
	NM_WCID_EW02 = 45 UMETA(DisplayName = "EW 02"),
	NM_WCID_EW03 = 46 UMETA(DisplayName = "EW 03"),
	NM_WCID_EW04 = 47 UMETA(DisplayName = "EW 04"),
	NM_WCID_BT01 = 48 UMETA(DisplayName = "BT 01"),
	NM_WCID_BT02 = 49 UMETA(DisplayName = "BT 02"),
	NM_WCID_BT03 = 50 UMETA(DisplayName = "BT 03"),
	NM_WCID_BT04 = 51 UMETA(DisplayName = "BT 04"),
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
	ETresItemDefMaterial_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemDefMaterial_ITEM01 = 1 UMETA(DisplayName = "Item 01"),
	ETresItemDefMaterial_ITEM02 = 2 UMETA(DisplayName = "Item 02"),
	ETresItemDefMaterial_ITEM03 = 3 UMETA(DisplayName = "Item 03"),
	ETresItemDefMaterial_ITEM04 = 4 UMETA(DisplayName = "Item 04"),
	ETresItemDefMaterial_ITEM05 = 5 UMETA(DisplayName = "Item 05"),
	ETresItemDefMaterial_ITEM06 = 6 UMETA(DisplayName = "Item 06"),
	ETresItemDefMaterial_ITEM07 = 7 UMETA(DisplayName = "Item 07"),
	ETresItemDefMaterial_ITEM08 = 8 UMETA(DisplayName = "Item 08"),
	ETresItemDefMaterial_ITEM09 = 9 UMETA(DisplayName = "Item 09"),
	ETresItemDefMaterial_ITEM10 = 10 UMETA(DisplayName = "Item 10"),
	ETresItemDefMaterial_ITEM11 = 11 UMETA(DisplayName = "Item 11"),
	ETresItemDefMaterial_ITEM12 = 12 UMETA(DisplayName = "Item 12"),
	ETresItemDefMaterial_ITEM13 = 13 UMETA(DisplayName = "Item 13"),
	ETresItemDefMaterial_ITEM14 = 14 UMETA(DisplayName = "Item 14"),
	ETresItemDefMaterial_ITEM15 = 15 UMETA(DisplayName = "Item 15"),
	ETresItemDefMaterial_ITEM16 = 16 UMETA(DisplayName = "Item 16"),
	ETresItemDefMaterial_ITEM17 = 17 UMETA(DisplayName = "Item 17"),
	ETresItemDefMaterial_ITEM18 = 18 UMETA(DisplayName = "Item 18"),
	ETresItemDefMaterial_ITEM19 = 19 UMETA(DisplayName = "Item 19"),
	ETresItemDefMaterial_ITEM20 = 20 UMETA(DisplayName = "Item 20"),
	ETresItemDefMaterial_ITEM21 = 21 UMETA(DisplayName = "Item 21"),
	ETresItemDefMaterial_ITEM22 = 22 UMETA(DisplayName = "Item 22"),
	ETresItemDefMaterial_ITEM23 = 23 UMETA(DisplayName = "Item 23"),
	ETresItemDefMaterial_ITEM24 = 24 UMETA(DisplayName = "Item 24"),
	ETresItemDefMaterial_ITEM25 = 25 UMETA(DisplayName = "Item 25"),
	ETresItemDefMaterial_ITEM26 = 26 UMETA(DisplayName = "Item 26"),
	ETresItemDefMaterial_ITEM27 = 27 UMETA(DisplayName = "Item 27"),
	ETresItemDefMaterial_ITEM28 = 28 UMETA(DisplayName = "Item 28"),
	ETresItemDefMaterial_ITEM29 = 29 UMETA(DisplayName = "Item 29"),
	ETresItemDefMaterial_ITEM30 = 30 UMETA(DisplayName = "Item 30"),
	ETresItemDefMaterial_ITEM31 = 31 UMETA(DisplayName = "Item 31"),
	ETresItemDefMaterial_ITEM32 = 32 UMETA(DisplayName = "Item 32"),
	ETresItemDefMaterial_ITEM33 = 33 UMETA(DisplayName = "Item 33"),
	ETresItemDefMaterial_ITEM34 = 34 UMETA(DisplayName = "Item 34"),
	ETresItemDefMaterial_ITEM35 = 35 UMETA(DisplayName = "Item 35"),
	ETresItemDefMaterial_ITEM36 = 36 UMETA(DisplayName = "Item 36"),
	ETresItemDefMaterial_ITEM37 = 37 UMETA(DisplayName = "Item 37"),
	ETresItemDefMaterial_ITEM38 = 38 UMETA(DisplayName = "Item 38"),
	ETresItemDefMaterial_ITEM39 = 39 UMETA(DisplayName = "Item 39"),
	ETresItemDefMaterial_ITEM40 = 40 UMETA(DisplayName = "Item 40"),
	ETresItemDefMaterial_ITEM41 = 41 UMETA(DisplayName = "Item 41"),
	ETresItemDefMaterial_ITEM42 = 42 UMETA(DisplayName = "Item 42"),
	ETresItemDefMaterial_ITEM43 = 43 UMETA(DisplayName = "Item 43"),
	ETresItemDefMaterial_ITEM44 = 44 UMETA(DisplayName = "Item 44"),
	ETresItemDefMaterial_ITEM45 = 45 UMETA(DisplayName = "Item 45"),
	ETresItemDefMaterial_ITEM46 = 46 UMETA(DisplayName = "Item 46"),
	ETresItemDefMaterial_ITEM47 = 47 UMETA(DisplayName = "Item 47"),
	ETresItemDefMaterial_ITEM48 = 48 UMETA(DisplayName = "Item 48"),
	ETresItemDefMaterial_ITEM49 = 49 UMETA(DisplayName = "Item 49"),
	ETresItemDefMaterial_ITEM50 = 50 UMETA(DisplayName = "Item 50"),
	ETresItemDefMaterial_ITEM51 = 51 UMETA(DisplayName = "Item 51"),
	ETresItemDefMaterial_ITEM52 = 52 UMETA(DisplayName = "Item 52"),
	ETresItemDefMaterial_ITEM53 = 53 UMETA(DisplayName = "Item 53"),
	ETresItemDefMaterial_ITEM54 = 54 UMETA(DisplayName = "Item 54"),
	ETresItemDefMaterial_ITEM55 = 55 UMETA(DisplayName = "Item 55"),
	ETresItemDefMaterial_ITEM56 = 56 UMETA(DisplayName = "Item 56"),
	ETresItemDefMaterial_ITEM57 = 57 UMETA(DisplayName = "Item 57"),
	ETresItemDefMaterial_ITEM58 = 58 UMETA(DisplayName = "Item 58"),
	ETresItemDefMaterial_ITEM59 = 59 UMETA(DisplayName = "Item 59"),
	ETresItemDefMaterial_ITEM60 = 60 UMETA(DisplayName = "Item 60"),
	ETresItemDefMaterial_1_MAX = 61 UMETA(DisplayName = "Max"),
	ETresItemDefMaterial_MAX = 62 UMETA(DisplayName = "Tres Item Def Material MAX")
};

UENUM(BlueprintType)
enum ETresItemDefLSIGameItem
{
	ETresItemDefLSIGameItem_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemDefLSIGameItem_ITEM01 = 1 UMETA(DisplayName = "Item 01"),
	ETresItemDefLSIGameItem_ITEM02 = 2 UMETA(DisplayName = "Item 02"),
	ETresItemDefLSIGameItem_ITEM03 = 3 UMETA(DisplayName = "Item 03"),
	ETresItemDefLSIGameItem_ITEM04 = 4 UMETA(DisplayName = "Item 04"),
	ETresItemDefLSIGameItem_ITEM05 = 5 UMETA(DisplayName = "Item 05"),
	ETresItemDefLSIGameItem_ITEM06 = 6 UMETA(DisplayName = "Item 06"),
	ETresItemDefLSIGameItem_ITEM07 = 7 UMETA(DisplayName = "Item 07"),
	ETresItemDefLSIGameItem_ITEM08 = 8 UMETA(DisplayName = "Item 08"),
	ETresItemDefLSIGameItem_ITEM09 = 9 UMETA(DisplayName = "Item 09"),
	ETresItemDefLSIGameItem_ITEM10 = 10 UMETA(DisplayName = "Item 10"),
	ETresItemDefLSIGameItem_ITEM11 = 11 UMETA(DisplayName = "Item 11"),
	ETresItemDefLSIGameItem_ITEM12 = 12 UMETA(DisplayName = "Item 12"),
	ETresItemDefLSIGameItem_ITEM13 = 13 UMETA(DisplayName = "Item 13"),
	ETresItemDefLSIGameItem_ITEM14 = 14 UMETA(DisplayName = "Item 14"),
	ETresItemDefLSIGameItem_ITEM15 = 15 UMETA(DisplayName = "Item 15"),
	ETresItemDefLSIGameItem_ITEM16 = 16 UMETA(DisplayName = "Item 16"),
	ETresItemDefLSIGameItem_ITEM17 = 17 UMETA(DisplayName = "Item 17"),
	ETresItemDefLSIGameItem_ITEM18 = 18 UMETA(DisplayName = "Item 18"),
	ETresItemDefLSIGameItem_ITEM19 = 19 UMETA(DisplayName = "Item 19"),
	ETresItemDefLSIGameItem_ITEM20 = 20 UMETA(DisplayName = "Item 20"),
	ETresItemDefLSIGameItem_ITEM21 = 21 UMETA(DisplayName = "Item 21"),
	ETresItemDefLSIGameItem_ITEM22 = 22 UMETA(DisplayName = "Item 22"),
	ETresItemDefLSIGameItem_ITEM23 = 23 UMETA(DisplayName = "Item 23"),
	ETresItemDefLSIGameItem_1_MAX = 24 UMETA(DisplayName = "Max"),
	ETresItemDefLSIGameItem_MAX = 25 UMETA(DisplayName = "Tres Item Def LSI Game Item MAX")
};

UENUM(BlueprintType)
enum ETresItemDefGumiSticker
{
	ETresItemDefGumiSticker_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemDefGumiSticker_ITEM001 = 1 UMETA(DisplayName = "Item 01"),
	ETresItemDefGumiSticker_ITEM002 = 2 UMETA(DisplayName = "Item 02"),
	ETresItemDefGumiSticker_ITEM003 = 3 UMETA(DisplayName = "Item 03"),
	ETresItemDefGumiSticker_ITEM004 = 4 UMETA(DisplayName = "Item 04"),
	ETresItemDefGumiSticker_ITEM005 = 5 UMETA(DisplayName = "Item 05"),
	ETresItemDefGumiSticker_ITEM006 = 6 UMETA(DisplayName = "Item 06"),
	ETresItemDefGumiSticker_ITEM007 = 7 UMETA(DisplayName = "Item 07"),
	ETresItemDefGumiSticker_ITEM008 = 8 UMETA(DisplayName = "Item 08"),
	ETresItemDefGumiSticker_ITEM009 = 9 UMETA(DisplayName = "Item 09"),
	ETresItemDefGumiSticker_ITEM010 = 10 UMETA(DisplayName = "Item 010"),
	ETresItemDefGumiSticker_ITEM011 = 11 UMETA(DisplayName = "Item 011"),
	ETresItemDefGumiSticker_ITEM012 = 12 UMETA(DisplayName = "Item 012"),
	ETresItemDefGumiSticker_ITEM013 = 13 UMETA(DisplayName = "Item 013"),
	ETresItemDefGumiSticker_ITEM014 = 14 UMETA(DisplayName = "Item 014"),
	ETresItemDefGumiSticker_ITEM015 = 15 UMETA(DisplayName = "Item 015"),
	ETresItemDefGumiSticker_ITEM016 = 16 UMETA(DisplayName = "Item 016"),
	ETresItemDefGumiSticker_ITEM017 = 17 UMETA(DisplayName = "Item 017"),
	ETresItemDefGumiSticker_ITEM018 = 18 UMETA(DisplayName = "Item 018"),
	ETresItemDefGumiSticker_ITEM019 = 19 UMETA(DisplayName = "Item 019"),
	ETresItemDefGumiSticker_ITEM020 = 20 UMETA(DisplayName = "Item 020"),
	ETresItemDefGumiSticker_ITEM021 = 21 UMETA(DisplayName = "Item 021"),
	ETresItemDefGumiSticker_ITEM022 = 22 UMETA(DisplayName = "Item 022"),
	ETresItemDefGumiSticker_ITEM023 = 23 UMETA(DisplayName = "Item 023"),
	ETresItemDefGumiSticker_ITEM024 = 24 UMETA(DisplayName = "Item 024"),
	ETresItemDefGumiSticker_ITEM025 = 25 UMETA(DisplayName = "Item 025"),
	ETresItemDefGumiSticker_ITEM026 = 26 UMETA(DisplayName = "Item 026"),
	ETresItemDefGumiSticker_ITEM027 = 27 UMETA(DisplayName = "Item 027"),
	ETresItemDefGumiSticker_ITEM028 = 28 UMETA(DisplayName = "Item 028"),
	ETresItemDefGumiSticker_ITEM029 = 29 UMETA(DisplayName = "Item 029"),
	ETresItemDefGumiSticker_ITEM030 = 30 UMETA(DisplayName = "Item 030"),
	ETresItemDefGumiSticker_ITEM031 = 31 UMETA(DisplayName = "Item 031"),
	ETresItemDefGumiSticker_ITEM032 = 32 UMETA(DisplayName = "Item 032"),
	ETresItemDefGumiSticker_ITEM033 = 33 UMETA(DisplayName = "Item 033"),
	ETresItemDefGumiSticker_ITEM034 = 34 UMETA(DisplayName = "Item 034"),
	ETresItemDefGumiSticker_ITEM035 = 35 UMETA(DisplayName = "Item 035"),
	ETresItemDefGumiSticker_ITEM036 = 36 UMETA(DisplayName = "Item 036"),
	ETresItemDefGumiSticker_ITEM037 = 37 UMETA(DisplayName = "Item 037"),
	ETresItemDefGumiSticker_ITEM038 = 38 UMETA(DisplayName = "Item 038"),
	ETresItemDefGumiSticker_ITEM039 = 39 UMETA(DisplayName = "Item 039"),
	ETresItemDefGumiSticker_ITEM040 = 40 UMETA(DisplayName = "Item 040"),
	ETresItemDefGumiSticker_ITEM041 = 41 UMETA(DisplayName = "Item 041"),
	ETresItemDefGumiSticker_ITEM042 = 42 UMETA(DisplayName = "Item 042"),
	ETresItemDefGumiSticker_ITEM043 = 43 UMETA(DisplayName = "Item 043"),
	ETresItemDefGumiSticker_ITEM044 = 44 UMETA(DisplayName = "Item 044"),
	ETresItemDefGumiSticker_ITEM045 = 45 UMETA(DisplayName = "Item 045"),
	ETresItemDefGumiSticker_ITEM046 = 46 UMETA(DisplayName = "Item 046"),
	ETresItemDefGumiSticker_ITEM047 = 47 UMETA(DisplayName = "Item 047"),
	ETresItemDefGumiSticker_ITEM048 = 48 UMETA(DisplayName = "Item 048"),
	ETresItemDefGumiSticker_ITEM049 = 49 UMETA(DisplayName = "Item 049"),
	ETresItemDefGumiSticker_ITEM050 = 50 UMETA(DisplayName = "Item 050"),
	ETresItemDefGumiSticker_ITEM051 = 51 UMETA(DisplayName = "Item 051"),
	ETresItemDefGumiSticker_ITEM052 = 52 UMETA(DisplayName = "Item 052"),
	ETresItemDefGumiSticker_ITEM053 = 53 UMETA(DisplayName = "Item 053"),
	ETresItemDefGumiSticker_ITEM054 = 54 UMETA(DisplayName = "Item 054"),
	ETresItemDefGumiSticker_ITEM055 = 55 UMETA(DisplayName = "Item 055"),
	ETresItemDefGumiSticker_ITEM056 = 56 UMETA(DisplayName = "Item 056"),
	ETresItemDefGumiSticker_ITEM057 = 57 UMETA(DisplayName = "Item 057"),
	ETresItemDefGumiSticker_ITEM058 = 58 UMETA(DisplayName = "Item 058"),
	ETresItemDefGumiSticker_ITEM059 = 59 UMETA(DisplayName = "Item 059"),
	ETresItemDefGumiSticker_ITEM060 = 60 UMETA(DisplayName = "Item 060"),
	ETresItemDefGumiSticker_ITEM061 = 61 UMETA(DisplayName = "Item 061"),
	ETresItemDefGumiSticker_ITEM062 = 62 UMETA(DisplayName = "Item 062"),
	ETresItemDefGumiSticker_ITEM063 = 63 UMETA(DisplayName = "Item 063"),
	ETresItemDefGumiSticker_ITEM064 = 64 UMETA(DisplayName = "Item 064"),
	ETresItemDefGumiSticker_ITEM065 = 65 UMETA(DisplayName = "Item 065"),
	ETresItemDefGumiSticker_ITEM066 = 66 UMETA(DisplayName = "Item 066"),
	ETresItemDefGumiSticker_ITEM067 = 67 UMETA(DisplayName = "Item 067"),
	ETresItemDefGumiSticker_ITEM068 = 68 UMETA(DisplayName = "Item 068"),
	ETresItemDefGumiSticker_ITEM069 = 69 UMETA(DisplayName = "Item 069"),
	ETresItemDefGumiSticker_ITEM070 = 70 UMETA(DisplayName = "Item 070"),
	ETresItemDefGumiSticker_ITEM071 = 71 UMETA(DisplayName = "Item 071"),
	ETresItemDefGumiSticker_ITEM072 = 72 UMETA(DisplayName = "Item 072"),
	ETresItemDefGumiSticker_ITEM073 = 73 UMETA(DisplayName = "Item 073"),
	ETresItemDefGumiSticker_ITEM074 = 74 UMETA(DisplayName = "Item 074"),
	ETresItemDefGumiSticker_ITEM075 = 75 UMETA(DisplayName = "Item 075"),
	ETresItemDefGumiSticker_ITEM076 = 76 UMETA(DisplayName = "Item 076"),
	ETresItemDefGumiSticker_ITEM077 = 77 UMETA(DisplayName = "Item 077"),
	ETresItemDefGumiSticker_ITEM078 = 78 UMETA(DisplayName = "Item 078"),
	ETresItemDefGumiSticker_ITEM079 = 79 UMETA(DisplayName = "Item 079"),
	ETresItemDefGumiSticker_ITEM080 = 80 UMETA(DisplayName = "Item 080"),
	ETresItemDefGumiSticker_ITEM081 = 81 UMETA(DisplayName = "Item 081"),
	ETresItemDefGumiSticker_ITEM082 = 82 UMETA(DisplayName = "Item 082"),
	ETresItemDefGumiSticker_ITEM083 = 83 UMETA(DisplayName = "Item 083"),
	ETresItemDefGumiSticker_ITEM084 = 84 UMETA(DisplayName = "Item 084"),
	ETresItemDefGumiSticker_ITEM085 = 85 UMETA(DisplayName = "Item 085"),
	ETresItemDefGumiSticker_1_MAX = 86 UMETA(DisplayName = "Max"),
	ETresItemDefGumiSticker_MAX = 87 UMETA(DisplayName = "Tres Item Def Gumi Sticker MAX")
};

UENUM(BlueprintType)
enum ETresItemDefGumiShipBP
{
	ETresItemDefGumiShipBP_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemDefGumiShipBP_ITEM001 = 1 UMETA(DisplayName = "Item 01"),
	ETresItemDefGumiShipBP_ITEM002 = 2 UMETA(DisplayName = "Item 02"),
	ETresItemDefGumiShipBP_ITEM003 = 3 UMETA(DisplayName = "Item 03"),
	ETresItemDefGumiShipBP_ITEM004 = 4 UMETA(DisplayName = "Item 04"),
	ETresItemDefGumiShipBP_ITEM005 = 5 UMETA(DisplayName = "Item 05"),
	ETresItemDefGumiShipBP_ITEM006 = 6 UMETA(DisplayName = "Item 06"),
	ETresItemDefGumiShipBP_ITEM007 = 7 UMETA(DisplayName = "Item 07"),
	ETresItemDefGumiShipBP_ITEM008 = 8 UMETA(DisplayName = "Item 08"),
	ETresItemDefGumiShipBP_ITEM009 = 9 UMETA(DisplayName = "Item 09"),
	ETresItemDefGumiShipBP_ITEM010 = 10 UMETA(DisplayName = "Item 010"),
	ETresItemDefGumiShipBP_ITEM011 = 11 UMETA(DisplayName = "Item 011"),
	ETresItemDefGumiShipBP_ITEM012 = 12 UMETA(DisplayName = "Item 012"),
	ETresItemDefGumiShipBP_ITEM013 = 13 UMETA(DisplayName = "Item 013"),
	ETresItemDefGumiShipBP_ITEM014 = 14 UMETA(DisplayName = "Item 014"),
	ETresItemDefGumiShipBP_ITEM015 = 15 UMETA(DisplayName = "Item 015"),
	ETresItemDefGumiShipBP_ITEM016 = 16 UMETA(DisplayName = "Item 016"),
	ETresItemDefGumiShipBP_ITEM017 = 17 UMETA(DisplayName = "Item 017"),
	ETresItemDefGumiShipBP_ITEM018 = 18 UMETA(DisplayName = "Item 018"),
	ETresItemDefGumiShipBP_ITEM019 = 19 UMETA(DisplayName = "Item 019"),
	ETresItemDefGumiShipBP_ITEM020 = 20 UMETA(DisplayName = "Item 020"),
	ETresItemDefGumiShipBP_ITEM021 = 21 UMETA(DisplayName = "Item 021"),
	ETresItemDefGumiShipBP_ITEM022 = 22 UMETA(DisplayName = "Item 022"),
	ETresItemDefGumiShipBP_ITEM023 = 23 UMETA(DisplayName = "Item 023"),
	ETresItemDefGumiShipBP_ITEM024 = 24 UMETA(DisplayName = "Item 024"),
	ETresItemDefGumiShipBP_ITEM025 = 25 UMETA(DisplayName = "Item 025"),
	ETresItemDefGumiShipBP_ITEM026 = 26 UMETA(DisplayName = "Item 026"),
	ETresItemDefGumiShipBP_ITEM027 = 27 UMETA(DisplayName = "Item 027"),
	ETresItemDefGumiShipBP_ITEM028 = 28 UMETA(DisplayName = "Item 028"),
	ETresItemDefGumiShipBP_ITEM029 = 29 UMETA(DisplayName = "Item 029"),
	ETresItemDefGumiShipBP_ITEM030 = 30 UMETA(DisplayName = "Item 030"),
	ETresItemDefGumiShipBP_ITEM031 = 31 UMETA(DisplayName = "Item 031"),
	ETresItemDefGumiShipBP_ITEM032 = 32 UMETA(DisplayName = "Item 032"),
	ETresItemDefGumiShipBP_ITEM033 = 33 UMETA(DisplayName = "Item 033"),
	ETresItemDefGumiShipBP_ITEM034 = 34 UMETA(DisplayName = "Item 034"),
	ETresItemDefGumiShipBP_ITEM035 = 35 UMETA(DisplayName = "Item 035"),
	ETresItemDefGumiShipBP_ITEM036 = 36 UMETA(DisplayName = "Item 036"),
	ETresItemDefGumiShipBP_ITEM037 = 37 UMETA(DisplayName = "Item 037"),
	ETresItemDefGumiShipBP_ITEM038 = 38 UMETA(DisplayName = "Item 038"),
	ETresItemDefGumiShipBP_ITEM039 = 39 UMETA(DisplayName = "Item 039"),
	ETresItemDefGumiShipBP_ITEM040 = 40 UMETA(DisplayName = "Item 040"),
	ETresItemDefGumiShipBP_ITEM041 = 41 UMETA(DisplayName = "Item 041"),
	ETresItemDefGumiShipBP_ITEM042 = 42 UMETA(DisplayName = "Item 042"),
	ETresItemDefGumiShipBP_ITEM043 = 43 UMETA(DisplayName = "Item 043"),
	ETresItemDefGumiShipBP_ITEM044 = 44 UMETA(DisplayName = "Item 044"),
	ETresItemDefGumiShipBP_ITEM045 = 45 UMETA(DisplayName = "Item 045"),
	ETresItemDefGumiShipBP_ITEM046 = 46 UMETA(DisplayName = "Item 046"),
	ETresItemDefGumiShipBP_ITEM047 = 47 UMETA(DisplayName = "Item 047"),
	ETresItemDefGumiShipBP_ITEM048 = 48 UMETA(DisplayName = "Item 048"),
	ETresItemDefGumiShipBP_ITEM049 = 49 UMETA(DisplayName = "Item 049"),
	ETresItemDefGumiShipBP_ITEM050 = 50 UMETA(DisplayName = "Item 050"),
	ETresItemDefGumiShipBP_ITEM051 = 51 UMETA(DisplayName = "Item 051"),
	ETresItemDefGumiShipBP_ITEM052 = 52 UMETA(DisplayName = "Item 052"),
	ETresItemDefGumiShipBP_ITEM053 = 53 UMETA(DisplayName = "Item 053"),
	ETresItemDefGumiShipBP_ITEM054 = 54 UMETA(DisplayName = "Item 054"),
	ETresItemDefGumiShipBP_ITEM055 = 55 UMETA(DisplayName = "Item 055"),
	ETresItemDefGumiShipBP_ITEM056 = 56 UMETA(DisplayName = "Item 056"),
	ETresItemDefGumiShipBP_ITEM057 = 57 UMETA(DisplayName = "Item 057"),
	ETresItemDefGumiShipBP_ITEM058 = 58 UMETA(DisplayName = "Item 058"),
	ETresItemDefGumiShipBP_ITEM059 = 59 UMETA(DisplayName = "Item 059"),
	ETresItemDefGumiShipBP_ITEM060 = 60 UMETA(DisplayName = "Item 060"),
	ETresItemDefGumiShipBP_ITEM061 = 61 UMETA(DisplayName = "Item 061"),
	ETresItemDefGumiShipBP_ITEM062 = 62 UMETA(DisplayName = "Item 062"),
	ETresItemDefGumiShipBP_ITEM063 = 63 UMETA(DisplayName = "Item 063"),
	ETresItemDefGumiShipBP_ITEM064 = 64 UMETA(DisplayName = "Item 064"),
	ETresItemDefGumiShipBP_ITEM065 = 65 UMETA(DisplayName = "Item 065"),
	ETresItemDefGumiShipBP_ITEM066 = 66 UMETA(DisplayName = "Item 066"),
	ETresItemDefGumiShipBP_ITEM067 = 67 UMETA(DisplayName = "Item 067"),
	ETresItemDefGumiShipBP_ITEM068 = 68 UMETA(DisplayName = "Item 068"),
	ETresItemDefGumiShipBP_ITEM069 = 69 UMETA(DisplayName = "Item 069"),
	ETresItemDefGumiShipBP_ITEM070 = 70 UMETA(DisplayName = "Item 070"),
	ETresItemDefGumiShipBP_ITEM071 = 71 UMETA(DisplayName = "Item 071"),
	ETresItemDefGumiShipBP_ITEM072 = 72 UMETA(DisplayName = "Item 072"),
	ETresItemDefGumiShipBP_ITEM073 = 73 UMETA(DisplayName = "Item 073"),
	ETresItemDefGumiShipBP_ITEM074 = 74 UMETA(DisplayName = "Item 074"),
	ETresItemDefGumiShipBP_ITEM075 = 75 UMETA(DisplayName = "Item 075"),
	ETresItemDefGumiShipBP_ITEM076 = 76 UMETA(DisplayName = "Item 076"),
	ETresItemDefGumiShipBP_ITEM077 = 77 UMETA(DisplayName = "Item 077"),
	ETresItemDefGumiShipBP_ITEM078 = 78 UMETA(DisplayName = "Item 078"),
	ETresItemDefGumiShipBP_ITEM079 = 79 UMETA(DisplayName = "Item 079"),
	ETresItemDefGumiShipBP_ITEM080 = 80 UMETA(DisplayName = "Item 080"),
	ETresItemDefGumiShipBP_ITEM081 = 81 UMETA(DisplayName = "Item 081"),
	ETresItemDefGumiShipBP_ITEM082 = 82 UMETA(DisplayName = "Item 082"),
	ETresItemDefGumiShipBP_ITEM083 = 83 UMETA(DisplayName = "Item 083"),
	ETresItemDefGumiShipBP_ITEM084 = 84 UMETA(DisplayName = "Item 084"),
	ETresItemDefGumiShipBP_ITEM085 = 85 UMETA(DisplayName = "Item 085"),
	ETresItemDefGumiShipBP_ITEM086 = 86 UMETA(DisplayName = "Item 086"),
	ETresItemDefGumiShipBP_ITEM087 = 87 UMETA(DisplayName = "Item 087"),
	ETresItemDefGumiShipBP_ITEM088 = 88 UMETA(DisplayName = "Item 088"),
	ETresItemDefGumiShipBP_ITEM089 = 89 UMETA(DisplayName = "Item 089"),
	ETresItemDefGumiShipBP_ITEM090 = 90 UMETA(DisplayName = "Item 090"),
	ETresItemDefGumiShipBP_ITEM091 = 91 UMETA(DisplayName = "Item 091"),
	ETresItemDefGumiShipBP_ITEM092 = 92 UMETA(DisplayName = "Item 092"),
	ETresItemDefGumiShipBP_ITEM093 = 93 UMETA(DisplayName = "Item 093"),
	ETresItemDefGumiShipBP_ITEM094 = 94 UMETA(DisplayName = "Item 094"),
	ETresItemDefGumiShipBP_ITEM095 = 95 UMETA(DisplayName = "Item 095"),
	ETresItemDefGumiShipBP_ITEM096 = 96 UMETA(DisplayName = "Item 096"),
	ETresItemDefGumiShipBP_ITEM097 = 97 UMETA(DisplayName = "Item 097"),
	ETresItemDefGumiShipBP_ITEM098 = 98 UMETA(DisplayName = "Item 098"),
	ETresItemDefGumiShipBP_ITEM099 = 99 UMETA(DisplayName = "Item 099"),
	ETresItemDefGumiShipBP_ITEM100 = 100 UMETA(DisplayName = "Item 100"),
	ETresItemDefGumiShipBP_ITEM101 = 101 UMETA(DisplayName = "Item 101"),
	ETresItemDefGumiShipBP_ITEM102 = 102 UMETA(DisplayName = "Item 102"),
	ETresItemDefGumiShipBP_ITEM103 = 103 UMETA(DisplayName = "Item 103"),
	ETresItemDefGumiShipBP_ITEM104 = 104 UMETA(DisplayName = "Item 104"),
	ETresItemDefGumiShipBP_ITEM105 = 105 UMETA(DisplayName = "Item 105"),
	ETresItemDefGumiShipBP_ITEM106 = 106 UMETA(DisplayName = "Item 106"),
	ETresItemDefGumiShipBP_ITEM107 = 107 UMETA(DisplayName = "Item 107"),
	ETresItemDefGumiShipBP_ITEM108 = 108 UMETA(DisplayName = "Item 108"),
	ETresItemDefGumiShipBP_ITEM109 = 109 UMETA(DisplayName = "Item 109"),
	ETresItemDefGumiShipBP_ITEM110 = 110 UMETA(DisplayName = "Item 110"),
	ETresItemDefGumiShipBP_ITEM111 = 111 UMETA(DisplayName = "Item 111"),
	ETresItemDefGumiShipBP_ITEM112 = 112 UMETA(DisplayName = "Item 112"),
	ETresItemDefGumiShipBP_ITEM113 = 113 UMETA(DisplayName = "Item 113"),
	ETresItemDefGumiShipBP_ITEM114 = 114 UMETA(DisplayName = "Item 114"),
	ETresItemDefGumiShipBP_ITEM115 = 115 UMETA(DisplayName = "Item 115"),
	ETresItemDefGumiShipBP_ITEM116 = 116 UMETA(DisplayName = "Item 116"),
	ETresItemDefGumiShipBP_ITEM117 = 117 UMETA(DisplayName = "Item 117"),
	ETresItemDefGumiShipBP_ITEM118 = 118 UMETA(DisplayName = "Item 118"),
	ETresItemDefGumiShipBP_ITEM119 = 119 UMETA(DisplayName = "Item 119"),
	ETresItemDefGumiShipBP_ITEM120 = 120 UMETA(DisplayName = "Item 120"),
	ETresItemDefGumiShipBP_ITEM121 = 121 UMETA(DisplayName = "Item 121"),
	ETresItemDefGumiShipBP_ITEM122 = 122 UMETA(DisplayName = "Item 122"),
	ETresItemDefGumiShipBP_ITEM123 = 123 UMETA(DisplayName = "Item 123"),
	ETresItemDefGumiShipBP_ITEM124 = 124 UMETA(DisplayName = "Item 124"),
	ETresItemDefGumiShipBP_ITEM125 = 125 UMETA(DisplayName = "Item 125"),
	ETresItemDefGumiShipBP_ITEM126 = 126 UMETA(DisplayName = "Item 126"),
	ETresItemDefGumiShipBP_ITEM127 = 127 UMETA(DisplayName = "Item 127"),
	ETresItemDefGumiShipBP_ITEM128 = 128 UMETA(DisplayName = "Item 128"),
	ETresItemDefGumiShipBP_ITEM129 = 129 UMETA(DisplayName = "Item 129"),
	ETresItemDefGumiShipBP_ITEM130 = 130 UMETA(DisplayName = "Item 130"),
	ETresItemDefGumiShipBP_ITEM131 = 131 UMETA(DisplayName = "Item 131"),
	ETresItemDefGumiShipBP_ITEM132 = 132 UMETA(DisplayName = "Item 132"),
	ETresItemDefGumiShipBP_ITEM133 = 133 UMETA(DisplayName = "Item 133"),
	ETresItemDefGumiShipBP_ITEM134 = 134 UMETA(DisplayName = "Item 134"),
	ETresItemDefGumiShipBP_ITEM135 = 135 UMETA(DisplayName = "Item 135"),
	ETresItemDefGumiShipBP_ITEM136 = 136 UMETA(DisplayName = "Item 136"),
	ETresItemDefGumiShipBP_ITEM137 = 137 UMETA(DisplayName = "Item 137"),
	ETresItemDefGumiShipBP_ITEM138 = 138 UMETA(DisplayName = "Item 138"),
	ETresItemDefGumiShipBP_ITEM139 = 139 UMETA(DisplayName = "Item 139"),
	ETresItemDefGumiShipBP_ITEM140 = 140 UMETA(DisplayName = "Item 140"),
	ETresItemDefGumiShipBP_ITEM141 = 141 UMETA(DisplayName = "Item 141"),
	ETresItemDefGumiShipBP_ITEM142 = 142 UMETA(DisplayName = "Item 142"),
	ETresItemDefGumiShipBP_ITEM143 = 143 UMETA(DisplayName = "Item 143"),
	ETresItemDefGumiShipBP_ITEM144 = 144 UMETA(DisplayName = "Item 144"),
	ETresItemDefGumiShipBP_ITEM145 = 145 UMETA(DisplayName = "Item 145"),
	ETresItemDefGumiShipBP_ITEM146 = 146 UMETA(DisplayName = "Item 146"),
	ETresItemDefGumiShipBP_ITEM147 = 147 UMETA(DisplayName = "Item 147"),
	ETresItemDefGumiShipBP_ITEM148 = 148 UMETA(DisplayName = "Item 148"),
	ETresItemDefGumiShipBP_ITEM149 = 149 UMETA(DisplayName = "Item 149"),
	ETresItemDefGumiShipBP_ITEM150 = 150 UMETA(DisplayName = "Item 150"),
	ETresItemDefGumiShipBP_ITEM151 = 151 UMETA(DisplayName = "Item 151"),
	ETresItemDefGumiShipBP_ITEM152 = 152 UMETA(DisplayName = "Item 152"),
	ETresItemDefGumiShipBP_ITEM153 = 153 UMETA(DisplayName = "Item 153"),
	ETresItemDefGumiShipBP_ITEM154 = 154 UMETA(DisplayName = "Item 154"),
	ETresItemDefGumiShipBP_ITEM155 = 155 UMETA(DisplayName = "Item 155"),
	ETresItemDefGumiShipBP_ITEM156 = 156 UMETA(DisplayName = "Item 156"),
	ETresItemDefGumiShipBP_ITEM157 = 157 UMETA(DisplayName = "Item 157"),
	ETresItemDefGumiShipBP_ITEM158 = 158 UMETA(DisplayName = "Item 158"),
	ETresItemDefGumiShipBP_ITEM159 = 159 UMETA(DisplayName = "Item 159"),
	ETresItemDefGumiShipBP_ITEM160 = 160 UMETA(DisplayName = "Item 160"),
	ETresItemDefGumiShipBP_ITEM161 = 161 UMETA(DisplayName = "Item 161"),
	ETresItemDefGumiShipBP_ITEM162 = 162 UMETA(DisplayName = "Item 162"),
	ETresItemDefGumiShipBP_ITEM163 = 163 UMETA(DisplayName = "Item 163"),
	ETresItemDefGumiShipBP_ITEM164 = 164 UMETA(DisplayName = "Item 164"),
	ETresItemDefGumiShipBP_ITEM165 = 165 UMETA(DisplayName = "Item 165"),
	ETresItemDefGumiShipBP_ITEM166 = 166 UMETA(DisplayName = "Item 166"),
	ETresItemDefGumiShipBP_ITEM167 = 167 UMETA(DisplayName = "Item 167"),
	ETresItemDefGumiShipBP_ITEM168 = 168 UMETA(DisplayName = "Item 168"),
	ETresItemDefGumiShipBP_ITEM169 = 169 UMETA(DisplayName = "Item 169"),
	ETresItemDefGumiShipBP_ITEM170 = 170 UMETA(DisplayName = "Item 170"),
	ETresItemDefGumiShipBP_ITEM171 = 171 UMETA(DisplayName = "Item 171"),
	ETresItemDefGumiShipBP_ITEM172 = 172 UMETA(DisplayName = "Item 172"),
	ETresItemDefGumiShipBP_ITEM173 = 173 UMETA(DisplayName = "Item 173"),
	ETresItemDefGumiShipBP_ITEM174 = 174 UMETA(DisplayName = "Item 174"),
	ETresItemDefGumiShipBP_ITEM175 = 175 UMETA(DisplayName = "Item 175"),
	ETresItemDefGumiShipBP_ITEM176 = 176 UMETA(DisplayName = "Item 176"),
	ETresItemDefGumiShipBP_ITEM177 = 177 UMETA(DisplayName = "Item 177"),
	ETresItemDefGumiShipBP_ITEM178 = 178 UMETA(DisplayName = "Item 178"),
	ETresItemDefGumiShipBP_ITEM179 = 179 UMETA(DisplayName = "Item 179"),
	ETresItemDefGumiShipBP_ITEM180 = 180 UMETA(DisplayName = "Item 180"),
	ETresItemDefGumiShipBP_ITEM181 = 181 UMETA(DisplayName = "Item 181"),
	ETresItemDefGumiShipBP_ITEM182 = 182 UMETA(DisplayName = "Item 182"),
	ETresItemDefGumiShipBP_ITEM183 = 183 UMETA(DisplayName = "Item 183"),
	ETresItemDefGumiShipBP_ITEM184 = 184 UMETA(DisplayName = "Item 184"),
	ETresItemDefGumiShipBP_ITEM185 = 185 UMETA(DisplayName = "Item 185"),
	ETresItemDefGumiShipBP_ITEM186 = 186 UMETA(DisplayName = "Item 186"),
	ETresItemDefGumiShipBP_ITEM187 = 187 UMETA(DisplayName = "Item 187"),
	ETresItemDefGumiShipBP_ITEM188 = 188 UMETA(DisplayName = "Item 188"),
	ETresItemDefGumiShipBP_ITEM189 = 189 UMETA(DisplayName = "Item 189"),
	ETresItemDefGumiShipBP_ITEM190 = 190 UMETA(DisplayName = "Item 190"),
	ETresItemDefGumiShipBP_ITEM191 = 191 UMETA(DisplayName = "Item 191"),
	ETresItemDefGumiShipBP_ITEM192 = 192 UMETA(DisplayName = "Item 192"),
	ETresItemDefGumiShipBP_ITEM193 = 193 UMETA(DisplayName = "Item 193"),
	ETresItemDefGumiShipBP_ITEM194 = 194 UMETA(DisplayName = "Item 194"),
	ETresItemDefGumiShipBP_ITEM195 = 195 UMETA(DisplayName = "Item 195"),
	ETresItemDefGumiShipBP_1_MAX = 196 UMETA(DisplayName = "Max"),
	ETresItemDefGumiShipBP_MAX = 197 UMETA(DisplayName = "Tres Item Def Gumi Ship BP MAX")
};

UENUM(BlueprintType)
enum ETresItemDefGumiPattern
{
	ETresItemDefGumiPattern_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemDefGumiPattern_ITEM001 = 1 UMETA(DisplayName = "Item 01"),
	ETresItemDefGumiPattern_ITEM002 = 2 UMETA(DisplayName = "Item 02"),
	ETresItemDefGumiPattern_ITEM003 = 3 UMETA(DisplayName = "Item 03"),
	ETresItemDefGumiPattern_ITEM004 = 4 UMETA(DisplayName = "Item 04"),
	ETresItemDefGumiPattern_ITEM005 = 5 UMETA(DisplayName = "Item 05"),
	ETresItemDefGumiPattern_ITEM006 = 6 UMETA(DisplayName = "Item 06"),
	ETresItemDefGumiPattern_ITEM007 = 7 UMETA(DisplayName = "Item 07"),
	ETresItemDefGumiPattern_ITEM008 = 8 UMETA(DisplayName = "Item 08"),
	ETresItemDefGumiPattern_ITEM009 = 9 UMETA(DisplayName = "Item 09"),
	ETresItemDefGumiPattern_ITEM010 = 10 UMETA(DisplayName = "Item 010"),
	ETresItemDefGumiPattern_ITEM011 = 11 UMETA(DisplayName = "Item 011"),
	ETresItemDefGumiPattern_ITEM012 = 12 UMETA(DisplayName = "Item 012"),
	ETresItemDefGumiPattern_ITEM013 = 13 UMETA(DisplayName = "Item 013"),
	ETresItemDefGumiPattern_ITEM014 = 14 UMETA(DisplayName = "Item 014"),
	ETresItemDefGumiPattern_ITEM015 = 15 UMETA(DisplayName = "Item 015"),
	ETresItemDefGumiPattern_ITEM016 = 16 UMETA(DisplayName = "Item 016"),
	ETresItemDefGumiPattern_ITEM017 = 17 UMETA(DisplayName = "Item 017"),
	ETresItemDefGumiPattern_ITEM018 = 18 UMETA(DisplayName = "Item 018"),
	ETresItemDefGumiPattern_ITEM019 = 19 UMETA(DisplayName = "Item 019"),
	ETresItemDefGumiPattern_ITEM020 = 20 UMETA(DisplayName = "Item 020"),
	ETresItemDefGumiPattern_ITEM021 = 21 UMETA(DisplayName = "Item 021"),
	ETresItemDefGumiPattern_ITEM022 = 22 UMETA(DisplayName = "Item 022"),
	ETresItemDefGumiPattern_ITEM023 = 23 UMETA(DisplayName = "Item 023"),
	ETresItemDefGumiPattern_ITEM024 = 24 UMETA(DisplayName = "Item 024"),
	ETresItemDefGumiPattern_ITEM025 = 25 UMETA(DisplayName = "Item 025"),
	ETresItemDefGumiPattern_ITEM026 = 26 UMETA(DisplayName = "Item 026"),
	ETresItemDefGumiPattern_ITEM027 = 27 UMETA(DisplayName = "Item 027"),
	ETresItemDefGumiPattern_ITEM028 = 28 UMETA(DisplayName = "Item 028"),
	ETresItemDefGumiPattern_ITEM029 = 29 UMETA(DisplayName = "Item 029"),
	ETresItemDefGumiPattern_ITEM030 = 30 UMETA(DisplayName = "Item 030"),
	ETresItemDefGumiPattern_ITEM031 = 31 UMETA(DisplayName = "Item 031"),
	ETresItemDefGumiPattern_ITEM032 = 32 UMETA(DisplayName = "Item 032"),
	ETresItemDefGumiPattern_ITEM033 = 33 UMETA(DisplayName = "Item 033"),
	ETresItemDefGumiPattern_ITEM034 = 34 UMETA(DisplayName = "Item 034"),
	ETresItemDefGumiPattern_ITEM035 = 35 UMETA(DisplayName = "Item 035"),
	ETresItemDefGumiPattern_ITEM036 = 36 UMETA(DisplayName = "Item 036"),
	ETresItemDefGumiPattern_ITEM037 = 37 UMETA(DisplayName = "Item 037"),
	ETresItemDefGumiPattern_ITEM038 = 38 UMETA(DisplayName = "Item 038"),
	ETresItemDefGumiPattern_ITEM039 = 39 UMETA(DisplayName = "Item 039"),
	ETresItemDefGumiPattern_ITEM040 = 40 UMETA(DisplayName = "Item 040"),
	ETresItemDefGumiPattern_ITEM041 = 41 UMETA(DisplayName = "Item 041"),
	ETresItemDefGumiPattern_ITEM042 = 42 UMETA(DisplayName = "Item 042"),
	ETresItemDefGumiPattern_ITEM043 = 43 UMETA(DisplayName = "Item 043"),
	ETresItemDefGumiPattern_ITEM044 = 44 UMETA(DisplayName = "Item 044"),
	ETresItemDefGumiPattern_ITEM045 = 45 UMETA(DisplayName = "Item 045"),
	ETresItemDefGumiPattern_ITEM046 = 46 UMETA(DisplayName = "Item 046"),
	ETresItemDefGumiPattern_ITEM047 = 47 UMETA(DisplayName = "Item 047"),
	ETresItemDefGumiPattern_ITEM048 = 48 UMETA(DisplayName = "Item 048"),
	ETresItemDefGumiPattern_ITEM049 = 49 UMETA(DisplayName = "Item 049"),
	ETresItemDefGumiPattern_ITEM050 = 50 UMETA(DisplayName = "Item 050"),
	ETresItemDefGumiPattern_ITEM051 = 51 UMETA(DisplayName = "Item 051"),
	ETresItemDefGumiPattern_ITEM052 = 52 UMETA(DisplayName = "Item 052"),
	ETresItemDefGumiPattern_ITEM053 = 53 UMETA(DisplayName = "Item 053"),
	ETresItemDefGumiPattern_ITEM054 = 54 UMETA(DisplayName = "Item 054"),
	ETresItemDefGumiPattern_ITEM055 = 55 UMETA(DisplayName = "Item 055"),
	ETresItemDefGumiPattern_ITEM056 = 56 UMETA(DisplayName = "Item 056"),
	ETresItemDefGumiPattern_ITEM057 = 57 UMETA(DisplayName = "Item 057"),
	ETresItemDefGumiPattern_ITEM058 = 58 UMETA(DisplayName = "Item 058"),
	ETresItemDefGumiPattern_ITEM059 = 59 UMETA(DisplayName = "Item 059"),
	ETresItemDefGumiPattern_ITEM060 = 60 UMETA(DisplayName = "Item 060"),
	ETresItemDefGumiPattern_ITEM061 = 61 UMETA(DisplayName = "Item 061"),
	ETresItemDefGumiPattern_ITEM062 = 62 UMETA(DisplayName = "Item 062"),
	ETresItemDefGumiPattern_ITEM063 = 63 UMETA(DisplayName = "Item 063"),
	ETresItemDefGumiPattern_ITEM064 = 64 UMETA(DisplayName = "Item 064"),
	ETresItemDefGumiPattern_ITEM065 = 65 UMETA(DisplayName = "Item 065"),
	ETresItemDefGumiPattern_ITEM066 = 66 UMETA(DisplayName = "Item 066"),
	ETresItemDefGumiPattern_ITEM067 = 67 UMETA(DisplayName = "Item 067"),
	ETresItemDefGumiPattern_ITEM068 = 68 UMETA(DisplayName = "Item 068"),
	ETresItemDefGumiPattern_ITEM069 = 69 UMETA(DisplayName = "Item 069"),
	ETresItemDefGumiPattern_ITEM070 = 70 UMETA(DisplayName = "Item 070"),
	ETresItemDefGumiPattern_ITEM071 = 71 UMETA(DisplayName = "Item 071"),
	ETresItemDefGumiPattern_ITEM072 = 72 UMETA(DisplayName = "Item 072"),
	ETresItemDefGumiPattern_ITEM073 = 73 UMETA(DisplayName = "Item 073"),
	ETresItemDefGumiPattern_ITEM074 = 74 UMETA(DisplayName = "Item 074"),
	ETresItemDefGumiPattern_ITEM075 = 75 UMETA(DisplayName = "Item 075"),
	ETresItemDefGumiPattern_ITEM076 = 76 UMETA(DisplayName = "Item 076"),
	ETresItemDefGumiPattern_ITEM077 = 77 UMETA(DisplayName = "Item 077"),
	ETresItemDefGumiPattern_ITEM078 = 78 UMETA(DisplayName = "Item 078"),
	ETresItemDefGumiPattern_ITEM079 = 79 UMETA(DisplayName = "Item 079"),
	ETresItemDefGumiPattern_ITEM080 = 80 UMETA(DisplayName = "Item 080"),
	ETresItemDefGumiPattern_ITEM081 = 81 UMETA(DisplayName = "Item 081"),
	ETresItemDefGumiPattern_ITEM082 = 82 UMETA(DisplayName = "Item 082"),
	ETresItemDefGumiPattern_ITEM083 = 83 UMETA(DisplayName = "Item 083"),
	ETresItemDefGumiPattern_ITEM084 = 84 UMETA(DisplayName = "Item 084"),
	ETresItemDefGumiPattern_ITEM085 = 85 UMETA(DisplayName = "Item 085"),
	ETresItemDefGumiPattern_ITEM086 = 86 UMETA(DisplayName = "Item 086"),
	ETresItemDefGumiPattern_ITEM087 = 87 UMETA(DisplayName = "Item 087"),
	ETresItemDefGumiPattern_ITEM088 = 88 UMETA(DisplayName = "Item 088"),
	ETresItemDefGumiPattern_ITEM089 = 89 UMETA(DisplayName = "Item 089"),
	ETresItemDefGumiPattern_ITEM090 = 90 UMETA(DisplayName = "Item 090"),
	ETresItemDefGumiPattern_ITEM091 = 91 UMETA(DisplayName = "Item 091"),
	ETresItemDefGumiPattern_ITEM092 = 92 UMETA(DisplayName = "Item 092"),
	ETresItemDefGumiPattern_ITEM093 = 93 UMETA(DisplayName = "Item 093"),
	ETresItemDefGumiPattern_ITEM094 = 94 UMETA(DisplayName = "Item 094"),
	ETresItemDefGumiPattern_ITEM095 = 95 UMETA(DisplayName = "Item 095"),
	ETresItemDefGumiPattern_ITEM096 = 96 UMETA(DisplayName = "Item 096"),
	ETresItemDefGumiPattern_ITEM097 = 97 UMETA(DisplayName = "Item 097"),
	ETresItemDefGumiPattern_ITEM098 = 98 UMETA(DisplayName = "Item 098"),
	ETresItemDefGumiPattern_ITEM099 = 99 UMETA(DisplayName = "Item 099"),
	ETresItemDefGumiPattern_ITEM100 = 100 UMETA(DisplayName = "Item 100"),
	ETresItemDefGumiPattern_ITEM101 = 101 UMETA(DisplayName = "Item 101"),
	ETresItemDefGumiPattern_ITEM102 = 102 UMETA(DisplayName = "Item 102"),
	ETresItemDefGumiPattern_ITEM103 = 103 UMETA(DisplayName = "Item 103"),
	ETresItemDefGumiPattern_ITEM104 = 104 UMETA(DisplayName = "Item 104"),
	ETresItemDefGumiPattern_ITEM105 = 105 UMETA(DisplayName = "Item 105"),
	ETresItemDefGumiPattern_ITEM106 = 106 UMETA(DisplayName = "Item 106"),
	ETresItemDefGumiPattern_ITEM107 = 107 UMETA(DisplayName = "Item 107"),
	ETresItemDefGumiPattern_1_MAX = 108 UMETA(DisplayName = "Max"),
	ETresItemDefGumiPattern_MAX = 109 UMETA(DisplayName = "Tres Item Def Gumi Pattern MAX")
};

UENUM(BlueprintType)
enum ETresItemDefGumiParts
{
	ETresItemDefGumiParts_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemDefGumiParts_ITEM001 = 1 UMETA(DisplayName = "Item 001"),
	ETresItemDefGumiParts_ITEM002 = 2 UMETA(DisplayName = "Item 02"),
	ETresItemDefGumiParts_ITEM003 = 3 UMETA(DisplayName = "Item 03"),
	ETresItemDefGumiParts_ITEM004 = 4 UMETA(DisplayName = "Item 04"),
	ETresItemDefGumiParts_ITEM005 = 5 UMETA(DisplayName = "Item 05"),
	ETresItemDefGumiParts_ITEM006 = 6 UMETA(DisplayName = "Item 06"),
	ETresItemDefGumiParts_ITEM007 = 7 UMETA(DisplayName = "Item 07"),
	ETresItemDefGumiParts_ITEM008 = 8 UMETA(DisplayName = "Item 08"),
	ETresItemDefGumiParts_ITEM009 = 9 UMETA(DisplayName = "Item 09"),
	ETresItemDefGumiParts_ITEM010 = 10 UMETA(DisplayName = "Item 010"),
	ETresItemDefGumiParts_ITEM011 = 11 UMETA(DisplayName = "Item 011"),
	ETresItemDefGumiParts_ITEM012 = 12 UMETA(DisplayName = "Item 012"),
	ETresItemDefGumiParts_ITEM013 = 13 UMETA(DisplayName = "Item 013"),
	ETresItemDefGumiParts_ITEM014 = 14 UMETA(DisplayName = "Item 014"),
	ETresItemDefGumiParts_ITEM015 = 15 UMETA(DisplayName = "Item 015"),
	ETresItemDefGumiParts_ITEM016 = 16 UMETA(DisplayName = "Item 016"),
	ETresItemDefGumiParts_ITEM017 = 17 UMETA(DisplayName = "Item 017"),
	ETresItemDefGumiParts_ITEM018 = 18 UMETA(DisplayName = "Item 018"),
	ETresItemDefGumiParts_ITEM019 = 19 UMETA(DisplayName = "Item 019"),
	ETresItemDefGumiParts_ITEM020 = 20 UMETA(DisplayName = "Item 020"),
	ETresItemDefGumiParts_ITEM021 = 21 UMETA(DisplayName = "Item 021"),
	ETresItemDefGumiParts_ITEM022 = 22 UMETA(DisplayName = "Item 022"),
	ETresItemDefGumiParts_ITEM023 = 23 UMETA(DisplayName = "Item 023"),
	ETresItemDefGumiParts_ITEM024 = 24 UMETA(DisplayName = "Item 024"),
	ETresItemDefGumiParts_ITEM025 = 25 UMETA(DisplayName = "Item 025"),
	ETresItemDefGumiParts_ITEM026 = 26 UMETA(DisplayName = "Item 026"),
	ETresItemDefGumiParts_ITEM027 = 27 UMETA(DisplayName = "Item 027"),
	ETresItemDefGumiParts_ITEM028 = 28 UMETA(DisplayName = "Item 028"),
	ETresItemDefGumiParts_ITEM029 = 29 UMETA(DisplayName = "Item 029"),
	ETresItemDefGumiParts_ITEM030 = 30 UMETA(DisplayName = "Item 030"),
	ETresItemDefGumiParts_ITEM031 = 31 UMETA(DisplayName = "Item 031"),
	ETresItemDefGumiParts_ITEM032 = 32 UMETA(DisplayName = "Item 032"),
	ETresItemDefGumiParts_ITEM033 = 33 UMETA(DisplayName = "Item 033"),
	ETresItemDefGumiParts_ITEM034 = 34 UMETA(DisplayName = "Item 034"),
	ETresItemDefGumiParts_ITEM035 = 35 UMETA(DisplayName = "Item 035"),
	ETresItemDefGumiParts_ITEM036 = 36 UMETA(DisplayName = "Item 036"),
	ETresItemDefGumiParts_ITEM037 = 37 UMETA(DisplayName = "Item 037"),
	ETresItemDefGumiParts_ITEM038 = 38 UMETA(DisplayName = "Item 038"),
	ETresItemDefGumiParts_ITEM039 = 39 UMETA(DisplayName = "Item 039"),
	ETresItemDefGumiParts_ITEM040 = 40 UMETA(DisplayName = "Item 040"),
	ETresItemDefGumiParts_ITEM041 = 41 UMETA(DisplayName = "Item 041"),
	ETresItemDefGumiParts_ITEM042 = 42 UMETA(DisplayName = "Item 042"),
	ETresItemDefGumiParts_ITEM043 = 43 UMETA(DisplayName = "Item 043"),
	ETresItemDefGumiParts_ITEM044 = 44 UMETA(DisplayName = "Item 044"),
	ETresItemDefGumiParts_ITEM045 = 45 UMETA(DisplayName = "Item 045"),
	ETresItemDefGumiParts_ITEM046 = 46 UMETA(DisplayName = "Item 046"),
	ETresItemDefGumiParts_ITEM047 = 47 UMETA(DisplayName = "Item 047"),
	ETresItemDefGumiParts_ITEM048 = 48 UMETA(DisplayName = "Item 048"),
	ETresItemDefGumiParts_ITEM049 = 49 UMETA(DisplayName = "Item 049"),
	ETresItemDefGumiParts_ITEM050 = 50 UMETA(DisplayName = "Item 050"),
	ETresItemDefGumiParts_ITEM051 = 51 UMETA(DisplayName = "Item 051"),
	ETresItemDefGumiParts_ITEM052 = 52 UMETA(DisplayName = "Item 052"),
	ETresItemDefGumiParts_ITEM053 = 53 UMETA(DisplayName = "Item 053"),
	ETresItemDefGumiParts_ITEM054 = 54 UMETA(DisplayName = "Item 054"),
	ETresItemDefGumiParts_ITEM055 = 55 UMETA(DisplayName = "Item 055"),
	ETresItemDefGumiParts_ITEM056 = 56 UMETA(DisplayName = "Item 056"),
	ETresItemDefGumiParts_ITEM057 = 57 UMETA(DisplayName = "Item 057"),
	ETresItemDefGumiParts_ITEM058 = 58 UMETA(DisplayName = "Item 058"),
	ETresItemDefGumiParts_ITEM059 = 59 UMETA(DisplayName = "Item 059"),
	ETresItemDefGumiParts_ITEM060 = 60 UMETA(DisplayName = "Item 060"),
	ETresItemDefGumiParts_ITEM061 = 61 UMETA(DisplayName = "Item 061"),
	ETresItemDefGumiParts_ITEM062 = 62 UMETA(DisplayName = "Item 062"),
	ETresItemDefGumiParts_ITEM063 = 63 UMETA(DisplayName = "Item 063"),
	ETresItemDefGumiParts_ITEM064 = 64 UMETA(DisplayName = "Item 064"),
	ETresItemDefGumiParts_ITEM065 = 65 UMETA(DisplayName = "Item 065"),
	ETresItemDefGumiParts_ITEM066 = 66 UMETA(DisplayName = "Item 066"),
	ETresItemDefGumiParts_ITEM067 = 67 UMETA(DisplayName = "Item 067"),
	ETresItemDefGumiParts_ITEM068 = 68 UMETA(DisplayName = "Item 068"),
	ETresItemDefGumiParts_ITEM069 = 69 UMETA(DisplayName = "Item 069"),
	ETresItemDefGumiParts_ITEM070 = 70 UMETA(DisplayName = "Item 070"),
	ETresItemDefGumiParts_ITEM071 = 71 UMETA(DisplayName = "Item 071"),
	ETresItemDefGumiParts_ITEM072 = 72 UMETA(DisplayName = "Item 072"),
	ETresItemDefGumiParts_ITEM073 = 73 UMETA(DisplayName = "Item 073"),
	ETresItemDefGumiParts_ITEM074 = 74 UMETA(DisplayName = "Item 074"),
	ETresItemDefGumiParts_ITEM075 = 75 UMETA(DisplayName = "Item 075"),
	ETresItemDefGumiParts_ITEM076 = 76 UMETA(DisplayName = "Item 076"),
	ETresItemDefGumiParts_ITEM077 = 77 UMETA(DisplayName = "Item 077"),
	ETresItemDefGumiParts_ITEM078 = 78 UMETA(DisplayName = "Item 078"),
	ETresItemDefGumiParts_ITEM079 = 79 UMETA(DisplayName = "Item 079"),
	ETresItemDefGumiParts_ITEM080 = 80 UMETA(DisplayName = "Item 080"),
	ETresItemDefGumiParts_ITEM081 = 81 UMETA(DisplayName = "Item 081"),
	ETresItemDefGumiParts_ITEM082 = 82 UMETA(DisplayName = "Item 082"),
	ETresItemDefGumiParts_ITEM083 = 83 UMETA(DisplayName = "Item 083"),
	ETresItemDefGumiParts_ITEM084 = 84 UMETA(DisplayName = "Item 084"),
	ETresItemDefGumiParts_ITEM085 = 85 UMETA(DisplayName = "Item 085"),
	ETresItemDefGumiParts_ITEM086 = 86 UMETA(DisplayName = "Item 086"),
	ETresItemDefGumiParts_ITEM087 = 87 UMETA(DisplayName = "Item 087"),
	ETresItemDefGumiParts_ITEM088 = 88 UMETA(DisplayName = "Item 088"),
	ETresItemDefGumiParts_ITEM089 = 89 UMETA(DisplayName = "Item 089"),
	ETresItemDefGumiParts_ITEM090 = 90 UMETA(DisplayName = "Item 090"),
	ETresItemDefGumiParts_ITEM091 = 91 UMETA(DisplayName = "Item 091"),
	ETresItemDefGumiParts_ITEM092 = 92 UMETA(DisplayName = "Item 092"),
	ETresItemDefGumiParts_ITEM093 = 93 UMETA(DisplayName = "Item 093"),
	ETresItemDefGumiParts_ITEM094 = 94 UMETA(DisplayName = "Item 094"),
	ETresItemDefGumiParts_ITEM095 = 95 UMETA(DisplayName = "Item 095"),
	ETresItemDefGumiParts_ITEM096 = 96 UMETA(DisplayName = "Item 096"),
	ETresItemDefGumiParts_ITEM097 = 97 UMETA(DisplayName = "Item 097"),
	ETresItemDefGumiParts_ITEM098 = 98 UMETA(DisplayName = "Item 098"),
	ETresItemDefGumiParts_ITEM099 = 99 UMETA(DisplayName = "Item 099"),
	ETresItemDefGumiParts_ITEM100 = 100 UMETA(DisplayName = "Item 100"),
	ETresItemDefGumiParts_ITEM101 = 101 UMETA(DisplayName = "Item 101"),
	ETresItemDefGumiParts_ITEM102 = 102 UMETA(DisplayName = "Item 102"),
	ETresItemDefGumiParts_ITEM103 = 103 UMETA(DisplayName = "Item 103"),
	ETresItemDefGumiParts_ITEM104 = 104 UMETA(DisplayName = "Item 104"),
	ETresItemDefGumiParts_ITEM105 = 105 UMETA(DisplayName = "Item 105"),
	ETresItemDefGumiParts_ITEM106 = 106 UMETA(DisplayName = "Item 106"),
	ETresItemDefGumiParts_ITEM107 = 107 UMETA(DisplayName = "Item 107"),
	ETresItemDefGumiParts_ITEM108 = 108 UMETA(DisplayName = "Item 108"),
	ETresItemDefGumiParts_ITEM109 = 109 UMETA(DisplayName = "Item 109"),
	ETresItemDefGumiParts_ITEM110 = 110 UMETA(DisplayName = "Item 110"),
	ETresItemDefGumiParts_ITEM111 = 111 UMETA(DisplayName = "Item 111"),
	ETresItemDefGumiParts_ITEM112 = 112 UMETA(DisplayName = "Item 112"),
	ETresItemDefGumiParts_ITEM113 = 113 UMETA(DisplayName = "Item 113"),
	ETresItemDefGumiParts_ITEM114 = 114 UMETA(DisplayName = "Item 114"),
	ETresItemDefGumiParts_ITEM115 = 115 UMETA(DisplayName = "Item 115"),
	ETresItemDefGumiParts_ITEM116 = 116 UMETA(DisplayName = "Item 116"),
	ETresItemDefGumiParts_ITEM117 = 117 UMETA(DisplayName = "Item 117"),
	ETresItemDefGumiParts_ITEM118 = 118 UMETA(DisplayName = "Item 118"),
	ETresItemDefGumiParts_ITEM119 = 119 UMETA(DisplayName = "Item 119"),
	ETresItemDefGumiParts_ITEM120 = 120 UMETA(DisplayName = "Item 120"),
	ETresItemDefGumiParts_ITEM121 = 121 UMETA(DisplayName = "Item 121"),
	ETresItemDefGumiParts_ITEM122 = 122 UMETA(DisplayName = "Item 122"),
	ETresItemDefGumiParts_ITEM123 = 123 UMETA(DisplayName = "Item 123"),
	ETresItemDefGumiParts_ITEM124 = 124 UMETA(DisplayName = "Item 124"),
	ETresItemDefGumiParts_ITEM125 = 125 UMETA(DisplayName = "Item 125"),
	ETresItemDefGumiParts_ITEM126 = 126 UMETA(DisplayName = "Item 126"),
	ETresItemDefGumiParts_ITEM127 = 127 UMETA(DisplayName = "Item 127"),
	ETresItemDefGumiParts_ITEM128 = 128 UMETA(DisplayName = "Item 128"),
	ETresItemDefGumiParts_ITEM129 = 129 UMETA(DisplayName = "Item 129"),
	ETresItemDefGumiParts_ITEM130 = 130 UMETA(DisplayName = "Item 130"),
	ETresItemDefGumiParts_ITEM131 = 131 UMETA(DisplayName = "Item 131"),
	ETresItemDefGumiParts_ITEM132 = 132 UMETA(DisplayName = "Item 132"),
	ETresItemDefGumiParts_ITEM133 = 133 UMETA(DisplayName = "Item 133"),
	ETresItemDefGumiParts_ITEM134 = 134 UMETA(DisplayName = "Item 134"),
	ETresItemDefGumiParts_ITEM135 = 135 UMETA(DisplayName = "Item 135"),
	ETresItemDefGumiParts_ITEM136 = 136 UMETA(DisplayName = "Item 136"),
	ETresItemDefGumiParts_ITEM137 = 137 UMETA(DisplayName = "Item 137"),
	ETresItemDefGumiParts_ITEM138 = 138 UMETA(DisplayName = "Item 138"),
	ETresItemDefGumiParts_ITEM139 = 139 UMETA(DisplayName = "Item 139"),
	ETresItemDefGumiParts_ITEM140 = 140 UMETA(DisplayName = "Item 140"),
	ETresItemDefGumiParts_ITEM141 = 141 UMETA(DisplayName = "Item 141"),
	ETresItemDefGumiParts_ITEM142 = 142 UMETA(DisplayName = "Item 142"),
	ETresItemDefGumiParts_ITEM143 = 143 UMETA(DisplayName = "Item 143"),
	ETresItemDefGumiParts_ITEM144 = 144 UMETA(DisplayName = "Item 144"),
	ETresItemDefGumiParts_ITEM145 = 145 UMETA(DisplayName = "Item 145"),
	ETresItemDefGumiParts_ITEM146 = 146 UMETA(DisplayName = "Item 146"),
	ETresItemDefGumiParts_ITEM147 = 147 UMETA(DisplayName = "Item 147"),
	ETresItemDefGumiParts_ITEM148 = 148 UMETA(DisplayName = "Item 148"),
	ETresItemDefGumiParts_ITEM149 = 149 UMETA(DisplayName = "Item 149"),
	ETresItemDefGumiParts_ITEM150 = 150 UMETA(DisplayName = "Item 150"),
	ETresItemDefGumiParts_ITEM151 = 151 UMETA(DisplayName = "Item 151"),
	ETresItemDefGumiParts_ITEM152 = 152 UMETA(DisplayName = "Item 152"),
	ETresItemDefGumiParts_ITEM153 = 153 UMETA(DisplayName = "Item 153"),
	ETresItemDefGumiParts_ITEM154 = 154 UMETA(DisplayName = "Item 154"),
	ETresItemDefGumiParts_ITEM155 = 155 UMETA(DisplayName = "Item 155"),
	ETresItemDefGumiParts_ITEM156 = 156 UMETA(DisplayName = "Item 156"),
	ETresItemDefGumiParts_ITEM157 = 157 UMETA(DisplayName = "Item 157"),
	ETresItemDefGumiParts_ITEM158 = 158 UMETA(DisplayName = "Item 158"),
	ETresItemDefGumiParts_ITEM159 = 159 UMETA(DisplayName = "Item 159"),
	ETresItemDefGumiParts_ITEM160 = 160 UMETA(DisplayName = "Item 160"),
	ETresItemDefGumiParts_ITEM161 = 161 UMETA(DisplayName = "Item 161"),
	ETresItemDefGumiParts_ITEM162 = 162 UMETA(DisplayName = "Item 162"),
	ETresItemDefGumiParts_ITEM163 = 163 UMETA(DisplayName = "Item 163"),
	ETresItemDefGumiParts_ITEM164 = 164 UMETA(DisplayName = "Item 164"),
	ETresItemDefGumiParts_ITEM165 = 165 UMETA(DisplayName = "Item 165"),
	ETresItemDefGumiParts_ITEM166 = 166 UMETA(DisplayName = "Item 166"),
	ETresItemDefGumiParts_ITEM167 = 167 UMETA(DisplayName = "Item 167"),
	ETresItemDefGumiParts_ITEM168 = 168 UMETA(DisplayName = "Item 168"),
	ETresItemDefGumiParts_ITEM169 = 169 UMETA(DisplayName = "Item 169"),
	ETresItemDefGumiParts_ITEM170 = 170 UMETA(DisplayName = "Item 170"),
	ETresItemDefGumiParts_ITEM171 = 171 UMETA(DisplayName = "Item 171"),
	ETresItemDefGumiParts_ITEM172 = 172 UMETA(DisplayName = "Item 172"),
	ETresItemDefGumiParts_ITEM173 = 173 UMETA(DisplayName = "Item 173"),
	ETresItemDefGumiParts_ITEM174 = 174 UMETA(DisplayName = "Item 174"),
	ETresItemDefGumiParts_ITEM175 = 175 UMETA(DisplayName = "Item 175"),
	ETresItemDefGumiParts_ITEM176 = 176 UMETA(DisplayName = "Item 176"),
	ETresItemDefGumiParts_ITEM177 = 177 UMETA(DisplayName = "Item 177"),
	ETresItemDefGumiParts_ITEM178 = 178 UMETA(DisplayName = "Item 178"),
	ETresItemDefGumiParts_ITEM179 = 179 UMETA(DisplayName = "Item 179"),
	ETresItemDefGumiParts_ITEM180 = 180 UMETA(DisplayName = "Item 180"),
	ETresItemDefGumiParts_ITEM181 = 181 UMETA(DisplayName = "Item 181"),
	ETresItemDefGumiParts_ITEM182 = 182 UMETA(DisplayName = "Item 182"),
	ETresItemDefGumiParts_1_MAX = 183 UMETA(DisplayName = "Max"),
	ETresItemDefGumiParts_MAX = 184 UMETA(DisplayName = "Tres Item Def Gumi Parts MAX")
};

UENUM(BlueprintType)
enum ETresItemDefGumiMaterial
{
	ETresItemDefGumiMaterial_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemDefGumiMaterial_ITEM001 = 1 UMETA(DisplayName = "Item 001"),
	ETresItemDefGumiMaterial_ITEM002 = 2 UMETA(DisplayName = "Item 002"),
	ETresItemDefGumiMaterial_ITEM003 = 3 UMETA(DisplayName = "Item 003"),
	ETresItemDefGumiMaterial_ITEM004 = 4 UMETA(DisplayName = "Item 004"),
	ETresItemDefGumiMaterial_ITEM005 = 5 UMETA(DisplayName = "Item 005"),
	ETresItemDefGumiMaterial_ITEM006 = 6 UMETA(DisplayName = "Item 006"),
	ETresItemDefGumiMaterial_ITEM007 = 7 UMETA(DisplayName = "Item 007"),
	ETresItemDefGumiMaterial_ITEM008 = 8 UMETA(DisplayName = "Item 008"),
	ETresItemDefGumiMaterial_ITEM009 = 9 UMETA(DisplayName = "Item 009"),
	ETresItemDefGumiMaterial_ITEM010 = 10 UMETA(DisplayName = "Item 010"),
	ETresItemDefGumiMaterial_ITEM011 = 11 UMETA(DisplayName = "Item 011"),
	ETresItemDefGumiMaterial_ITEM012 = 12 UMETA(DisplayName = "Item 012"),
	ETresItemDefGumiMaterial_ITEM013 = 13 UMETA(DisplayName = "Item 013"),
	ETresItemDefGumiMaterial_ITEM014 = 14 UMETA(DisplayName = "Item 014"),
	ETresItemDefGumiMaterial_ITEM015 = 15 UMETA(DisplayName = "Item 015"),
	ETresItemDefGumiMaterial_ITEM016 = 16 UMETA(DisplayName = "Item 016"),
	ETresItemDefGumiMaterial_ITEM017 = 17 UMETA(DisplayName = "Item 017"),
	ETresItemDefGumiMaterial_ITEM018 = 18 UMETA(DisplayName = "Item 018"),
	ETresItemDefGumiMaterial_ITEM019 = 19 UMETA(DisplayName = "Item 019"),
	ETresItemDefGumiMaterial_ITEM020 = 20 UMETA(DisplayName = "Item 020"),
	ETresItemDefGumiMaterial_ITEM021 = 21 UMETA(DisplayName = "Item 021"),
	ETresItemDefGumiMaterial_ITEM022 = 22 UMETA(DisplayName = "Item 022"),
	ETresItemDefGumiMaterial_ITEM023 = 23 UMETA(DisplayName = "Item 023"),
	ETresItemDefGumiMaterial_ITEM024 = 24 UMETA(DisplayName = "Item 024"),
	ETresItemDefGumiMaterial_ITEM025 = 25 UMETA(DisplayName = "Item 025"),
	ETresItemDefGumiMaterial_ITEM026 = 26 UMETA(DisplayName = "Item 026"),
	ETresItemDefGumiMaterial_ITEM027 = 27 UMETA(DisplayName = "Item 027"),
	ETresItemDefGumiMaterial_ITEM028 = 28 UMETA(DisplayName = "Item 028"),
	ETresItemDefGumiMaterial_ITEM029 = 29 UMETA(DisplayName = "Item 029"),
	ETresItemDefGumiMaterial_ITEM030 = 30 UMETA(DisplayName = "Item 030"),
	ETresItemDefGumiMaterial_ITEM031 = 31 UMETA(DisplayName = "Item 031"),
	ETresItemDefGumiMaterial_ITEM032 = 32 UMETA(DisplayName = "Item 032"),
	ETresItemDefGumiMaterial_ITEM033 = 33 UMETA(DisplayName = "Item 033"),
	ETresItemDefGumiMaterial_ITEM034 = 34 UMETA(DisplayName = "Item 034"),
	ETresItemDefGumiMaterial_ITEM035 = 35 UMETA(DisplayName = "Item 035"),
	ETresItemDefGumiMaterial_ITEM036 = 36 UMETA(DisplayName = "Item 036"),
	ETresItemDefGumiMaterial_ITEM037 = 37 UMETA(DisplayName = "Item 037"),
	ETresItemDefGumiMaterial_ITEM038 = 38 UMETA(DisplayName = "Item 038"),
	ETresItemDefGumiMaterial_ITEM039 = 39 UMETA(DisplayName = "Item 039"),
	ETresItemDefGumiMaterial_ITEM040 = 40 UMETA(DisplayName = "Item 040"),
	ETresItemDefGumiMaterial_ITEM041 = 41 UMETA(DisplayName = "Item 041"),
	ETresItemDefGumiMaterial_ITEM042 = 42 UMETA(DisplayName = "Item 042"),
	ETresItemDefGumiMaterial_ITEM043 = 43 UMETA(DisplayName = "Item 043"),
	ETresItemDefGumiMaterial_ITEM044 = 44 UMETA(DisplayName = "Item 044"),
	ETresItemDefGumiMaterial_ITEM045 = 45 UMETA(DisplayName = "Item 045"),
	ETresItemDefGumiMaterial_ITEM046 = 46 UMETA(DisplayName = "Item 046"),
	ETresItemDefGumiMaterial_ITEM047 = 47 UMETA(DisplayName = "Item 047"),
	ETresItemDefGumiMaterial_ITEM048 = 48 UMETA(DisplayName = "Item 048"),
	ETresItemDefGumiMaterial_ITEM049 = 49 UMETA(DisplayName = "Item 049"),
	ETresItemDefGumiMaterial_ITEM050 = 50 UMETA(DisplayName = "Item 050"),
	ETresItemDefGumiMaterial_ITEM051 = 51 UMETA(DisplayName = "Item 051"),
	ETresItemDefGumiMaterial_ITEM052 = 52 UMETA(DisplayName = "Item 052"),
	ETresItemDefGumiMaterial_ITEM053 = 53 UMETA(DisplayName = "Item 053"),
	ETresItemDefGumiMaterial_ITEM054 = 54 UMETA(DisplayName = "Item 054"),
	ETresItemDefGumiMaterial_ITEM055 = 55 UMETA(DisplayName = "Item 055"),
	ETresItemDefGumiMaterial_ITEM056 = 56 UMETA(DisplayName = "Item 056"),
	ETresItemDefGumiMaterial_ITEM057 = 57 UMETA(DisplayName = "Item 057"),
	ETresItemDefGumiMaterial_ITEM058 = 58 UMETA(DisplayName = "Item 058"),
	ETresItemDefGumiMaterial_ITEM059 = 59 UMETA(DisplayName = "Item 059"),
	ETresItemDefGumiMaterial_ITEM060 = 60 UMETA(DisplayName = "Item 060"),
	ETresItemDefGumiMaterial_ITEM061 = 61 UMETA(DisplayName = "Item 061"),
	ETresItemDefGumiMaterial_ITEM062 = 62 UMETA(DisplayName = "Item 062"),
	ETresItemDefGumiMaterial_ITEM063 = 63 UMETA(DisplayName = "Item 063"),
	ETresItemDefGumiMaterial_ITEM064 = 64 UMETA(DisplayName = "Item 064"),
	ETresItemDefGumiMaterial_ITEM065 = 65 UMETA(DisplayName = "Item 065"),
	ETresItemDefGumiMaterial_ITEM066 = 66 UMETA(DisplayName = "Item 066"),
	ETresItemDefGumiMaterial_ITEM067 = 67 UMETA(DisplayName = "Item 067"),
	ETresItemDefGumiMaterial_ITEM068 = 68 UMETA(DisplayName = "Item 068"),
	ETresItemDefGumiMaterial_1_MAX = 69 UMETA(DisplayName = "Max"),
	ETresItemDefGumiMaterial_MAX = 70 UMETA(DisplayName = "Tres Item Def Gumi Material MAX")
};

UENUM(BlueprintType)
enum ETresItemDefGumiEtc
{
	ETresItemDefGumiEtc_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemDefGumiEtc_ITEM001 = 1 UMETA(DisplayName = "Item 001"),
	ETresItemDefGumiEtc_ITEM002 = 2 UMETA(DisplayName = "Item 002"),
	ETresItemDefGumiEtc_ITEM003 = 3 UMETA(DisplayName = "Item 003"),
	ETresItemDefGumiEtc_ITEM004 = 4 UMETA(DisplayName = "Item 004"),
	ETresItemDefGumiEtc_ITEM005 = 5 UMETA(DisplayName = "Item 005"),
	ETresItemDefGumiEtc_ITEM006 = 6 UMETA(DisplayName = "Item 006"),
	ETresItemDefGumiEtc_ITEM007 = 7 UMETA(DisplayName = "Item 007"),
	ETresItemDefGumiEtc_ITEM008 = 8 UMETA(DisplayName = "Item 008"),
	ETresItemDefGumiEtc_ITEM009 = 9 UMETA(DisplayName = "Item 009"),
	ETresItemDefGumiEtc_ITEM010 = 10 UMETA(DisplayName = "Item 010"),
	ETresItemDefGumiEtc_ITEM011 = 11 UMETA(DisplayName = "Item 011"),
	ETresItemDefGumiEtc_ITEM012 = 12 UMETA(DisplayName = "Item 012"),
	ETresItemDefGumiEtc_ITEM013 = 13 UMETA(DisplayName = "Item 013"),
	ETresItemDefGumiEtc_ITEM014 = 14 UMETA(DisplayName = "Item 014"),
	ETresItemDefGumiEtc_ITEM015 = 15 UMETA(DisplayName = "Item 015"),
	ETresItemDefGumiEtc_ITEM016 = 16 UMETA(DisplayName = "Item 016"),
	ETresItemDefGumiEtc_ITEM017 = 17 UMETA(DisplayName = "Item 017"),
	ETresItemDefGumiEtc_ITEM018 = 18 UMETA(DisplayName = "Item 018"),
	ETresItemDefGumiEtc_ITEM019 = 19 UMETA(DisplayName = "Item 019"),
	ETresItemDefGumiEtc_ITEM020 = 20 UMETA(DisplayName = "Item 020"),
	ETresItemDefGumiEtc_ITEM021 = 21 UMETA(DisplayName = "Item 021"),
	ETresItemDefGumiEtc_ITEM022 = 22 UMETA(DisplayName = "Item 022"),
	ETresItemDefGumiEtc_ITEM023 = 23 UMETA(DisplayName = "Item 023"),
	ETresItemDefGumiEtc_ITEM024 = 24 UMETA(DisplayName = "Item 024"),
	ETresItemDefGumiEtc_ITEM025 = 25 UMETA(DisplayName = "Item 025"),
	ETresItemDefGumiEtc_ITEM026 = 26 UMETA(DisplayName = "Item 026"),
	ETresItemDefGumiEtc_ITEM027 = 27 UMETA(DisplayName = "Item 027"),
	ETresItemDefGumiEtc_ITEM028 = 28 UMETA(DisplayName = "Item 028"),
	ETresItemDefGumiEtc_ITEM029 = 29 UMETA(DisplayName = "Item 029"),
	ETresItemDefGumiEtc_ITEM030 = 30 UMETA(DisplayName = "Item 030"),
	ETresItemDefGumiEtc_ITEM031 = 31 UMETA(DisplayName = "Item 031"),
	ETresItemDefGumiEtc_ITEM032 = 32 UMETA(DisplayName = "Item 032"),
	ETresItemDefGumiEtc_ITEM033 = 33 UMETA(DisplayName = "Item 033"),
	ETresItemDefGumiEtc_ITEM034 = 34 UMETA(DisplayName = "Item 034"),
	ETresItemDefGumiEtc_ITEM035 = 35 UMETA(DisplayName = "Item 035"),
	ETresItemDefGumiEtc_ITEM036 = 36 UMETA(DisplayName = "Item 036"),
	ETresItemDefGumiEtc_ITEM037 = 37 UMETA(DisplayName = "Item 037"),
	ETresItemDefGumiEtc_ITEM038 = 38 UMETA(DisplayName = "Item 038"),
	ETresItemDefGumiEtc_ITEM039 = 39 UMETA(DisplayName = "Item 039"),
	ETresItemDefGumiEtc_ITEM040 = 40 UMETA(DisplayName = "Item 040"),
	ETresItemDefGumiEtc_ITEM041 = 41 UMETA(DisplayName = "Item 041"),
	ETresItemDefGumiEtc_ITEM042 = 42 UMETA(DisplayName = "Item 042"),
	ETresItemDefGumiEtc_ITEM043 = 43 UMETA(DisplayName = "Item 043"),
	ETresItemDefGumiEtc_ITEM044 = 44 UMETA(DisplayName = "Item 044"),
	ETresItemDefGumiEtc_ITEM045 = 45 UMETA(DisplayName = "Item 045"),
	ETresItemDefGumiEtc_ITEM046 = 46 UMETA(DisplayName = "Item 046"),
	ETresItemDefGumiEtc_ITEM047 = 47 UMETA(DisplayName = "Item 047"),
	ETresItemDefGumiEtc_ITEM048 = 48 UMETA(DisplayName = "Item 048"),
	ETresItemDefGumiEtc_ITEM049 = 49 UMETA(DisplayName = "Item 049"),
	ETresItemDefGumiEtc_ITEM050 = 50 UMETA(DisplayName = "Item 050"),
	ETresItemDefGumiEtc_ITEM051 = 51 UMETA(DisplayName = "Item 051"),
	ETresItemDefGumiEtc_ITEM052 = 52 UMETA(DisplayName = "Item 052"),
	ETresItemDefGumiEtc_ITEM053 = 53 UMETA(DisplayName = "Item 053"),
	ETresItemDefGumiEtc_ITEM054 = 54 UMETA(DisplayName = "Item 054"),
	ETresItemDefGumiEtc_ITEM055 = 55 UMETA(DisplayName = "Item 055"),
	ETresItemDefGumiEtc_ITEM056 = 56 UMETA(DisplayName = "Item 056"),
	ETresItemDefGumiEtc_ITEM057 = 57 UMETA(DisplayName = "Item 057"),
	ETresItemDefGumiEtc_ITEM058 = 58 UMETA(DisplayName = "Item 058"),
	ETresItemDefGumiEtc_ITEM059 = 59 UMETA(DisplayName = "Item 059"),
	ETresItemDefGumiEtc_ITEM060 = 60 UMETA(DisplayName = "Item 060"),
	ETresItemDefGumiEtc_ITEM061 = 61 UMETA(DisplayName = "Item 061"),
	ETresItemDefGumiEtc_ITEM062 = 62 UMETA(DisplayName = "Item 062"),
	ETresItemDefGumiEtc_ITEM063 = 63 UMETA(DisplayName = "Item 063"),
	ETresItemDefGumiEtc_ITEM064 = 64 UMETA(DisplayName = "Item 064"),
	ETresItemDefGumiEtc_ITEM065 = 65 UMETA(DisplayName = "Item 065"),
	ETresItemDefGumiEtc_ITEM066 = 66 UMETA(DisplayName = "Item 066"),
	ETresItemDefGumiEtc_ITEM067 = 67 UMETA(DisplayName = "Item 067"),
	ETresItemDefGumiEtc_ITEM068 = 68 UMETA(DisplayName = "Item 068"),
	ETresItemDefGumiEtc_ITEM069 = 69 UMETA(DisplayName = "Item 069"),
	ETresItemDefGumiEtc_ITEM070 = 70 UMETA(DisplayName = "Item 070"),
	ETresItemDefGumiEtc_ITEM071 = 71 UMETA(DisplayName = "Item 071"),
	ETresItemDefGumiEtc_ITEM072 = 72 UMETA(DisplayName = "Item 072"),
	ETresItemDefGumiEtc_ITEM073 = 73 UMETA(DisplayName = "Item 073"),
	ETresItemDefGumiEtc_ITEM074 = 74 UMETA(DisplayName = "Item 074"),
	ETresItemDefGumiEtc_ITEM075 = 75 UMETA(DisplayName = "Item 075"),
	ETresItemDefGumiEtc_ITEM076 = 76 UMETA(DisplayName = "Item 076"),
	ETresItemDefGumiEtc_1_MAX = 77 UMETA(DisplayName = "MAX"),
	ETresItemDefGumiEtc_MAX = 78 UMETA(DisplayName = "Tres Item Def Gumi Etc MAX")
};

UENUM(BlueprintType)
enum ETresItemDefFoodstuff
{
	ETresItemDefFoodstuff_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemDefFoodstuff_ITEM01 = 1 UMETA(DisplayName = "Item 01"),
	ETresItemDefFoodstuff_ITEM02 = 2 UMETA(DisplayName = "Item 02"),
	ETresItemDefFoodstuff_ITEM03 = 3 UMETA(DisplayName = "Item 03"),
	ETresItemDefFoodstuff_ITEM04 = 4 UMETA(DisplayName = "Item 04"),
	ETresItemDefFoodstuff_ITEM05 = 5 UMETA(DisplayName = "Item 05"),
	ETresItemDefFoodstuff_ITEM06 = 6 UMETA(DisplayName = "Item 06"),
	ETresItemDefFoodstuff_ITEM07 = 7 UMETA(DisplayName = "Item 07"),
	ETresItemDefFoodstuff_ITEM08 = 8 UMETA(DisplayName = "Item 08"),
	ETresItemDefFoodstuff_ITEM09 = 9 UMETA(DisplayName = "Item 09"),
	ETresItemDefFoodstuff_ITEM10 = 10 UMETA(DisplayName = "Item 10"),
	ETresItemDefFoodstuff_ITEM11 = 11 UMETA(DisplayName = "Item 11"),
	ETresItemDefFoodstuff_ITEM12 = 12 UMETA(DisplayName = "Item 12"),
	ETresItemDefFoodstuff_ITEM13 = 13 UMETA(DisplayName = "Item 13"),
	ETresItemDefFoodstuff_ITEM14 = 14 UMETA(DisplayName = "Item 14"),
	ETresItemDefFoodstuff_ITEM15 = 15 UMETA(DisplayName = "Item 15"),
	ETresItemDefFoodstuff_ITEM16 = 16 UMETA(DisplayName = "Item 16"),
	ETresItemDefFoodstuff_ITEM17 = 17 UMETA(DisplayName = "Item 17"),
	ETresItemDefFoodstuff_ITEM18 = 18 UMETA(DisplayName = "Item 18"),
	ETresItemDefFoodstuff_ITEM19 = 19 UMETA(DisplayName = "Item 19"),
	ETresItemDefFoodstuff_ITEM20 = 20 UMETA(DisplayName = "Item 20"),
	ETresItemDefFoodstuff_ITEM21 = 21 UMETA(DisplayName = "Item 21"),
	ETresItemDefFoodstuff_ITEM22 = 22 UMETA(DisplayName = "Item 22"),
	ETresItemDefFoodstuff_ITEM23 = 23 UMETA(DisplayName = "Item 23"),
	ETresItemDefFoodstuff_ITEM24 = 24 UMETA(DisplayName = "Item 24"),
	ETresItemDefFoodstuff_ITEM25 = 25 UMETA(DisplayName = "Item 25"),
	ETresItemDefFoodstuff_ITEM26 = 26 UMETA(DisplayName = "Item 26"),
	ETresItemDefFoodstuff_ITEM27 = 27 UMETA(DisplayName = "Item 27"),
	ETresItemDefFoodstuff_ITEM28 = 28 UMETA(DisplayName = "Item 28"),
	ETresItemDefFoodstuff_ITEM29 = 29 UMETA(DisplayName = "Item 29"),
	ETresItemDefFoodstuff_ITEM30 = 30 UMETA(DisplayName = "Item 30"),
	ETresItemDefFoodstuff_ITEM31 = 31 UMETA(DisplayName = "Item 31"),
	ETresItemDefFoodstuff_ITEM32 = 32 UMETA(DisplayName = "Item 32"),
	ETresItemDefFoodstuff_ITEM33 = 33 UMETA(DisplayName = "Item 33"),
	ETresItemDefFoodstuff_ITEM34 = 34 UMETA(DisplayName = "Item 34"),
	ETresItemDefFoodstuff_ITEM35 = 35 UMETA(DisplayName = "Item 35"),
	ETresItemDefFoodstuff_ITEM36 = 36 UMETA(DisplayName = "Item 36"),
	ETresItemDefFoodstuff_ITEM37 = 37 UMETA(DisplayName = "Item 37"),
	ETresItemDefFoodstuff_ITEM38 = 38 UMETA(DisplayName = "Item 38"),
	ETresItemDefFoodstuff_ITEM39 = 39 UMETA(DisplayName = "Item 39"),
	ETresItemDefFoodstuff_ITEM40 = 40 UMETA(DisplayName = "Item 40"),
	ETresItemDefFoodstuff_ITEM41 = 41 UMETA(DisplayName = "Item 41"),
	ETresItemDefFoodstuff_ITEM42 = 42 UMETA(DisplayName = "Item 42"),
	ETresItemDefFoodstuff_ITEM43 = 43 UMETA(DisplayName = "Item 43"),
	ETresItemDefFoodstuff_ITEM44 = 44 UMETA(DisplayName = "Item 44"),
	ETresItemDefFoodstuff_ITEM45 = 45 UMETA(DisplayName = "Item 45"),
	ETresItemDefFoodstuff_ITEM46 = 46 UMETA(DisplayName = "Item 46"),
	ETresItemDefFoodstuff_ITEM47 = 47 UMETA(DisplayName = "Item 47"),
	ETresItemDefFoodstuff_ITEM48 = 48 UMETA(DisplayName = "Item 48"),
	ETresItemDefFoodstuff_ITEM49 = 49 UMETA(DisplayName = "Item 49"),
	ETresItemDefFoodstuff_ITEM50 = 50 UMETA(DisplayName = "Item 50"),
	ETresItemDefFoodstuff_ITEM51 = 51 UMETA(DisplayName = "Item 51"),
	ETresItemDefFoodstuff_ITEM52 = 52 UMETA(DisplayName = "Item 52"),
	ETresItemDefFoodstuff_ITEM53 = 53 UMETA(DisplayName = "Item 53"),
	ETresItemDefFoodstuff_ITEM54 = 54 UMETA(DisplayName = "Item 54"),
	ETresItemDefFoodstuff_ITEM55 = 55 UMETA(DisplayName = "Item 55"),
	ETresItemDefFoodstuff_ITEM56 = 56 UMETA(DisplayName = "Item 56"),
	ETresItemDefFoodstuff_ITEM57 = 57 UMETA(DisplayName = "Item 57"),
	ETresItemDefFoodstuff_ITEM58 = 58 UMETA(DisplayName = "Item 58"),
	ETresItemDefFoodstuff_ITEM59 = 59 UMETA(DisplayName = "Item 59"),
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
	ETresItemDefFood_FISHDISH01 = 11 UMETA(DisplayName = "Fish Dish 01"),
	ETresItemDefFood_FISHDISH02 = 12 UMETA(DisplayName = "Fish Dish 02"),
	ETresItemDefFood_FISHDISH03 = 13 UMETA(DisplayName = "Fish Dish 03"),
	ETresItemDefFood_FISHDISH04 = 14 UMETA(DisplayName = "Fish Dish 04"),
	ETresItemDefFood_FISHDISH05 = 15 UMETA(DisplayName = "Fish Dish 05"),
	ETresItemDefFood_FISHDISH06 = 16 UMETA(DisplayName = "Fish Dish 06"),
	ETresItemDefFood_MEETDISH01 = 17 UMETA(DisplayName = "Meet Dish 01"),
	ETresItemDefFood_MEETDISH02 = 18 UMETA(DisplayName = "Meet Dish 02"),
	ETresItemDefFood_MEETDISH03 = 19 UMETA(DisplayName = "Meet Dish 03"),
	ETresItemDefFood_MEETDISH04 = 20 UMETA(DisplayName = "Meet Dish 04"),
	ETresItemDefFood_MEETDISH05 = 21 UMETA(DisplayName = "Meet Dish 05"),
	ETresItemDefFood_DESSERT01 = 22 UMETA(DisplayName = "Dessert 01"),
	ETresItemDefFood_DESSERT02 = 23 UMETA(DisplayName = "Dessert 02"),
	ETresItemDefFood_DESSERT03 = 24 UMETA(DisplayName = "Dessert 03"),
	ETresItemDefFood_DESSERT04 = 25 UMETA(DisplayName = "Dessert 04"),
	ETresItemDefFood_DESSERT05 = 26 UMETA(DisplayName = "Dessert 05"),
	ETresItemDefFood_DESSERT06 = 27 UMETA(DisplayName = "Dessert 06"),
	ETresItemDefFood_DESSERT07 = 28 UMETA(DisplayName = "Dessert 07"),
	ETresItemDefFood_SOUP01P = 29 UMETA(DisplayName = "Soup 01 P"),
	ETresItemDefFood_SOUP02P = 30 UMETA(DisplayName = "Soup 02 P"),
	ETresItemDefFood_SOUP03P = 31 UMETA(DisplayName = "Soup 03 P"),
	ETresItemDefFood_SOUP04P = 32 UMETA(DisplayName = "Soup 04 P"),
	ETresItemDefFood_SOUP05P = 33 UMETA(DisplayName = "Soup 05 P"),
	ETresItemDefFood_APPETIZER01P = 34 UMETA(DisplayName = "Appetizer 01 P"),
	ETresItemDefFood_APPETIZER02P = 35 UMETA(DisplayName = "Appetizer 02 P"),
	ETresItemDefFood_APPETIZER03P = 36 UMETA(DisplayName = "Appetizer 03 P"),
	ETresItemDefFood_APPETIZER04P = 37 UMETA(DisplayName = "Appetizer 04 P"),
	ETresItemDefFood_APPETIZER05P = 38 UMETA(DisplayName = "Appetizer 05 P"),
	ETresItemDefFood_FISHDISH01P = 39 UMETA(DisplayName = "Fish Dish 01 P"),
	ETresItemDefFood_FISHDISH02P = 40 UMETA(DisplayName = "Fish Dish 02 P"),
	ETresItemDefFood_FISHDISH03P = 41 UMETA(DisplayName = "Fish Dish 03 P"),
	ETresItemDefFood_FISHDISH04P = 42 UMETA(DisplayName = "Fish Dish 04 P"),
	ETresItemDefFood_FISHDISH05P = 43 UMETA(DisplayName = "Fish Dish 05 P"),
	ETresItemDefFood_FISHDISH06P = 44 UMETA(DisplayName = "Fish Dish 06 P"),
	ETresItemDefFood_MEETDISH01P = 45 UMETA(DisplayName = "Meet Dish 01 P"),
	ETresItemDefFood_MEETDISH02P = 46 UMETA(DisplayName = "Meet Dish 02 P"),
	ETresItemDefFood_MEETDISH03P = 47 UMETA(DisplayName = "Meet Dish 03 P"),
	ETresItemDefFood_MEETDISH04P = 48 UMETA(DisplayName = "Meet Dish 04 P"),
	ETresItemDefFood_MEETDISH05P = 49 UMETA(DisplayName = "Meet Dish 05 P"),
	ETresItemDefFood_DESSERT01P = 50 UMETA(DisplayName = "Dessert 01 P"),
	ETresItemDefFood_DESSERT02P = 51 UMETA(DisplayName = "Dessert 02 P"),
	ETresItemDefFood_DESSERT03P = 52 UMETA(DisplayName = "Dessert 03 P"),
	ETresItemDefFood_DESSERT04P = 53 UMETA(DisplayName = "Dessert 04 P"),
	ETresItemDefFood_DESSERT05P = 54 UMETA(DisplayName = "Dessert 05 P"),
	ETresItemDefFood_DESSERT06P = 55 UMETA(DisplayName = "Dessert 06 P"),
	ETresItemDefFood_DESSERT07P = 56 UMETA(DisplayName = "Dessert 07 P"),
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
	ETresItemDefAccessory_ITEM01 = 1 UMETA(DisplayName = "Item 01"),
	ETresItemDefAccessory_ITEM02 = 2 UMETA(DisplayName = "Item 02"),
	ETresItemDefAccessory_ITEM03 = 3 UMETA(DisplayName = "Item 03"),
	ETresItemDefAccessory_ITEM04 = 4 UMETA(DisplayName = "Item 04"),
	ETresItemDefAccessory_ITEM05 = 5 UMETA(DisplayName = "Item 05"),
	ETresItemDefAccessory_ITEM06 = 6 UMETA(DisplayName = "Item 06"),
	ETresItemDefAccessory_ITEM07 = 7 UMETA(DisplayName = "Item 07"),
	ETresItemDefAccessory_ITEM08 = 8 UMETA(DisplayName = "Item 08"),
	ETresItemDefAccessory_ITEM09 = 9 UMETA(DisplayName = "Item 09"),
	ETresItemDefAccessory_ITEM10 = 10 UMETA(DisplayName = "Item 10"),
	ETresItemDefAccessory_ITEM11 = 11 UMETA(DisplayName = "Item 11"),
	ETresItemDefAccessory_ITEM12 = 12 UMETA(DisplayName = "Item 12"),
	ETresItemDefAccessory_ITEM13 = 13 UMETA(DisplayName = "Item 13"),
	ETresItemDefAccessory_ITEM14 = 14 UMETA(DisplayName = "Item 14"),
	ETresItemDefAccessory_ITEM15 = 15 UMETA(DisplayName = "Item 15"),
	ETresItemDefAccessory_ITEM16 = 16 UMETA(DisplayName = "Item 16"),
	ETresItemDefAccessory_ITEM17 = 17 UMETA(DisplayName = "Item 17"),
	ETresItemDefAccessory_ITEM18 = 18 UMETA(DisplayName = "Item 18"),
	ETresItemDefAccessory_ITEM19 = 19 UMETA(DisplayName = "Item 19"),
	ETresItemDefAccessory_ITEM20 = 20 UMETA(DisplayName = "Item 20"),
	ETresItemDefAccessory_ITEM21 = 21 UMETA(DisplayName = "Item 21"),
	ETresItemDefAccessory_ITEM22 = 22 UMETA(DisplayName = "Item 22"),
	ETresItemDefAccessory_ITEM23 = 23 UMETA(DisplayName = "Item 23"),
	ETresItemDefAccessory_ITEM24 = 24 UMETA(DisplayName = "Item 24"),
	ETresItemDefAccessory_ITEM25 = 25 UMETA(DisplayName = "Item 25"),
	ETresItemDefAccessory_ITEM26 = 26 UMETA(DisplayName = "Item 26"),
	ETresItemDefAccessory_ITEM27 = 27 UMETA(DisplayName = "Item 27"),
	ETresItemDefAccessory_ITEM28 = 28 UMETA(DisplayName = "Item 28"),
	ETresItemDefAccessory_ITEM29 = 29 UMETA(DisplayName = "Item 29"),
	ETresItemDefAccessory_ITEM30 = 30 UMETA(DisplayName = "Item 30"),
	ETresItemDefAccessory_ITEM31 = 31 UMETA(DisplayName = "Item 31"),
	ETresItemDefAccessory_ITEM32 = 32 UMETA(DisplayName = "Item 32"),
	ETresItemDefAccessory_ITEM33 = 33 UMETA(DisplayName = "Item 33"),
	ETresItemDefAccessory_ITEM34 = 34 UMETA(DisplayName = "Item 34"),
	ETresItemDefAccessory_ITEM35 = 35 UMETA(DisplayName = "Item 35"),
	ETresItemDefAccessory_ITEM36 = 36 UMETA(DisplayName = "Item 36"),
	ETresItemDefAccessory_ITEM37 = 37 UMETA(DisplayName = "Item 37"),
	ETresItemDefAccessory_ITEM38 = 38 UMETA(DisplayName = "Item 38"),
	ETresItemDefAccessory_ITEM39 = 39 UMETA(DisplayName = "Item 39"),
	ETresItemDefAccessory_ITEM40 = 40 UMETA(DisplayName = "Item 40"),
	ETresItemDefAccessory_ITEM41 = 41 UMETA(DisplayName = "Item 41"),
	ETresItemDefAccessory_ITEM42 = 42 UMETA(DisplayName = "Item 42"),
	ETresItemDefAccessory_ITEM43 = 43 UMETA(DisplayName = "Item 43"),
	ETresItemDefAccessory_ITEM44 = 44 UMETA(DisplayName = "Item 44"),
	ETresItemDefAccessory_ITEM45 = 45 UMETA(DisplayName = "Item 45"),
	ETresItemDefAccessory_ITEM46 = 46 UMETA(DisplayName = "Item 46"),
	ETresItemDefAccessory_ITEM47 = 47 UMETA(DisplayName = "Item 47"),
	ETresItemDefAccessory_ITEM48 = 48 UMETA(DisplayName = "Item 48"),
	ETresItemDefAccessory_ITEM49 = 49 UMETA(DisplayName = "Item 49"),
	ETresItemDefAccessory_ITEM50 = 50 UMETA(DisplayName = "Item 50"),
	ETresItemDefAccessory_ITEM51 = 51 UMETA(DisplayName = "Item 51"),
	ETresItemDefAccessory_ITEM52 = 52 UMETA(DisplayName = "Item 52"),
	ETresItemDefAccessory_ITEM53 = 53 UMETA(DisplayName = "Item 53"),
	ETresItemDefAccessory_ITEM54 = 54 UMETA(DisplayName = "Item 54"),
	ETresItemDefAccessory_ITEM55 = 55 UMETA(DisplayName = "Item 55"),
	ETresItemDefAccessory_ITEM56 = 56 UMETA(DisplayName = "Item 56"),
	ETresItemDefAccessory_ITEM57 = 57 UMETA(DisplayName = "Item 57"),
	ETresItemDefAccessory_ITEM58 = 58 UMETA(DisplayName = "Item 58"),
	ETresItemDefAccessory_ITEM59 = 59 UMETA(DisplayName = "Item 59"),
	ETresItemDefAccessory_ITEM60 = 60 UMETA(DisplayName = "Item 60"),
	ETresItemDefAccessory_ITEM61 = 61 UMETA(DisplayName = "Item 61"),
	ETresItemDefAccessory_ITEM62 = 62 UMETA(DisplayName = "Item 62"),
	ETresItemDefAccessory_ITEM63 = 63 UMETA(DisplayName = "Item 63"),
	ETresItemDefAccessory_ITEM64 = 64 UMETA(DisplayName = "Item 64"),
	ETresItemDefAccessory_ITEM65 = 65 UMETA(DisplayName = "Item 65"),
	ETresItemDefAccessory_ITEM66 = 66 UMETA(DisplayName = "Item 66"),
	ETresItemDefAccessory_ITEM67 = 67 UMETA(DisplayName = "Item 67"),
	ETresItemDefAccessory_ITEM68 = 68 UMETA(DisplayName = "Item 68"),
	ETresItemDefAccessory_ITEM69 = 69 UMETA(DisplayName = "Item 69"),
	ETresItemDefAccessory_ITEM70 = 70 UMETA(DisplayName = "Item 70"),
	ETresItemDefAccessory_ITEM71 = 71 UMETA(DisplayName = "Item 71"),
	ETresItemDefAccessory_ITEM72 = 72 UMETA(DisplayName = "Item 72"),
	ETresItemDefAccessory_ITEM73 = 73 UMETA(DisplayName = "Item 73"),
	ETresItemDefAccessory_ITEM74 = 74 UMETA(DisplayName = "Item 74"),
	ETresItemDefAccessory_ITEM75 = 75 UMETA(DisplayName = "Item 75"),
	ETresItemDefAccessory_ITEM76 = 76 UMETA(DisplayName = "Item 76"),
	ETresItemDefAccessory_ITEM77 = 77 UMETA(DisplayName = "Item 77"),
	ETresItemDefAccessory_ITEM78 = 78 UMETA(DisplayName = "Item 78"),
	ETresItemDefAccessory_ITEM79 = 79 UMETA(DisplayName = "Item 79"),
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