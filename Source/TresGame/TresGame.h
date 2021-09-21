// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Components/SkinnedMeshComponent.h"
#include"TresLevelEntitySequenceCondition.h"
#include "BoneContainer.h"
#include "Engine/CollisionProfile.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "UObject/AssetPtr.h"
#include "Engine/Texture2D.h"
#include "TresGame.generated.h"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------
UENUM(BlueprintType)
enum ETresProjectileHomingType
{
	ETresProjectileHomingType_NORMAL = 0,
	ETresProjectileHomingType_IGNORE_Z = 1,
	ETresProjectileHomingType_PITCH_YAW = 2,
	ETresProjectileHomingType_1_MAX = 3,
	ETresProjectileHomingType_MAX = 4
};

UENUM(BlueprintType)
enum ETresSavePointDispType
{
	ETresSavePointDispType_NORMAL = 0 UMETA(DisplayName = "Normal"),
	ETresSavePointDispType_DISABLE = 1 UMETA(DisplayName = "Disable"),
	ETresSavePointDispType_DESTROY = 2 UMETA(DisplayName = "Destroy"),
	ETresSavePointDispType_1_MAX = 3 UMETA(Hidden),
	ETresSavePointDispType_MAX = 4 UMETA(Hidden)
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
	TRES_CMD_KIND_MAX = 255 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresPhysDamageForceLevel : uint8
{
	TPDF_LV = 0 UMETA(DisplayName = "LV"),
	TPDF_LV01 = 1 UMETA(DisplayName = "LV 01"),
	TPDF_LV02 = 2 UMETA(DisplayName = "LV 02"),
	TPDF_LV03 = 3 UMETA(DisplayName = "LV 03"),
	_TPDF_LV_MAX = 4 UMETA(Hidden),
	ETresPhysDamageForceLevel_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresBadStatusType : uint8
{
	TRES_BADSTAT_NONE = 0,
	TRES_BADSTAT_DEATH = 1,
	TRES_BADSTAT_CATCH = 2,
	TRES_BADSTAT_DRILL_BIND = 3,
	TRES_BADSTAT_YO_BIND = 4,
	TRES_BADSTAT_RALPH_BIND = 5,
	TRES_BADSTAT_ENERGYBURST = 6,
	TRES_BADSTAT_FREEZE = 7,
	TRES_BADSTAT_STOP = 8,
	TRES_BADSTAT_MAGNET = 9,
	TRES_BADSTAT_DRAIN = 10,
	TRES_BADSTAT_ASPIR = 11,
	TRES_BADSTAT_STUN = 12,
	TRES_BADSTAT_SNEEZE = 13,
	TRES_BADSTAT_HONEY = 14,
	TRES_BADSTAT_CLOUD = 15,
	TRES_BADSTAT_DISCHARGE = 16,
	TRES_BADSTAT_BURN = 17,
	TRES_BADSTAT_HP_BREAK = 18,
	TRES_BADSTAT_TIME_BREAK = 19,
	TRES_BADSTAT_MAX = 20 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresAtkHitKnockbackType : uint8
{
	TRES_AHKBT_NORMAL = 0,
	TRES_AHKBT_VELOCITY = 1,
	TRES_AHKBT_ATK_COLLISION = 2,
	TRES_AHKBT_INSTIGATOR_PAWN = 3,
	TRES_AHKBT_IMPACT_LOCATION = 4,
	SPECIFIC = 5,
	_TRES_AHKBT_MAX = 6 UMETA(Hidden),
	ETresAtkHitKnockbackType_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresDamageAttribute : uint8
{
	TRES_DMG_ATTR_PHYSICAL = 0,
	TRES_DMG_ATTR_FIRE = 1,
	TRES_DMG_ATTR_BLIZZARD = 2,
	TRES_DMG_ATTR_THUNDER = 3,
	TRES_DMG_ATTR_WATER = 4,
	TRES_DMG_ATTR_AERO = 5,
	TRES_DMG_ATTR_DARK = 6,
	TRES_DMG_ATTR_NOTYPE = 7,
	TRES_DMG_ATTR_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresDamageKind
{
	TRES_DMG_KIND_NONE = 0,
	TRES_DMG_KIND_SMALL = 1,
	TRES_DMG_KIND_BLOW = 2,
	TRES_DMG_KIND_SIDESPIN = 3,
	TRES_DMG_KIND_VERTICALROLL = 4,
	TRES_DMG_KIND_BILLIARD = 5,
	TRES_DMG_KIND_FLOAT = 6,
	TRES_DMG_KIND_TOSS = 7,
	TRES_DMG_KIND_LAUNCH = 8,
	TRES_DMG_KIND_BEAT = 9,
	TRES_DMG_KIND_PARABOLA = 10,
	TRES_DMG_KIND_PARABOLA_NO_RECOVERY = 11,
	TRES_DMG_KIND_WITHOUT = 12,
	TRES_DMG_KIND_RECOVER = 13,
	TRES_DMG_KIND_KILL = 14,
	TRES_DMG_KIND_STOP = 15,
	TRES_DMG_KIND_MAGNET = 16,
	TRES_DMG_KIND_CATCH = 17,
	TRES_DMG_KIND_BIND = 18,
	TRES_DMG_KIND_SUCTION = 19,
	TRES_DMG_KIND_EAT = 20,
	TRES_DMG_KIND_SHIELD_BLOW = 21,
	TRES_DMG_KIND_SHIELD_TOSS = 22,
	TRES_DMG_KIND_FREE_FLOW = 23,
	TRES_DMG_KIND_SHOOTING_RIDE = 24,
	TRES_DMG_KIND_MERRYGOROUND = 25,
	TRES_DMG_KIND_ZEROGRAVITY = 26,
	TRES_DMG_KIND_SWALLOW = 27,
	TRES_DMG_KIND_UNIQUE = 28,
	TRES_DMG_KIND_SWIRL_UP = 29,
	TRES_DMG_KIND_POLE_SPIN = 30,
	TRES_DMG_KIND_POLE_SWING = 31,
	TRES_DMG_KIND_RALPH_BIND = 32,
	TRES_DMG_KIND_VIKINGSHIP_FRONT = 33,
	TRES_DMG_KIND_VIKINGSHIP_BACK = 34,
	TRES_DMG_KIND_DRILL_BIND = 35,
	TRES_DMG_KIND_YO_BIND = 36,
	TRES_DMG_KIND_EX071_BIND = 37,
	TRES_DMG_KIND_GOOFY_TORNADO = 38,
	TRES_DMG_KIND_ENERGYBURST_ATTRACT = 39,
	TRES_DMG_KIND_EX301_BIND = 40,
	TRES_DMG_KIND_PUDDING_EAT = 41,
	TRES_DMG_KIND_MAX = 42 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresShootFlowKind
{
	TRES_SF_KIND_NONE = 0,
	TRES_SF_KIND_SHOOTFLOW1 = 1,
	TRES_SF_KIND_SHOOTFLOW2 = 2,
	TRES_SF_KIND_SHOOTFLOW3 = 3,
	TRES_SF_KIND_SHOOTFLOW4 = 4,
	TRES_SF_KIND_SHOOTFLOW5 = 5,
	TRES_SF_KIND_SHOOTFLOW6 = 6,
	TRES_SF_KIND_SHOOTFLOW7 = 7,
	TRES_SF_KIND_SHOOTFLOW8 = 8,
	TRES_SF_KIND_SHOOTFLOW9 = 9,
	TRES_SF_KIND_SHOOTFLOW10 = 10,
	TRES_SF_KIND_SHOOTFLOW11 = 11,
	TRES_SF_KIND_SHOOTFLOW12 = 12,
	TRES_SF_KIND_SHOOTFLOW13 = 13,
	TRES_SF_KIND_SHOOTFLOW14 = 14,
	TRES_SF_KIND_SHOOTFLOW15 = 15,
	TRES_SF_KIND_SHOOTFLOW16 = 16,
	TRES_SF_KIND_SHOOTFLOW17 = 17,
	TRES_SF_KIND_SHOOTFLOW18 = 18,
	TRES_SF_KIND_SHOOTFLOW19 = 19,
	TRES_SF_KIND_SHOOTFLOW20 = 20,
	TRES_SF_KIND_SHOOTFLOW21 = 21,
	TRES_SF_KIND_SHOOTFLOW22 = 22,
	TRES_SF_KIND_SHOOTFLOW23 = 23,
	TRES_SF_KIND_SHOOTFLOW24 = 24,
	TRES_SF_KIND_SHOOTFLOW25 = 25,
	TRES_SF_KIND_SHOOTFLOW26 = 26,
	TRES_SF_KIND_SHOOTFLOW27 = 27,
	TRES_SF_KIND_SHOOTFLOW28 = 28,
	TRES_SF_KIND_SHOOTFLOW29 = 29,
	TRES_SF_KIND_SHOOTFLOW30 = 30,
	TRES_SF_KIND_SHOOTFLOW31 = 31,
	TRES_SF_KIND_SHOOTFLOW32 = 32,
	TRES_SF_KIND_SHOOTFLOW33 = 33,
	TRES_SF_KIND_SHOOTFLOW34 = 34,
	TRES_SF_KIND_SHOOTFLOW35 = 35,
	TRES_SF_KIND_FOCUSASPIR = 36,
	TRES_SF_KIND_ATHLETICFLOW = 37,
	TRES_SF_KIND_RAINBOWSHOWER = 38,
	TRES_SF_KIND_SHINING = 39,
	TRES_SF_KIND_SHOOTFLOW40 = 40,
	TRES_SF_KIND_SHOOTFLOW41 = 41,
	TRES_SF_KIND_SHOOTFLOW42 = 42,
	TRES_SF_KIND_DARKFIRAGA = 43,
	TRES_SF_KIND_SHOOTFLOW44 = 44,
	TRES_SF_KIND_END = 45,
	TRES_SF_KIND_MAX = 46 UMETA(Hidden)
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
	TRES_CHR_UID_MAX = 40 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyUniqueID
{
	TRES_ENEMY_UID_UNKNOWN = 0 UMETA(DisplayName = "Unknown"),
	TRES_ENEMY_UID_EX001 = 1 UMETA(DisplayName = "Shadow, EX 001"),
	TRES_ENEMY_UID_EX003 = 2 UMETA(DisplayName = "Flame Core, EX 003"),
	TRES_ENEMY_UID_EX004 = 3 UMETA(DisplayName = "Water Core, EX 004"),
	TRES_ENEMY_UID_EX005 = 4 UMETA(DisplayName = "Earth Core, EX 005"),
	TRES_ENEMY_UID_EX016 = 5 UMETA(DisplayName = "Neoshadow, EX 016"),
	TRES_ENEMY_UID_EX081 = 6 UMETA(DisplayName = "Fluttering, EX 081"),
	TRES_ENEMY_UID_DW401 = 7 UMETA(DisplayName = "Demon Tide, DW 401"),
	TRES_ENEMY_UID_DW401_s0 = 8 UMETA(DisplayName = "Demon Tide, DW 401 S0"),
	TRES_ENEMY_UID_DW401_s1 = 9 UMETA(DisplayName = "Demon Tide, DW 401 S1"),
	TRES_ENEMY_UID_DW402 = 10 UMETA(DisplayName = "Demon Tower, DW 402"),
	TRES_ENEMY_UID_DW402_s1 = 11 UMETA(DisplayName = "Demon Tower, DW 402 S1"),
	TRES_ENEMY_UID_DW405 = 12 UMETA(DisplayName = "DW 405"),
	TRES_ENEMY_UID_DW407 = 13 UMETA(DisplayName = "Darkside, DW 407"),
	TRES_ENEMY_UID_EX002 = 14 UMETA(DisplayName = "Large Body, EX 002"),
	TRES_ENEMY_UID_EX006 = 15 UMETA(DisplayName = "Satyr, EX 006"),
	TRES_ENEMY_UID_EX007 = 16 UMETA(DisplayName = "Bizarre Archer, EX 007"),
	TRES_ENEMY_UID_EX009 = 17 UMETA(DisplayName = "Soldier, EX 009"),
	TRES_ENEMY_UID_EX010 = 18 UMETA(DisplayName = "Air Soldier, EX 010"),
	TRES_ENEMY_UID_EX011 = 19 UMETA(DisplayName = "Chaos Carriage, EX 011"),
	TRES_ENEMY_UID_EX012 = 20 UMETA(DisplayName = "Chief Puff/Puffball Stack, EX 012"),
	TRES_ENEMY_UID_EX013 = 21 UMETA(DisplayName = "Chief Puff, EX 013"),
	TRES_ENEMY_UID_EX014 = 22 UMETA(DisplayName = "Puffball, EX 014"),
	TRES_ENEMY_UID_EX015 = 23 UMETA(DisplayName = "Toy Trooper, EX 015"),
	TRES_ENEMY_UID_EX017 = 24 UMETA(DisplayName = "Vermilion Samba, EX 017"),
	TRES_ENEMY_UID_EX036 = 25 UMETA(DisplayName = "Marine Rumba, EX 036"),
	TRES_ENEMY_UID_EX037 = 26 UMETA(DisplayName = "Gold Beat, EX 037"),
	TRES_ENEMY_UID_EX038 = 27 UMETA(DisplayName = "Malachite Bolero, EX 038"),
	TRES_ENEMY_UID_EX018 = 28 UMETA(DisplayName = "Gigas, EX 018"),
	TRES_ENEMY_UID_EX032 = 29 UMETA(DisplayName = "Gigas, EX 032"),
	TRES_ENEMY_UID_EX033 = 30 UMETA(DisplayName = "Gigas, EX 033"),
	TRES_ENEMY_UID_EX020 = 31 UMETA(DisplayName = "Marionette, EX 020"),
	TRES_ENEMY_UID_EX021 = 32 UMETA(DisplayName = "Raging Vulture, EX 021"),
	TRES_ENEMY_UID_EX026 = 33 UMETA(DisplayName = "Vaporfly, EX 026"),
	TRES_ENEMY_UID_EX027 = 34 UMETA(DisplayName = "Lightning Angler, EX 027"),
	TRES_ENEMY_UID_EX028 = 35 UMETA(DisplayName = "Sea Sprite, EX 028"),
	TRES_ENEMY_UID_EX035 = 36 UMETA(DisplayName = "Powerwild, EX 035"),
	TRES_ENEMY_UID_EX039 = 37 UMETA(DisplayName = "Parasol Beauty, EX 039"),
	TRES_ENEMY_UID_EX041 = 38 UMETA(DisplayName = "Sandworm, EX 041"),
	TRES_ENEMY_UID_EX042 = 39 UMETA(DisplayName = "Anchor Raider, EX 042"),
	TRES_ENEMY_UID_EX043 = 40 UMETA(DisplayName = "Dark Inferno, EX 043"),
	TRES_ENEMY_UID_EX044 = 41 UMETA(DisplayName = "Pole Cannon, EX 044"),
	TRES_ENEMY_UID_EX045 = 42 UMETA(DisplayName = "Winterhorn, EX 045"),
	TRES_ENEMY_UID_EX046 = 43 UMETA(DisplayName = "Frost Serpent, EX 046"),
	TRES_ENEMY_UID_EX047 = 44 UMETA(DisplayName = "Lich, EX 047"),
	TRES_ENEMY_UID_EX048 = 45 UMETA(DisplayName = "Tireblade ,EX 048"),
	TRES_ENEMY_UID_EX049 = 46 UMETA(DisplayName = "Cherry Flan, EX 049"),
	TRES_ENEMY_UID_EX050 = 47 UMETA(DisplayName = "Strawberry Flan, EX 050"),
	TRES_ENEMY_UID_EX051 = 48 UMETA(DisplayName = "Orange Flan, EX 051"),
	TRES_ENEMY_UID_EX052 = 49 UMETA(DisplayName = "Banana Flan, EX 052"),
	TRES_ENEMY_UID_EX053 = 50 UMETA(DisplayName = "Grape Flan, EX 053"),
	TRES_ENEMY_UID_EX054 = 51 UMETA(DisplayName = "Catastrochorus, EX 054"),
	TRES_ENEMY_UID_EX055 = 52 UMETA(DisplayName = "Honeydew Flan, EX 055"),
	TRES_ENEMY_UID_EX056 = 53 UMETA(DisplayName = "Watermelon Flan, EX 056"),
	TRES_ENEMY_UID_EX059 = 54 UMETA(DisplayName = "Rock Troll, EX 059"),
	TRES_ENEMY_UID_EX061 = 55 UMETA(DisplayName = "Popcat, EX 061"),
	TRES_ENEMY_UID_EX065 = 56 UMETA(DisplayName = "Vitality Popcat, EX 065"),
	TRES_ENEMY_UID_EX066 = 57 UMETA(DisplayName = "Magic Popcat, EX 066"),
	TRES_ENEMY_UID_EX067 = 58 UMETA(DisplayName = "Focus Popcat, EX 067"),
	TRES_ENEMY_UID_EX068 = 59 UMETA(DisplayName = "Munny Popcat, EX 068"),
	TRES_ENEMY_UID_EX073 = 60 UMETA(DisplayName = "Pogo Shovel, EX 073"),
	TRES_ENEMY_UID_EX082 = 61 UMETA(DisplayName = "Frost Serpent (Grounded), EX 082"),
	TRES_ENEMY_UID_EX085 = 62 UMETA(DisplayName = "Gigas (BoL), EX 085"),
	TRES_ENEMY_UID_EX086 = 63 UMETA(DisplayName = "Gigas (BoL), EX 086"),
	TRES_ENEMY_UID_EX086_s0 = 64 UMETA(DisplayName = "Gigas (BoL), EX 086 S0"),
	TRES_ENEMY_UID_EX086_s1 = 65 UMETA(DisplayName = "Gigas (BoL), EX 086 S1"),
	TRES_ENEMY_UID_EX087 = 66 UMETA(DisplayName = "Gigas (BoL), EX 087"),
	TRES_ENEMY_UID_EX093 = 67 UMETA(DisplayName = "Mechanitaur, EX 093"),
	TRES_ENEMY_UID_EX094 = 68 UMETA(DisplayName = "High Soldier, EX 094"),
	TRES_ENEMY_UID_EX095 = 69 UMETA(DisplayName = "Helmed Body, EX 095"),
	TRES_ENEMY_UID_EX101 = 70 UMETA(DisplayName = "Dusk, EX 101"),
	TRES_ENEMY_UID_EX105 = 71 UMETA(DisplayName = "Sorcerer, EX 105"),
	TRES_ENEMY_UID_EX106 = 72 UMETA(DisplayName = "Sniper, EX 106"),
	TRES_ENEMY_UID_EX107 = 73 UMETA(DisplayName = "Berserker, EX 107"),
	TRES_ENEMY_UID_EX110 = 74 UMETA(DisplayName = "Gambler, EX 110"),
	TRES_ENEMY_UID_EX113 = 75 UMETA(DisplayName = "Reaper, EX 113"),
	TRES_ENEMY_UID_EX114 = 76 UMETA(DisplayName = "Ninja, EX 114"),
	TRES_ENEMY_UID_EX201 = 77 UMETA(DisplayName = "Flood, EX 201"),
	TRES_ENEMY_UID_EX202 = 78 UMETA(DisplayName = "Flowersnake, EX 202"),
	TRES_ENEMY_UID_EX203 = 79 UMETA(DisplayName = "Spiked Turtletoad, EX 203"),
	TRES_ENEMY_UID_EX205 = 80 UMETA(DisplayName = "Turtletoad, EX 205"),
	TRES_ENEMY_UID_EX301 = 81 UMETA(DisplayName = "Xehanort, EX 301"),
	TRES_ENEMY_UID_EX302 = 82 UMETA(DisplayName = "Young Xehanort, EX 302"),
	TRES_ENEMY_UID_EX316 = 83 UMETA(DisplayName = "Ansem, EX 316"),
	TRES_ENEMY_UID_EX304 = 84 UMETA(DisplayName = "Xemnas, EX 304"),
	TRES_ENEMY_UID_EX305 = 85 UMETA(DisplayName = "Xigbar, EX 305"),
	TRES_ENEMY_UID_EX306 = 86 UMETA(DisplayName = "Saix, EX 306"),
	TRES_ENEMY_UID_EX307 = 87 UMETA(DisplayName = "Luxord, EX 307"),
	TRES_ENEMY_UID_EX308 = 88 UMETA(DisplayName = "Marluxia, EX 308"),
	TRES_ENEMY_UID_EX309 = 89 UMETA(DisplayName = "Larxene, EX 309"),
	TRES_ENEMY_UID_EX310 = 90 UMETA(DisplayName = "Xion (Hooded), EX 310"),
	TRES_ENEMY_UID_EX311 = 91 UMETA(DisplayName = "Vanitas, EX 311"),
	TRES_ENEMY_UID_EX313 = 92 UMETA(DisplayName = "Riku Replica, EX 313"),
	TRES_ENEMY_UID_EX322 = 93 UMETA(DisplayName = "Anti-Aqua, EX 322"),
	TRES_ENEMY_UID_EX325 = 94 UMETA(DisplayName = "Terra-Xehanort, EX 325"),
	TRES_ENEMY_UID_EX326 = 95 UMETA(DisplayName = "Xehanort's Guardian, EX 326"),
	TRES_ENEMY_UID_EX701 = 96 UMETA(DisplayName = "Lump of Horror, EX 701"),
	TRES_ENEMY_UID_EX702 = 97 UMETA(DisplayName = "Lump of Horror (Form 2), EX 702"),
	TRES_ENEMY_UID_EX703 = 98 UMETA(DisplayName = "Lump of Horror (Hand), EX 703"),
	TRES_ENEMY_UID_EX711 = 99 UMETA(DisplayName = "King of Toys, EX 711"),
	TRES_ENEMY_UID_EX721 = 100 UMETA(DisplayName = "Grim Guardianess, EX 721"),
	TRES_ENEMY_UID_EX731 = 101 UMETA(DisplayName = "Skoll, EX 731"),
	TRES_ENEMY_UID_EX732 = 102 UMETA(DisplayName = "Wolf Head (Skoll), EX 732"),
	TRES_ENEMY_UID_EX734 = 103 UMETA(DisplayName = "EX 734"),
	TRES_ENEMY_UID_EX761 = 104 UMETA(DisplayName = "Xehanort Replica, EX 761"),
	TRES_ENEMY_UID_EX047_s0 = 105 UMETA(DisplayName = "Lich, EX 047 S0"),
	TRES_ENEMY_UID_EX771 = 106 UMETA(DisplayName = "Xehanort (Keyblade Armor), EX 771"),
	TRES_ENEMY_UID_EX77101 = 107 UMETA(DisplayName = "Xehanort (Keyblade Armor), EX 771 01"),
	TRES_ENEMY_UID_EX77102 = 108 UMETA(DisplayName = "Xehanort (Keyblade Armor), EX 771 02"),
	TRES_ENEMY_UID_EX047_s1 = 109 UMETA(DisplayName = "Lich, EX 047 S1"),
	TRES_ENEMY_UID_EX801 = 110 UMETA(DisplayName = "Supreme Smasher, EX 801"),
	TRES_ENEMY_UID_EX806 = 111 UMETA(DisplayName = "Beasts & Bugs, EX 806"),
	TRES_ENEMY_UID_EX816 = 112 UMETA(DisplayName = "Angelic Amber, EX 816"),
	TRES_ENEMY_UID_EX830 = 113 UMETA(DisplayName = "Patchwork Animal (Bear), EX 830"),
	TRES_ENEMY_UID_EX831 = 114 UMETA(DisplayName = "Patchwork Animal (Lion), EX 831"),
	TRES_ENEMY_UID_EX832 = 115 UMETA(DisplayName = "Air Droid, EX 832"),
	TRES_ENEMY_UID_EX833 = 116 UMETA(DisplayName = "Air Droid, EX 833"),
	TRES_ENEMY_UID_EX834 = 117 UMETA(DisplayName = "Air Droid, EX 834"),
	TRES_ENEMY_UID_EX840 = 118 UMETA(DisplayName = "Bouncy Pet (Pig), EX 840"),
	TRES_ENEMY_UID_EX841 = 119 UMETA(DisplayName = "Bouncy Pet (Dog), EX 841"),
	TRES_ENEMY_UID_EX842 = 120 UMETA(DisplayName = "Bouncy Pet (Cat), EX 842"),
	TRES_ENEMY_UID_EX843 = 121 UMETA(DisplayName = "Bouncy Pet (Elephant), EX 843"),
	TRES_ENEMY_UID_EX844 = 122 UMETA(DisplayName = "Bouncy Pet (Cow), EX 844"),
	TRES_ENEMY_UID_EX845 = 123 UMETA(DisplayName = "Bouncy Pet (Frog), EX 845"),
	TRES_ENEMY_UID_BX059 = 124 UMETA(DisplayName = "Metal Troll, BX 059"),
	TRES_ENEMY_UID_BX901 = 125 UMETA(DisplayName = "Dark Baymax, BX 901"),
	TRES_ENEMY_UID_EX047_s2 = 126 UMETA(DisplayName = "Lich, EX 047 S2"),
	TRES_ENEMY_UID_BX903 = 127 UMETA(DisplayName = "Darkubes (Disc), BX 903"),
	TRES_ENEMY_UID_CA901 = 128 UMETA(DisplayName = "Davy Jones, CA 901"),
	TRES_ENEMY_UID_FZ903 = 129 UMETA(DisplayName = "Marshmallow, FZ 903"),
	TRES_ENEMY_UID_HE001 = 130 UMETA(DisplayName = "Rock Titan, HE 001"),
	TRES_ENEMY_UID_HE902 = 131 UMETA(DisplayName = "Ice Titan, HE 902"),
	TRES_ENEMY_UID_HE903 = 132 UMETA(DisplayName = "Tornado Titan, HE 903"),
	TRES_ENEMY_UID_HE904 = 133 UMETA(DisplayName = "Lava Titan, HE 904"),
	TRES_ENEMY_UID_CA401 = 134 UMETA(DisplayName = "Ship Sails, CA 401"),
	TRES_ENEMY_UID_CA402 = 135 UMETA(DisplayName = "Ship Sails, CA 402"),
	TRES_ENEMY_UID_CA403 = 136 UMETA(DisplayName = "Ship Sails, CA 403"),
	TRES_ENEMY_UID_CA404 = 137 UMETA(DisplayName = "Ship Sails, CA 404"),
	TRES_ENEMY_UID_CA405 = 138 UMETA(DisplayName = "Ship Sails, CA 405"),
	TRES_ENEMY_UID_EX071 = 139 UMETA(DisplayName = "Kraken Tentacle, EX 071"),
	TRES_ENEMY_UID_EX072 = 140 UMETA(DisplayName = "Spear Lizard, EX 072"),
	TRES_ENEMY_UID_EX407 = 141 UMETA(DisplayName = "Darkside, EX 407"),
	TRES_ENEMY_UID_EX064 = 142 UMETA(DisplayName = "Kraken Tentacle, EX 064"),
	TRES_ENEMY_UID_EX047_s3 = 143 UMETA(DisplayName = "Lich, EX 047 S3"),
	TRES_ENEMY_UID_EX047_s4 = 144 UMETA(DisplayName = "Lich, EX 047 S4"),
	TRES_ENEMY_UID_EX409 = 145 UMETA(DisplayName = "Darkside (ReMind), EX 409"),
	TRES_ENEMY_UID_EX751 = 146 UMETA(DisplayName = "Dark Inferno X, EX 751"),
	TRES_ENEMY_UID_EX781 = 147 UMETA(DisplayName = "Yozora, EX 781"),
	TRES_ENEMY_UID_MAX = 148 UMETA(Hidden)
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
	ETresPlayerUniqueID_1_MAX = 20 UMETA(Hidden),
	ETresPlayerUniqueID_MAX = 21 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresAbilityKind : uint8
{
	NONE = 0 UMETA(DisplayName = "None"),
	AIR_RECOVERY = 1 UMETA(DisplayName = "Aerial Recovery"),
	BLOW_COUNTER = 2 UMETA(DisplayName = "Payback Strike"),
	REFLECT_GUARD = 3 UMETA(DisplayName = "Block"),
	GUARD_COUNTER = 4 UMETA(DisplayName = "Counter Slash"),
	REVENGEIMPACT = 5 UMETA(DisplayName = "Counter Impact"),
	REVENGEDIVE = 6 UMETA(DisplayName = "Counter Kick"),
	REVENGE_EX = 7 UMETA(DisplayName = "Counter Blast"),
	RISKDODGE = 8 UMETA(DisplayName = "Risk Dodge"),
	RD_COUNTER = 9 UMETA(DisplayName = "RD Counter"),
	SLASH_UPPER = 10 UMETA(DisplayName = "Rising Spiral"),
	AIR_ROLL_BEAT = 11 UMETA(DisplayName = "Groundbreaker"),
	AIR_DOWN = 12 UMETA(DisplayName = "Falling Slash"),
	TRIPPLE_SLASH = 13 UMETA(DisplayName = "Triple Rush"),
	CHARGE_THRUST = 14 UMETA(DisplayName = "Speed Slash"),
	MAGICFLUSH = 15 UMETA(DisplayName = "Magic Flash"),
	HIGHJUMP = 16 UMETA(DisplayName = "High Jump"),
	DOUBLEFLIGHT = 17 UMETA(DisplayName = "Doubleflight"),
	SUPERJUMP = 18 UMETA(DisplayName = "Superjump"),
	SUPERSLIDE = 19 UMETA(DisplayName = "Superslide"),
	GLIDE = 20 UMETA(DisplayName = "Glide"),
	LIBRA = 21 UMETA(DisplayName = "Scan"),
	DODGE = 22 UMETA(DisplayName = "Dodge Roll"),
	AIRSLIDE = 23 UMETA(DisplayName = "Air Slide"),
	AIRDODGE = 24 UMETA(DisplayName = "Aerial Dodge"),
	MP_SAFETY = 25 UMETA(DisplayName = "MP Safety"),
	EXPZERO = 26 UMETA(DisplayName = "Zero EXP"),
	FRIEND_AID = 27 UMETA(DisplayName = "Assist Friends"),
	COMBO_PLUS = 28 UMETA(DisplayName = "Combo Plus"),
	AIRCOMBO_PLUS = 29 UMETA(DisplayName = "Air Combo Plus"),
	COMBO_MASTER = 30 UMETA(DisplayName = "Combo Master"),
	COMBO_UP = 31 UMETA(DisplayName = "Combo Boost"),
	AIRCOMBO_UP = 32 UMETA(DisplayName = "Air Combo Boost"),
	FIRE_UP = 33 UMETA(DisplayName = "Fire Boost"),
	BLIZZARD_UP = 34 UMETA(DisplayName = "Blizzard Boost"),
	THUNDER_UP = 35 UMETA(DisplayName = "Thunder Boost"),
	WATER_UP = 36 UMETA(DisplayName = "Water Boost"),
	AERO_UP = 37 UMETA(DisplayName = "Aero Boost"),
	WIZZARD_STAR = 38 UMETA(DisplayName = "Wizard's Ruse"),
	LUCK_UP = 39 UMETA(DisplayName = "Lucky Strike"),
	ITEM_UP = 40 UMETA(DisplayName = "Item Boost"),
	PRIZE_DRAW = 41 UMETA(DisplayName = "Treasure Magnet"),
	FOCUS_BOOST = 42 UMETA(DisplayName = "Focus Converter"),
	LEAF_VEIL = 43 UMETA(DisplayName = "Leaf Bracer"),
	LAST_LEAVE = 44 UMETA(DisplayName = "Second Chance"),
	COMBO_LEAVE = 45 UMETA(DisplayName = "Withstand Combo"),
	FOCUS_ASPIR = 46 UMETA(DisplayName = "Focus Syphon"),
	ATTRACTION_TIME = 47 UMETA(DisplayName = "Attraction Extender"),
	LINK_BOOST = 48 UMETA(DisplayName = "Link Extender"),
	FORM_TIME = 49 UMETA(DisplayName = "Formchange Extender"),
	DEFENDER = 50 UMETA(DisplayName = "Defender"),
	CRITICAL_HALF = 51 UMETA(DisplayName = "Damage Control"),
	DAMAGE_ASPIR = 52 UMETA(DisplayName = "Damage Syphon"),
	MP_HASTE = 53 UMETA(DisplayName = "MP Haste"),
	MP_HASTERA = 54 UMETA(DisplayName = "MP Hastera"),
	MP_HASTEGA = 55 UMETA(DisplayName = "MP Hastega"),
	MAGIC_COMBO_SAVE = 56 UMETA(DisplayName = "Magic Combo Thrift"),
	MAGIC_COMBO_UP = 57 UMETA(DisplayName = "Magic Galvanizer"),
	WALK_REGENE = 58 UMETA(DisplayName = "MP Walker"),
	WALK_HEALING = 59 UMETA(DisplayName = "HP Walker"),
	MAGIC_DRAW = 60 UMETA(DisplayName = "Magic Treasure Magnet"),
	MASTER_DRAW = 61 UMETA(DisplayName = "Master Treasure Magnet"),
	ATTRACTION_UP = 62 UMETA(DisplayName = "Attraction Enhancer"),
	BURN_GUARD = 63 UMETA(DisplayName = "Burn Guard"),
	CLOUD_GUARD = 64 UMETA(DisplayName = "Cloud Guard"),
	SNEEZE_GUARD = 65 UMETA(DisplayName = "Sneeze Guard"),
	FREEZE_GUARD = 66 UMETA(DisplayName = "Freeze Guard"),
	DISCHARGE_GUARD = 67 UMETA(DisplayName = "Electric Guard"),
	STUN_GUARD = 68 UMETA(DisplayName = "Stun Guard"),
	COUNTER_UP = 69 UMETA(DisplayName = "Reprisal Boost"),
	AUTO_FINISH = 70 UMETA(DisplayName = "Auto-Finish"),
	FORM_UP = 71 UMETA(DisplayName = "Situation Boost"),
	MAGIC_TIME = 72 UMETA(DisplayName = "Grand Magic Extender"),
	AUTO_LOCK_MAGIC = 73 UMETA(DisplayName = "Magic Lock-On"),
	GUARD_REGENE = 74 UMETA(DisplayName = "Block Replenisher"),
	MP_SAVE = 75 UMETA(DisplayName = "MP Thrift"),
	MP_LEAVE = 76 UMETA(DisplayName = "Extra Cast"),
	FULLMP_BURST = 77 UMETA(DisplayName = "Full MP Blast"),
	HARVEST = 78 UMETA(DisplayName = "Harvester"),
	HP_CONVERTER = 79 UMETA(DisplayName = "HP Converter"),
	MP_CONVERTER = 80 UMETA(DisplayName = "MP Converter"),
	MUNNY_CONVERTER = 81 UMETA(DisplayName = "Munny Converter"),
	ENDLESS_MAGIC = 82 UMETA(DisplayName = "Endless Magic"),
	FP_CONVERTER = 83 UMETA(DisplayName = "Focus Converter"),
	FIRE_ASPIR = 84 UMETA(DisplayName = "Fire Syphon"),
	BLIZZARD_ASPIR = 85 UMETA(DisplayName = "Blizzard Syphon"),
	THUNDER_ASPIR = 86 UMETA(DisplayName = "Thunder Syphon"),
	WATER_ASPIR = 87 UMETA(DisplayName = "Water Syphon"),
	AERO_ASPIR = 88 UMETA(DisplayName = "Aero Syphon"),
	DARK_ASPIR = 89 UMETA(DisplayName = "Dark Syphon"),
	BEST_COMBI = 90 UMETA(DisplayName = "Team Effort"),
	SONIC_SLASH = 91 UMETA(DisplayName = "Sonic Slash"),
	SONIC_DOWN = 92 UMETA(DisplayName = "Sonic Cleave"),
	TURN_CUTTER = 93 UMETA(DisplayName = "Buzz Saw"),
	SUMMERSALT = 94 UMETA(DisplayName = "Somersault"),
	POLE_SPIN = 95 UMETA(DisplayName = "Pole Spin"),
	POLE_SWING = 96 UMETA(DisplayName = "Pole Swing"),
	WALL_KICK = 97 UMETA(DisplayName = "Wall Kick"),
	BATTLE_GRAPHER = 98 UMETA(DisplayName = "Frontline Photographer"),
	CHARISMA_CHEF = 99 UMETA(DisplayName = "Chef Extraordinaire"),
	JOIN_FORCE = 100 UMETA(DisplayName = "Double Team"),
	HEARTLESS_BUSTER = 101 UMETA(DisplayName = "Heartless Buster"),
	NOBODY_BUSTER = 102 UMETA(DisplayName = "Nobody Buster"),
	POWER_CURE = 103 UMETA(DisplayName = "Cure Converter"),
	CRITICAL_COUNTER = 104 UMETA(DisplayName = "Critical Counter"),
	CRITICAL_CHARGE = 105 UMETA(DisplayName = "Critical Charge"),
	CRITICAL_CONVERTER = 106 UMETA(DisplayName = "Critical Converter"),
	QUICK_SHAFT = 107 UMETA(DisplayName = "Quick Slash"),
	FLASH_STEP = 108 UMETA(DisplayName = "Flash Step"),
	RADIAL_CUT = 109 UMETA(DisplayName = "Radial Blaster"),
	FINAL_HEAVEN = 110 UMETA(DisplayName = "Last Charge"),
	AERIAL_SWEEP = 111 UMETA(DisplayName = "Aerial Sweep"),
	AERIAL_DIVE = 112 UMETA(DisplayName = "Aerial Dive"),
	LUNCH_TIME = 113 UMETA(DisplayName = "Cuisine Extender"),
	POWER_LUNCH = 114 UMETA(DisplayName = "Hearty Meal"),
	OVER_TIME = 115 UMETA(DisplayName = "Overtime"),
	BEST_CONDITION = 116 UMETA(DisplayName = "Top Condition"),
	EXP_BARGAIN = 117 UMETA(DisplayName = "EXP Incentive"),
	PRIZE_FEEVER = 118 UMETA(DisplayName = "Prize Proliferator"),
	MILLIONAIRE = 119 UMETA(DisplayName = "Rags to Riches"),
	CURAGAN = 120 UMETA(DisplayName = "Curaza"),
	CHARGE_BERSERK = 121 UMETA(DisplayName = "Berserk Charge"),
	OVERCOME = 122 UMETA(DisplayName = "Hidden Potential"),
	GRAND_MAGIC = 123 UMETA(DisplayName = "More Grand Magic"),
	FIRAGAN = 124 UMETA(DisplayName = "Firaza"),
	BLIZZAGAN = 125 UMETA(DisplayName = "Blizzaza"),
	THUNDAGAN = 126 UMETA(DisplayName = "Thundaza"),
	WATAGAN = 127 UMETA(DisplayName = "Wataza"),
	AEROGAN = 128 UMETA(DisplayName = "Aeroza"),
	MAGIC_ROULETTE = 129 UMETA(DisplayName = "Magic Roulette"),
	UNISON_FIRE = 130 UMETA(DisplayName = "Unison Fire"),
	UNISON_BLIZZARD = 131 UMETA(DisplayName = "Unison Blizzard"),
	UNISON_THUNDER = 132 UMETA(DisplayName = "Unison Thunder"),
	FUSION_SPIN = 133 UMETA(DisplayName = "Fusion Spin"),
	FUSION_ROCKET = 134 UMETA(DisplayName = "Fusion Rocket"),
	HYPER_HEALING = 135 UMETA(DisplayName = "Hyper Healing"),
	COMBI_UP = 136 UMETA(DisplayName = "More Team Attacks"),
	COMBI_TIME = 137 UMETA(DisplayName = "Team Attack Extender"),
	SHARE_PRIZE = 138 UMETA(DisplayName = "Share Prizes"),
	MICKEY_CURE = 139 UMETA(DisplayName = "Mickey Cure"),
	MICKEY_HOLY = 140 UMETA(DisplayName = "Mickey Holy"),
	DONALD_FIRE = 141 UMETA(DisplayName = "Donald Fire"),
	DONALD_BLIZZARD = 142 UMETA(DisplayName = "Donald Blizzard"),
	DONALD_THUNDER = 143 UMETA(DisplayName = "Donald Thunder"),
	DONALD_AERO = 144 UMETA(DisplayName = "Donald Aero"),
	DONALD_CURE = 145 UMETA(DisplayName = "Donald Cure"),
	GOOFY_TORNADE = 146 UMETA(DisplayName = "Goofy Tornade"),
	GOOFY_TURBO = 147 UMETA(DisplayName = "Goofy Turbo"),
	GOOFY_FLIP = 148 UMETA(DisplayName = "Goofy Flip"),
	HERCULES_ROCKTHROW = 149 UMETA(DisplayName = "Hercules Rock Throw"),
	HERCULES_ENERGYBURST = 150 UMETA(DisplayName = "Hercules Energy Burst"),
	WOODY_SHOULDERTACKLE = 151 UMETA(DisplayName = "Woody Shoulder Tackle"),
	WOODY_ROPEATTACK = 152 UMETA(DisplayName = "Woody Rope Attack"),
	BUZZ_BEAM = 153 UMETA(DisplayName = "Buzz Beam"),
	BUZZ_DOUBLELARIAT = 154 UMETA(DisplayName = "Buzz Double Lariat"),
	RAPUNZEL_HAIRSWING = 155 UMETA(DisplayName = "Rapunzel Hair Swing"),
	RAPUNZEL_HAIRROTATION = 156 UMETA(DisplayName = "Rapunzel Hair Rotation"),
	FLYNN_THROWFRYINGPAN = 157 UMETA(DisplayName = "Flynn Throw Frying Pan"),
	FLYNN_BARRELBASH = 158 UMETA(DisplayName = "Flynn Barrel Bash"),
	SULLEY_ROAR = 159 UMETA(DisplayName = "Sulley Roar"),
	SULLEY_SHOULDERTACKLE = 160 UMETA(DisplayName = "Sulley Shoulder Tackle"),
	MIKE_MIKEAPPEAL = 161 UMETA(DisplayName = "Mike Appeal"),
	MIKE_SUPPORT = 162 UMETA(DisplayName = "Mike Support"),
	SPARROW_BONECRASH = 163 UMETA(DisplayName = "Sparrow Bone Crash"),
	SPARROW_TWISTROLLING = 164 UMETA(DisplayName = "Sparrow Twist Rolling"),
	MARSHMALLOW_JUMPSTRIKE = 165 UMETA(DisplayName = "Marshmallow Jump Strike"),
	MARSHMALLOW_COLDBREATH = 166 UMETA(DisplayName = "Marshmallow Cold Breath"),
	BAYMAX_ROCKETPUNCH = 167 UMETA(DisplayName = "Baymax Rocket Punch"),
	BAYMAX_CURESPRAY = 168 UMETA(DisplayName = "Baymax Cure Spray"),
	RIKU_DARKFIRE = 169 UMETA(DisplayName = "Riku Dark Fire"),
	RIKU_SHADOWBREAKER = 170 UMETA(DisplayName = "Riku Shadow Breaker"),
	VENTUS_WINDRAID = 171 UMETA(DisplayName = "Ventus Wind Raid"),
	AQUA_BLIZZAGA = 172 UMETA(DisplayName = "Aqua Blizzaga"),
	AQUA_THUNDAGA = 173 UMETA(DisplayName = "Aqua Thundaga"),
	AQUA_CURAGA = 174 UMETA(DisplayName = "Aqua Curaga"),
	ROXAS_CROSSSHOT = 175 UMETA(DisplayName = "Roxas Cross Shot"),
	ROXAS_CROSSBRADE = 176 UMETA(DisplayName = "Roxas Cross Brade"),
	XION_CURAGA = 177 UMETA(DisplayName = "Xion Curaga"),
	XION_LASERRAIN = 178 UMETA(DisplayName = "Xion Laser Rain"),
	__LEA_FIRAGARAID = 179 UMETA(DisplayName = "Lea Firaga Raid"),
	LEA_FIRAGASLICER = 180 UMETA(DisplayName = "Lea Firaga Slicer"),
	KAIRI_CURE = 181 UMETA(DisplayName = "Kairi Cure"),
	SORA_FIRAGA = 182 UMETA(DisplayName = "Sora Firaga"),
	SORA_CURAGA = 183 UMETA(DisplayName = "Sora Curaga"),
	TRES_ABI_KIND_MAX = 184 UMETA(Hidden),
	ETresAbilityKind_MAX = 185 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresCharWearForm : uint8
{
	TRES_WEAR_FORM_NORMAL = 0,
	TRES_WEAR_FORM_01 = 1,
	TRES_WEAR_FORM_02 = 2,
	TRES_WEAR_FORM_03 = 3,
	TRES_WEAR_FORM_04 = 4,
	TRES_WEAR_FORM_05 = 5,
	TRES_WEAR_FORM_06 = 6,
	TRES_WEAR_FORM_07 = 7,
	TRES_WEAR_FORM_08 = 8,
	TRES_WEAR_FORM_09 = 9,
	TRES_WEAR_FORM_0A = 10,
	TRES_WEAR_FORM_MAX = 11 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefWeapon : uint8
{
	WEP_NOEQUIP = 0 UMETA(DisplayName = "No Equip"),
	WEP_KEYBLADE00 = 1 UMETA(DisplayName = "Kingdom Key"),
	WEP_KEYBLADE02 = 2 UMETA(DisplayName = "Hero's Origin"),
	WEP_KEYBLADE01 = 3 UMETA(DisplayName = "Shooting Star"),
	WEP_KEYBLADE03 = 4 UMETA(DisplayName = "Favorite Deputy"),
	WEP_KEYBLADE04 = 5 UMETA(DisplayName = "Ever After"),
	WEP_KEYBLADE09 = 6 UMETA(DisplayName = "Happy Gear"),
	WEP_KEYBLADE06 = 7 UMETA(DisplayName = "Crystal Snow"),
	WEP_KEYBLADE07 = 8 UMETA(DisplayName = "Hunny Spout"),
	WEP_KEYBLADE08 = 9 UMETA(DisplayName = "Nano Gear"),
	WEP_KEYBLADE05 = 10 UMETA(DisplayName = "Wheel of Fate"),
	WEP_KEYBLADE11 = 11 UMETA(DisplayName = "Grand Chef"),
	WEP_KEYBLADE10 = 12 UMETA(DisplayName = "Classic Tone"),
	WEP_KEYBLADE12 = 13 UMETA(DisplayName = "Oathkeeper"),
	WEP_KEYBLADE13 = 14 UMETA(DisplayName = "Oblivion"),
	WEP_KEYBLADE14 = 15 UMETA(DisplayName = "Ultima Weapon"),
	WEP_KEYBLADE15 = 16 UMETA(DisplayName = "Elemental Encoder"),
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
	WEP_AQUA00 = 61 UMETA(DisplayName = "Aqua (Master's Defender)"),
	WEP_AQUA01 = 62 UMETA(DisplayName = "Aqua 01"),
	WEP_AQUA02 = 63 UMETA(DisplayName = "Aqua 02"),
	WEP_AQUA03 = 64 UMETA(DisplayName = "Aqua 03"),
	WEP_MICKEY00 = 65 UMETA(DisplayName = "Mickey 00"),
	WEP_MICKEY01 = 66 UMETA(DisplayName = "Mickey (Kingdom Key D)"),
	WEP_MICKEY02 = 67 UMETA(DisplayName = "Mickey (Star Cluster)"),
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
	WEP_RIKU00 = 79 UMETA(DisplayName = "Riku (Braveheart)"),
	WEP_RIKU01 = 80 UMETA(DisplayName = "Riku (Way to the Dawn)"),
	WEP_RIKU02 = 81 UMETA(DisplayName = "Riku 02"),
	WEP_RIKU03 = 82 UMETA(DisplayName = "Riku 03"),
	WEP_KAIRI00 = 83 UMETA(DisplayName = "Kairi (Destiny's Embrace)"),
	WEP_LEA00 = 84 UMETA(DisplayName = "Lea (Flame Liberator)"),
	WEP_TERRA00 = 85 UMETA(DisplayName = "Terra (Earthshaker)"),
	WEP_VENTUS00 = 86 UMETA(DisplayName = "Ventus (Wayward Wind)"),
	WEP_ROXAS00 = 87 UMETA(DisplayName = "Roxas (Oathkeeper & Oblivion)"),
	WEP_XION00 = 88 UMETA(DisplayName = "Xion (Kingdom Key)"),
	WEP_FRD_SORA00 = 89 UMETA(DisplayName = "FRD Sora (Kingdom Key)"),
	_WEP_MAX = 90 UMETA(Hidden),
	ETresItemDefWeapon_MAX = 91 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresWeaponType
{
	TRES_WEAPON_TYPE_NONE = 0,
	TRES_WEAPON_TYPE_01 = 1,
	TRES_WEAPON_TYPE_03 = 2,
	TRES_WEAPON_TYPE_02 = 3,
	TRES_WEAPON_TYPE_04 = 4,
	TRES_WEAPON_TYPE_05 = 5,
	TRES_WEAPON_TYPE = 6,
	TRES_WEAPON_TYPE_07 = 7,
	TRES_WEAPON_TYPE_08 = 8,
	TRES_WEAPON_TYPE_09 = 9,
	TRES_WEAPON_TYPE_06 = 10,
	TRES_WEAPON_TYPE01 = 11,
	TRES_WEAPON_TYPE02 = 12,
	TRES_WEAPON_TYPE03 = 13,
	TRES_WEAPON_TYPE04 = 14,
	TRES_WEAPON_TYPE05 = 15,
	TRES_WEAPON_TYPE06 = 16,
	TRES_WEAPON_TYPE07 = 17,
	TRES_WEAPON_TYPE08 = 18,
	TRES_WEAPON_TYPE09 = 19,
	TRES_WEAPON_TYPE_MAX = 20 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresStateID
{
	TSID_STATE_EMPTY = 0,
	TSID_STATE_IDLE = 1,
	TSID_STATE_RUN = 2,
	TSID_STATE_JUMP = 3,
	TSID_STATE_GLIDE = 4,
	TSID_STATE_FLOATING = 5,
	TSID_STATE_DANGLE = 6,
	TSID_STATE_CLIMBING = 7,
	TSID_STATE_WALLRUN = 8,
	TSID_STATE_HOPPING = 9,
	TSID_STATE_SLOPESLIDE = 10,
	TSID_STATE_SWAYING = 11,
	TSID_STATE_ATTACK = 12,
	TSID_STATE_ATTACK_AQ = 13,
	TSID_STATE_ATTACK_RI = 14,
	TSID_STATE_GUARD = 15,
	TSID_STATE_DODGEROLL = 16,
	TSID_STATE_RISKDODGE = 17,
	TSID_STATE_FIREMAGIC = 18,
	TSID_STATE_DAMAGE = 19,
	TSID_STATE_AIR_SLIDE = 20,
	TSID_STATE_SUPER_SLIDE = 21,
	TSID_STATE_RAIL_SLIDE = 22,
	TSID_STATE_WALL_KICK = 23,
	TSID_STATE_POLE_TURN = 24,
	TSID_STATE_ENEMY_FLOW = 25,
	TSID_STATE_AF_ROLLER_COASTER = 26,
	TSID_STATE_AF_VIKING_SHIP = 27,
	TSID_STATE_DM_SIMBA = 28,
	TSID_STATE_FRIENDATTACK = 29,
	TSID_STATE_FR_SHIELD_GUARDIAN = 30,
	TSID_STATE_STYLECHANGE = 31,
	TSID_STATE_WEAPONCHANGE = 32,
	TSID_STATE_STYLEFINISH = 33,
	TSID_STATE_STYLEFINISH_DR = 34,
	TSID_STATE_STYLEFINISH_SK = 35,
	TSID_STATE_STYLEFINISH_GM = 36,
	TSID_STATE_STYLEFINISH_WA = 37,
	TSID_STATE_STYLEFINISH_SH = 38,
	TSID_STATE_STYLEFINISH_FL = 39,
	TSID_STATE_SHOOTERMODE = 40,
	TSID_STATE_SHOOTFLOW = 41,
	TSID_STATE_ATHLETICFLOW = 42,
	TSID_STATE_NAVLINK_JUMP = 43,
	TSID_STATE_TURN = 44,
	TSID_STATE_ATTACK1 = 45,
	TSID_STATE_ATTACK2 = 46,
	TSID_STATE_ATTACK3 = 47,
	TSID_STATE_ATTACK4 = 48,
	TSID_STATE_ATTACK5 = 49,
	TSID_STATE_ATTACK6 = 50,
	TSID_STATE_ATTACK7 = 51,
	TSID_STATE_ATTACK8 = 52,
	TSID_STATE_ATTACK9 = 53,
	TSID_STATE_STAGGER = 54,
	TSID_STATE_RUN1 = 55,
	TSID_STATE_RUN2 = 56,
	TSID_STATE_RUN3 = 57,
	TSID_STATE_APPEAR = 58,
	TSID_STATE_DIE = 59,
	TSID_STATE_VANISH_DIE = 60,
	TSID_STATE_CATCH = 61,
	TSID_STATE_BIND = 62,
	TSID_STATE_EMOTION = 63,
	TSID_STATE_DISAPPEAR = 64,
	TSID_STATE_FLY = 65,
	TSID_STATE_REFLECT = 66,
	TSID_STATE_CINEMATIC = 67,
	TSID_STATE_ACTION = 68,
	TSID_STATE_UP_DOWN = 69,
	TSID_STATE_FLY1 = 70,
	TSID_STATE_FLY2 = 71,
	TSID_STATE_PLAY_MOTION = 72,
	TSID_STATE_AF_TEACUP = 73,
	TSID_STATE_OPEN_TREASURE_BOX = 74,
	TSID_STATE_COMBO_DW = 75,
	TSID_STATE_COMBO_HM = 76,
	TSID_STATE_COMBO_YO = 77,
	TSID_STATE_COMBO_BZ = 78,
	TSID_STATE_COMBO_DR = 79,
	TSID_STATE_COMBO_SK = 80,
	TSID_STATE_COMBO_GM = 81,
	TSID_STATE_COMBO_SW = 82,
	TSID_STATE_COMBO_WA = 83,
	TSID_STATE_COMBO_SH = 84,
	TSID_STATE_COMBO_CL = 85,
	TSID_STATE_COMBO_AN = 86,
	TSID_STATE_COMBO_HL = 87,
	TSID_STATE_COMBO_FL = 88,
	TSID_STATE_COMBO_SWIM = 89,
	TSID_STATE_COMBO_LIMIT = 90,
	TSID_STATE_COMMON_ATTACK = 91,
	TSID_STATE_FR_MOUNTCURLING = 92,
	TSID_STATE_COMMON_MOVE = 93,
	TSID_STATE_COMMON_ACTION = 94,
	TSID_STATE_AF_SHOOTINGRIDE = 95,
	TSID_STATE_GIGAS = 96,
	TSID_STATE_GIMMICK_ATTACH = 97,
	TSID_STATE_AI_MOVE = 98,
	TSID_STATE_AI_ACTION = 99,
	TSID_STATE_AI_ATTACK = 100,
	TSID_STATE_FR_GOOFYSHOOT = 101,
	TSID_STATE_SWIM = 102,
	TSID_STATE_SPECIAL_SHIP = 103,
	TSID_STATE_TALK = 104,
	TSID_STATE_SAVE_MENU = 105,
	TSID_STATE_SHOP_MENU = 106,
	TSID_STATE_NAVLINK_HOPPING = 107,
	TSID_STATE_CHECK = 108,
	TSID_STATE_RESCUE = 109,
	TSID_STATE_AF_MERRYGOROUND = 110,
	TSID_STATE_USE_ITEM = 111,
	TSID_STATE_FR_MICKEYCHAIN = 112,
	TSID_STATE_FR_MICKEYAQUA = 113,
	TSID_STATE_FR_SNOWCURLING = 114,
	TSID_STATE_FR_SNOWCHASE = 115,
	TSID_STATE_FR_ICERAILSLIDE = 116,
	TSID_STATE_DM_WANDANYAN = 117,
	TSID_STATE_GAMEOVER = 118,
	TSID_STATE_SMALLAIRPLANE = 119,
	TSID_STATE_AF_WATERRIDE = 120,
	TSID_STATE_FR_MIKEBOWLING = 121,
	TSID_STATE_BADSTAT_STUN = 122,
	TSID_STATE_BADSTAT_FREEZE = 123,
	TSID_STATE_BADSTAT_BURN = 124,
	TSID_STATE_WARP = 125,
	TSID_STATE_DM_RALPH = 126,
	TSID_STATE_DM_ARIEL = 127,
	TSID_STATE_DM_STITCH = 128,
	TSID_STATE_FR_JACKSPIN = 129,
	TSID_STATE_FR_POWERSTRIKE = 130,
	TSID_STATE_FR_GIANTSOLDIER = 131,
	TSID_STATE_FR_ROCKETLASER = 132,
	TSID_STATE_FR_SPINNINGHOLD = 133,
	TSID_STATE_FR_SNOWCOVERSWING = 134,
	TSID_STATE_FR_CALLMETEOR = 135,
	TSID_STATE_FR_FLAREFORCE = 136,
	TSID_STATE_FR_BAYMAXRIDE = 137,
	TSID_STATE_RAILSLIDE_MI = 138,
	TSID_STATE_AI_SLOPESLIDE = 139,
	TSID_STATE_HIDDEN = 140,
	TSID_STATE_BTL_COMICAL = 141,
	TSID_STATE_COVER = 142,
	TSID_STATE_AI_SWIM = 143,
	TSID_STATE_HOLD_CAMERA = 144,
	TSID_STATE_FESTIVAL_DANCE = 145,
	TSID_STATE_IDLE_WAIT = 146,
	TSID_STATE_SITUATION_ACTION = 147,
	TSID_STATE_PLANEBOSS = 148,
	TSID_STATE_TALK_MOTION = 149,
	TSID_STATE_ONE_ACTION = 150,
	TSID_STATE_BADSTAT_SNEEZE = 151,
	TSID_STATE_FR_MICKEYRIKU = 152,
	TSID_STATE_WATER_PLAY = 153,
	TSID_STATE_FR_DONALDSORA = 154,
	TSID_STATE_FR_GOOFYSORA = 155,
	TSID_STATE_ATTACK_RO = 156,
	TSID_STATE_ATTACK_KA = 157,
	TSID_STATE_ATTACK_MI = 158,
	TSID_STATE_COMBO_LF = 159,
	TSID_STATE_COMBO_DF = 160,
	TSID_STATE_COMBO_TF = 161,
	TSID_STATE_SLIDE_TURN_RO = 162,
	TSID_STATE_FR_POPPINGHOLY = 163,
	TSID_STATE_FR_BLIZZAGABOARD = 164,
	TSID_STATE_FR_THINKOFYOU = 165,
	TSID_STATE_FR_ULTIMATEEND = 166,
	TSID_STATE_FR_PROMISEWINGS = 167,
	TSID_STATE_QUICKBATTLE = 168,
	TSID_STATE_REMIND_LGRX = 169,
	TSID_STATE_REMIND_MIRX_DOWN_MI = 170,
	TSID_STATE_REMIND_MIRX_ATTACK_MI = 171,
	TSID_STATE_REMIND_MIRX_TIRED_MI = 172,
	TSID_STATE_REMIND_SOKC_MAIN = 173,
	TSID_STATE_MAX = 174 UMETA(Hidden)
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
	_TRES_BODY_RT_MAX = 12 UMETA(Hidden),
	ETresBodyCollReactionType_MAX = 13 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresPlayerJumpModes
{
	ETresPlayerJumpModes_TPJ_NORMAL = 0 UMETA(DisplayName = "Normal"),
	ETresPlayerJumpModes_TPJ_HIGH = 1 UMETA(DisplayName = "High"),
	ETresPlayerJumpModes_TPJ_SUPER = 2 UMETA(DisplayName = "Super"),
	ETresPlayerJumpModes_TPJ_DOUBLE_FLIGHT = 3 UMETA(DisplayName = "Double Flight"),
	ETresPlayerJumpModes_TPJ_SUPER_FLIGHT = 4 UMETA(DisplayName = "Super Flight"),
	TPJ_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresAnimNotifyBpEventID
{
	TRES_ANIMNOTIFYBPEVENT_NONE = 0  UMETA(DisplayName = "None"),
	TRES_ANIMNOTIFYBPEVENT_MAX = 1 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresTeam
{
	ETresTeam_Player = 0 UMETA(DisplayName = "Player"),
	ETresTeam_FriendNpc = 1 UMETA(DisplayName = "Friend NPC"),
	ETresTeam_Enemy = 2 UMETA(DisplayName = "Enemy"),
	ETresTeam_Heartless = 3 UMETA(DisplayName = "Heartless"),
	ETresTeam_Nobody = 4 UMETA(DisplayName = "Nobody"),
	ETresTeam_Unverse = 5 UMETA(DisplayName = "Unverse"),
	ETresTeam_Neutral = 6 UMETA(DisplayName = "Neutral"),
	ETresTeam_CityNpc = 7 UMETA(DisplayName = "City NPC"),
	ETresTeam_Unknown = 8 UMETA(DisplayName = "Unknown"),
	ETresTeam_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresReactionResultType
{
	TRES_REACT_RESULT_NONE = 0,
	TRES_REACT_RESULT_NOREACTION = 1,
	TRES_REACT_RESULT_DAMAGE = 2,
	TRES_REACT_RESULT_REFLECT = 3,
	TRES_REACT_RESULT_GUARD_REFLECT = 4,
	TRES_REACT_RESULT_GUARD = 5,
	TRES_REACT_RESULT_ARMOR_BREAK = 6,
	TRES_REACT_RESULT_STRONG_BODY_DAMAGE1 = 7,
	TRES_REACT_RESULT_STRONG_BODY_DAMAGE2 = 8,
	TRES_REACT_RESULT_STRONG_BODY_DAMAGE3 = 9,
	TRES_REACT_RESULT_STRONG_BODY_DAMAGE4 = 10,
	TRES_REACT_RESULT_MAX = 11 UMETA(Hidden),
	ETresReactionResultType_MAX = 12 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresProjectileInnerWaterVolumeProc
{
	ETresProjectileInnerWaterVolumeProc_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresProjectileInnerWaterVolumeProc_SHUTDOWN = 1 UMETA(DisplayName = "Shutdown"),
	ETresProjectileInnerWaterVolumeProc_MAPHITEXPLODE = 2 UMETA(DisplayName = "Map Hit Explode"),
	ETresProjectileInnerWaterVolumeProc_SHUTDOWN_DOWN = 3 UMETA(DisplayName = "Shutdown Down"),
	ETresProjectileInnerWaterVolumeProc_MAPHITEXPLODE_DOWN = 4 UMETA(DisplayName = "Map Hit Explode Down"),
	ETresProjectileInnerWaterVolumeProc_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresProjectileRespawnRotType
{
	TPRR_NORMAL = 0,
	TPRR_YAW_ONLY = 1,
	TPRR_CLEAR = 2,
	TPRR_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresProjectileRespawnType
{
	TPR_TYPE_HIT_ALWAYS = 0,
	TPR_TYPE_HIT_ANY = 1,
	TPR_TYPE_HIT_PAWN = 2,
	TPR_TYPE_HIT_MAP = 3,
	TPR_TYPE_NO_HIT = 4,
	TPR_TYPE_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresBodyCollOverlapCameraFunction
{
	TRES_BODY_OVERLAPCAMERA_FADE = 0 UMETA(DisplayName = "Fade"),
	TRES_BODY_OVERLAPCAMERA_RESET = 1 UMETA(DisplayName = "Reset"),
	TRES_BODY_OVERLAPCAMERA_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresBodyCollision
{
	ETresBodyCollision_SPHERE = 0 UMETA(DisplayName = "Sphere"),
	ETresBodyCollision_CAPSULE = 1 UMETA(DisplayName = "Capsule"),
	ETresBodyCollision_BOX = 2 UMETA(DisplayName = "Box"),
	ETresBodyCollision_CONVEX = 3 UMETA(DisplayName = "Convex"),
	ETresBodyCollision_1_MAX = 4 UMETA(Hidden),
	ETresBodyCollision_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresPlayerSpecificActionID
{
	TRES_PSA_ACCOMPANY_PAWN = 0,
	TRES_PSA_CHANT_END = 1,
	TRES_PSA_SHOOTFLOW_ACTION_END = 2,
	TRES_PSA_ATHLETICFLOW_ATTACK = 3,
	TRES_PSA_PLANEBOSS_START = 4,
	TRES_PSA_SMALLAIRPLANE_AUTOTURN_START = 5,
	TRES_PSA_SMALLAIRPLANE_AUTOTURN_END = 6,
	TRES_PSA_SPECIALSHIP_DASHHIT_START = 7,
	TRES_PSA_SPECIALSHIP_DASHHIT_END = 8,
	TRES_PSA_SPECIALSHIP_JUMP_START = 9,
	TRES_PSA_SPECIALSHIP_JUMP_DOWN = 10,
	TRES_PSA_SPECIALSHIP_JUMP_LAND = 11,
	TRES_PSA_SPECIALSHIP_ENEMY_START = 12,
	TRES_PSA_SPECIALSHIP_HP0_START = 13,
	TRES_PSA_SPECIALSHIP_MAELSTROM_HP0_START = 14,
	TRES_PSA_RAIL_SLIDE_START = 15,
	TRES_PSA_RAIL_SLIDE_END = 16,
	TRES_PSA_MI_04_DOOR_ATTACH_START = 17,
	TRES_PSA_MI_04_DOOR_ATTACH_END = 18,
	TRES_PSA_VIKINGSHIP_APPEARSKIP = 19,
	TRES_PSA_VIKINGSHIP_START = 20,
	TRES_PSA_VIKINGSHIP_ATTACK = 21,
	TRES_PSA_VIKINGSHIP_END = 22,
	TRES_PSA_ROLLERCOASTER_PRE_JUMPSTART = 23,
	TRES_PSA_ROLLERCOASTER_PRE_START = 24,
	TRES_PSA_ROLLERCOASTER_START = 25,
	TRES_PSA_ROLLERCOASTER_JUMP = 26,
	TRES_PSA_ROLLERCOASTER_ATTACK = 27,
	TRES_PSA_ROLLERCOASTER_ENEMY_ATTACKREFLECT = 28,
	TRES_PSA_ROLLERCOASTER_CANCEL = 29,
	TRES_PSA_ROLLERCOASTER_FINISH_START = 30,
	TRES_PSA_ROLLERCOASTER_FINISH_WIN_START = 31,
	TRES_PSA_ROLLERCOASTER_FINISH_WIN_END = 32,
	TRES_PSA_ROLLERCOASTER_FINISH_CMD_START = 33,
	TRES_PSA_TEACUP_APPEARSKIP = 34,
	TRES_PSA_TEACUP_FINISH = 35,
	TRES_PSA_TEACUP_END = 36,
	TRES_PSA_SHOOTINGRIDE_APPEARSKIP = 37,
	TRES_PSA_MERRYGOROUND_APPEARSKIP = 38,
	TRES_PSA_MERRYGOROUND_FINISH = 39,
	TRES_PSA_MERRYGOROUND_FINISH_ATTACK = 40,
	TRES_PSA_MERRYGOROUND_END = 41,
	TRES_PSA_WATERRIDE_SPAWNWARP = 42,
	TRES_PSA_WATERRIDE_APPEARSKIP = 43,
	TRES_PSA_WATERRIDE_START = 44,
	TRES_PSA_WATERRIDE_FINISH = 45,
	TRES_PSA_WATERRIDE_FINISH_LAST = 46,
	TRES_PSA_WATERRIDE_FINISH_LAST2 = 47,
	TRES_PSA_WATERRIDE_END = 48,
	TRES_PSA_SIMBA_APPEARSKIP = 49,
	TRES_PSA_SIMBA_START = 50,
	TRES_PSA_SIMBA_FINISH = 51,
	TRES_PSA_SIMBA_END = 52,
	TRES_PSA_ARIEL_APPEARSKIP = 53,
	TRES_PSA_ARIEL_START = 54,
	TRES_PSA_ARIEL_CUT2 = 55,
	TRES_PSA_ARIEL_END = 56,
	TRES_PSA_RALPH_APPEARSKIP = 57,
	TRES_PSA_RALPH_EXPLOSION = 58,
	TRES_PSA_RALPH_END = 59,
	TRES_PSA_STITCH_APPEARSKIP = 60,
	TRES_PSA_STITCH_START = 61,
	TRES_PSA_STITCH_END = 62,
	TRES_PSA_WANDANYAN_APPEARSKIP = 63,
	TRES_PSA_STYLE_FINISH_SH_END = 64,
	TRES_PSA_STYLE_FINISH_WA_END = 65,
	TRES_PSA_STYLE_FINISH_SK_END = 66,
	TRES_PSA_STYLE_FINISH_GM_END = 67,
	TRES_PSA_SHIELD_GUARDIAN_FINISH = 68,
	TRES_PSA_SHIELD_GUARDIAN_END = 69,
	TRES_PSA_MICKEYCHAIN_START = 70,
	TRES_PSA_SNOW_COVER_SWING_START = 71,
	TRES_PSA_SNOW_COVER_SWING_ATTACK_SUCCESS = 72,
	TRES_PSA_SNOW_COVER_SWING_ATTACK_FAILED = 73,
	TRES_PSA_SNOW_COVER_SWING_FAILED = 74,
	TRES_PSA_SPINNING_HOLD_START = 75,
	TRES_PSA_SPINNING_HOLD_EXPLODE = 76,
	TRES_PSA_SPINNING_HOLD_LIGHTBALL_WALL_HIT = 77,
	TRES_PSA_CALL_METEOR_START = 78,
	TRES_PSA_CALL_METEOR_FINISH = 79,
	TRES_PSA_CALL_METEOR_END = 80,
	TRES_PSA_BAYMAXRIDE_FINISH_RUSH = 81,
	TRES_PSA_BAYMAXRIDE_FINISH_HIT = 82,
	TRES_PSA_BAYMAXRIDE_FINISH_END = 83,
	TRES_PSA_GIANTSOLDIER_START = 84,
	TRES_PSA_GIANTSOLDIER_CANCEL = 85,
	TRES_PSA_POWERSTRIKE_START = 86,
	TRES_PSA_FLAREFORCE_START = 87,
	TRES_PSA_BLIZZAGABOARD_CUT3 = 88,
	TRES_PSA_BLIZZAGABOARD_CUT4 = 89,
	TRES_PSA_BLIZZAGABOARD_EXP = 90,
	TRES_PSA_BLIZZAGABOARD_EXPEND = 91,
	TRES_PSA_THINKOFYOU_END = 92,
	TRES_PSA_PROMISEWINGS_START = 93,
	TRES_PSA_PROMISEWINGS_MOVE = 94,
	TRES_PSA_PROMISEWINGS_FINISH = 95,
	TRES_PSA_PROMISEWINGS_END = 96,
	TRES_PSA_LGRX_PHASE_START = 97,
	TRES_PSA_LGRX_ADD_COMMAND_FINISH = 98,
	TRES_PSA_LGRX_RUSH_START = 99,
	TRES_PSA_LGRX_RUSH_LAST = 100,
	TRES_PSA_LGRX_RUSH_END = 101,
	TRES_PSA_LGRX_RUSH_HIT = 102,
	TRES_PSA_LGRX_GUARD_HIT = 103,
	TRES_PSA_LGRX_GUARDCOUNTER = 104,
	TRES_PSA_LGRX_REACTION_CUT1 = 105,
	TRES_PSA_LGRX_REACTION_CUT2 = 106,
	TRES_PSA_LGRX_REACTION_CUT3 = 107,
	TRES_PSA_LGRX_REACTION_CUT4 = 108,
	TRES_PSA_LGRX_REACTION_CUT5 = 109,
	TRES_PSA_LGRX_REACTION_CUT6 = 110,
	TRES_PSA_LGRX_REACTION_CUT7 = 111,
	TRES_PSA_LGRX_REACTION_CUT8 = 112,
	TRES_PSA_LGRX_REACTION_CUT9 = 113,
	TRES_PSA_LGRX_REACTION_CUT10 = 114,
	TRES_PSA_LGRX_REACTION_CUT11 = 115,
	TRES_PSA_LGRX_REACTION_CUT12 = 116,
	TRES_PSA_LGRX_REACTION_SUCCESS = 117,
	TRES_PSA_LGRX_REACTION_FAIL = 118,
	TRES_PSA_LGRX_GAMECLEAR = 119,
	TRES_PSA_LGRX_GAMEOVER_ONE = 120,
	TRES_PSA_LGRX_GAMEOVER_ALL = 121,
	TRES_PSA_MIRX_REPLICA_LASER_OMEN_START = 122,
	TRES_PSA_MIRX_REPLICA_WARP_ATTACK_START = 123,
	TRES_PSA_MIRX_MICKEY_BLOW_START = 124,
	TRES_PSA_MIRX_MICKEY_DOWN_START = 125,
	TRES_PSA_MIRX_MICKEY_DOWN_DURING = 126,
	TRES_PSA_MIRX_MICKEY_DOWN_END = 127,
	TRES_PSA_MIRX_MICKEY_FAILDE_12_HOLY_SEAL = 128,
	TRES_PSA_MIRX_MICKEY_RISE_LAST_HOLY_COMMAND = 129,
	TRES_PSA_MIRX_MICKEY_LAST_HOLY_START = 130,
	TRES_PSA_MIRX_MICKEY_TIRED_START = 131,
	TRES_PSA_MIRX_MICKEY_TIRED_END = 132,
	TRES_PSA_MIRX_REPLICA_STATE_END = 133,
	TRES_PSA_MIRX_REPLICA_FULLFIRE_LASER_OMEN_START = 134,
	TRES_PSA_MAX = 135 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresActorSpecificActionID
{
	TRES_ASA_BOSS_DIE = 0,
	TRES_ASA_SATYR_SCRUM = 1,
	TRES_ASA_SATYR_WARP = 2,
	TRES_ASA_GOOFYSHOOT_TOWER = 3,
	TRES_ASA_GOOFYSHOOT_TARUNVERSED = 4,
	TRES_ASA_GOOFYSHOOT_GENERAL = 5,
	TRES_ASA_TURTLEFROG_INHALE = 6,
	TRES_ASA_TURTLEFROG_SPIT = 7,
	TRES_ASA_DAVYJONES_DRAWINGTOSS = 8,
	TRES_ASA_DAVYJONES_DRAWINGEND = 9,
	TRES_ASA_TORNADO_INHALE_START = 10,
	TRES_ASA_TORNADO_LAUNCH_START = 11,
	TRES_ASA_TORNADO_LAUNCH_END = 12,
	TRES_ASA_PLANEBOSS_SHAKEOFF_START = 13,
	TRES_ASA_PLANEBOSS_SHAKEOFF_END = 14,
	TRES_ASA_PLANEBOSS_TURNAROUND_START = 15,
	TRES_ASA_E_EX027_EAT_BIND_START = 16,
	TRES_ASA_E_EX027_EAT_BIND_END = 17,
	TRES_ASA_E_EX027_BITE_BIND_START = 18,
	TRES_ASA_E_EX027_BITE_BIND_END = 19,
	TRES_ASA_E_EX054_JUMP_CHANGE_CAMERA = 20,
	TRES_ASA_E_CA901_TENTACLE_SUMMONS_CAMERA = 21,
	TRES_ASA_E_EX721_FLASH_CAMERA = 22,
	TRES_ASA_E_CA404_BEFORE_STOLETRAP = 23,
	TRES_ASA_E_CA404_EXEC_STOLETRAP = 24,
	TRES_ASA_GUMISHIP_WORLD_SYMBOL_START = 25,
	TRES_ASA_GUMISHIP_TRAVEL_POINT_START = 26,
	TRES_ASA_GUMISHIP_FINISHED_BATTLE_WIPE_START = 27,
	TRES_ASA_LEVLE_PRIZEBOX_FOOD_GET = 28,
	TRES_ASA_MIRX_REPLICA_WARP_ATTACK_START = 29,
	TRES_ASA_MIRX_REPLICA_WARP_ATTACK_END = 30,
	TRES_ASA_MIRX_MICKEY_HOLY_SEAL_START = 31,
	TRES_ASA_MIRX_MICKEY_HOLY_SEAL_END = 32,
	TRES_ASA_MIRX_MICKEY_HIT_FINISH_ATTACK = 33,
	TRES_ASA_MAX = 34 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresPlayerFlyModes
{
	TPF_GLIDE = 0,
	TPF_SUPER_SLIDE = 1,
	TPF_SONIC_SLIDE = 2,
	TPF_SUPER_FLIGHT = 3,
	TPF_AIR_DODGE = 4,
	TPF_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyMajorUseID
{
	MAJOR_USE_ID_COMMON = 0,
	MAJOR_USE_ID_BATTLE_PORTAL = 1,
	MAJOR_USE_ID_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemydw407Region
{
	TRES_ENEMY_DW407_REGION_RIGHTHAND = 0,
	TRES_ENEMY_DW407_REGION_LEFTHAND = 1,
	TRES_ENEMY_DW407_REGION_HEAD = 2,
	TRES_ENEMY_DW407_REGION_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemydw407ViewWay
{
	TRES_ENEMY_DW407_VIEWWAY_SEPARATESETTING = 0,
	TRES_ENEMY_DW407_VIEWWAY_HEIGHTFIXED = 1,
	TRES_ENEMY_DW407_VIEWWAY_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGimmickInstanceManagerInstanceState
{
	Alive = 0,
	Destroy = 1,
	ETresGimmickInstanceManagerInstanceState_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyToyKind
{
	TRES_ENEMY_TOY_KIND_UNKNOWN = 0,
	TRES_ENEMY_TOY_KIND_MONSTER = 1,
	TRES_ENEMY_TOY_KIND_ANGELICAMBER = 2,
	TRES_ENEMY_TOY_KIND_BOUNCYPETS_PIGS = 3,
	TRES_ENEMY_TOY_KIND_BOUNCYPETS_DOG = 4,
	TRES_ENEMY_TOY_KIND_BOUNCYPETS_CAT = 5,
	TRES_ENEMY_TOY_KIND_BOUNCYPETS_ELEPHANT = 6,
	TRES_ENEMY_TOY_KIND_BOUNCYPETS_COW = 7,
	TRES_ENEMY_TOY_KIND_BOUNCYPETS_FROG = 8,
	TRES_ENEMY_TOY_KIND_PATCHWORKANIMALS_PANDA = 9,
	TRES_ENEMY_TOY_KIND_PATCHWORKANIMALS_LION = 10,
	TRES_ENEMY_TOY_KIND_ROBO_ELEPHANT = 11,
	TRES_ENEMY_TOY_KIND_ROBO_FAN_WHITE = 12,
	TRES_ENEMY_TOY_KIND_ROBO_FAN_BLUE = 13,
	TRES_ENEMY_TOY_KIND_ROBO_FAN_GREEN = 14,
	TRES_ENEMY_TOY_KIND_MAX = 15 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresHologramSubAnimReplaceType
{
	ETresHologramSubAnimReplaceType_None = 0,
	ETresHologramSubAnimReplaceType_LeftHand = 1,
	ETresHologramSubAnimReplaceType_RightHand = 2,
	ETresHologramSubAnimReplaceType_LeftHand2 = 3,
	ETresHologramSubAnimReplaceType_RightHand2 = 4,
	ETresHologramSubAnimReplaceType_LeftHand3 = 5,
	ETresHologramSubAnimReplaceType_RightHand3 = 6,
	ETresHologramSubAnimReplaceType_1_Max = 7 UMETA(Hidden),
	ETresHologramSubAnimReplaceType_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EDancePerformType
{
	EDancePerformType_NONE = 0,
	SPIN_PERFORM = 1,
	STEP_PERFORM = 2,
	PAIR_IN = 3,
	PAIR_LOOP = 4,
	PAIR_OUT = 5,
	PAIR_OUTIN_OUT = 6,
	PAIR_OUTIN_IN = 7,
	PAIR_CHANGE = 8,
	PAIR_CHANGE_FAILED = 9,
	SPECIAL_MOVE_SUCCESS = 10,
	SITUATION_COMMAND = 11,
	RAPUNZEL_FINISH = 12,
	CLAP_ACTION = 13,
	EDancePerformType_MAX = 14 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresRaDanceAreaType
{
	RA_DANCE_NONE = 0,
	RA_DANCE_NORMAL = 1,
	RA_DANCE_RETURN = 2,
	RA_DANCE_CENTER = 3,
	RA_DANCE_CENTER_OUT = 4,
	RA_DANCE_OUTFIELD = 5,
	RA_DANCE_RAPUNZEL = 6,
	RA_DANCE_FLYNN = 7,
	RA_DANCE_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EDanceActorAction
{
	NORMAL_STEP = 0,
	INVITE = 1,
	INVITE01 = 2,
	EDanceActorAction_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EDanceActorType
{
	MALE = 0,
	FEMALE = 1,
	ANY = 2,
	EDanceActorType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGimmickDistanceBetweenPlayer
{
	ETresGimmickDistanceBetweenPlayer_None = 0,
	ETresGimmickDistanceBetweenPlayer_Near = 1,
	ETresGimmickDistanceBetweenPlayer_Middle = 2,
	ETresGimmickDistanceBetweenPlayer_Far = 3,
	ETresGimmickDistanceBetweenPlayer_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGimmickLookAtType
{
	GLTYPE_NONE = 0,
	GLTYPE_ALWAYS_TRUE = 1,
	GLTYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGimmickLookAtTrackingType
{
	GLTTYPE_NONE = 0,
	GLTTYPE_PLAYER = 1,
	GLTTYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EDanceSpecialPerformType
{
	BARREL = 0,
	FLAG = 1,
	CART = 2,
	EDanceSpecialPerformType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIHudDanceResult
{
	ETresUIHudDanceResult_RankA = 0,
	ETresUIHudDanceResult_RankB = 1,
	ETresUIHudDanceResult_RankC = 2,
	ETresUIHudDanceResult_RankD = 3,
	ETresUIHudDanceResult_1_MAX = 4,
	ETresUIHudDanceResult_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EDanceClapMissionType
{
	PATTERN = 0,
	PATTERN01 = 1,
	PATTERN02 = 2,
	PATTERN_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipCollisionShape
{
	CS_SPHERE = 0,
	CS_CAPSULE = 1,
	CS_CAPSULE_ROOT = 2,
	CS_BOX = 3,
	CS_RING = 4,
	CS_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipCollisionPriority
{
	CP_HIGH = 0,
	CP_NORMAL = 1,
	CP_LOW = 2,
	CP_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipWeaponPrimType
{
	ETresGumiShipWeaponPrimType_SEQUENCE = 0,
	ETresGumiShipWeaponPrimType_NORMAL_WEAPON = 1,
	ETresGumiShipWeaponPrimType_SPECIAL_WEAPON = 2,
	ETresGumiShipWeaponPrimType_AUTO_MULTI_LOCKON_WEAPON = 3,
	ETresGumiShipWeaponPrimType_MANUAL_MULTI_LOCKON_WEAPON = 4,
	ETresGumiShipWeaponPrimType_NONE = 5,
	ETresGumiShipWeaponPrimType_TYPE_MAX = 6 UMETA(Hidden),
	ETresGumiShipWeaponPrimType_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipWeaponSequencePort
{
	WS_INDEX = 0,
	WS_INDEX01 = 1,
	WS_INDEX02 = 2,
	WS_INDEX03 = 3,
	WS_INDEX_SP = 4,
	WS_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipBadStateType
{
	ETresGumiShipBadStateType_BS_NONE = 0,
	ETresGumiShipBadStateType_BS_STUN = 1,
	ETresGumiShipBadStateType_BS_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipReactionType
{
	RT_NONE = 0,
	RT_BLOW_SMALL = 1,
	RT_BLOW_MIDDLE = 2,
	RT_BLOW_BIG = 3,
	RT_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipPlayerAccelerationType
{
	AT_NONE_TYPE = 0,
	AT_GEAR_CHANGE_TYPE = 1,
	AT_ACCELERATOR_TYPE = 2,
	AT_TYPE_MAX = 3 UMETA(Hidden),
	AT_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipPlayerMovementType
{
	MT_NONE_TYPE = 0,
	MT_DEFAULT_TYPE = 1,
	MT_EXPERT_TYPE = 2,
	MT_TRACKING_TYPE = 3,
	MT_RAIL_SLIDE_TYPE = 4,
	MT_RAIL_SLIDE_TYPE_TRACKING_LIKE = 5,
	MT_DEBUG_TYPE = 6,
	MOVE_TYPE_MAX = 7 UMETA(Hidden),
	ETresGumiShipPlayerMovementType_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipSplineEventType
{
	ENEMY_MOVE_SPEED_UP_POINT = 0,
	ENEMY_MOVE_SPEED_DOWN_POINT = 1,
	ENEMY_ATTACK_CHECK_START_POINT = 2,
	ENEMY_SPECIAL_EVENT_TRIGGER_POINT = 3,
	ARRIVED_SPLINE_END_POINT = 4,
	SPLINE_ADDITIONAL_DATA_KIND_MAX = 5 UMETA(Hidden),
	ETresGumiShipSplineEventType_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipEnemyStateID
{
	BLANK_STATE = 0,
	DEAD_STATE = 1,
	APPEAR_STATE = 2,
	DISAPPEAR_STATE = 3,
	IDLING_STATE = 4,
	CINEMATIC_MODE_STATE = 5,
	FIELD_ENCOUNT_SYMBOL_STATE = 6,
	ATTACK1_STATE = 7,
	ATTACK2_STATE = 8,
	ATTACK3_STATE = 9,
	ATTACK4_STATE = 10,
	ATTACK5_STATE = 11,
	ATTACK6_STATE = 12,
	ATTACK7_STATE = 13,
	ATTACK8_STATE = 14,
	ATTACK9_STATE = 15,
	ATTACK10_STATE = 16,
	ACTION1_STATE = 17,
	ACTION2_STATE = 18,
	ACTION3_STATE = 19,
	ACTION4_STATE = 20,
	ACTION5_STATE = 21,
	ACTION6_STATE = 22,
	ACTION7_STATE = 23,
	SPECIAL1_STATE = 24,
	SPECIAL2_STATE = 25,
	SPECIAL3_STATE = 26,
	SPECIAL4_STATE = 27,
	SPECIAL5_STATE = 28,
	SPECIAL6_STATE = 29,
	SPECIAL7_STATE = 30,
	STATE_ID_MAX = 31 UMETA(Hidden),
	ETresGumiShipEnemyStateID_MAX = 32 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipEnemyID
{
	ENEMY_ID_NONE = 0,
	E_GM601 = 1,
	E_GM602 = 2,
	E_GM603 = 3,
	E_GM604 = 4,
	E_GM605 = 5,
	E_GM606 = 6,
	E_GM607 = 7,
	E_GM608 = 8,
	E_GM609 = 9,
	E_GM610 = 10,
	E_GM611 = 11,
	E_GM612 = 12,
	E_GM613 = 13,
	E_GM614 = 14,
	E_GM615 = 15,
	E_GM616 = 16,
	E_GM617 = 17,
	E_GM618 = 18,
	E_GM632 = 19,
	E_GM619 = 20,
	E_GM620 = 21,
	E_GM621 = 22,
	E_GM622 = 23,
	E_GM623 = 24,
	E_GM624 = 25,
	E_GM625 = 26,
	E_GM626 = 27,
	ENEMY_ID_MAX = 28 UMETA(Hidden),
	ETresGumiShipEnemyID_MAX = 29 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipEnemyLookAtType
{
	KEEP_SPLINE_MOVE_DIRECTION = 0,
	TURN_TO_GUMI_SHIP_PLAYER = 1,
	TURN_TO_CAMERA_OFFSET_LOCATION = 2,
	DIRECTION_TYPE_MAX = 3 UMETA(Hidden),
	ETresGumiShipEnemyLookAtType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipEnemyStateResult
{
	RESULT_SUCCESS = 0,
	RESULT_FAILED = 1,
	RESULT_ABORT = 2,
	RESULT_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipGimmickID
{
	G_GM_000 = 0,
	G_GM_002 = 1,
	G_GM_020 = 2,
	G_GM_040 = 3,
	G_GM_050 = 4,
	G_GM = 5,
	G_GM01 = 6,
	G_GM02 = 7,
	G_GM03 = 8,
	G_GM_105 = 9,
	G_GM_10501 = 10,
	G_GM_10502 = 11,
	G_GM04 = 12,
	G_GM05 = 13,
	G_GM06 = 14,
	G_GM07 = 15,
	G_GM08 = 16,
	G_GM_140 = 17,
	G_GM_14001 = 18,
	G_GM_14002 = 19,
	G_GM09 = 20,
	G_GM_141 = 21,
	G_GM_14101 = 22,
	G_GM_14102 = 23,
	G_GM_14103 = 24,
	G_GM10 = 25,
	G_GM_142 = 26,
	G_GM11 = 27,
	G_GM12 = 28,
	G_GM13 = 29,
	G_GM14 = 30,
	G_GM15 = 31,
	G_GM16 = 32,
	G_GM17 = 33,
	G_GM18 = 34,
	G_GM_253 = 35,
	G_GM_25301 = 36,
	G_GM_25302 = 37,
	G_GM_25303 = 38,
	G_GM_25304 = 39,
	G_GM_25305 = 40,
	G_GM_253_6 = 41,
	G_GM_253_601 = 42,
	G_GM_253_602 = 43,
	G_GM_253_603 = 44,
	G_GM_253_7 = 45,
	G_GM_253_701 = 46,
	G_GM_253_8 = 47,
	G_GM_253_9 = 48,
	G_GM_253_901 = 49,
	G_GM_256 = 50,
	G_GM_25601 = 51,
	G_GM_25602 = 52,
	G_GM_25603 = 53,
	G_GM_25604 = 54,
	G_GM_25605 = 55,
	G_GM_256_6 = 56,
	G_GM_256_601 = 57,
	G_GM_256_602 = 58,
	G_GM_256_603 = 59,
	G_GM_256_7 = 60,
	G_GM_256_701 = 61,
	G_GM_256_8 = 62,
	G_GM_256_9 = 63,
	G_GM_256_901 = 64,
	G_GM19 = 65,
	G_GM20 = 66,
	G_GM21 = 67,
	G_GM22 = 68,
	G_GM23 = 69,
	G_GM24 = 70,
	G_GM25 = 71,
	G_GM_266 = 72,
	G_GM_26601 = 73,
	G_GM_26602 = 74,
	G_GM26 = 75,
	G_GM_267 = 76,
	G_GM_268 = 77,
	G_GM27 = 78,
	G_GM_269 = 79,
	G_GM28 = 80,
	G_GM29 = 81,
	G_GM_NONE = 82,
	G_GM_MAX = 83 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipBattleMissionEndFactorType
{
	BMEF_NONE = 0,
	BMEF_RETRY = 1,
	BMEF_QUIT = 2,
	BMEF_SEARCH_RESTART = 3,
	BMEF_NORMAL = 4,
	BMEF_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipBattleMissionRankType
{
	BMRT_A = 0,
	BMRT_B = 1,
	BMRT_C = 2,
	BMRT_D = 3,
	BMRT_E = 4,
	BMRT_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipEnemyBattleFinishType
{
	BATTLE_QUIT_SELECT = 0,
	BATTLE_RETRY_SELECT = 1,
	RETURN_FIELD_QUEST_SELECT = 2,
	BATTLE_FINISH_TYPE_MAX = 3 UMETA(Hidden),
	ETresGumiShipEnemyBattleFinishType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipEnemyTerritoryID
{
	E_GM01_TE_01 = 0,
	E_GM01_TE_02 = 1,
	E_GM01_TE_03 = 2,
	E_GM01_TE_04 = 3,
	E_GM01_TE_05 = 4,
	E_GM01_TE_06 = 5,
	E_GM01_TE_07 = 6,
	E_GM01_TE_08 = 7,
	E_GM01_TE_09 = 8,
	E_GM01_TE = 9,
	E_GM01_TE01 = 10,
	E_GM01_TE02 = 11,
	E_GM02_TE_01 = 12,
	E_GM02_TE_02 = 13,
	E_GM02_TE_03 = 14,
	E_GM02_TE_04 = 15,
	E_GM02_TE_05 = 16,
	E_GM02_TE_06 = 17,
	E_GM02_TE_07 = 18,
	E_GM02_TE_08 = 19,
	E_GM02_TE_09 = 20,
	E_GM02_TE = 21,
	E_GM02_TE01 = 22,
	E_GM02_TE02 = 23,
	E_GM02_TE03 = 24,
	E_GM02_TE04 = 25,
	E_GM02_TE05 = 26,
	E_GM02_TE06 = 27,
	E_GM02_TE07 = 28,
	E_GM03_TE_01 = 29,
	E_GM03_TE_02 = 30,
	E_GM03_TE_03 = 31,
	E_GM03_TE_04 = 32,
	E_GM03_TE_05 = 33,
	E_GM03_TE_06 = 34,
	E_GM03_TE_07 = 35,
	E_GM03_TE_08 = 36,
	E_GM03_TE_09 = 37,
	E_GM03_TE = 38,
	E_GM03_TE01 = 39,
	E_GM03_TE02 = 40,
	E_GM04_TE_01 = 41,
	E_GM04_TE_02 = 42,
	E_GM04_TE_03 = 43,
	E_GM04_TE_04 = 44,
	E_GM04_TE_05 = 45,
	E_GM04_TE_06 = 46,
	E_GM04_TE_07 = 47,
	E_GM04_TE_08 = 48,
	E_GM04_TE_09 = 49,
	E_GM04_TE = 50,
	E_GM04_TE01 = 51,
	E_GM04_TE02 = 52,
	ENEMY_TERRITORY_MAX = 53 UMETA(Hidden),
	ETresGumiShipEnemyTerritoryID_MAX = 54 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipEnemyBattleStartType
{
	ENEMY_SYMBOL_ENCOUNTER = 0,
	BOSS_ENEMY_BATTLE_TRIGGER = 1,
	FIELD_TYPE_ENEMY_BATTLE_TRIGGER = 2,
	BATTLE_START_TYPE_MAX = 3 UMETA(Hidden),
	ETresGumiShipEnemyBattleStartType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipBattleAreaState
{
	ACTIVE = 0,
	LEAVE_GUMI_SHIP = 1,
	ENEMY_DISAPPEAR = 2,
	NON_ACTIVE = 3,
	ETresGumiShipBattleAreaState_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipRailSlideType
{
	RST_NONE = 0,
	RST_ROUTE = 1,
	RST_TRACKING = 2,
	RST_SP_TRACKING = 3,
	RST_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipConsumptionType
{
	CT_CHARGE_TYPE = 0,
	CT_COUNT_TYPE = 1,
	CT_TIME_TYPE = 2,
	CT_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipBonusKind
{
	BK_DEFEAD_COUNT = 0,
	BK_QUICK_TEAM_DEFEAD = 1,
	BK_AREA_DEFEAD = 2,
	BK_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipBonusType
{
	BONUS_DEFEAT_ENEMY = 0,
	BONUS_DESTROY_PARTS = 1,
	BONUS_DEFEAT_GROUP = 2,
	BONUS_MAX = 3 UMETA(Hidden)
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
	ETresGameHelp_1_Max = 145 UMETA(Hidden),
	ETresGameHelp_Invalid = 146 UMETA(DisplayName = "Invalid"),
	ETresGameHelp_MAX = 147 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipMuzzleInfoCalcType
{
	MICT_RROT_RLOC = 0,
	MICT_RLOC_RROT = 1,
	MICT_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EWinniePuzzleComboEvalution
{
	EWinniePuzzleComboEvalution_None = 0,
	EWinniePuzzleComboEvalution_Good = 1,
	EWinniePuzzleComboEvalution_Cool = 2,
	EWinniePuzzleComboEvalution_Fantastic = 3,
	WinniePuzzleComboEvalution_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EWinniePuzzleScoreEvalutionInOneTurnJudgementMethod
{
	EWinniePuzzleScoreEvalutionInOneTurnJudgementMethod_ComboDependency = 0,
	EWinniePuzzleScoreEvalutionInOneTurnJudgementMethod_ScoreDependency = 1,
	WinniePuzzleScoreEvalutionInOneTurnJudgementMethod_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EWinniePuzzleUnitScoreSizeJudgementMethod
{
	UnitNumDependency = 0,
	ScoreDependency = 1,
	WinniePuzzleUnitScoreSizeJudgementMethod_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresForwardDirection
{
	X_FORWAED = 0,
	Y_FORWAED = 1,
	Z_FORWAED = 2,
	ETresForwardDirection_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresNavLinkSegment_Common
{
	NavLinkSegment_Left = 0,
	NavLinkSegment_Right = 1,
	NavLinkSegment_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESEQUENTIAL_EXEC_GET_TARGET_ACTOR
{
	ESEQUENTIAL_EXEC_GET_TARGET_ACTOR_Blackboard = 0,
	EQS_DefaultTargetSelection = 1,
	SEQUENTIAL_EXEC_GET_TARGET_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESEQUENTIAL_EXEC_TASK_MODE
{
	ESEQUENTIAL_EXEC_TASK_MODE_None = 0,
	ESEQUENTIAL_EXEC_TASK_MODE_MoveTo = 1,
	ESEQUENTIAL_EXEC_TASK_MODE_MoveToWaitAnimEnd = 2,
	ESEQUENTIAL_EXEC_TASK_MODE_TurnTo = 3,
	ESEQUENTIAL_EXEC_TASK_MODE_SetTempDestination_Querier = 4,
	ESEQUENTIAL_EXEC_TASK_MODE_SetTempDirection_Querier = 5,
	ESEQUENTIAL_EXEC_TASK_MODE_TerminateTask = 6,
	ESEQUENTIAL_EXEC_TASK_MODE_SkipSequence = 7,
	SEQUENTIAL_EXEC_TASK_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EQS_PARAM_VALUE_Enum
{
	Literal = 0,
	DistanceTargetToQuerier = 1,
	DistanceTargetToQuerierPlusMargin = 2,
	EQS_PARAM_VALUE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EQS_PARAM_NAME_Enum
{
	ONRING_MINRADIUS = 0,
	ONRING_MAXRADIUS = 1,
	ONRING_MINRADIUSITEMSPACING = 2,
	ONRING_ANGLE = 3,
	EQ_PAWNDISTANCE = 4,
	RANGE = 5,
	MINDISTANCE_FLOATVALUEMIN = 6,
	MINDISTANCE_FLOATVALUEMAX = 7,
	DOT_SCORINGFACTOR = 8,
	DOT_SCORINGFACTOR2 = 9,
	NOISE_SCORINGFACTOR = 10,
	EQS_PARAM_NAME_MAX = 11 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresAbilityEquipType
{
	ETresAbilityEquipType_NORMAL = 0,
	ETresAbilityEquipType_AUTO = 1,
	ETresAbilityEquipType_1_MAX = 2,
	ETresAbilityEquipType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresTextAbilityKind : uint8
{
	NONE = 0,
	TEXT_SHOOTFLOW_KB00_00 = 1,
	TEXT_SHOOTFLOW_KB09_00 = 2,
	TEXT_SHOOTFLOW_KB07_00 = 3,
	TEXT_SHOOTFLOW_KB01_00 = 4,
	TEXT_SHOOTFLOW_KB08_00 = 5,
	TEXT_SHOOTFLOW_KB11_00 = 6,
	TEXT_SHOOTFLOW_KB06_00 = 7,
	TEXT_SHOOTFLOW_KB05_00 = 8,
	TEXT_SHOOTFLOW_KB17_00 = 9,
	TEXT_SHOOTFLOW_KB03_00 = 10,
	TEXT_SHOOTFLOW_KB10_00 = 11,
	TEXT_SHOOTFLOW_KB02_00 = 12,
	TEXT_SHOOTFLOW_KB04_00 = 13,
	TEXT_SHOOTFLOW_KB00_01 = 14,
	TEXT_SHOOTFLOW_KB17_01 = 15,
	TEXT_SHOOTFLOW_KB01_01 = 16,
	TEXT_SHOOTFLOW_KB07_01 = 17,
	TEXT_SHOOTFLOW_KB01_02 = 18,
	TEXT_SHOOTFLOW_KB07_02 = 19,
	TEXT_SHOOTFLOW_KB02_01 = 20,
	TEXT_SHOOTFLOW_KB11_01 = 21,
	TEXT_SHOOTFLOW_KB03_01 = 22,
	TEXT_SHOOTFLOW_KB10_01 = 23,
	TEXT_SHOOTFLOW_KB09_01 = 24,
	TEXT_SHOOTFLOW_KB08_01 = 25,
	TEXT_SHOOTFLOW_KB04_01 = 26,
	TEXT_SHOOTFLOW_KB06_01 = 27,
	TEXT_SHOOTFLOW_KB05_01 = 28,
	TEXT_SHOOTFLOW_KB14_00 = 29,
	TEXT_FORM_EXPLOSION = 30,
	TEXT_FORM_STRIDE_BREAK = 31,
	TEXT_FORM_RIPPLE_FRIVE = 32,
	TEXT_FORM_HURRICANE_PERIOD = 33,
	TEXT_FORM_AERIAL_FINISH = 34,
	TEXT_FORM_MAGNE_SPLASH = 35,
	TEXT_FORM_STUN_IMPACT = 36,
	TEXT_FORM_SONIC_RAVE = 37,
	TEXT_FORM_LAST_ARCANUM = 38,
	TEXT_FORM_UNION_DISCORD = 39,
	TEXT_ACTION_KB0000 = 40,
	TEXT_ACTION_KB0001 = 41,
	TEXT_ACTION_KB0002 = 42,
	TEXT_ACTION_KB0003 = 43,
	TEXT_ACTION_KB0004 = 44,
	TEXT_ACTION_KB0005 = 45,
	TEXT_ACTION_KB0006 = 46,
	TEXT_ACTION_KB0007 = 47,
	TEXT_ACTION_KB0008 = 48,
	TEXT_ACTION_KB0009 = 49,
	TEXT_ACTION_KB0010 = 50,
	TEXT_ACTION_KB0011 = 51,
	TEXT_ACTION_KB0012 = 52,
	TEXT_ACTION_KB0013 = 53,
	TEXT_ACTION_KB0014 = 54,
	TEXT_ACTION_KB0015 = 55,
	TEXT_ACTION_KB0016 = 56,
	TEXT_ACTION_KB0017 = 57,
	TEXT_ACTION_KB0018 = 58,
	TEXT_ACTION_KB0019 = 59,
	TEXT_ACTION_KB0020 = 60,
	TEXT_ACTION_KB0021 = 61,
	TEXT_ACTION_KB0022 = 62,
	TEXT_ACTION_KB0023 = 63,
	TEXT_ACTION_KB0024 = 64,
	TEXT_ACTION_KB0025 = 65,
	TEXT_ACTION_KB0026 = 66,
	TEXT_ACTION_KB0027 = 67,
	TEXT_ACTION_KB0028 = 68,
	TEXT_ACTION_KB0029 = 69,
	TEXT_ACTION_KB0030 = 70,
	TEXT_ACTION_KB0031 = 71,
	TEXT_ACTION_KB0032 = 72,
	TEXT_ACTION_KB0033 = 73,
	TEXT_ACTION_KB0034 = 74,
	TEXT_ACTION_KB0035 = 75,
	TEXT_ACTION_KB0036 = 76,
	TEXT_ACTION_KB0037 = 77,
	TEXT_ACTION_KB0038 = 78,
	TEXT_ACTION_KB0039 = 79,
	TEXT_ACTION_KB0040 = 80,
	TEXT_ACTION_KB0041 = 81,
	TEXT_ACTION_KB0042 = 82,
	TEXT_ACTION_KB0043 = 83,
	TEXT_ACTION_KB0044 = 84,
	TEXT_ACTION_KB0045 = 85,
	TEXT_ACTION_KB0046 = 86,
	TEXT_ACTION_KB0047 = 87,
	TEXT_ACTION_SLASH_DODGE = 88,
	TEXT_ACTION_BACK_SLIDE = 89,
	TEXT_ACTION_BACK_SLASH = 90,
	TEXT_ACTION_REFLECT = 91,
	TEXT_ACTION_BARRIER_CRACKER = 92,
	TEXT_ACTION_FINISH_ARTS = 93,
	TEXT_MOVE_TELEPO = 94,
	TEXT_MOVE_ACTIVE_HOVER = 95,
	TEXT_MOVE_ICE_SLIDE = 96,
	TEXT_SUPPORT_FREE_FINISH = 97,
	TEXT_SUPPORT_FULL_CARE = 98,
	TEXT_SUPPORT_FULL_REFRESH = 99,
	TEXT_SUPPORT_HONEY_JAM = 100,
	TEXT_SUPPORT_MULTI_LOCK = 101,
	TEXT_SUPPORT_GUARD_BREAK = 102,
	TEXT_SUPPORT_TRANSFORM = 103,
	TEXT_SUPPORT_RISK_CHARGE = 104,
	TEXT_SHOOTFLOW_KB12_00 = 105,
	TEXT_SHOOTFLOW_KB13_00 = 106,
	TEXT_SHOOTFLOW_KB12_01 = 107,
	TEXT_ACTION_FM0100 = 108,
	TEXT_ACTION_FM0101 = 109,
	TEXT_ACTION_FM0102 = 110,
	TEXT_ACTION_FM0103 = 111,
	TEXT_ACTION_FM0104 = 112,
	TEXT_ACTION_FM0105 = 113,
	TEXT_ACTION_FM0106 = 114,
	TEXT_MOVE_FM0100 = 115,
	TEXT_ACTION_FM0107 = 116,
	TEXT_ACTION_FM0108 = 117,
	TEXT_ACTION_FM0109 = 118,
	TEXT_ACTION_FM0110 = 119,
	TEXT_ACTION_FM0200 = 120,
	TEXT_ACTION_FM0201 = 121,
	TEXT_ACTION_FM0202 = 122,
	TEXT_ACTION_FM0203 = 123,
	TEXT_ACTION_FM0204 = 124,
	TEXT_ACTION_FM0205 = 125,
	TEXT_ACTION_FM0206 = 126,
	TEXT_MOVE_FM0200 = 127,
	TEXT_ACTION_FM0207 = 128,
	TEXT_ACTION_FM0208 = 129,
	TEXT_ACTION_FM0209 = 130,
	_MAX = 131 UMETA(Hidden),
	ETresTextAbilityKind_MAX = 132 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresAbilityCategory
{
	ETresAbilityCategory_ACTION = 0,
	ETresAbilityCategory_MOVE = 1,
	ETresAbilityCategory_SUPPORT = 2,
	ETresAbilityCategory_1_MAX = 3 UMETA(Hidden),
	ETresAbilityCategory_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresAchievement : uint8
{
	ACH_00 = 0,
	ACH_01 = 1,
	ACH_02 = 2,
	ACH_03 = 3,
	ACH_04 = 4,
	ACH_05 = 5,
	ACH_06 = 6,
	ACH_07 = 7,
	ACH_08 = 8,
	ACH_09 = 9,
	ACH = 10,
	ACH01 = 11,
	ACH02 = 12,
	ACH03 = 13,
	ACH04 = 14,
	ACH05 = 15,
	ACH06 = 16,
	ACH07 = 17,
	ACH08 = 18,
	ACH09 = 19,
	ACH10 = 20,
	ACH11 = 21,
	ACH12 = 22,
	ACH13 = 23,
	ACH14 = 24,
	ACH15 = 25,
	ACH16 = 26,
	ACH17 = 27,
	ACH18 = 28,
	ACH19 = 29,
	ACH20 = 30,
	ACH21 = 31,
	ACH22 = 32,
	ACH23 = 33,
	ACH24 = 34,
	ACH25 = 35,
	ACH26 = 36,
	ACH27 = 37,
	ACH28 = 38,
	ACH29 = 39,
	ACH30 = 40,
	ACH31 = 41,
	ACH32 = 42,
	ACH33 = 43,
	ACH34 = 44,
	ACH35 = 45,
	ACH36 = 46,
	ACH37 = 47,
	ACH38 = 48,
	ACH39 = 49,
	ACH40 = 50,
	ACH41 = 51,
	Max = 52 UMETA(Hidden),
	ETresAchievement_MAX = 53 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EBX901_CommonAction
{
	EBX901_CommonAction_ResetBoolProperty = 0,
	EBX901_CommonAction_BlockEffect = 1,
	EBX901_CommonAction_BlockEffect_Wing = 2,
	EBX901_CommonAction_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyEx009ActionKind
{
	Singleshot_One = 0,
	Right_Step = 1,
	Left_Step = 2,
	ETresEnemyEx009ActionKind_1_MAX = 3 UMETA(Hidden),
	ETresEnemyEx009ActionKind_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyEx016ActionKind
{
	ETresEnemyEx016ActionKind_Footwork_Loop = 0,
	ETresEnemyEx016ActionKind_1_MAX = 1 UMETA(Hidden),
	ETresEnemyEx016ActionKind_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ECommonAction_e_ex306
{
	ECommonAction_e_ex306_ChangeDefaultBodyReactionType = 0,
	ECommonAction_e_ex306_SpawnClaymore = 1,
	ECommonAction_e_ex306_DestroyClaymore = 2,
	ECommonAction_e_ex306_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX354_CommonAction
{
	EEX354_CommonAction_ChangeField_Standard = 0,
	EEX354_CommonAction_ChangeField_Narrow = 1,
	EEX354_CommonAction_ChangeField_Doughnut = 2,
	EEX354_CommonAction_FinishQuickBattle = 3,
	EEX354_CommonAction_BodyNoReaction = 4,
	EEX354_CommonAction_NoAppearOnRevengeWarp = 5,
	EEX354_CommonAction_ResetBodyReaction = 6,
	EEX354_CommonAction_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ECommonAction_e_ex355
{
	ECommonAction_e_ex355_ChangeDefaultBodyReactionType = 0,
	ECommonAction_e_ex355_SpawnClaymore = 1,
	ECommonAction_e_ex355_DestroyClaymore = 2,
	ECommonAction_e_ex355_ShowBerserkGage = 3,
	ECommonAction_e_ex355_InitBerserkGage = 4,
	ECommonAction_e_ex355_SetBodyTypeNormal = 5,
	ECommonAction_e_ex355_SetBodyTypeBerserk = 6,
	ECommonAction_e_ex355_SetBodyTypeBlue = 7,
	ECommonAction_e_ex355_SetBodyTypeStun = 8,
	ECommonAction_e_ex355_NotifyHpDownAIChange = 9,
	ECommonAction_e_ex355_ResetBodyReactionType = 10,
	ECommonAction_e_ex355_MAX = 11 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX359_CommonAction
{
	EEX359_CommonAction_LockonOn = 0,
	EEX359_CommonAction_LockonOff = 1,
	EEX359_CommonAction_SceneChangeStart = 2,
	EEX359_CommonAction_SceneChangeEnd = 3,
	EEX359_CommonAction_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX731_CommonAction
{
	EEX731_CommonAction_Warp = 0,
	EEX731_CommonAction_ModeChange = 1,
	EEX731_CommonAction_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX734_CommonAction
{
	EEX734_CommonAction_ModeChange = 0,
	EEX734_CommonAction_MAX = 1 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETornado_CommonAction
{
	ETornado_CommonAction_GenerateDebris = 0,
	ETornado_CommonAction_Invincible = 1,
	ETornado_CommonAction_WarpIn = 2,
	ETornado_CommonAction_WarpOut = 3,
	ETornado_CommonAction_PermitAttack = 4,
	ETornado_CommonAction_ProhibitAttack = 5,
	ETornado_CommonAction_EndFloatingMode = 6,
	ETornado_CommonAction_BeginFloatingMode = 7,
	ETornado_CommonAction_BeginBigTornado = 8,
	ETornado_CommonAction_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyShipCondition
{
	MinCoreNum = 0,
	TypeMax = 1,
	ETresEnemyShipCondition_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EStoleTrapN
{
	EStoleTrapN_CPT_Destination = 0,
	EStoleTrapN_CPT_BattleAreaCenter = 1,
	EStoleTrapN_CPT_OwnerLocation = 2,
	EStoleTrapN_CPT_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex035_StepType
{
	ETresEnemy_e_ex035_StepType_Back = 0,
	ETresEnemy_e_ex035_StepType_Right = 1,
	ETresEnemy_e_ex035_StepType_Left = 2,
	ETresEnemy_e_ex035_StepType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex043_SideBoostType
{
	ETresEnemy_e_ex043_SideBoostType_Right = 0,
	ETresEnemy_e_ex043_SideBoostType_Left = 1,
	ETresEnemy_e_ex043_SideBoostType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresActionTaskParamType
{
	ETresActionTaskParamType_Float = 0,
	ETresActionTaskParamType_Int = 1,
	ETresActionTaskParamType_Bool = 2,
	ETresActionTaskParamType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EMovingTypes_e_ex047
{
	TRES_ENEMY_EX047_MOVE_FRONT = 0,
	TRES_ENEMY_EX047_MOVE_BACK = 1,
	TRES_ENEMY_EX047_MOVE_LEFT = 2,
	TRES_ENEMY_EX047_MOVE_RIGHT = 3,
	TRES_ENEMY_EX047_MOVE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum Ee_ex059_ACTION_TYPE
{
	Ee_ex059_ACTION_TYPE_Single = 0,
	Ee_ex059_ACTION_TYPE_INCLUSIVE = 1,
	Ee_ex059_ACTION_TYPE_CONDITION = 2,
	e_ex059_ACTION_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETeleportTypes_e_ex301
{
	TRES_ENEMY_EX301_TELEPORT_NORMAL = 0,
	TRES_ENEMY_EX301_TELEPORT_SPAWN = 1,
	TRES_ENEMY_EX301_TELEPORT_INVISIBLE = 2,
	TRES_ENEMY_EX301_TELEPORT_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyEx304WarpType
{
	ETresEnemyEx304WarpType_Warp = 0,
	ETresEnemyEx304WarpType_WarpFastMove = 1,
	ETresEnemyEx304WarpType_1_MAX = 2 UMETA(Hidden),
	ETresEnemyEx304WarpType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyStepDirectionType_e_ex309
{
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX309_RIGHT = 0,
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX309_LEFT = 1,
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX309_BACK = 2,
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX309_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EStepTypes_e_ex311
{
	TRES_ENEMY_EX311_BACK_STEP = 0,
	TRES_ENEMY_EX311_RIGHT_STEP = 1,
	TRES_ENEMY_EX311_LEFT_STEP = 2,
	TRES_ENEMY_EX311_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex313_StepType
{
	ETresEnemy_e_ex313_StepType_Back = 0,
	ETresEnemy_e_ex313_StepType_Right = 1,
	ETresEnemy_e_ex313_StepType_Left = 2,
	ETresEnemy_e_ex313_StepType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EStepTypes_e_ex360
{
	TRES_ENEMY_EX360_BACK_STEP = 0,
	TRES_ENEMY_EX360_RIGHT_STEP = 1,
	TRES_ENEMY_EX360_LEFT_STEP = 2,
	TRES_ENEMY_EX360_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyEx361CounterAfterActionKind
{
	ETresEnemyEx361CounterAfterActionKind_Kabutowari = 0,
	ETresEnemyEx361CounterAfterActionKind_AirCombo = 1,
	ETresEnemyEx361CounterAfterActionKind_1_MAX = 2 UMETA(Hidden),
	ETresEnemyEx361CounterAfterActionKind_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex361_StepType
{
	ETresEnemy_e_ex361_StepType_Back = 0,
	ETresEnemy_e_ex361_StepType_Right = 1,
	ETresEnemy_e_ex361_StepType_Left = 2,
	ETresEnemy_e_ex361_StepType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETeleportTypes_e_ex367
{
	TRES_ENEMY_EX367_TELEPORT_NORMAL = 0,
	TRES_ENEMY_EX367_TELEPORT_SPAWN = 1,
	TRES_ENEMY_EX367_TELEPORT_INVISIBLE = 2,
	TRES_ENEMY_EX367_TELEPORT_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex731_StepType
{
	ETresEnemy_e_ex731_StepType_Back = 0,
	ETresEnemy_e_ex731_StepType_Right = 1,
	ETresEnemy_e_ex731_StepType_Left = 2,
	ETresEnemy_e_ex731_StepType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyEEX771_ACTION_1WARP_KIND
{
	ETresEnemyEEX771_ACTION_1WARP_KIND_WARP_KIND_COMMON = 0,
	ETresEnemyEEX771_ACTION_1WARP_KIND_WARP_KIND_ESCAPE = 1,
	ETresEnemyEEX771_ACTION_1WARP_KIND_WARP_KIND_HVN_PHASE3_FIRST = 2,
	ETresEnemyEEX771_ACTION_1WARP_KIND_WARP_KIND_FTRND_END = 3,
	ETresEnemyEEX771_ACTION_1WARP_KIND_WARP_KIND_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyEEX773_ACTION_1WARP_KIND
{
	ETresEnemyEEX773_ACTION_1WARP_KIND_WARP_KIND_COMMON = 0,
	ETresEnemyEEX773_ACTION_1WARP_KIND_WARP_KIND_ESCAPE = 1,
	ETresEnemyEEX773_ACTION_1WARP_KIND_WARP_KIND_HVN_PHASE3_FIRST = 2,
	ETresEnemyEEX773_ACTION_1WARP_KIND_WARP_KIND_FTRND_END = 3,
	ETresEnemyEEX773_ACTION_1WARP_KIND_WARP_KIND_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EHVSceneTypes_e_ex781
{
	TRES_ENEMY_EX781_HV_GRAVITY_SCENE = 0,
	TRES_ENEMY_EX781_HV_CRAFT_SCENE = 1,
	TRES_ENEMY_EX781_HV_CRIMAX_SCENE = 2,
	TRES_ENEMY_EX781_HV_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresE_dw405VigilanceMoveVec
{
	TRES_ENEMY_DW405_VIGILANCE_MOVE_RIGHT = 0,
	TRES_ENEMY_DW405_VIGILANCE_MOVE_LEFT = 1,
	TRES_ENEMY_DW405_VIGILANCE_MOVE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyEx304FastMoveType
{
	ETresEnemyEx304FastMoveType_FastMove = 0,
	ETresEnemyEx304FastMoveType_FastMoveWarp = 1,
	ETresEnemyEx304FastMoveType_1_MAX = 2,
	ETresEnemyEx304FastMoveType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EKBRideTypes_e_ex311
{
	TRES_ENEMY_EX311_KBRIDE_ALL = 0,
	TRES_ENEMY_EX311_KBRIDE_CALL = 1,
	TRES_ENEMY_EX311_KBRIDE_RIDE = 2,
	TRES_ENEMY_EX311_KBRIDE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyEx353FastMoveType
{
	ETresEnemyEx353FastMoveType_Speed = 0,
	ETresEnemyEx353FastMoveType_Time = 1,
	ETresEnemyEx353FastMoveType_1_MAX = 2,
	ETresEnemyEx353FastMoveType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyHideAndSeekLocation_e_ex356
{
	ETresEnemyHideAndSeekLocation_e_ex356_Target = 0,
	ETresEnemyHideAndSeekLocation_e_ex356_Camera = 1,
	ETresEnemyHideAndSeekLocation_e_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex043_PhaseNum
{
	ETresEnemy_e_ex043_Phase1 = 0,
	ETresEnemy_e_ex043_Phase2 = 1,
	ETresEnemy_e_ex043_Phase3 = 2,
	ETresEnemy_e_ex043_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX354_WarpPosType
{
	EEX354_WarpPosType_Land = 0,
	EEX354_WarpPosType_Fly = 1,
	EEX354_WarpPosType_Fly_NoRev = 2,
	EEX354_WarpPosType_Max = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX354_WarpType
{
	EEX354_WarpType_Default = 0,
	EEX354_WarpType_Disappear = 1,
	EEX354_WarpType_Appear = 2,
	EEX354_WarpType_Max = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EBX901_QuickMoveDir
{
	EBX901_QuickMoveDir_Front = 0,
	EBX901_QuickMoveDir_Up = 1,
	EBX901_QuickMoveDir_Down = 2,
	EBX901_QuickMoveDir_Left = 3,
	EBX901_QuickMoveDir_Right = 4,
	EBX901_QuickMoveDir_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyHeight_e_ex357
{
	ETresEnemyHeight_e_ex357_Target = 0,
	ETresEnemyHeight_e_ex357_Ground = 1,
	ETresEnemyHeight_e_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyMove_e_ex357
{
	ETresEnemyMove_e_ex357_Target = 0,
	ETresEnemyMove_e_ex357_InvTarget = 1,
	ETresEnemyMove_e_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyArc_e_ex357
{
	ETresEnemyArc_e_ex357_Right = 0,
	ETresEnemyArc_e_ex357_Left = 1,
	ETresEnemyArc_e_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EWarpType_e_ex355
{
	EWarpType_e_ex355_Appear = 0,
	EWarpType_e_ex355_Disappear = 1,
	EWarpType_e_ex355_Default = 2,
	EWarpType_e_ex355_Max = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyEEX771_POINT_KIND
{
	ETresEnemyEEX771_POINT_KIND_POINT_KIND_NONE = 0,
	ETresEnemyEEX771_POINT_KIND_POINT_KIND_FACE_CLAW = 1,
	ETresEnemyEEX771_POINT_KIND_POINT_KIND_HEAVENLY_PILLAR_START = 2,
	ETresEnemyEEX771_POINT_KIND_POINT_KIND_HEAVENLY_PILLAR_END = 3,
	ETresEnemyEEX771_POINT_KIND_POINT_KIND_FLARE_TORNADO = 4,
	ETresEnemyEEX771_POINT_KIND_POINT_KIND_ALL_PILLAR_HEIGHT = 5,
	ETresEnemyEEX771_POINT_KIND_POINT_KIND_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyEEX773_POINT_KIND
{
	ETresEnemyEEX773_POINT_KIND_POINT_KIND_NONE = 0,
	ETresEnemyEEX773_POINT_KIND_POINT_KIND_FACE_CLAW = 1,
	ETresEnemyEEX773_POINT_KIND_POINT_KIND_HEAVENLY_PILLAR_START = 2,
	ETresEnemyEEX773_POINT_KIND_POINT_KIND_HEAVENLY_PILLAR_END = 3,
	ETresEnemyEEX773_POINT_KIND_POINT_KIND_FLARE_TORNADO = 4,
	ETresEnemyEEX773_POINT_KIND_POINT_KIND_ALL_PILLAR_HEIGHT = 5,
	ETresEnemyEEX773_POINT_KIND_POINT_KIND_ECLIPSE13_WARP_ESCAPE = 6,
	ETresEnemyEEX773_POINT_KIND_POINT_KIND_ECLIPSE13_WARP_APEAR = 7,
	ETresEnemyEEX773_POINT_KIND_POINT_KIND_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyEx006ScrumState
{
	ETresEnemyEx006ScrumState_WARP = 0,
	ETresEnemyEx006ScrumState_IDLE = 1,
	ETresEnemyEx006ScrumState_WANTED_TURN = 2,
	ETresEnemyEx006ScrumState_TURN = 3,
	ETresEnemyEx006ScrumState_WANTED_DASH = 4,
	ETresEnemyEx006ScrumState_DASH = 5,
	ETresEnemyEx006ScrumState_1_MAX = 6 UMETA(Hidden),
	ETresEnemyEx006ScrumState_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresTurnMode
{
	TurnInPlace = 0,
	QuickTurn = 1,
	ETresTurnMode_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresAIAction
{
	ETresAIAction_Move = 0,
	ETresAIAction_Fall = 1,
	ETresAIAction_Jump = 2,
	ETresAIAction_Custom = 3,
	ETresAIAction_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyca901WarpKind
{
	TRES_ENEMY_CA901_WARP_FIXEDPlACE = 0,
	TRES_ENEMY_CA901_WARP_TENTACLESUMMONS = 1,
	TRES_ENEMY_CA901_WARP_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex035_AIPointType
{
	ETresEnemy_e_ex035_AIPointType_Tree = 0,
	ETresEnemy_e_ex035_AIPointType_Carriage = 1,
	ETresEnemy_e_ex035_AIPointType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresAIActionAbortTimingID
{
	ID_None = 0,
	ID_00 = 1,
	ID_01 = 2,
	ID_02 = 3,
	ID_03 = 4,
	ID_04 = 5,
	ID_05 = 6,
	ID_06 = 7,
	ID_07 = 8,
	ID_08 = 9,
	ID_09 = 10,
	ID = 11,
	ID01 = 12,
	ID02 = 13,
	ID03 = 14,
	ID04 = 15,
	ID_MAX = 16 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresAIAttrResistKind
{
	ETresAIAttrResistKind_Normal = 0,
	ETresAIAttrResistKind_Low = 1,
	ETresAIAttrResistKind_High = 2,
	ETresAIAttrResistKind_Invalid = 3,
	ETresAIAttrResistKind_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresWaypointKind
{
	ETresWaypointKind_Unknown = 0,
	ETresWaypointKind_PositionForShooting = 1,
	ETresWaypointKind_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresNavAreaFlag
{
	ETresNavAreaFlag_Default = 0,
	ETresNavAreaFlag_Jump = 1,
	ETresNavAreaFlag_Fall = 2,
	ETresNavAreaFlag_Hop = 3,
	ETresNavAreaFlag_Rail = 4,
	ETresNavAreaFlag_Vault = 5,
	ETresNavAreaFlag_PowerWildOnlyTreeBranch = 6,
	ETresNavAreaFlag_LowJump = 7,
	ETresNavAreaFlag_WaterSurface = 8,
	ETresNavAreaFlag_Damage = 9,
	ETresNavAreaFlag_MAX = 10 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresFloorTestMode
{
	Navmesh = 0,
	Collision = 1,
	NavmeshAndCollisionCheck = 2,
	ETresFloorTestMode_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresFaceAnimType
{
	ETresFaceAnimType_NORMAL_AUTO = 0,
	ETresFaceAnimType_NORMAL_AUTO_IDLE_BATTLE = 1,
	ETresFaceAnimType_NORMAL_AUTO_BATTLE_IDLE = 2,
	ETresFaceAnimType_Normal = 3,
	ETresFaceAnimType_NO = 4,
	ETresFaceAnimType_NO01 = 5,
	ETresFaceAnimType_NO02 = 6,
	ETresFaceAnimType_NO03 = 7,
	ETresFaceAnimType_Battle = 8,
	ETresFaceAnimType_BATTLE_SINGLE = 9,
	ETresFaceAnimType_BA = 10,
	ETresFaceAnimType_Damage = 11,
	ETresFaceAnimType_DMG_LOOP = 12,
	ETresFaceAnimType_DMG_END = 13,
	ETresFaceAnimType_MAGIC_AUTO_IDLE_BATTLE = 14,
	ETresFaceAnimType_MAGIC2_AUTO_IDLE_BATTLE = 15,
	ETresFaceAnimType_USEITEM_AUTO_IDLE_BATTLE = 16,
	ETresFaceAnimType_NORMAL_AUTO_01 = 17,
	ETresFaceAnimType_SA_FREEZE = 18,
	ETresFaceAnimType_SA_BARN = 19,
	ETresFaceAnimType_SA_OIL = 20,
	ETresFaceAnimType_SA_STEAM = 21,
	ETresFaceAnimType_SA_THUNDER = 22,
	ETresFaceAnimType_AF_RC = 23,
	ETresFaceAnimType_AF_VS = 24,
	ETresFaceAnimType_AF_TC = 25,
	ETresFaceAnimType_WEP_BS = 26,
	ETresFaceAnimType_WEP_GUN = 27,
	ETresFaceAnimType_WEP_SD = 28,
	NORMAL_AUTO_EF01 = 29,
	NORMAL_AUTO_EU01 = 30,
	NORMAL_AUTO_ED01 = 31,
	NORMAL_AUTO_ED02 = 32,
	NORMAL_AUTO_ER01 = 33,
	NORMAL_AUTO_EL01 = 34,
	MOUTH_OPEN_01 = 35,
	MOUTH_OPEN_02 = 36,
	MOUTH_OPEN_03 = 37,
	MOUTH_OPEN_04 = 38,
	MOUTH_OPEN_05 = 39,
	TIPBALANCE_AUTO_R01 = 40,
	TIPBALANCE_AUTO_L01 = 41,
	RAILSLIDE_AUTO01 = 42,
	RAILSLIDE_AUTO02 = 43,
	PLEASURE_EYE00 = 44,
	PLEASURE_EYE01 = 45,
	PLEASURE_EYE02 = 46,
	PREASURE_LIP00 = 47,
	PREASURE_LIP01 = 48,
	PREASURE_LIP02 = 49,
	SURPRISE_EYE00 = 50,
	SURPRISE_EYE01 = 51,
	SURPRISE_LIP00 = 52,
	SURPRISE_LIP01 = 53,
	EMOTION_NO300 = 54,
	EMOTION_NO301 = 55,
	EMOTION_NO302 = 56,
	EMOTION_NO350 = 57,
	EMOTION_NO351 = 58,
	EMOTION_NO352 = 59,
	EMOTION_NO354 = 60,
	EMOTION_NO400 = 61,
	EMOTION_NO401 = 62,
	EMOTION_NO450 = 63,
	EMOTION_NO451 = 64,
	EMOTION_NO452 = 65,
	EMOTION_NO500 = 66,
	EMOTION_NO501 = 67,
	EMOTION_NO502 = 68,
	NORMAL_AUTO_EC01 = 69,
	EMOTION_TA_DE_E_00 = 70,
	EMOTION_TA_DE_E_01 = 71,
	EMOTION_TA_DE_E_02 = 72,
	EMOTION_TA_DE_E_03 = 73,
	EMOTION_TA_DE_E_04 = 74,
	EMOTION_TA_DE_E_05 = 75,
	EMOTION_TA_DE_E_06 = 76,
	EMOTION_TA_DE_E_07 = 77,
	EMOTION_TA_DE_E_08 = 78,
	EMOTION_TA_DE_E_09 = 79,
	EMOTION_TA_DE_E = 80,
	EMOTION_TA_DE_E01 = 81,
	EMOTION_TA_DE_E02 = 82,
	EMOTION_TA_DE_M_00 = 83,
	EMOTION_TA_DE_M_01 = 84,
	EMOTION_TA_DE_M_02 = 85,
	EMOTION_TA_DE_M_03 = 86,
	EMOTION_TA_SM_E_00 = 87,
	EMOTION_TA_SM_E_01 = 88,
	EMOTION_TA_SM_E_02 = 89,
	EMOTION_TA_SM_E_03 = 90,
	EMOTION_TA_SM_M_00 = 91,
	EMOTION_TA_SM_M_01 = 92,
	EMOTION_TA_SM_M_02 = 93,
	EMOTION_TA_SM_M_03 = 94,
	EMOTION_TA_AN_E_00 = 95,
	EMOTION_TA_AN_E_01 = 96,
	EMOTION_TA_AN_E_02 = 97,
	EMOTION_TA_AN_E = 98,
	EMOTION_TA_AN_M_00 = 99,
	EMOTION_TA_AN_M_01 = 100,
	EMOTION_TA_AN_M_02 = 101,
	EMOTION_TA_AN_M_03 = 102,
	EMOTION_TA_SA_E_00 = 103,
	EMOTION_TA_SA_E_01 = 104,
	EMOTION_TA_SA_E_02 = 105,
	EMOTION_TA_SA_E_03 = 106,
	EMOTION_TA_SA_E_04 = 107,
	EMOTION_TA_SA_E = 108,
	EMOTION_TA_SA_M_00 = 109,
	EMOTION_TA_SA_M_01 = 110,
	EMOTION_TA_SA_M_02 = 111,
	EMOTION_TA_SU_E_00 = 112,
	EMOTION_TA_SU_E_01 = 113,
	EMOTION_TA_SU_E_02 = 114,
	EMOTION_TA_SU_E = 115,
	EMOTION_TA_SU_M_00 = 116,
	EMOTION_TA_SU_M_02 = 117,
	FACE_ANIM_TYPE_MAX = 118 UMETA(Hidden),
	ETresFaceAnimType_MAX = 119 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresFaceAnimPlayPriority
{
	PRIO_DEFAULT = 0,
	PRIO = 1,
	PRIO01 = 2,
	PRIO02 = 3,
	PRIO03 = 4,
	PRIO04 = 5,
	PRIO05 = 6,
	PRIO06 = 7,
	PRIO07 = 8,
	PRIO08 = 9,
	PRIO_MAX = 10 UMETA(Hidden),
	_PRIO_MAX = 11 UMETA(Hidden),
	ETresFaceAnimPlayPriority_MAX = 12 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresSplineAnchorInterpType
{
	TSAIT_SPLINE = 0,
	TSAIT_LINEAR = 1,
	_TSAIT_MAX = 2 UMETA(Hidden),
	ETresSplineAnchorInterpType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETRES_ATTACH_OBJECT_NAME
{
	TRES_ATTACH_OBJECT_OWNER = 0,
	TRES_ATTACH_OBJECT_ATTACH_TO_OBJECT = 1,
	TRES_ATTACH_OBJECT_ATTACH_TO_WEAPON = 2,
	TRES_ATTACH_OBJECT_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresSoundAliasUnitID
{
	SEAU_NOTHING = 0,
	SEAU_RH_WEAPON = 1,
	SEAU_LH_WEAPON = 2,
	SEAU_RL_WEAPON = 3,
	SEAU_LL_WEAPON = 4,
	_SEAU_MAX = 5 UMETA(Hidden),
	ETresSoundAliasUnitID_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EFSQEX_EFFCT_CURVE_DATA_AXIS
{
	FSQEX_EFFCT_CURVE_DATA_AXIS_SCALE = 0,
	FSQEX_EFFCT_CURVE_DATA_AXIS_XYZ = 1,
	FSQEX_EFFCT_CURVE_DATA_AXIS_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresAtkCollRotAttachType
{
	TRES_ACRA_NORMAL = 0,
	TRES_ACRA_LOCAL = 1,
	TRES_ACRA_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyDw405PostWaitAction
{
	TRES_ENEMY_DW405_POSTWAITACTION_IDLE = 0,
	TRES_ENEMY_DW405_POSTWAITACTION_WHEELROLL = 1,
	TRES_ENEMY_DW405_POSTWAITACTION_WALK = 2,
	TRES_ENEMY_DW405_POSTWAITACTION_RESTBARRIER = 3,
	TRES_ENEMY_DW405_POSTWAITACTION_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyDw405AttackPossibleKind
{
	TRES_ENEMY_DW405_ATTACKPOSSIBLE_LAND = 0,
	TRES_ENEMY_DW405_ATTACKPOSSIBLE_AIR = 1,
	TRES_ENEMY_DW405_ATTACKPOSSIBLE_ALWAYS = 2,
	TRES_ENEMY_DW405_ATTACKPOSSIBLE_NONE = 3,
	TRES_ENEMY_DW405_ATTACKPOSSIBLE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyDw405ComboAttackType
{
	TRES_ENEMY_DW405_COMBOATTCKTYPE_LAND = 0,
	TRES_ENEMY_DW405_COMBOATTCKTYPE_AIR = 1,
	TRES_ENEMY_DW405_COMBOATTCKTYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyEx361ComboKind
{
	ETresEnemyEx361ComboKind_AirCombo_VerticalSwing = 0,
	ETresEnemyEx361ComboKind_AirCombo_Turning = 1,
	ETresEnemyEx361ComboKind_AirCombo_Thrust = 2,
	ETresEnemyEx361ComboKind_AirCombo_ContinuousAttack = 3,
	ETresEnemyEx361ComboKind_AirCombo_Beat = 4,
	ETresEnemyEx361ComboKind_1_MAX = 5 UMETA(Hidden),
	ETresEnemyEx361ComboKind_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresAttack_e_ex773_ReverseFlareMoveAxisType
{
	ETresAttack_e_ex773_ReverseFlareMoveAxisType_Camera = 0,
	ETresAttack_e_ex773_ReverseFlareMoveAxisType_TargetDir2D = 1,
	ETresAttack_e_ex773_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresHitWallAction_e_ex011
{
	ETresHitWallAction_e_ex011_None = 0,
	AttackExit = 1,
	Reflection = 2,
	ETresHitWallAction_e_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresDashLimit_e_ex011
{
	ETresDashLimit_e_ex011_Distance = 0,
	ETresDashLimit_e_ex011_Time = 1,
	ETresDashLimit_e_ex011_TargetDistance = 2,
	ETresDashLimit_e_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EFireTurnTypes_e_ex047
{
	TRES_ENEMY_EX047_FIRETURN_LEFT = 0,
	TRES_ENEMY_EX047_FIRETURN_RIGHT = 1,
	TRES_ENEMY_EX047_FIRETURN_LR = 2,
	TRES_ENEMY_EX047_FIRETURN_RADIAL = 3,
	TRES_ENEMY_EX047_FIRETURN_RANDOM = 4,
	TRES_ENEMY_EX047_FIRETURN_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EKunaiType
{
	EKunaiType_teR = 0,
	EKunaiType_teL = 1,
	EKunaiType_ashiR = 2,
	EKunaiType_ashiL = 3,
	EKunaiType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EMoveSlashTypes_e_ex301
{
	TRES_ENEMY_EX301_MOVESLASH1 = 0,
	TRES_ENEMY_EX301_MOVESLASH2 = 1,
	TRES_ENEMY_EX301_MOVESLASH3 = 2,
	TRES_ENEMY_EX301_MOVESLASH4 = 3,
	TRES_ENEMY_EX301_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyEx302ComboKind
{
	Combo_VerticalSwing = 0,
	Combo_SideSwing = 1,
	Combo_Attract = 2,
	Combo_JumpSlash = 3,
	Combo_NearBlow = 4,
	Combo_VerticalSwing2 = 5,
	Combo_AirShotDown = 6,
	ETresEnemyEx302ComboKind_1_MAX = 7 UMETA(Hidden),
	ETresEnemyEx302ComboKind_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyEx304ComboKind
{
	Combo_Short = 0,
	Combo_Medium = 1,
	Combo_Wide = 2,
	Combo_FinishBlow = 3,
	Combo_FinishToss = 4,
	ETresEnemyEx304ComboKind_1_MAX = 5 UMETA(Hidden),
	ETresEnemyEx304ComboKind_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex305_ShotDirType
{
	ETresEnemy_e_ex305_ShotDirType_Front = 0,
	ETresEnemy_e_ex305_ShotDirType_Back = 1,
	ETresEnemy_e_ex305_ShotDirType_Left = 2,
	ETresEnemy_e_ex305_ShotDirType_Right = 3,
	ETresEnemy_e_ex305_ShotDirType_Down = 4,
	ETresEnemy_e_ex305_MAX = 5
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex313_DarkHandComboType
{
	ETresEnemy_e_ex313_DarkHandComboType_Slash = 0,
	ETresEnemy_e_ex313_DarkHandComboType_Thrust = 1,
	ETresEnemy_e_ex313_DarkHandComboType_Finish = 2,
	ETresEnemy_e_ex313_DarkHandComboType_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyex351ComboKind
{
	ETresEnemyex351ComboKind_Combo_VerticalSwing = 0,
	ETresEnemyex351ComboKind_Combo_SideSwing = 1,
	ETresEnemyex351ComboKind_Combo_Attract = 2,
	ETresEnemyex351ComboKind_Combo_JumpSlash = 3,
	ETresEnemyex351ComboKind_Combo_NearBlow = 4,
	ETresEnemyex351ComboKind_Combo_VerticalSwing2 = 5,
	ETresEnemyex351ComboKind_Combo_AirShotDown = 6,
	ETresEnemyex351ComboKind_1_MAX = 7,
	ETresEnemyex351ComboKind_MAX = 8
};

UENUM(BlueprintType)
enum ETresEnemyEx353RootMotionCorrectionKind
{
	CurveData = 0,
	DistRate = 1,
	AimFinishLocation = 2,
	ETresEnemyEx353RootMotionCorrectionKind_1_MAX = 3,
	ETresEnemyEx353RootMotionCorrectionKind_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemyEx353ComboKind
{
	ETresEnemyEx353ComboKind_Combo_Short = 0,
	ETresEnemyEx353ComboKind_Combo_Medium = 1,
	ETresEnemyEx353ComboKind_Combo_Wide = 2,
	ETresEnemyEx353ComboKind_Combo_FinishBlow = 3,
	ETresEnemyEx353ComboKind_Combo_FinishToss = 4,
	ETresEnemyEx353ComboKind_Combo_KickUp = 5,
	ETresEnemyEx353ComboKind_Combo_RushRoundhouseKick = 6,
	ETresEnemyEx353ComboKind_1_MAX = 7,
	ETresEnemyEx353ComboKind_MAX = 8
};

UENUM(BlueprintType)
enum EEX354_NormalShotDistanceType
{
	EEX354_NormalShotDistanceType_Distance2D = 0,
	EEX354_NormalShotDistanceType_Distance3D = 1,
	EEX354_MAX = 2
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex354_ShotDirType
{
	ETresEnemy_e_ex354_ShotDirType_Front = 0,
	ETresEnemy_e_ex354_ShotDirType_Back = 1,
	ETresEnemy_e_ex354_ShotDirType_Left = 2,
	ETresEnemy_e_ex354_ShotDirType_Right = 3,
	ETresEnemy_e_ex354_ShotDirType_Down = 4,
	ETresEnemy_e_ex354_MAX = 5
};

UENUM(BlueprintType)
enum ETresEnemyWarpCutMotionType_e_ex357
{
	WarpCut = 0,
	ContinuityCutStart = 1,
	ContinuityCutEnd = 2,
	ETresEnemyWarpCutMotionType_e_ex357_MAX = 3
};

UENUM(BlueprintType)
enum EEX359_ComboStartType
{
	EEX359_ComboStartType = 0,
	EEX359_ComboStartType01 = 1,
	EEX359_ComboStartType02 = 2,
	EEX359_ComboStartType_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex361_DarkHandComboType
{
	ETresEnemy_e_ex361_DarkHandComboType_Slash = 0,
	ETresEnemy_e_ex361_DarkHandComboType_Thrust = 1,
	ETresEnemy_e_ex361_DarkHandComboType_Finish = 2,
	ETresEnemy_e_ex361_DarkHandComboType_VerticalSwing = 3,
	ETresEnemy_e_ex361_DarkHandComboType_MAX = 4
};

UENUM(BlueprintType)
enum EMoveSlashTypes_e_ex367
{
	TRES_ENEMY_EX367_MOVESLASH1 = 0,
	TRES_ENEMY_EX367_MOVESLASH2 = 1,
	TRES_ENEMY_EX367_MOVESLASH3 = 2,
	TRES_ENEMY_EX367_MOVESLASH4 = 3,
	TRES_ENEMY_EX367_MAX = 4
};

UENUM(BlueprintType)
enum Ee_ex731_DoubleClawType
{
	e_ex731_DoubleClawType_SINGLE = 0,
	e_ex731_DoubleClawType_CONDITION = 1,
	e_ex731_DoubleClawType_DASH = 2,
	e_ex731_DoubleClawType_MAX = 3
};

UENUM(BlueprintType)
enum ECloneBurstSlashTypes_e_ex360
{
	TRES_ENEMY_EX360_CLONEBURSTSLASH_MOVE_CUTDOWN = 0,
	TRES_ENEMY_EX360_CLONEBURSTSLASH_CUTUP = 1,
	TRES_ENEMY_EX360_CLONEBURSTSLASH_CUTDOWN = 2,
	TRES_ENEMY_EX360_CLONEBURSTSLASH_SHOOT = 3,
	TRES_ENEMY_EX360_CLONEBURSTSLASH_MAX = 4
};

UENUM(BlueprintType)
enum EKBRCloneBurstTypes_e_ex360
{
	TRES_ENEMY_EX360_CLONEBURST_SLASH = 0,
	TRES_ENEMY_EX360_CLONEBURST_CUTUP = 1,
	TRES_ENEMY_EX360_CLONEBURST_CUTDOWN = 2,
	TRES_ENEMY_EX360_CLONEBURST_ONLY_KEYBLADES = 3,
	TRES_ENEMY_EX360_CLONEBURST_CLONE_SLASH = 4,
	TRES_ENEMY_EX360_CLONEBURST_CLONE_CUTUP = 5,
	TRES_ENEMY_EX360_CLONEBURST_CLONE_CUTDOWN = 6,
	TRES_ENEMY_EX360_CLONEBURST_SHOOT_KEYBLADES = 7,
	TRES_ENEMY_EX360_CLONEBURST_MAX = 8
};

UENUM(BlueprintType)
enum EBreakSlashNumTypes_e_ex781
{
	TRES_ENEMY_EX781_NORMAL_SLASH = 0,
	TRES_ENEMY_EX781_CONTINUOUS_SLASH = 1,
	TRES_ENEMY_EX781_FEINT = 2,
	TRES_ENEMY_EX781_FAST_SLASH = 3,
	TRES_ENEMY_EX781_FAST_CONTISLASH = 4,
	TRES_ENEMY_EX781_MAX = 5
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex043_FlameFangBoostType
{
	ETresEnemy_e_ex043_FlameFangBoostType_Right = 0,
	ETresEnemy_e_ex043_FlameFangBoostType_Left = 1,
	ETresEnemy_e_ex043_FlameFangBoostType_MAX = 2
};

UENUM(BlueprintType)
enum ETresAttack2_e_ex081_RotationGliding_HitWallReactionType
{
	TRES_EX081_ATTACK2_HITWALLREACTIONTYPE_END = 0,
	TRES_EX081_ATTACK2_HITWALLREACTIONTYPE_REFLECTION = 1,
	TRES_EX081_ATTACK2_HITWALLREACTIONTYPE_ALONGWALL = 2,
	TRES_EX081_ATTACK2_HITWALLREACTIONTYPE_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyEx302SlowEndKind
{
	ETresEnemyEx302SlowEndKind_LastBlow_EndSlow = 0,
	ETresEnemyEx302SlowEndKind_LastContinuousHit_EndSlow = 1,
	ETresEnemyEx302SlowEndKind_Last_EndSlow = 2,
	ETresEnemyEx302SlowEndKind_1_MAX = 3,
	ETresEnemyEx302SlowEndKind_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex305_ArmWarpType
{
	ETresEnemy_e_ex305_ArmWarpType_Random = 0,
	ETresEnemy_e_ex305_ArmWarpType_Vertical = 1,
	ETresEnemy_e_ex305_ArmWarpType_Horizontal = 2,
	ETresEnemy_e_ex305_ArmWarpType_ETresEnemy_e_ex305_MAX = 3
};

UENUM(BlueprintType)
enum EEX354_ArmSpawnPosAdjustType
{
	EEX354_ArmSpawnPosAdjustType_Pos = 0,
	EEX354_ArmSpawnPosAdjustType_Dir = 1,
	EEX354_ArmSpawnPosAdjustType_Max = 2
};

UENUM(BlueprintType)
enum EEX354_ArmAimDirType
{
	EEX354_ArmAimDirType_ToTarget = 0,
	EEX354_ArmAimDirType_OwnerToSelf = 1,
	EEX354_ArmAimDirType_OwnerToTarget = 2,
	EEX354_ArmAimDirType_Max = 3
};

UENUM(BlueprintType)
enum EEX354_ArmSpawnDirType
{
	EEX355_ArmSpawnDirType_Owner = 0,
	EEX355_ArmSpawnDirType_Target = 1,
	EEX355_ArmSpawnDirType_ToTarget = 2,
	EEX355_ArmSpawnDirType_Camera = 3,
	EEX355_ArmSpawnDirType_Max = 4
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex354_ArmWarpPos
{
	ETresEnemy_e_ex354_ArmWarpPos_Target = 0,
	ETresEnemy_e_ex354_ArmWarpPos_Owner = 1,
	ETresEnemy_e_ex354_ArmWarpPos_ETresEnemy_e_ex354_MAX = 2
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex354_ArmWarpType
{
	ETresEnemy_e_ex354_ArmWarpType_Random = 0,
	ETresEnemy_e_ex354_ArmWarpType_Vertical = 1,
	ETresEnemy_e_ex354_ArmWarpType_Horizontal = 2,
	ETresEnemy_e_ex354_ArmWarpType_ETresEnemy_e_ex354_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex354_ArmTag
{
	ETresEnemy_e_ex354_ArmWarpTag_Left = 0,
	ETresEnemy_e_ex354_ArmWarpTag_Right = 1,
	ETresEnemy_e_ex354_ArmWarpTag_Max = 2
};

UENUM(BlueprintType)
enum EEX355_RushAwayTurnDir
{
	EEX355_RushAwayTurnDir_Default = 0,
	EEX355_RushAwayTurnDir_Right = 1,
	EEX355_RushAwayTurnDir_Left = 2,
	EEX355_RushAwayTurnDir_Max = 3
};

UENUM(BlueprintType)
enum EEX355_RushAwayTurnType
{
	EEX355_RushAwayTurnType_Destination = 0,
	EEX355_RushAwayTurnType_Target = 1,
	EEX355_RushAwayTurnType_Max = 2
};

UENUM(BlueprintType)
enum ETresEnemyCardThrow_e_ex356
{
	ETresEnemyCardThrow_e_ex356_First = 0,
	ETresEnemyCardThrow_e_ex356_Second = 1,
	ETresEnemyCardThrow_e_ex356_Finish = 2,
	ETresEnemyCardThrow_e_MAX = 3
};

UENUM(BlueprintType)
enum EBX901_ComboType
{
	EBX901_Combo_Claw = 0,
	EBX901_Combo_Punch = 1,
	EBX901_Combo_Chop = 2,
	EBX901_Combo_MAX = 3
};

UENUM(BlueprintType)
enum ETresEx304HandKind
{
	ETresEx304HandKind_Left = 0,
	ETresEx304HandKind_Right = 1,
	ETresEx304HandKind_1_Max = 2,
	ETresEx304HandKind_MAX = 3
};

UENUM(BlueprintType)
enum EDarkVolleyNumTypes_e_ex325
{
	TRES_ENEMY_EX047_DARKVOLLEYNUM1 = 0,
	TRES_ENEMY_EX047_DARKVOLLEYNUM4 = 1,
	TRES_ENEMY_EX047_MAX = 2
};

UENUM(BlueprintType)
enum ETresEnemyEx351RootMotionCorrectionKind
{
	ETresEnemyEx351RootMotionCorrectionKind_AimFinishLocation = 0,
	ETresEnemyEx351RootMotionCorrectionKind_DistRate = 1,
	ETresEnemyEx351RootMotionCorrectionKind_1_MAX = 2,
	ETresEnemyEx351RootMotionCorrectionKind_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyEx351KeyBladeComboKind
{
	Combo_LeftRotaion = 0,
	Combo_RightRotation = 1,
	AirCombo_VerticalSwing = 2,
	AirCombo_SideSwing = 3,
	AirCombo_Attract = 4,
	AirMaliceWhip_VerticalSwing = 5,
	AirMaliceWhip_SideSwing = 6,
	ETresEnemyEx351KeyBladeComboKind_1_MAX = 7,
	ETresEnemyEx351KeyBladeComboKind_MAX = 8
};

UENUM(BlueprintType)
enum ETresEx353HandKind
{
	ETresEx353HandKind_Left = 0,
	ETresEx353HandKind_Right = 1,
	ETresEx353HandKind_1_Max = 2,
	ETresEx353HandKind_MAX = 3
};

UENUM(BlueprintType)
enum EEX355_SwingTractionHorizontalDir
{
	EEX355_SwingTractionHorizontalDir_Both = 0,
	EEX355_SwingTractionHorizontalDir_Front = 1,
	EEX355_SwingTractionHorizontalDir_Rear = 2,
	EEX355_SwingTractionHorizontalDir_Max = 3
};

UENUM(BlueprintType)
enum EEX355_SwingTractionDir
{
	EEX355_SwingTractionDir_Both = 0,
	EEX355_SwingTractionDir_Up = 1,
	EEX355_SwingTractionDir_Down = 2,
	EEX355_SwingTractionDir_Max = 3
};

UENUM(BlueprintType)
enum ETresWeaponDirection_e_ex357
{
	ETresWeaponDirection_e_ex357_Vertical = 0,
	ETresWeaponDirection_e_ex357_Horizontal = 1,
	ETresWeaponDirection_e_ex357_1_Max = 2,
	ETresWeaponDirection_e_MAX = 3
};

/*UENUM(BlueprintType)
enum EEX359_BerserkComboType
{
	EEX359_BerserkComboType0 = 0,
	EEX359_BerserkComboType1 = 1,
	EEX359_BerserkComboType2 = 2,
	EEX359_BerserkComboType3 = 3,
	EEX359_BerserkComboType_1_Max = 4,
	EEX359_BerserkComboType_Max = 5
};*/

UENUM(BlueprintType)
enum ETresEnemyEx361SettingKind
{
	ETresEnemyEx361SettingKind_Myself = 0,
	ETresEnemyEx361SettingKind_Target = 1,
	ETresEnemyEx361SettingKind_Sandwich = 2,
	ETresEnemyEx361SettingKind_Ceiling = 3,
	ETresEnemyEx361SettingKind_Ring = 4,
	ETresEnemyEx361SettingKind_Row = 5,
	ETresEnemyEx361SettingKind_RowTarget = 6,
	ETresEnemyEx361SettingKind_1_MAX = 7,
	ETresEnemyEx361SettingKind_MAX = 8
};

UENUM(BlueprintType)
enum EPowerAlcanamNumTypes_e_ex362
{
	TRES_ENEMY_EX362_ATTACK_ALL = 0,
	TRES_ENEMY_EX362_ATTACK_TYPEA = 1,
	TRES_ENEMY_EX362_ATTACK_TYPEB = 2,
	TRES_ENEMY_EX362_ATTACK_TYPEC = 3,
	TRES_ENEMY_EX362_ATTACK_MAX = 4
};

UENUM(BlueprintType)
enum EBX901_BoostAttack_Mine
{
	EBX901_BoostAttack_Mine_Back = 0,
	EBX901_BoostAttack_Mine_Forward = 1,
	EBX901_BoostAttack_Mine_Turn = 2,
	EBX901_BoostAttack_Mine_Max = 3
};

UENUM(BlueprintType)
enum ETresAttack4AscensionTypes_e_ex301
{
	TRES_ATTACK4_ENEMY_EX301_ASCENSION1 = 0,
	TRES_ATTACK4_ENEMY_EX301_ASCENSION2 = 1,
	TRES_ATTACK4_ENEMY_EX301_ASCENSION3 = 2,
	TRES_ATTACK4_ENEMY_EX301_ASCENSION4 = 3,
	TRES_ATTACK4_ENEMY_EX301_ASCENSION5 = 4,
	TRES_ATTACK4_ENEMY_EX301_ASCENSION6 = 5,
	TRES_ATTACK4_ENEMY_EX301_ASCENSION7 = 6,
	TRES_ATTACK4_ENEMY_EX301_MAX = 7
};

UENUM(BlueprintType)
enum ETresEnemyPressCardAttribute_e_ex356
{
	ETresEnemyPressCardAttribute_e_ex356_None = 0,
	ETresEnemyPressCardAttribute_e_ex356_Fire = 1,
	ETresEnemyPressCardAttribute_e_ex356_Thunder = 2,
	ETresEnemyPressCardAttribute_e_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyContinuityCutAction_e_ex357
{
	Auto = 0,
	ForceLand = 1,
	ForceAir = 2,
	ETresEnemyContinuityCutAction_e_MAX = 3
};

UENUM(BlueprintType)
enum EWaterActionTypes_e_ex047
{
	TRES_ENEMY_EX047_WATERACTION_ALL = 0,
	TRES_ENEMY_EX047_WATERACTION_START = 1,
	TRES_ENEMY_EX047_WATERACTION_LOOP = 2,
	TRES_ENEMY_EX047_WATERACTION_END = 3,
	TRES_ENEMY_EX047_WATERACTION_MAX = 4
};

UENUM(BlueprintType)
enum ETresAttack5XIIIAttackTypes_e_ex301
{
	TRES_ATTACK5_ENEMY_EX301_XIIIATK1 = 0,
	TRES_ATTACK5_ENEMY_EX301_XIIIATK2 = 1,
	TRES_ATTACK5_ENEMY_EX301_XIIIATK3 = 2,
	TRES_ATTACK5_ENEMY_EX301_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyEx353EveryDirectionShotKind
{
	ETresEnemyEx353EveryDirectionShotKind_StartOrLoop = 0,
	ETresEnemyEx353EveryDirectionShotKind_End = 1,
	ETresEnemyEx353EveryDirectionShotKind_1_MAX = 2,
	ETresEnemyEx353EveryDirectionShotKind_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyWildDanceWarpHeight_e_ex358
{
	ETresEnemyWildDanceWarpHeight_e_ex358_Normal = 0,
	ETresEnemyWildDanceWarpHeight_e_ex358_Absolute = 1,
	ETresEnemyWildDanceWarpHeight_e_ex358_Relative = 2,
	ETresEnemyWildDanceWarpHeight_e_ex358_TargetOffset = 3,
	ETresEnemyWildDanceWarpHeight_e_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemyWildDanceWarpDirection_e_ex358
{
	ETresEnemyWildDanceWarpDirection_e_ex358_Right = 0,
	ETresEnemyWildDanceWarpDirection_e_ex358_Front = 1,
	ETresEnemyWildDanceWarpDirection_e_ex358_Left = 2,
	ETresEnemyWildDanceWarpDirection_e_MAX = 3
};

UENUM(BlueprintType)
enum EDarkSplicerTypes_e_ex360
{
	TRES_ENEMY_EX360_DARKSPLICER_MOVE_CUTDOWN = 0,
	TRES_ENEMY_EX360_DARKSPLICER_CUTDOWN = 1,
	TRES_ENEMY_EX360_DARKSPLICER_CUTUP = 2,
	TRES_ENEMY_EX360_DARKSPLICER_SPIN_CUTUP = 3,
	TRES_ENEMY_EX360_DARKSPLICER_MOVE_WCUT = 4,
	TRES_ENEMY_EX360_DARKSPLICER_WCUT = 5,
	TRES_ENEMY_EX360_DARKSPLICER_MOVE_SPINCUT = 6,
	TRES_ENEMY_EX360_DARKSPLICER_MAX = 7
};

UENUM(BlueprintType)
enum ETresEnemyEx361ThunderKind
{
	HomingBaseTarget = 0,
	FirstBaseTarget = 1,
	ETresEnemyEx361ThunderKind_1_MAX = 2,
	ETresEnemyEx361ThunderKind_MAX = 3
};

UENUM(BlueprintType)
enum ETresAttack5XIIIAttackTypes_e_ex367
{
	TRES_ATTACK5_ENEMY_EX367_XIIIATKSTART = 0,
	TRES_ATTACK5_ENEMY_EX367_CHANGECIRCLE = 1,
	TRES_ATTACK5_ENEMY_EX367_XIIIATKEND = 2,
	TRES_ATTACK5_ENEMY_EX367_MAX = 3
};

UENUM(BlueprintType)
enum EProjectileSpawnPos
{
	EProjectileSpawnPos_L = 0,
	EProjectileSpawnPos_R = 1,
	EProjectileSpawnPos_H = 2,
	EProjectileSpawnPos_Max = 3
};

UENUM(BlueprintType)
enum ETresHitWallAction_e_ex059
{
	ETresHitWallAction_e_ex059_None = 0,
	ETresHitWallAction_e_ex059_AttackExit = 1,
	ETresHitWallAction_e_ex059_ETresHitWallAction_e_MAX = 2
};

UENUM(BlueprintType)
enum EDarkRushTypes_e_ex325
{
	TRES_ENEMY_EX325_DARKRUSH_START = 0,
	TRES_ENEMY_EX325_DARKRUSH_STROM = 1,
	TRES_ENEMY_EX325_DARKRUSH_ATTACK = 2,
	TRES_ENEMY_EX325_DARKRUSH_FINISH = 3,
	TRES_ENEMY_EX325_DARKRUSH_MAX = 4
};

UENUM(BlueprintType)
enum EEX355_DashMiddleAction
{
	EEX355_DashMiddleAction_None = 0,
	EEX355_DashRoamDir_Accel = 1,
	EEX355_DashRoamDir_Swing = 2,
	EEX355_MAX = 3
};

UENUM(BlueprintType)
enum EEX355_DashRoamDir
{
	EEX355_DashRoamDir_Left = 0,
	EEX355_DashRoamDir_Right = 1,
	EEX355_DashRoamDir_MAX = 2
};

UENUM(BlueprintType)
enum EIceProjectileDestroyType_e_he903
{
	DestroyType_Destroy = 0,
	DestroyType_NoHoming = 1,
	DestroyType_Evade = 2,
	DestroyType_MAX = 3
};

UENUM(BlueprintType)
enum EEX355_CutDownClaymoreGoalBase
{
	EEX355_CutDownClaymoreGoalBase_Owner = 0,
	EEX355_CutDownClaymoreGoalBase_Target = 1,
	EEX355_CutDownClaymoreGoalBase_Map = 2,
	EEX355_CutDownClaymoreGoalBase_Max = 3
};

UENUM(BlueprintType)
enum EReverseSlashTypes_e_ex781
{
	TRES_ENEMY_EX781_RS_ALL = 0,
	TRES_ENEMY_EX781_RS_SLASH_UP = 1,
	TRES_ENEMY_EX781_RS_SLASH_DOWN = 2,
	TRES_ENEMY_EX781_RS_MAX = 3
};

UENUM(BlueprintType)
enum EBigTornadoProjPos
{
	EBigTornadoProjPos_L = 0,
	EBigTornadoProjPos_R = 1,
	EBigTornadoProjPos_MAX = 2
};

UENUM(BlueprintType)
enum ETresAttackDefinition
{
	ETresAttackDefinition_Unknown = 0,
	ETresAttackDefinition_Melee = 1,
	ETresAttackDefinition_Ranged = 2,
	ETresAttackDefinition_Dash = 3,
	ETresAttackDefinition_Jump = 4,
	ETresAttackDefinition_Custom = 5,
	ETresAttackDefinition_MAX = 6
};

UENUM(BlueprintType)
enum ETresHitWallAction
{
	ETresHitWallAction_None = 0,
	ETresHitWallAction_AttackExit = 1,
	ETresHitWallAction_Reflection = 2,
	ETresHitWallAction_MAX = 3
};

UENUM(BlueprintType)
enum ETresDashLimit
{
	ETresDashLimit_Distance = 0,
	ETresDashLimit_Time = 1,
	ETresDashLimit_TargetDistance = 2,
	ETresDashLimit_MAX = 3
};

UENUM(BlueprintType)
enum ETresJumpAttack
{
	ETresJumpAttack_Proximity = 0,
	ETresJumpAttack_Rush = 1,
	ETresJumpAttack_MAX = 2
};

UENUM(BlueprintType)
enum ETresAutoNavLinkDebugDrawLabels
{
	Disable = 0,
	Score = 1,
	Priority = 2,
	ETresAutoNavLinkDebugDrawLabels_MAX = 3
};

UENUM(BlueprintType)
enum ETresBPEM_SystemEventType
{
	ETresBPEM_SystemEventType_UNKNOWN = 0,
	ETresBPEM_SystemEventType_TICK_ENABLED = 1,
	ETresBPEM_SystemEventType_TICK_DISABLED = 2,
	ETresBPEM_SystemEventType_SUSPEND_START = 3,
	ETresBPEM_SystemEventType_SUSPEND_END = 4,
	ETresBPEM_MAX = 5
};

UENUM(BlueprintType)
enum ETresBPEM_BattleEventType
{
	ETresBPEM_BattleEventType_UNKNOWN = 0,
	HIT_ATTACK_PLAYER = 1,
	HIT_ATTACK_ENEMY = 2,
	HIT_ATTACK_NOREACTION_PLAYER = 3,
	HIT_ATTACK_NOREACTION_ENEMY = 4,
	MISS_ATTACK_PLAYER = 5,
	MISS_ATTACK_ENEMY = 6,
	GUARD_ATTACK = 7,
	IGNORE_TAKING_DAMAGE_PLAYER = 8,
	IGNORE_TAKING_DAMAGE_ENEMY = 9,
	RECOVERED_PLAYER = 10,
	RECOVERED_FRIEND = 11,
	FIREMAGIC_S = 12,
	BEGIN_SHOOTFLOW = 13,
	END_SHOOTFLOW = 14,
	BEGIN_ATHLETICFLOW = 15,
	END_ATHLETICFLOW = 16,
	BEGIN_ATTRACTIONFLOW = 17,
	END_ATTRACTIONFLOW = 18,
	BEGIN_DISNEYMAGIC = 19,
	END_DISNEYMAGIC = 20,
	BEGIN_STYLECHANGE = 21,
	END_STYLECHANGE = 22,
	BEGIN_STYLEFINISH = 23,
	END_STYLEFINISH = 24,
	ETresBPEM_BattleEventType_ETresBPEM_MAX = 25
};

UENUM(BlueprintType)
enum ETresBPEM_BattleType
{
	ETresBPEM_BattleType_UNKNOWN = 0,
	ETresBPEM_BattleType_XIII_A = 1,
	ETresBPEM_BattleType_XIII_B = 2,
	ETresBPEM_BattleType_XIII_E = 3,
	ETresBPEM_BattleType_ETresBPEM_MAX = 4
};

UENUM(BlueprintType)
enum ETresPlayerSpecialActionType
{
	ETresPlayerSpecialActionType_Guard = 0,
	ETresPlayerSpecialActionType_InvincibleTakeDamage = 1,
	ETresPlayerSpecialActionType_MAX = 2
};

UENUM(BlueprintType)
enum ETresCustomCompositeReturnCondition
{
	FirstSuccess = 0,
	FirstFailure = 1,
	LastNodeCompletes = 2,
	ETresCustomCompositeReturnCondition_MAX = 3
};

UENUM(BlueprintType)
enum ETresControlledRandomPeriod
{
	ETresControlledRandomPeriod_NoRandom = 0,
	ETresControlledRandomPeriod_VeryLowRandom = 1,
	ETresControlledRandomPeriod_LowRandom = 2,
	ETresControlledRandomPeriod_MediumRandom = 3,
	ETresControlledRandomPeriod_PureRandom = 4,
	ETresControlledRandomPeriod_Custom = 5,
	ETresControlledRandomPeriod_MAX = 6
};

UENUM(BlueprintType)
enum ETresArithmeticComparisonSource
{
	ETresArithmeticComparisonSource_Blackboard = 0,
	ETresArithmeticComparisonSource_ActorProperty = 1,
	ETresArithmeticComparisonSource_ActorFunction = 2,
	ETresArithmeticComparisonSource_LiteralValue = 3,
	ETresArithmeticComparisonSource_MAX = 4
};

UENUM(BlueprintType)
enum ETresCanCoopJoinRole
{
	Leader = 0,
	Follower = 1,
	LeaderOrFollower = 2,
	ETresCanCoopJoinRole_MAX = 3
};

UENUM(BlueprintType)
enum EEX354_TargetMoveDir
{
	EEX354_TargetMoveDir_Front = 0,
	EEX354_TargetMoveDir_Rear = 1,
	EEX354_TargetMoveDir_Right = 2,
	EEX354_TargetMoveDir_Left = 3,
	EEX354_TargetMoveDir_MAX = 4
};

UENUM(BlueprintType)
enum ETresHateCompare
{
	ETresHateCompare_Blackboard = 0,
	ETresHateCompare_MostHated = 1,
	ETresHateCompare_TotalHateAgainstAllEnemies = 2,
	ETresHateCompare_MAX = 3
};

UENUM(BlueprintType)
enum EInterruptableEvent
{
	EInterruptableEvent_IE_OnDamage = 0,
	EInterruptableEvent_IE_OnReflect = 1,
	EInterruptableEvent_IE_OnRevenge = 2,
	EInterruptableEvent_IE_OnDeath = 3,
	EInterruptableEvent_IE_OnScriptBegin = 4,
	EInterruptableEvent_IE_OnScriptEnd = 5,
	EInterruptableEvent_IE_MAX = 6
};

UENUM(BlueprintType)
enum ETresDecoratorMercunaRaycast
{
	ETresDecoratorMercunaRaycast_Forward = 0,
	ETresDecoratorMercunaRaycast_Left = 1,
	ETresDecoratorMercunaRaycast_Right = 2,
	ETresDecoratorMercunaRaycast_Back = 3,
	ETresDecoratorMercunaRaycast_Up = 4,
	ETresDecoratorMercunaRaycast_Down = 5,
	ETresDecoratorMercunaRaycast_Direct = 6,
	ETresDecoratorMercunaRaycast_MAX = 7
};

UENUM(BlueprintType)
enum ETresDecoratorNavigationRayDir
{
	ETresDecoratorNavigationRayDir_Forward = 0,
	ETresDecoratorNavigationRayDir_Left = 1,
	ETresDecoratorNavigationRayDir_Right = 2,
	ETresDecoratorNavigationRayDir_Back = 3,
	ETresDecoratorNavigationRayDir_Direct = 4,
	ETresDecoratorNavigationRayDir_MAX = 5
};

UENUM(BlueprintType)
enum ETresDecoratorValueModifierMethod
{
	ETresDecoratorValueModifierMethod_Set = 0,
	ETresDecoratorValueModifierMethod_Add = 1,
	ETresDecoratorValueModifierMethod_Sub = 2,
	ETresDecoratorValueModifierMethod_Mul = 3,
	ETresDecoratorValueModifierMethod_Div = 4,
	ETresDecoratorValueModifierMethod_MAX = 5
};

UENUM(BlueprintType)
enum ETresDecoratorVectorValueModifierMethod
{
	ETresDecoratorVectorValueModifierMethod_Set = 0,
	ETresDecoratorVectorValueModifierMethod_Add = 1,
	ETresDecoratorVectorValueModifierMethod_Sub = 2,
	ETresDecoratorVectorValueModifierMethod_Mul = 3,
	ETresDecoratorVectorValueModifierMethod_Div = 4,
	ETresDecoratorVectorValueModifierMethod_MAX = 5
};

UENUM(BlueprintType)
enum ETresBTPlayerStateCkeck
{
	FlyingMissionNormal = 0,
	FlyingMissionRideEx026 = 1,
	FlyingMissionRideEx021 = 2,
	ShootingRide = 3,
	RailSlide = 4,
	ETresBTPlayerStateCkeck_1_Max = 5,
	ETresBTPlayerStateCkeck_MAX = 6
};

UENUM(BlueprintType)
enum ETresRandomEntryProbabilitySource
{
	ETresRandomEntryProbabilitySource_LiteralValue = 0,
	ETresRandomEntryProbabilitySource_Blackboard = 1,
	ETresRandomEntryProbabilitySource_MAX = 2
};

UENUM(BlueprintType)
enum ETresRandomEntryCooldownProbabilitySource
{
	ETresRandomEntryCooldownProbabilitySource_LiteralValue = 0,
	ETresRandomEntryCooldownProbabilitySource_Blackboard = 1,
	ETresRandomEntryCooldownProbabilitySource_MAX = 2
};

UENUM(BlueprintType)
enum ETresRangeCheckValueSource
{
	ETresRangeCheckValueSource_LiteralValue = 0,
	ETresRangeCheckValueSource_Blackboard = 1,
	ETresRangeCheckValueSource_MAX = 2
};

UENUM(BlueprintType)
enum ETresRangeCheckValueSetting
{
	ETresRangeCheckValueSetting_Minimum = 0,
	ETresRangeCheckValueSetting_Maximum = 1,
	ETresRangeCheckValueSetting_Range = 2,
	ETresRangeCheckValueSetting_MAX = 3
};

UENUM(BlueprintType)
enum ETresRangeCheckMode
{
	DirectDistance = 0,
	DirectDistance2D = 1,
	DirectDistanceZ = 2,
	PathDistance = 3,
	PathCost = 4,
	ETresRangeCheckMode_MAX = 5
};

UENUM(BlueprintType)
enum ETresVelocityTestMode
{
	Velocity3D = 0,
	Velocity2D = 1,
	VelocityZ = 2,
	ETresVelocityTestMode_MAX = 3
};

UENUM(BlueprintType)
enum ETresBlackboardValueModifierInOutMethod
{
	ETresBlackboardValueModifierInOutMethod_Set = 0,
	ETresBlackboardValueModifierInOutMethod_Add = 1,
	ETresBlackboardValueModifierInOutMethod_Sub = 2,
	ETresBlackboardValueModifierInOutMethod_Mul = 3,
	ETresBlackboardValueModifierInOutMethod_Div = 4,
	ETresBlackboardValueModifierInOutMethod_MAX = 5
};

UENUM(BlueprintType)
enum ETresArithmeticModifierSource
{
	ETresArithmeticModifierSource_Blackboard = 0,
	ActorProperty = 1,
	ActorFunction = 2,
	LiteralValue = 3,
	ETresArithmeticModifierSource_MAX = 4
};

UENUM(BlueprintType)
enum ETresValueModifierMethod
{
	ETresValueModifierMethod_Set = 0,
	ETresValueModifierMethod_Add = 1,
	ETresValueModifierMethod_Sub = 2,
	ETresValueModifierMethod_Mul = 3,
	ETresValueModifierMethod_Div = 4,
	ETresValueModifierMethod_MAX = 5
};

UENUM(BlueprintType)
enum ECOMMON_HANGAROUNDTARGET_MODE_Enum
{
	Boorish = 0,
	Smart = 1,
	COMMON_HANGAROUNDTARGET_MODE_MAX = 2
};

UENUM(BlueprintType)
enum ECOMMON_ROUNDANDROUND_MODE_Enum
{
	ECOMMON_ROUNDANDROUND_MODE_Enum_Right = 0,
	ECOMMON_ROUNDANDROUND_MODE_Enum_Unsteady = 1,
	COMMON_ROUNDANDROUND_MODE_MAX = 2
};

UENUM(BlueprintType)
enum EDIRECTIONAL_MOVE_MODE_Enum
{
	EDIRECTIONAL_MOVE_MODE_Enum_Forward = 0,
	EDIRECTIONAL_MOVE_MODE_Enum_Backward = 1,
	EDIRECTIONAL_MOVE_MODE_Enum_Left = 2,
	EDIRECTIONAL_MOVE_MODE_Enum_Right = 3,
	DIRECTIONAL_MOVE_MODE_MAX = 4
};

UENUM(BlueprintType)
enum ETresHateModifier
{
	ETresHateModifier_Blackboard = 0,
	ETresHateModifier_Everyone = 1,
	ETresHateModifier_EveryoneExcludeBlackboard = 2,
	ETresHateModifier_MAX = 3
};

UENUM(BlueprintType)
enum ELEAVE_FROM_TARGET_MODE_Enum
{
	ELEAVE_FROM_TARGET_MODE_Enum_Away = 0,
	ELEAVE_FROM_TARGET_MODE_Enum_Forward = 1,
	ELEAVE_FROM_TARGET_MODE_Enum_Random = 2,
	LEAVE_FROM_TARGET_MODE_MAX = 3
};

UENUM(BlueprintType)
enum ETresRageSource
{
	ETresRageSource_LiteralValue = 0,
	ETresRageSource_Blackboard = 1,
	ETresRageSource_MAX = 2
};

UENUM(BlueprintType)
enum ECOMMON_RANDOMWALK_MODE_Enum
{
	ECOMMON_RANDOMWALK_MODE_Enum_Forward = 0,
	ECOMMON_RANDOMWALK_MODE_Enum_Backward = 1,
	ECOMMON_RANDOMWALK_MODE_Enum_ToTarget = 2,
	COMMON_RANDOMWALK_MODE_MAX = 3
};

UENUM(BlueprintType)
enum ECOMMON_SHADOWMOVE_MODE_Enum
{
	ECOMMON_SHADOWMOVE_MODE_Enum_Approach = 0,
	ECOMMON_SHADOWMOVE_MODE_Enum_ApproachEnd = 1,
	ECOMMON_SHADOWMOVE_MODE_Enum_Surround = 2,
	ECOMMON_SHADOWMOVE_MODE_Enum_LinkSurround = 3,
	COMMON_SHADOWMOVE_MODE_MAX = 4
};

UENUM(BlueprintType)
enum ECOMMON_SURROUNDTARGET_MODE_Enum
{
	ECOMMON_SURROUNDTARGET_MODE_Enum_Right = 0,
	ECOMMON_SURROUNDTARGET_MODE_Enum_Left = 1,
	ECOMMON_SURROUNDTARGET_MODE_Enum_UnsteadyTwoway = 2,
	COMMON_SURROUNDTARGET_MODE_MAX = 3
};

UENUM(BlueprintType)
enum ETresCameraStick
{
	TRES_CAMERA_STICK_RIGHT = 0,
	TRES_CAMERA_STICK_LEFT = 1,
	TRES_CAMERA_STICK_RIGHTLEFT = 2,
	TRES_CAMERA_STICK_MAX = 3
};

UENUM(BlueprintType)
enum ECameraLensType
{
	LENS_DOF_OFF = 0,
	LENS_DOF_ON = 1,
	ECameraLensType_1_MAX = 2,
	LENS_FISHEYE = 3,
	ECameraLensType_MAX = 4
};

UENUM(BlueprintType)
enum ETresCameraTargetWallCheckType
{
	TCTWallCheckType_Normal = 0,
	TCTWallCheckType_BasePos = 1,
	TCTWallCheckType_TargetPos = 2,
	TCTWallCheckType_TargetBoneName = 3,
	TCTWallCheckType_AccompanyPawnSafetyPos = 4,
	TCTWallCheckType_TargetRoot = 5,
	TCTWallCheckType_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresAtkTeamCheckType : uint8
{
	NORMAL = 0,
	NO_CHECK = 1,
	SAME_ZERO = 2,
	_MAX = 3 UMETA(Hidden),
	ETresAtkTeamCheckType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresChrBiologicalType : uint8
{
	Human = 0,
	Heartless = 1,
	Nobody = 2,
	Unverse = 3,
	Unknown = 4,
	ETresChrBiologicalType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresBodyPushPowerLevel : uint8
{
	PPL = 0,
	PPL01 = 1,
	PPL02 = 2,
	PPL03 = 3,
	PPL04 = 4,
	PPL05 = 5,
	PPL06 = 6,
	PPL07 = 7,
	PPL08 = 8,
	PPL_MAX = 9 UMETA(Hidden),
	_PPL_MAX = 10 UMETA(Hidden),
	ETresBodyPushPowerLevel_MAX = 11 UMETA(Hidden)
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
	CDTS_TYPE_MAX = 6  UMETA(Hidden),
	ETresChrDataTableSetType_MAX = 7  UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresChrLaunchType
{
	TCLT_NORMAL = 0,
	TCLT_AERO = 1,
	TCLT_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresCommandCategory
{
	TRES_CMD_CATEGORY_NONE = 0,
	TRES_CMD_CATEGORY_MOVE = 1,
	TRES_CMD_CATEGORY_FREERUN = 2,
	TRES_CMD_CATEGORY_DODGE = 3,
	TRES_CMD_CATEGORY_GUARD = 4,
	TRES_CMD_CATEGORY_COUNTER = 5,
	TRES_CMD_CATEGORY_FFMOVE = 6,
	TRES_CMD_CATEGORY_FFATTACK = 7,
	TRES_CMD_CATEGORY_ATTACK = 8,
	TRES_CMD_CATEGORY_RUNATTACK = 9,
	TRES_CMD_CATEGORY_JUMPCOMBO = 10,
	TRES_CMD_CATEGORY_MAGIC = 11,
	TRES_CMD_CATEGORY_ITEM = 12,
	TRES_CMD_CATEGORY_ACCESS = 13,
	TRES_CMD_CATEGORY_STYLE = 14,
	TRES_CMD_CATEGORY_FINISH = 15,
	TRES_CMD_CATEGORY_EXTRA = 16,
	TRES_CMD_CATEGORY_ATTRACTION = 17,
	TRES_CMD_CATEGORY_FRIEND = 18,
	TRES_CMD_CATEGORY_DMAGIC = 19,
	TRES_CMD_CATEGORY_SUMMON = 20,
	TRES_CMD_CATEGORY_SHOOTFLOW = 21,
	TRES_CMD_CATEGORY_ATHLETIC = 22,
	TRES_CMD_CATEGORY_ABILITY = 23,
	TRES_CMD_CATEGORY_PRIZE = 24,
	TRES_CMD_CATEGORY_OTHER = 25,
	TRES_CMD_CATEGORY_DEBUG = 26,
	TRES_CMD_CATEGORY_SWITCH = 27,
	TRES_CMD_CATEGORY_END = 28,
	TRES_CMD_CATEGORY_MAX = 29 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresCommandType
{
	TRES_CMD_TYPE_NONE = 0,
	TRES_CMD_TYPE_ACTION = 1,
	TRES_CMD_TYPE_FREEFLOW = 2,
	TRES_CMD_TYPE_COMMAND = 3,
	TRES_CMD_TYPE_REACTION = 4,
	TRES_CMD_TYPE_SHOOTFLOW = 5,
	TRES_CMD_TYPE_ABILITY = 6,
	TRES_CMD_TYPE_PRIZE = 7,
	TRES_CMD_TYPE_OTHER = 8,
	TRES_CMD_TYPE_END = 9,
	TRES_CMD_TYPE_MAX = 10 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresComNpcMoveType
{
	CNPC_MOVE_NONE = 0,
	CNPC_MOVE_CONTROLLER = 1,
	CNPC_MOVE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresRandomDistributionType
{
	ETresRandomDistributionType_Uniform = 0,
	ETresRandomDistributionType_Normal = 1,
	ETresRandomDistributionType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex761_CommonCoopFollowers
{
	ETresEnemy_e_ex761_CommonCoopFollowers_NearDistance = 0,
	ETresEnemy_e_ex761_CommonCoopFollowers_Max = 1,
	ETresEnemy_e_ex761_MAX = 2
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex761_DarknessSpreadOut
{
	ETresEnemy_e_ex761_DarknessSpreadOut_Near = 0,
	ETresEnemy_e_ex761_DarknessSpreadOut_Middle = 1,
	ETresEnemy_e_ex761_DarknessSpreadOut_Far = 2,
	ETresEnemy_e_ex761_DarknessSpreadOut_Max = 3,
	ETresEnemy_e_ex761_DarknessSpreadOut_ETresEnemy_e_ex761_MAX = 4
};

UENUM(BlueprintType)
enum EEX355_AccelDir
{
	EEX355_AccelDir_Right = 0,
	EEX355_AccelDir_Left = 1,
	EEX355_AccelDir_Max = 2
};

UENUM(BlueprintType)
enum EAccelVoice_e_ex359
{
	EAccelVoice_e_ex359_Left = 0,
	EAccelVoice_e_ex359_Right = 1,
	EAccelVoice_e_ex359_MAX = 2
};

UENUM(BlueprintType)
enum EEX359_CutDownYawType
{
	EEX359_CutDownYawType_Relative = 0,
	EEX359_CutDownYawType_Camera = 1,
	EEX359_CutDownYawType_MAX = 2
};

UENUM(BlueprintType)
enum ETresCoopRunningStatus
{
	ETresCoopRunningStatus_Started = 0,
	ETresCoopRunningStatus_Waiting = 1,
	ETresCoopRunningStatus_Ready = 2,
	ETresCoopRunningStatus_Running = 3,
	ETresCoopRunningStatus_Finished = 4,
	ETresCoopRunningStatus_Invaild = 5,
	ETresCoopRunningStatus_MAX = 6
};

UENUM(BlueprintType)
enum ETresCoopRole
{
	ETresCoopRole_Unknown = 0,
	ETresCoopRole_Leader = 1,
	ETresCoopRole_Follower = 2,
	ETresCoopRole_MAX = 3
};

UENUM(BlueprintType)
enum ECreateGummiShipState
{
	GummiShipPrepare = 0,
	GummiShipLoad = 1,
	GummiShipBulliding = 2,
	GummiShipError = 3,
	CreateGummiShipState_MAX = 4
};

UENUM(BlueprintType)
enum ETresTornadoDebrisStateName
{
	ETresTornadoDebrisStateName_Idle = 0,
	ETresTornadoDebrisStateName_BlowLand = 1,
	ETresTornadoDebrisStateName_BlowAir = 2,
	ETresTornadoDebrisStateName_DebrisLand = 3,
	ETresTornadoDebrisStateName_DebrisAir = 4,
	ETresTornadoDebrisStateName_MagmaTornado = 5,
	ETresTornadoDebrisStateName_IceTornado = 6,
	ETresTornadoDebrisStateName_BigTornado = 7,
	ETresTornadoDebrisStateName_Vacuum = 8,
	ETresTornadoDebrisStateName_Wind = 9,
	ETresTornadoDebrisStateName_MAX = 10,
	ETresTornadoDebrisStateName_Hide = 11,
	ETresTornadoDebrisStateName_IdleAlt = 12
};

UENUM(BlueprintType)
enum ETresDebugMenuBlendMode
{
	ETresDebugMenuBlendMode_normal = 0,
	ETresDebugMenuBlendMode_add = 1,
	ETresDebugMenuBlendMode_MAX = 2
};

UENUM(BlueprintType)
enum EDrawTextFilterType
{
	EDrawTextFilterType_Blur = 0,
	EDrawTextFilterType_Glow = 1,
	EDrawTextFilterType_DropShadow = 2,
	EDrawTextFilterType_MAX = 3
};

UENUM(BlueprintType)
enum ETresDebugMenuMotionObjectPropertyType
{
	ETresDebugMenuMotionObjectProperty_Motion_X = 0,
	ETresDebugMenuMotionObjectProperty_Motion_Y = 1,
	ETresDebugMenuMotionObjectProperty_Rotation_Z = 2,
	ETresDebugMenuMotionObjectProperty_Scale_X = 3,
	ETresDebugMenuMotionObjectProperty_Scale_Y = 4,
	ETresDebugMenuMotionObjectProperty_AdvClr_R_Pct = 5,
	ETresDebugMenuMotionObjectProperty_AdvClr_R_Offset = 6,
	ETresDebugMenuMotionObjectProperty_AdvClr_G_Pct = 7,
	ETresDebugMenuMotionObjectProperty_AdvClr_G_Offset = 8,
	ETresDebugMenuMotionObjectProperty_AdvClr_B_Pct = 9,
	ETresDebugMenuMotionObjectProperty_AdvClr_B_Offset = 10,
	ETresDebugMenuMotionObjectProperty_AdvClr_A_Pct = 11,
	ETresDebugMenuMotionObjectProperty_AdvClr_A_Offset = 12,
	ETresDebugMenuMotionObjectProperty_Blur_BlurX = 13,
	ETresDebugMenuMotionObjectProperty_Blur_BlurY = 14,
	ETresDebugMenuMotionObjectProperty_Glow_BlurX = 15,
	ETresDebugMenuMotionObjectProperty_Glow_BlurY = 16,
	ETresDebugMenuMotionObjectProperty_Glow_Strength = 17,
	ETresDebugMenuMotionObjectProperty_Glow_Color_R = 18,
	ETresDebugMenuMotionObjectProperty_Glow_Color_G = 19,
	ETresDebugMenuMotionObjectProperty_Glow_Color_B = 20,
	ETresDebugMenuMotionObjectProperty_Glow_Color_A = 21,
	ETresDebugMenuMotionObjectProperty_DropShadow_BlurX = 22,
	ETresDebugMenuMotionObjectProperty_DropShadow_BlurY = 23,
	ETresDebugMenuMotionObjectProperty_DropShadow_Strength = 24,
	ETresDebugMenuMotionObjectProperty_DropShadow_Angle = 25,
	ETresDebugMenuMotionObjectProperty_DropShadow_Distance = 26,
	ETresDebugMenuMotionObjectProperty_DropShadow_Color_R = 27,
	ETresDebugMenuMotionObjectProperty_DropShadow_Color_G = 28,
	ETresDebugMenuMotionObjectProperty_DropShadow_Color_B = 29,
	ETresDebugMenuMotionObjectProperty_DropShadow_Color_A = 30,
	ETresDebugMenuMotionObjectProperty_MAX = 31
};

UENUM(BlueprintType)
enum ETresDebugMenuTweenType
{
	ETresDebugMenuTweenType_off = 0,
	ETresDebugMenuTweenType_motion = 1,
	ETresDebugMenuTweenType_motion_object = 2,
	ETresDebugMenuTweenType_MAX = 3
};

UENUM(BlueprintType)
enum ETresDebugMenuTextVAlignment
{
	ETresDebugMenuTextVAlignment_top = 0,
	ETresDebugMenuTextVAlignment_center = 1,
	ETresDebugMenuTextVAlignment_bottom = 2,
	ETresDebugMenuTextVAlignment_MAX = 3
};

UENUM(BlueprintType)
enum ETresDebugMenuTextAlignment
{
	ETresDebugMenuTextAlignment_left = 0,
	ETresDebugMenuTextAlignment_center = 1,
	ETresDebugMenuTextAlignment_right = 2,
	ETresDebugMenuTextAlignment_justify = 3,
	ETresDebugMenuTextAlignment_MAX = 4
};

UENUM(BlueprintType)
enum ETresDebugMenuResourceType
{
	ETresDebugMenuResourceType_Image = 0,
	ETresDebugMenuResourceType_Text = 1,
	ETresDebugMenuResourceType_MovieClip = 2,
	ETresDebugMenuResourceType_Custom = 3,
	ETresDebugMenuResourceType_MAX = 4
};

UENUM(BlueprintType)
enum ETresDebugMenuState
{
	ETresDebugMenuState_Opening = 0,
	ETresDebugMenuState_Opened = 1,
	ETresDebugMenuState_Closing = 2,
	ETresDebugMenuState_Closed = 3,
	ETresDebugMenuState_MAX = 4
};

UENUM(BlueprintType)
enum ETresGameKey
{
	Decide = 0,
	Cancel = 1,
	SituationCommand = 2,
	AfCancel = 3,
	ETresGameKey_MAX = 4
};

UENUM(BlueprintType)
enum ETresDecoPartsAttachPartIdx
{
	TDPE_HEAD = 0,
	TDPE_BODY = 1,
	TDPE_ARM = 2,
	TDPE_TEXPAT = 3,
	TDPE_MAX = 4
};

UENUM(BlueprintType)
enum ETresRalphBlockKind
{
	RALPH_BLOCK_KIND_A = 0,
	RALPH_BLOCK_KIND_B = 1,
	RALPH_BLOCK_KIND_C = 2,
	RALPH_BLOCK_KIND_D = 3,
	RALPH_BLOCK_KIND_E = 4,
	RALPH_BLOCK_KIND_F = 5,
	RALPH_BLOCK_KIND_ONE = 6,
	RALPH_BLOCK_KIND_CANNON = 7,
	RALPH_BLOCK_KIND_MAX = 8
};

UENUM(BlueprintType)
enum ETresEncountDisableVolumeType
{
	Type_Box = 0 UMETA(DisplayName = "Box"),
	Type_Circle = 1 UMETA(DisplayName = "Circle"),
	ETresEncountDisableVolumeType_Type_MAX = 2 UMETA(DisplayName = "MAX")
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
enum EBX901_ActionTriggerType
{
	EBX901_ActionTriggerType_DarkBaymax = 0,
	EBX901_ActionTriggerType_Player = 1,
	EBX901_ActionTriggerType_Max = 2
};

UENUM(BlueprintType)
enum ETresEnemyEx353CatchAfterSituation
{
	ChangeSituation = 0,
	Continuation = 1,
	AbsoluteAir = 2,
	ETresEnemyEx353CatchAfterSituation_1_Max = 3,
	ETresEnemyEx353CatchAfterSituation_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex307_DummyCardSpawn
{
	Scatter = 0,
	Collect = 1,
	ETresEnemy_e_ex307_MAX = 2
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex307_Phase2CardAction
{
	ETresEnemy_e_ex307_Phase2CardAction_Shake = 0,
	ETresEnemy_e_ex307_Phase2CardAction_VerticalSway = 1,
	ETresEnemy_e_ex307_Phase2CardAction_HorizontalSway = 2,
	ETresEnemy_e_ex307_Phase2CardAction_Shine = 3,
	ETresEnemy_e_ex307_Phase2CardAction_1_Max = 4,
	ETresEnemy_e_ex307_Phase2CardAction_ETresEnemy_e_ex307_MAX = 5
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex307_Phase2Card
{
	ETresEnemy_e_ex307_Phase2Card_Correct = 0,
	ETresEnemy_e_ex307_Phase2Card_Dummy = 1,
	ETresEnemy_e_ex307_Phase2Card_Incorrect = 2,
	ETresEnemy_e_ex307_Phase2Card_1_Max = 3,
	ETresEnemy_e_ex307_Phase2Card_ETresEnemy_e_ex307_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex307_CardDesign
{
	ETresEnemy_e_ex307_CardDesign_King = 0,
	ETresEnemy_e_ex307_CardDesign_Luxord = 1,
	ETresEnemy_e_ex307_CardDesign_Not = 2,
	ETresEnemy_e_ex307_CardDesign_Plain = 3,
	ETresEnemy_e_ex307_CardDesign_ETresEnemy_e_ex307_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemyGigasCheckActionState
{
	ETresEnemyGigasCheckActionState_MachineGun = 0,
	ETresEnemyGigasCheckActionState_Punch = 1,
	ETresEnemyGigasCheckActionState_BoosterTackle = 2,
	ETresEnemyGigasCheckActionState_Bomb = 3,
	ETresEnemyGigasCheckActionState_Cannon = 4,
	ETresEnemyGigasCheckActionState_Attack = 5,
	ETresEnemyGigasCheckActionState_MAX = 6
};

UENUM(BlueprintType)
enum ETresEnemyGigasActionState
{
	ETresEnemyGigasActionState_MachineGun = 0,
	ETresEnemyGigasActionState_Punch = 1,
	ETresEnemyGigasActionState_BoosterTackle = 2,
	ETresEnemyGigasActionState_Bomb = 3,
	ETresEnemyGigasActionState_Cannon = 4,
	ETresEnemyGigasActionState_MAX = 5
};

UENUM(BlueprintType)
enum EEnemyLargeShipBase
{
	TO_TARGET = 0,
	SELF_ROT = 1,
	TARGET_ROT = 2,
	TO_TARGET_SIDE = 3,
	EEnemyLargeShipBase_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemyXIIIELeaderChangeRule
{
	Alternate = 0,
	LessFrequent = 1,
	Random = 2,
	LowerHitPoint = 3,
	HigherHitPoint = 4,
	ETresEnemyXIIIELeaderChangeRule_1_MAX = 5,
	ETresEnemyXIIIELeaderChangeRule_MAX = 6
};

UENUM(BlueprintType)
enum ETresEnemyXIIIEFirstAnnihilationRule
{
	ETresEnemyXIIIEFirstAnnihilationRule_HpOrTime = 0,
	ETresEnemyXIIIEFirstAnnihilationRule_Hp = 1,
	ETresEnemyXIIIEFirstAnnihilationRule_Time = 2,
	ETresEnemyXIIIEFirstAnnihilationRule_1_MAX = 3,
	ETresEnemyXIIIEFirstAnnihilationRule_MAX = 4
};

UENUM(BlueprintType)
enum EBX901_NoHitWallDamage
{
	EBX901_NoHitWallDamage_BLOW = 0,
	EBX901_NoHitWallDamage_PARABOLA = 1,
	EBX901_NoHitWallDamage_PARABOLA_NO_RECOVERY = 2,
	EBX901_NoHitWallDamage_MAX = 3
};

UENUM(BlueprintType)
enum EBX901_EffectGroupID
{
	EBX901_EffectGroupID_RunLeg = 0,
	EBX901_EffectGroupID_WalkLeg = 1,
	EBX901_EffectGroupID_HaltLeg = 2,
	EBX901_EffectGroupID_WingJet = 3,
	EBX901_EffectGroupID_WingJetLarge = 4,
	EBX901_EffectGroupID_BodyBlock = 5,
	EBX901_EffectGroupID_WingBlock = 6,
	EBX901_EffectGroupID_WingDisp = 7,
	EBX901_EffectGroupID_Aura = 8,
	EBX901_EffectGroupID_Max = 9
};

UENUM(BlueprintType)
enum ETresEnemyDarkBaymaxPhase
{
	ETresEnemyDarkBaymaxPhase_PHASE1 = 0,
	ETresEnemyDarkBaymaxPhase_PHASE2 = 1,
	ETresEnemyDarkBaymaxPhase_1_MAX = 2,
	ETresEnemyDarkBaymaxPhase_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyDw401CoreColor
{
	ETresEnemyDw401CoreColor_A = 0,
	ETresEnemyDw401CoreColor_B = 1,
	ETresEnemyDw401CoreColor_C = 2,
	ETresEnemyDw401CoreColor_D = 3,
	ETresEnemyDw401CoreColor_None = 4,
	ETresEnemyDw401CoreColor_MAX = 5
};

UENUM(BlueprintType)
enum ETresEnemyDw405BattleCount
{
	TRES_ENEMY_DW405_BATTLECOUNT_ONE = 0,
	TRES_ENEMY_DW405_BATTLECOUNT_SECOND = 1,
	TRES_ENEMY_DW405_BATTLECOUNT_THIRD = 2,
	TRES_ENEMY_DW405_BATTLECOUNT_FOURTH = 3,
	TRES_ENEMY_DW405_BATTLECOUNT_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemyEx409Event
{
	DestroyEffect = 0,
	ETresEnemyEx409Event_1_Max = 1,
	ETresEnemyEx409Event_MAX = 2
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex002_GuardType
{
	ETresEnemy_e_ex002_GuardType_None = 0,
	ETresEnemy_e_ex002_GuardType_State = 1,
	ETresEnemy_e_ex002_GuardType_Air = 2,
	ETresEnemy_e_ex002_GuardType_MAX = 3
};

UENUM(BlueprintType)
enum ETresFortressType_ex011
{
	TRES_ENEMY_EX011_FORTRESS_TYPE_LOWER = 0,
	TRES_ENEMY_EX011_FORTRESS_TYPE_MIDDLE = 1,
	TRES_ENEMY_EX011_FORTRESS_TYPE_UPPER = 2,
	TRES_ENEMY_EX011_FORTRESS_TYPE_MAX = 3
};

UENUM(BlueprintType)
enum ETresVehicleType_e_ex011
{
	TRES_ENEMY_EX011_VEHICLE_TYPE_TOP = 0,
	TRES_ENEMY_EX011_VEHICLE_TYPE_SECOND = 1,
	TRES_ENEMY_EX011_VEHICLE_TYPE_THIRD = 2,
	TRES_ENEMY_EX011_VEHICLE_TYPE_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex012_State
{
	ETresEnemy_e_ex012_State_None = 0,
	ETresEnemy_e_ex012_State_Appear = 1,
	ETresEnemy_e_ex012_State_Idle = 2,
	ETresEnemy_e_ex012_State_BeginCooperation = 3,
	ETresEnemy_e_ex012_State_BeginMove = 4,
	ETresEnemy_e_ex012_State_DuringMove = 5,
	ETresEnemy_e_ex012_State_FinishMove = 6,
	ETresEnemy_e_ex012_State_Damage = 7,
	ETresEnemy_e_ex012_State_BeginShowerNeedle = 8,
	ETresEnemy_e_ex012_State_DuringShowerNeedle = 9,
	ETresEnemy_e_ex012_State_FinishShowerNeedle = 10,
	ETresEnemy_e_ex012_State_Die = 11,
	ETresEnemy_e_ex012_State_Other = 12,
	ETresEnemy_e_ex012_MAX = 13
};

UENUM(BlueprintType)
enum ETresEnemy_ex013_WatageMaterialType
{
	TRES_ENEMY_EX013_WATAGE_MATERIAL_TYPE_ALL = 0,
	TRES_ENEMY_EX013_WATAGE_MATERIAL_TYPE_HALF = 1,
	TRES_ENEMY_EX013_WATAGE_MATERIAL_TYPE_NONE = 2,
	TRES_ENEMY_EX013_WATAGE_MATERIAL_TYPE_NONE2 = 3,
	TRES_ENEMY_EX013_WATAGE_MATERIAL_TYPE_NONE3 = 4,
	TRES_ENEMY_EX013_WATAGE_MATERIAL_TYPE_MAX = 5
};

UENUM(BlueprintType)
enum ETresEnemyEx021ActionMode
{
	ETresEnemyEx021ActionMode_NORMAL = 0,
	ETresEnemyEx021ActionMode_LONGSTUNNED = 1,
	ETresEnemyEx021ActionMode_BOARDED = 2,
	ETresEnemyEx021ActionMode_BOARDED_TURNAROUND = 3,
	ETresEnemyEx021ActionMode_SMALLDAMAGE = 4,
	ETresEnemyEx021ActionMode_1_MAX = 5,
	ETresEnemyEx021ActionMode_MAX = 6
};

UENUM(BlueprintType)
enum ETresCoopColorSmokeKind
{
	ETresCoopColorSmokeKind_RED = 0,
	ETresCoopColorSmokeKind_BLUE = 1,
	ETresCoopColorSmokeKind_YELLOW = 2,
	ETresCoopColorSmokeKind_GREEN = 3,
	ETresCoopColorSmokeKind_1_MAX = 4,
	ETresCoopColorSmokeKind_MAX = 5
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex028_BodyColor
{
	ETresEnemy_e_ex028_BodyColor_Rainbow = 0,
	ETresEnemy_e_ex028_BodyColor_Blue = 1,
	ETresEnemy_e_ex028_BodyColor_Red = 2,
	ETresEnemy_e_ex028_BodyColor_Yellow = 3,
	ETresEnemy_e_ex028_BodyColor_Max = 4
};

UENUM(BlueprintType)
enum Ee_ex035_DAMAGE_TYPE
{
	Ee_ex035_DAMAGE_TYPE_BLOW = 0,
	Ee_ex035_DAMAGE_TYPE_Finish = 1,
	Ee_ex035_DAMAGE_TYPE_IMMOVABLE = 2,
	e_ex035_DAMAGE_TYPE_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyEx046Region
{
	TRES_ENEMY_EX046_REGION_RIGHTWING = 0,
	TRES_ENEMY_EX046_REGION_LEFTWING = 1,
	TRES_ENEMY_EX046_REGION_TAIL = 2,
	TRES_ENEMY_EX046_REGION_MAX = 3
};

UENUM(BlueprintType)
enum ETrese_ex047WorldTypes
{
	TRES_ENEMY_EX047_WORLDTYPE_HE = 0,
	TRES_ENEMY_EX047_WORLDTYPE_RA = 1,
	TRES_ENEMY_EX047_WORLDTYPE_MI = 2,
	TRES_ENEMY_EX047_WORLDTYPE_TS = 3,
	TRES_ENEMY_EX047_WORLDTYPE_CA = 4,
	TRES_ENEMY_EX047_WORLDTYPE_FZ = 5,
	TRES_ENEMY_EX047_WORLDTYPE_BX = 6,
	TRES_ENEMY_EX047_WORLDTYPE_MAX = 7
};

UENUM(BlueprintType)
enum ETresEnemyEx048Mode
{
	TRES_ENEMY_EX048_FLYMODE = 0,
	TRES_ENEMY_EX048_LANDMODE = 1,
	TRES_ENEMY_EX048_MAX = 2
};

UENUM(BlueprintType)
enum ETresEx050PuddingType
{
	ETresEx050PuddingType_SMALL = 0,
	ETresEx050PuddingType_BIG = 1,
	ETresEx050PuddingType_FLY = 2,
	ETresEx050PuddingType_CHASE = 3,
	ETresEx050PuddingType_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex054_BattleStyle
{
	ETresEnemy_e_ex054_BattleStyle_Dinosaur = 0,
	ETresEnemy_e_ex054_BattleStyle_Volcano = 1,
	ETresEnemy_e_ex054_BattleStyle_Thundercloud = 2,
	ETresEnemy_e_ex054_BattleStyle_Berserk = 3,
	ETresEnemy_e_ex054_BattleStyle_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemyEx071DeckKind
{
	ETresEnemyEx071DeckKind_DeckA = 0,
	ETresEnemyEx071DeckKind_DeckB = 1,
	ETresEnemyEx071DeckKind_DeckC = 2,
	ETresEnemyEx071DeckKind_1_MAX = 3,
	ETresEnemyEx071DeckKind_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemyEx082_SnowEffectLocationType
{
	TRES_ENEMY_EX082_SNOWEFFECTLOCATIONTYPE_RIGHT = 0,
	TRES_ENEMY_EX082_SNOWEFFECTLOCATIONTYPE_LEFT = 1,
	TRES_ENEMY_EX082_SNOWEFFECTLOCATIONTYPE_MAX = 2
};

UENUM(BlueprintType)
enum ETresEnemyEx202ActionMode
{
	TRES_ENEMY_EX202_ACTIONMODE_SNAKE = 0,
	TRES_ENEMY_EX202_ACTIONMODE_FLOWER = 1,
	TRES_ENEMY_EX202_ACTIONMODE_MAX = 2
};

UENUM(BlueprintType)
enum ETresEnemyEx302WarpDirection
{
	ETresEnemyEx302WarpDirection_Front = 0,
	ETresEnemyEx302WarpDirection_Back = 1,
	ETresEnemyEx302WarpDirection_Right = 2,
	ETresEnemyEx302WarpDirection_Left = 3,
	ETresEnemyEx302WarpDirection_1_Max = 4,
	ETresEnemyEx302WarpDirection_MAX = 5
};

UENUM(BlueprintType)
enum ETresEnemyEx304HitEffectKind
{
	ETresEnemyEx304HitEffectKind_LaserHit = 0,
	ETresEnemyEx304HitEffectKind_SparkHit = 1,
	ETresEnemyEx304HitEffectKind_1_Max = 2,
	ETresEnemyEx304HitEffectKind_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyEx304BeamSaberPlace
{
	ETresEnemyEx304BeamSaberPlace_RightHand = 0,
	ETresEnemyEx304BeamSaberPlace_LeftHand = 1,
	ETresEnemyEx304BeamSaberPlace_BothHand = 2,
	ETresEnemyEx304BeamSaberPlace_1_Max = 3,
	ETresEnemyEx304BeamSaberPlace_MAX = 4
};

UENUM(BlueprintType)
enum EVoiceType_e_ex306
{
	EVoiceType_e_ex306_Attach = 0,
	EVoiceType_e_ex306_Location = 1,
	EVoiceType_e_ex306_2D = 2,
	EVoiceType_e_ex306_MAX = 3
};

UENUM(BlueprintType)
enum EVoice_e_ex306
{
	EVoice_e_ex306_RevengeRoxas = 0,
	EVoice_e_ex306_RevengeLea = 1,
	EVoice_e_ex306_BlueBurst = 2,
	EVoice_e_ex306_BlueBurstLea = 3,
	EVoice_e_ex306_BlueBurstDash = 4,
	EVoice_e_ex306_Revenge = 5,
	EVoice_e_ex306_MAX = 6
};

UENUM(BlueprintType)
enum EBodyType_e_ex306
{
	EBodyType_e_ex306_Normal = 0,
	EBodyType_e_ex306_Berserk = 1,
	EBodyType_e_ex306_Blue = 2,
	EBodyType_e_ex306_Stun = 3,
	EBodyType_e_ex306_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemyEx351TimeRushEvent
{
	TimeRushFinishMoveCenter = 0,
	TimeRushFinishInvincible = 1,
	ETresEnemyEx351TimeRushEvent_1_Max = 2,
	ETresEnemyEx351TimeRushEvent_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyEx351WarpDirection
{
	ETresEnemyEx351WarpDirection_Front = 0,
	ETresEnemyEx351WarpDirection_Back = 1,
	ETresEnemyEx351WarpDirection_Right = 2,
	ETresEnemyEx351WarpDirection_Left = 3,
	ETresEnemyEx351WarpDirection_TimeRush = 4,
	ETresEnemyEx351WarpDirection_1_Max = 5,
	ETresEnemyEx351WarpDirection_MAX = 6
};

UENUM(BlueprintType)
enum ETresEnemyEx353ThornWildDanceEvent
{
	SpawnThornWildDanceEffect = 0,
	EndThornWildDanceEvent = 1,
	ETresEnemyEx353ThornWildDanceEvent_1_Max = 2,
	ETresEnemyEx353ThornWildDanceEvent_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyEx353HitEffectKind
{
	LaserHit = 0,
	SparkHit = 1,
	ETresEnemyEx353HitEffectKind_1_Max = 2,
	ETresEnemyEx353HitEffectKind_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyEx353BeamSaberPlace
{
	ETresEnemyEx353BeamSaberPlace_RightHand = 0,
	ETresEnemyEx353BeamSaberPlace_LeftHand = 1,
	ETresEnemyEx353BeamSaberPlace_BothHand = 2,
	ETresEnemyEx353BeamSaberPlace_1_Max = 3,
	ETresEnemyEx353BeamSaberPlace_MAX = 4
};

UENUM(BlueprintType)
enum EEX354_RemoteEventID
{
	EEX354_RemoteEventID_StartArtema = 0,
	EEX354_RemoteEventID_EndArtema = 1,
	EEX354_RemoteEventID_EndArtemaShooting = 2,
	EEX354_RemoteEventID_QuickBattleSuccess = 3,
	EEX354_RemoteEventID_QuickBattleFailure = 4,
	EEX354_RemoteEventID_QuickBattleMognet = 5,
	EEX354_RemoteEventID_Max = 6
};

UENUM(BlueprintType)
enum EEX354_FieldID
{
	EEX354_FieldID_Standard = 0,
	EEX354_FieldID_Narrow = 1,
	EEX354_FieldID_Doughnut = 2,
	EEX354_FieldID_Max = 3
};

UENUM(BlueprintType)
enum EEX355_MoveVelocityType
{
	EEX355_MoveVelocityType_Constant = 0,
	EEX355_MoveVelocityType_EaseIn = 1,
	EEX355_MoveVelocityType_EaseOut = 2,
	EEX355_MoveVelocityType_EaseInOut = 3,
	EEX355_MoveVelocityType_Max = 4
};

UENUM(BlueprintType)
enum EEX355_RemoteEventID
{
	EEX355_RemoteEventID_StartBlue = 0,
	EEX355_RemoteEventID_EndBlue = 1,
	EEX355_RemoteEventID_Max = 2
};

UENUM(BlueprintType)
enum EEX355_EffectGroupID
{
	EEX355_EffectGroupID_WarpIn = 0,
	EEX355_EffectGroupID_WarpOut = 1,
	EEX355_EffectGroupID_BerserkAura = 2,
	EEX355_EffectGroupID_BlueAura = 3,
	EEX355_EffectGroupID_Disappear = 4,
	EEX355_EffectGroupID_Max = 5
};

UENUM(BlueprintType)
enum EVoiceType_e_ex355
{
	EVoiceType_e_ex355_Attach = 0,
	EVoiceType_e_ex355_Location = 1,
	EVoiceType_e_ex355_2D = 2,
	EVoiceType_e_ex355_MAX = 3
};

UENUM(BlueprintType)
enum EVoice_e_ex355
{
	EVoice_e_ex355_RevengeRoxas = 0,
	EVoice_e_ex355_RevengeLea = 1,
	EVoice_e_ex355_BlueBurst = 2,
	EVoice_e_ex355_BlueBurstLea = 3,
	EVoice_e_ex355_BlueBurstDash = 4,
	EVoice_e_ex355_Revenge = 5,
	EVoice_e_ex355_RevengeBlue = 6,
	EVoice_e_ex355_Throw = 7,
	EVoice_e_ex355_ThrowBlue = 8,
	EVoice_e_ex355_MagnaStride = 9,
	EVoice_e_ex355_Accel = 10,
	EVoice_e_ex355_MAX = 11
};

UENUM(BlueprintType)
enum EBodyType_e_ex355
{
	EBodyType_e_ex355_Normal = 0,
	EBodyType_e_ex355_Berserk = 1,
	EBodyType_e_ex355_Blue = 2,
	EBodyType_e_ex355_Stun = 3,
	EBodyType_e_ex355_Charge = 4,
	EBodyType_e_ex355_MAX = 5
};

UENUM(BlueprintType)
enum ETresTimeGauge_e_ex356
{
	ETresTimeGauge_e_ex356_Player = 0,
	ETresTimeGauge_e_ex356_Luxord = 1,
	ETresTimeGauge_e_ex356_1_Max = 2,
	ETresTimeGauge_e_MAX = 3
};

UENUM(BlueprintType)
enum ETresBigDealRemoteEvent_e_ex356
{
	ETresBigDealRemoteEvent_e_ex356_StartCinematicEnd = 0,
	ETresBigDealRemoteEvent_e_ex356_EndCinematicEnd = 1,
	ETresBigDealRemoteEvent_e_MAX = 2
};

UENUM(BlueprintType)
enum ETresDeathSentenceRemoteEventType_e_ex357
{
	StartLongCinematicEnd = 0,
	StartShortCinematicEnd = 1,
	ETresDeathSentenceRemoteEventType_e_ex357_EndCinematicEnd = 2,
	CountVisible = 3,
	ETresDeathSentenceRemoteEventType_e_ex357_MAX = 4
};

UENUM(BlueprintType)
enum EEX359_SplineMoveVelocityType
{
	EEX359_SplineMoveVelocityType_Constant = 0,
	EEX359_SplineMoveVelocityType_EaseIn = 1,
	EEX359_SplineMoveVelocityType_EaseOut = 2,
	EEX359_SplineMoveVelocityType_EaseInOut = 3,
	EEX359_SplineMoveVelocityType_Max = 4
};

UENUM(BlueprintType)
enum EEX359_EffectGroupID
{
	EEX359_EffectGroupID_WarpDisappear = 0,
	EEX359_EffectGroupID_WarpAppear = 1,
	EEX359_EffectGroupID_FastMoveStart = 2,
	EEX359_EffectGroupID_FastMoveEnd = 3,
	EEX359_EffectGroupID_FastMove = 4,
	EEX359_EffectGroupID_LaserRainShot = 5,
	EEX359_EffectGroupID_FinalBrakeAura = 6,
	EEX359_EffectGroupID_Max = 7
};

UENUM(BlueprintType)
enum EEX359_RemoteEventID
{
	EEX359_RemoteEventID_ChangeSceneStart = 0,
	EEX359_RemoteEventID_ChangeSceneEnd = 1,
	EEX359_RemoteEventID_FinalBrakeStart = 2,
	EEX359_RemoteEventID_FinalBrakeEnd = 3,
	EEX359_RemoteEventID_BerserkStart = 4,
	EEX359_RemoteEventID_BerserkEnd = 5,
	EEX359_RemoteEventID_Max = 6
};

UENUM(BlueprintType)
enum EVoiceType_e_ex359
{
	EVoiceType_e_ex359_Attach = 0,
	EVoiceType_e_ex359_Location = 1,
	EVoiceType_e_ex359_2D = 2,
	EVoiceType_e_ex359_MAX = 3
};

UENUM(BlueprintType)
enum EVoice_e_ex359
{
	EVoice_e_ex359_AccelLeft = 0,
	EVoice_e_ex359_AccelRight = 1,
	EVoice_e_ex359_FinalBrakeAccelLeft = 2,
	EVoice_e_ex359_FinalBrakeAccelRight = 3,
	EVoice_e_ex359_Revenge = 4,
	EVoice_e_ex359_MAX = 5
};

UENUM(BlueprintType)
enum ETresEnemyEx701BodyCollisionType
{
	TRES_ENEMY_EX701_BODYCOLLISIONTYPE_DFAULT = 0,
	TRES_ENEMY_EX701_BODYCOLLISIONTYPE_RUSH = 1,
	TRES_ENEMY_EX701_BODYCOLLISIONTYPE_SHOT = 2,
	TRES_ENEMY_EX701_BODYCOLLISIONTYPE_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyEx711_BodyCollision
{
	ETresEnemyEx711_BodyCollision_PlPushSphere = 0,
	ETresEnemyEx711_BodyCollision_PlPushTornado = 1,
	ETresEnemyEx711_BodyCollision_PlPushTornadoOverRun = 2,
	ETresEnemyEx711_BodyCollision_ShootingRide = 3,
	ETresEnemyEx711_BodyCollision_Max = 4
};

UENUM(BlueprintType)
enum ETresEnemyEx711_Hatch
{
	ETresEnemyEx711_Hatch_LF = 0,
	ETresEnemyEx711_Hatch_LC = 1,
	ETresEnemyEx711_Hatch_LB = 2,
	ETresEnemyEx711_Hatch_RF = 3,
	ETresEnemyEx711_Hatch_RC = 4,
	ETresEnemyEx711_Hatch_RB = 5,
	ETresEnemyEx711_Hatch_Max = 6
};

UENUM(BlueprintType)
enum ETresEnemyEx721WoodsJailPattern
{
	ETresEnemyEx721WoodsJailPattern_CAMERA_IN = 0,
	ETresEnemyEx721WoodsJailPattern_CAMERA_OUT = 1,
	ETresEnemyEx721WoodsJailPattern_TOWER = 2,
	ETresEnemyEx721WoodsJailPattern_1_MAX = 3,
	ETresEnemyEx721WoodsJailPattern_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemyEx721HandID
{
	RIGHT_UP = 0,
	RIGHT_DOWN = 1,
	LEFT_UP = 2,
	LEFT_DOWN = 3,
	ETresEnemyEx721HandID_1_MAX = 4,
	ETresEnemyEx721HandID_MAX = 5
};

UENUM(BlueprintType)
enum ETresEnemyEx721Mode
{
	TRES_ENEMY_EX721_NORMAL_MODE = 0,
	TRES_ENEMY_EX721_TOWER_MODE = 1,
	TRES_ENEMY_EX721_MAX = 2
};

UENUM(BlueprintType)
enum ETresEx725DieKind
{
	ETresEx725DieKind_NORMAL = 0,
	ETresEx725DieKind_HOLE = 1,
	ETresEx725DieKind_NONE = 2,
	ETresEx725DieKind_MAX = 3
};

UENUM(BlueprintType)
enum ETresThornChainState
{
	ETresThornChainState_APPEAR = 0,
	ETresThornChainState_NORMAL = 1,
	ETresThornChainState_AIMING = 2,
	ETresThornChainState_CAPTURED = 3,
	ETresThornChainState_AIMING_INTERVAL = 4,
	ETresThornChainState_DRAG = 5,
	ETresThornChainState_SWING = 6,
	ETresThornChainState_DEAD = 7,
	ETresThornChainState_MAX = 8
};

UENUM(BlueprintType)
enum ETres_e_ex773_Direction
{
	ETres_e_ex773_Direction_None = 0,
	ETres_e_ex773_Direction_Front = 1,
	ETres_e_ex773_Direction_Right = 2,
	ETres_e_ex773_Direction_Left = 3,
	ETres_e_ex773_Direction_Back = 4,
	ETres_e_ex773_MAX = 5
};

UENUM(BlueprintType)
enum EColorTypes_e_ex781Gigas
{
	TRES_ENEMY_EX781GIGAS_YELLOW = 0,
	TRES_ENEMY_EX781GIGAS_BLUE = 1,
	TRES_ENEMY_EX781GIGAS_RED = 2,
	TRES_ENEMY_EX781GIGAS_MAX = 3
};

UENUM(BlueprintType)
enum ETetraBitActionTypes_e_ex781
{
	TRES_ENEMY_EX781_BITACTION_WAIT = 0,
	TRES_ENEMY_EX781_BITACTION_MOVE = 1,
	TRES_ENEMY_EX781_BITACTION_ATTACK = 2,
	TRES_ENEMY_EX781_BITACTION_FORMATION = 3,
	TRES_ENEMY_EX781_BITACTION_FINISH = 4,
	TRES_ENEMY_EX781_BITACTION_MAX = 5
};

UENUM(BlueprintType)
enum ETresEnemyEyeType_e_ex816
{
	TRES_ENEMY_EYE_TYPE_E_EX816_LEFT = 0,
	TRES_ENEMY_EYE_TYPE_E_EX816_RIGHT = 1,
	TRES_ENEMY_EYE_TYPE_E_EX816_MAX = 2
};

UENUM(BlueprintType)
enum ETresEnemyShip
{
	ETresEnemyShip_FRONT = 0,
	ETresEnemyShip_RIGHT = 1,
	ETresEnemyShip_LEFT = 2,
	ETresEnemyShip_BACK = 3,
	ETresEnemyShip_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemyShipSubType
{
	ETresEnemyShipSubType_DEFAULT = 0,
	ETresEnemyShipSubType_BLACK = 1,
	ETresEnemyShipSubType_CRAB = 2,
	ETresEnemyShipSubType_PHANTOM = 3,
	ETresEnemyShipSubType_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemyBigDealAction_e_ex356
{
	ETresEnemyBigDealAction_e_ex356_None = 0,
	ETresEnemyBigDealAction_e_ex356_Move = 1,
	ETresEnemyBigDealAction_e_ex356_SideCardAttack = 2,
	ETresEnemyBigDealAction_e_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex356_CardDesign
{
	BackSide = 0,
	Luxord = 1,
	Not = 2,
	Plain = 3,
	Correct = 4,
	Explode = 5,
	ETresEnemy_e_ex356_MAX = 6
};

UENUM(BlueprintType)
enum ETresEnemyFieldAttack_e_ex357
{
	ETresEnemyFieldAttack_e_ex357_Penetrate = 0,
	ETresEnemyFieldAttack_e_ex357_Time = 1,
	ETresEnemyFieldAttack_e_ex357_Max = 2,
	ETresEnemyFieldAttack_e_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyFieldGenerateLocation_e_ex357
{
	ETresEnemyFieldGenerateLocation_e_ex357_Target = 0,
	ETresEnemyFieldGenerateLocation_e_ex357_Map = 1,
	ETresEnemyFieldGenerateLocation_e_ex357_Max = 2,
	ETresEnemyFieldGenerateLocation_e_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyFieldSize_e_ex357
{
	ETresEnemyFieldSize_e_ex357_Small = 0,
	ETresEnemyFieldSize_e_ex357_Medium = 1,
	ETresEnemyFieldSize_e_ex357_Large = 2,
	ETresEnemyFieldSize_e_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyBitGenerateLocation_e_ex357
{
	ETresEnemyBitGenerateLocation_e_ex357_Target = 0,
	ETresEnemyBitGenerateLocation_e_ex357_Marluxia = 1,
	ETresEnemyBitGenerateLocation_e_MAX = 2
};

UENUM(BlueprintType)
enum ETresEnemyAction_e_ex357
{
	ETresEnemyAction_e_ex357_Normal = 0,
	ETresEnemyAction_e_ex357_Warp = 1,
	ETresEnemyAction_e_ex357_None = 2,
	ETresEnemyAction_e_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyAvatarAttackAppearLocation_e_ex358
{
	ETresEnemyAvatarAttackAppearLocation_e_ex358_Target = 0,
	ETresEnemyAvatarAttackAppearLocation_e_ex358_Center = 1,
	ETresEnemyAvatarAttackAppearLocation_e_ex358_Custom = 2,
	ETresEnemyAvatarAttackAppearLocation_e_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyChangeManualLockonPriority_e_ex358
{
	ETresEnemyChangeManualLockonPriority_e_ex358_Low = 0,
	ETresEnemyChangeManualLockonPriority_e_ex358_Normal = 1,
	ETresEnemyChangeManualLockonPriority_e_ex358_High = 2,
	ETresEnemyChangeManualLockonPriority_e_ex358_Max = 3,
	ETresEnemyChangeManualLockonPriority_e_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemyWildDanceAppearLocation_e_ex358
{
	ETresEnemyWildDanceAppearLocation_e_ex358_Target = 0,
	ETresEnemyWildDanceAppearLocation_e_ex358_Center = 1,
	ETresEnemyWildDanceAppearLocation_e_MAX = 2
};

UENUM(BlueprintType)
enum ETresEnemyWildDanceActionEnd_e_ex358
{
	ETresEnemyWildDanceActionEnd_e_ex358_Normal = 0,
	ETresEnemyWildDanceActionEnd_e_ex358_Warp = 1,
	ETresEnemyWildDanceActionEnd_e_ex358_ThunderStep = 2,
	ETresEnemyWildDanceActionEnd_e_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyNaruikazuchi_e_ex358
{
	Fast = 0,
	Slow = 1,
	ETresEnemyNaruikazuchi_e_MAX = 2
};

UENUM(BlueprintType)
enum ETresEnemyJinraiPhaseType_e_ex358
{
	TRES_ENEMY_JINRAI_PHASE_TYPE_E_EX358_FIRST = 0,
	TRES_ENEMY_JINRAI_PHASE_TYPE_E_EX358_SECOND = 1,
	TRES_ENEMY_JINRAI_PHASE_TYPE_E_EX358_THIRD = 2,
	TRES_ENEMY_JINRAI_PHASE_TYPE_E_EX358_NONE = 3,
	TRES_ENEMY_JINRAI_PHASE_TYPE_E_EX358_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemyRunDirectionType_e_ex358
{
	TRES_ENEMY_RUN_DIRECTION_TYPE_E_EX358_CAUTION_RIGHT = 0,
	TRES_ENEMY_RUN_DIRECTION_TYPE_E_EX358_CAUTION_LEFT = 1,
	TRES_ENEMY_RUN_DIRECTION_TYPE_E_EX358_CAUTION_VIEW_CENTER = 2,
	TRES_ENEMY_RUN_DIRECTION_TYPE_E_EX358_TARGET = 3,
	TRES_ENEMY_RUN_DIRECTION_TYPE_E_EX358_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemyStepDirectionType_e_ex358
{
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX358_RIGHT = 0,
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX358_LEFT = 1,
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX358_BACK = 2,
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX358_FRONT = 3,
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX358_AUTO = 4,
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX358_MAX = 5
};

UENUM(BlueprintType)
enum ETresEnemyActionType_e_ex358
{
	TRES_ENEMY_ACTION_TYPE_E_EX358_MOVE = 0,
	TRES_ENEMY_ACTION_TYPE_E_EX358_WARP = 1,
	TRES_ENEMY_ACTION_TYPE_E_EX358_ACTION = 2,
	TRES_ENEMY_ACTION_TYPE_E_EX358_ATTACK = 3,
	TRES_ENEMY_ACTION_TYPE_E_EX358_NONE = 4,
	TRES_ENEMY_ACTION_TYPE_E_EX358_MAX = 5
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex761_BattleAreaB_Camera
{
	ETresEnemy_e_ex761_BattleAreaB_Camera_Normal = 0,
	ETresEnemy_e_ex761_BattleAreaB_Camera_NotZoom = 1,
	ETresEnemy_e_ex761_BattleAreaB_Camera_Max = 2,
	ETresEnemy_e_ex761_BattleAreaB_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex761_BattleAreaAttack
{
	ETresEnemy_e_ex761_BattleAreaAttack_TripleAttack = 0,
	ETresEnemy_e_ex761_BattleAreaAttack_WarpRushVanish = 1,
	ETresEnemy_e_ex761_BattleAreaAttack_WarpRushFinish = 2,
	ETresEnemy_e_ex761_BattleAreaAttack_RaiseCut = 3,
	ETresEnemy_e_ex761_BattleAreaAttack_RotationCut = 4,
	ETresEnemy_e_ex761_BattleAreaAttack_Shot = 5,
	ETresEnemy_e_ex761_BattleAreaAttack_ClusterShot = 6,
	ETresEnemy_e_ex761_BattleAreaAttack_Max = 7,
	ETresEnemy_e_ex761_BattleAreaAttack_ETresEnemy_e_ex761_MAX = 8
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex761_BattleAreaAppearTiming
{
	ETresEnemy_e_ex761_BattleAreaAppearTiming_BeginOverlap = 0,
	ETresEnemy_e_ex761_BattleAreaAppearTiming_EndOverlap = 1,
	ETresEnemy_e_ex761_BattleAreaAppearTiming_1_Max = 2,
	ETresEnemy_e_ex761_BattleAreaAppearTiming_ETresEnemy_e_ex761_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex761_BattleAreaAppear
{
	ETresEnemy_e_ex761_BattleAreaAppear_A = 0,
	ETresEnemy_e_ex761_BattleAreaAppear_B = 1,
	ETresEnemy_e_ex761_BattleAreaAppear_C = 2,
	ETresEnemy_e_ex761_BattleAreaAppear_D = 3,
	ETresEnemy_e_ex761_BattleAreaAppear_1_Max = 4,
	ETresEnemy_e_ex761_BattleAreaAppear_ETresEnemy_e_ex761_MAX = 5
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex761_Weapon
{
	Weapon1 = 0,
	Weapon2 = 1,
	Weapon3 = 2,
	Weapon4 = 3,
	Weapon5 = 4,
	Weapon6 = 5,
	Weapon7 = 6,
	Weapon8 = 7,
	Weapon9 = 8,
	Weapon10 = 9,
	Weapon11 = 10,
	Weapon12 = 11,
	ETresEnemy_e_ex761_Weapon_Max = 12,
	ETresEnemy_e_ex761_Weapon_ETresEnemy_e_ex761_MAX = 13
};

UENUM(BlueprintType)
enum ETresEnemyXIIIEPlayVoiceKind
{
	ETresEnemyXIIIEPlayVoiceKind_VoiceAttach = 0,
	ETresEnemyXIIIEPlayVoiceKind_Voice2D = 1,
	ETresEnemyXIIIEPlayVoiceKind_VoiceAtLocation = 2,
	ETresEnemyXIIIEPlayVoiceKind_1_Max = 3,
	ETresEnemyXIIIEPlayVoiceKind_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemyXIIILELineTraceKind
{
	ETresEnemyXIIILELineTraceKind_None = 0,
	ETresEnemyXIIILELineTraceKind_Horizontal = 1,
	ETresEnemyXIIILELineTraceKind_Vertical = 2,
	ETresEnemyXIIILELineTraceKind_Both = 3,
	ETresEnemyXIIILELineTraceKind_1_Max = 4,
	ETresEnemyXIIILELineTraceKind_MAX = 5
};

UENUM(BlueprintType)
enum ETresEnemyXIIILEPlayVoiceKind
{
	ETresEnemyXIIILEPlayVoiceKind_VoiceAttach = 0,
	ETresEnemyXIIILEPlayVoiceKind_Voice2D = 1,
	ETresEnemyXIIILEPlayVoiceKind_VoiceAtLocation = 2,
	ETresEnemyXIIILEPlayVoiceKind_1_Max = 3,
	ETresEnemyXIIILEPlayVoiceKind_MAX = 4
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
enum ETresEnemyXIIISettingPhase
{
	ETresEnemyXIIISettingPhase_PHASE1 = 0,
	ETresEnemyXIIISettingPhase_PHASE2 = 1,
	ETresEnemyXIIISettingPhase_PHASE3 = 2,
	ETresEnemyXIIISettingPhase_PHASE4 = 3,
	ETresEnemyXIIISettingPhase_PHASE_EX1 = 4,
	ETresEnemyXIIISettingPhase_1_MAX = 5,
	ETresEnemyXIIISettingPhase_MAX = 6
};

UENUM(BlueprintType)
enum EEnvGeneratorOnRingRadiusMode
{
	ContextCenter = 0,
	ContextRadius = 1,
	QuerierAndContextRadius = 2,
	EEnvGeneratorOnRingRadiusMode_MAX = 3
};

UENUM(BlueprintType)
enum ETresItemPathDirectionMode
{
	ETresItemPathDirectionMode_ItemRotation = 0,
	ETresItemPathDirectionMode_ContextToItem = 1,
	ETresItemPathDirectionMode_ItemToContext = 2,
	ETresItemPathDirectionMode_ItemToPathStart = 3,
	ETresItemPathDirectionMode_PathStartToItem = 4,
	ETresItemPathDirectionMode_ItemToPathRelativeDirection = 5,
	ETresItemPathDirectionMode_PathToItemRelativeDirection = 6,
	ETresItemPathDirectionMode_PathRotationAtStart = 7,
	ETresItemPathDirectionMode_PathRotationAtClosestPointOnPath = 8,
	ETresItemPathDirectionMode_MAX = 9
};

UENUM(BlueprintType)
enum ETresContextPathDirectionMode
{
	ETresContextPathDirectionMode_ContextRotation = 0,
	ETresContextPathDirectionMode_ContextToItem = 1,
	ETresContextPathDirectionMode_ItemToContext = 2,
	ETresContextPathDirectionMode_ContextToPathStart = 3,
	ETresContextPathDirectionMode_PathStartToContext = 4,
	ETresContextPathDirectionMode_ContextToPathRelativeDirection = 5,
	ETresContextPathDirectionMode_PathToContextRelativeDirection = 6,
	ETresContextPathDirectionMode_PathRotationAtStart = 7,
	ETresContextPathDirectionMode_PathRotationAtClosestPointOnPath = 8,
	ETresContextPathDirectionMode_MAX = 9
};

UENUM(BlueprintType)
enum ETresEnvQueryTestItemPropertySource
{
	ETresEnvQueryTestItemPropertySource_BlackboardKey = 0,
	ETresEnvQueryTestItemPropertySource_Property = 1,
	ETresEnvQueryTestItemPropertySource_Function = 2,
	ETresEnvQueryTestItemPropertySource_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnvQueryTest_MercunaWallDistanceDir
{
	ETresEnvQueryTest_MercunaWallDistanceDir_Side = 0,
	ETresEnvQueryTest_MercunaWallDistanceDir_Bottom = 1,
	ETresEnvQueryTest_MercunaWallDistanceDir_Ceiling = 2,
	ETresEnvQueryTest_MAX = 3
};

UENUM(BlueprintType)
enum ETresAttributeHitEnd_e_ex357
{
	AllLoopEnd = 0,
	ProjectileEndAfterLoopEnd = 1,
	AllDestroy = 2,
	ETresAttributeHitEnd_e_MAX = 3
};

UENUM(BlueprintType)
enum ETresFieldVoiceLip
{
	ETresFieldVoiceLip_Default = 0,
	ETresFieldVoiceLip_Joy = 1,
	ETresFieldVoiceLip_Angly = 2,
	ETresFieldVoiceLip_Sorrow = 3,
	ETresFieldVoiceLip_MAX = 4
};

UENUM(BlueprintType)
enum ETresFieldVoiceExecuteMode
{
	ETresFieldVoiceExecuteMode_Tick = 0,
	ETresFieldVoiceExecuteMode_Begin = 1,
	ETresFieldVoiceExecuteMode_End = 2,
	ETresFieldVoiceExecuteMode_Auto = 3,
	ETresFieldVoiceExecuteMode_MAX = 4
};

UENUM(BlueprintType)
enum ETresForceFeedbackKind
{
	ETresForceFeedbackKind_TFFK_SMALL = 0 UMETA(DisplayName = "Small"),
	ETresForceFeedbackKind_TFFK_MIDDLE = 1 UMETA(DisplayName = "Middle"),
	ETresForceFeedbackKind_LARGE = 2 UMETA(DisplayName = "Large"),
	ETresForceFeedbackKind_TFFK_MAX = 3  UMETA(Hidden),
	ETresForceFeedbackKind_MAX = 4  UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresFriendAreaID
{
	TRES_FR_AREA_ID_UNKNOWN = 0,
	TRES_FR_AREA_ID_A = 1,
	TRES_FR_AREA_ID_B = 2,
	TRES_FR_AREA_ID_C = 3,
	TRES_FR_AREA_ID_D = 4,
	TRES_FR_AREA_ID_E = 5,
	TRES_FR_AREA_ID_DW = 6,
	TRES_FR_AREA_ID_KG06 = 7,
	TRES_FR_AREA_ID_EVENT = 8,
	TRES_FR_AREA_ID_MAX = 9  UMETA(Hidden)
};

UENUM(BlueprintType)
enum EIceRaileCameraType
{
	IRCT_Use_Rail = 0,
	IRCT_Use_Jump = 1,
	IRCT_Use_Move = 2,
	IRCT_Use_MAX = 3  UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresStartMapType
{
	ETresStartMapType_Normal = 0,
	ETresStartMapType_RemindDLC = 1,
	ETresStartMapType_1_Max = 2  UMETA(Hidden),
	ETresStartMapType_MAX = 3  UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGameOverHintSpecialType
{
	ETresGameOverHintSpecialType_None = 0,
	KilledByGimmick = 1,
	DieInUnderwater = 2,
	DieInSpecialRailSlide = 3,
	OutsideSetting = 4,
	RestrictWeapon = 5,
	DeathSentence = 6,
	ETresGameOverHintSpecialType_1_Max = 7,
	ETresGameOverHintSpecialType_MAX = 8
};

UENUM(BlueprintType)
enum ECardExplodeEffect_e_ex356
{
	ECardExplodeEffect_e_ex356_Normal = 0,
	HideAndSeek = 1,
	ECardExplodeEffect_e_MAX = 2
};

UENUM(BlueprintType)
enum EHideAndSeekAnim_e_ex356
{
	EHideAndSeekAnim_e_ex356_FallDown = 0,
	EHideAndSeekAnim_e_ex356_GetUp = 1,
	EHideAndSeekAnim_e_ex356_FallDownInverse = 2,
	EHideAndSeekAnim_e_ex356_1_Max = 3,
	EHideAndSeekAnim_e_MAX = 4
};

UENUM(BlueprintType)
enum ETresGimmick_e_ex711_PhysicsActorSizeKind
{
	SIZE_KIND_SMALL = 0,
	SIZE_KIND_MEDIUM = 1,
	SIZE_KIND_BIG = 2,
	SIZE_KIND_MAX = 3
};

UENUM(BlueprintType)
enum ETresGimmick_e_ex711_PhysicsActorGimmickKind
{
	GIMMICK_KIND_NONE = 0,
	GIMMICK_KIND_ATHLETIC_FLOW_ROOT = 1,
	GIMMICK_KIND_ATHLETIC_FLOW_LAST = 2,
	GIMMICK_KIND_ATHLETIC_FLOW = 3,
	GIMMICK_KIND_HOP = 4,
	GIMMICK_KIND_SCAFFOLD = 5,
	GIMMICK_KIND_MAX = 6
};

UENUM(BlueprintType)
enum ETresGimmickEx781GravitySphereGravityType
{
	ETresGimmickEx781GravitySphereGravityType_NONE = 0,
	ETresGimmickEx781GravitySphereGravityType_UP = 1,
	ETresGimmickEx781GravitySphereGravityType_PULL = 2,
	ETresGimmickEx781GravitySphereGravityType_PUSH = 3,
	ETresGimmickEx781GravitySphereGravityType_MAX = 4
};

UENUM(BlueprintType)
enum ETresBxPuddingType
{
	ETresBxPuddingType_NONE = 0,
	ETresBxPuddingType_NORMAL = 1,
	ETresBxPuddingType_CANNIBAL = 2,
	ETresBxPuddingType_AREA_JUMP = 3,
	ETresBxPuddingType_MAX = 4
};

UENUM(BlueprintType)
enum ETresGimmickEwDirectionType
{
	ETresGimmickEwDirectionType_Spline = 0,
	ETresGimmickEwDirectionType_Custom = 1,
	ETresGimmickEwDirectionType_1_Max = 2,
	ETresGimmickEwDirectionType_MAX = 3
};

UENUM(BlueprintType)
enum EFollowActorSplineMoveRotateStyle
{
	SNAP_ALL = 0,
	SNAP_YAW_ONLY = 1,
	SLERP_START_TO_END = 2,
	EFollowActorSplineMoveRotateStyle_MAX = 3
};

UENUM(BlueprintType)
enum EFollowActorMoveStyle
{
	LINEAR = 0,
	EASE_INOUT_SINE = 1,
	EFollowActorMoveStyle_MAX = 2
};

UENUM(BlueprintType)
enum EFollowActorState
{
	STATE_NONE = 0,
	STATE_WAIT = 1,
	STATE_FOLLOW = 2,
	STATE_TAKE_DISTANCE = 3,
	STATE_ESCAPE = 4,
	STATE_RETURN = 5,
	STATE_DESTINATION_MOVE = 6,
	STATE_SPLINE_MOVE = 7,
	STATE_MAX = 8
};

UENUM(BlueprintType)
enum ETresGimmickBxCarTyreType
{
	ETresGimmickBxCarTyreType_Basic = 0,
	ETresGimmickBxCarTyreType_Side = 1,
	ETresGimmickBxCarTyreType_Front = 2,
	ETresGimmickBxCarTyreType_MAX = 3
};

UENUM(BlueprintType)
enum EGimmickBX_CarSplineBlinker
{
	EGimmickBX_CarSplineBlinker_None = 0,
	EGimmickBX_CarSplineBlinker_Left = 1,
	EGimmickBX_CarSplineBlinker_Right = 2,
	EGimmickBX_CarSplineBlinker_MAX = 3
};

UENUM(BlueprintType)
enum ETresGimmickBxFlashTracerCourse
{
	Course = 0,
	Course01 = 1,
	Course_Max = 2
};

UENUM(BlueprintType)
enum ETresGimmickBxSingoukiColorType
{
	ETresGimmickBxSingoukiColorType_Red = 0,
	ETresGimmickBxSingoukiColorType_RedWait = 1,
	ETresGimmickBxSingoukiColorType_Blue = 2,
	ETresGimmickBxSingoukiColorType_BlueWait = 3,
	ETresGimmickBxSingoukiColorType_NoSignal = 4,
	ETresGimmickBxSingoukiColorType_MAX = 5
};

UENUM(BlueprintType)
enum ETresGimmickDitherFade_State
{
	ETresGimmickDitherFade_State_FadeIn = 0,
	ETresGimmickDitherFade_State_FadeOut = 1,
	ETresGimmickDitherFade_MAX = 2
};

UENUM(BlueprintType)
enum ETresGimmickDitherFade_Invoker
{
	ETresGimmickDitherFade_Invoker_Clip = 0,
	ETresGimmickDitherFade_Invoker_Gimmick = 1,
	ETresGimmickDitherFade_Invoker_Max = 2,
	ETresGimmickDitherFade_Invoker_ETresGimmickDitherFade_MAX = 3
};

UENUM(BlueprintType)
enum ETresGimmickHitCountComponentTeam
{
	ETresGimmickHitCountComponentTeam_Player = 0,
	ETresGimmickHitCountComponentTeam_Enemy = 1,
	ETresGimmickHitCountComponentTeam_Neutrality = 2,
	ETresGimmickHitCountComponentTeam_MAX = 3
};

UENUM(BlueprintType)
enum ETresGimmickHitCountComponentDamageProfile
{
	NotUse = 0,
	Gimmick = 1,
	Gimmick2 = 2,
	Reaction = 3,
	Reaction2 = 4,
	ReactionHE = 5,
	ReactionHE2 = 6,
	ReactionHE3 = 7,
	ReactionTS = 8,
	ReactionMI = 9,
	ReactionBT = 10,
	ReactionBX = 11,
	ReactionBX2 = 12,
	Prize = 13,
	PrizeCA = 14,
	PrizeTS = 15,
	PrizeTS2 = 16,
	PrizeTS3 = 17,
	PrizeHE = 18,
	PrizeHE2 = 19,
	PrizeBT = 20,
	PrizeBX = 21,
	GimmickEnemy = 22,
	DiveGim = 23,
	PrizeBT2 = 24,
	ReactionBT2 = 25,
	ReactionBT3 = 26,
	ReactionBT4 = 27,
	ETresGimmickHitCountComponentDamageProfile_MAX = 28
};

UENUM(BlueprintType)
enum ETresGimmickHitCountComponentType
{
	HitCount = 0,
	Accumulation = 1,
	HitCheckOnly = 2,
	ETresGimmickHitCountComponentType_MAX = 3
};

UENUM(BlueprintType)
enum EGimmickKG_UnionCrossEnemy_MoveMode
{
	Progress = 0,
	Direction = 1,
	Straight = 2,
	BlowUp = 3,
	EGimmickKG_UnionCrossEnemy_MAX = 4
};

UENUM(BlueprintType)
enum EGimmickKG_UnionCrossAnim
{
	EGimmickKG_UnionCrossAnim_Invalid = 0,
	EGimmickKG_UnionCrossAnim_Idle = 1,
	EGimmickKG_UnionCrossAnim_Attack = 2,
	EGimmickKG_UnionCrossAnim_Finish = 3,
	EGimmickKG_UnionCrossAnim_DamageStart = 4,
	EGimmickKG_UnionCrossAnim_DamageEnd = 5,
	EGimmickKG_UnionCrossAnim_MAX = 6
};

UENUM(BlueprintType)
enum ETresGimmickMI_02_LaserArmAttackState
{
	ETresGimmickMI_02_LaserArmAttackState_Idle = 0,
	ETresGimmickMI_02_LaserArmAttackState_Charging = 1,
	ETresGimmickMI_02_LaserArmAttackState_Fire = 2,
	ETresGimmickMI_02_MAX = 3
};

UENUM(BlueprintType)
enum ETresGimmickMI_02_LaserArmState
{
	ETresGimmickMI_02_LaserArmState_Idle = 0,
	ETresGimmickMI_02_LaserArmState_StartUp = 1,
	ETresGimmickMI_02_LaserArmState_Attack = 2,
	ETresGimmickMI_02_LaserArmState_Destroy = 3,
	ETresGimmickMI_02_LaserArmState_ETresGimmickMI_02_MAX = 4
};

UENUM(BlueprintType)
enum ETresGimmickMI_02_LaserArmActionType
{
	ETresGimmickMI_02_LaserArmActionType_BarricadeY = 0,
	ETresGimmickMI_02_LaserArmActionType_BarricadeX = 1,
	ETresGimmickMI_02_LaserArmActionType_Work = 2,
	ETresGimmickMI_02_LaserArmActionType_Spline = 3,
	ETresGimmickMI_02_LaserArmActionType_Player = 4,
	ETresGimmickMI_02_LaserArmActionType_ETresGimmickMI_02_MAX = 5
};

UENUM(BlueprintType)
enum ETresMI_04_DoorGeneratorMoveType
{
	ETresMI_04_DoorGeneratorMoveType_Lv0 = 0,
	ETresMI_04_DoorGeneratorMoveType_Lv1 = 1,
	ETresMI_04_DoorGeneratorMoveType_Lv2 = 2,
	ETresMI_04_MAX = 3
};

UENUM(BlueprintType)
enum EDanceDebugInfoType
{
	DEBUG_INFO_MOVE = 0,
	DEBUG_INFO_SPLINE = 1,
	DEBUG_INFO_TARGET = 2,
	DEBUG_INFO_CLAPSPOT = 3,
	DEBUG_INFO_BGM = 4,
	DEBUG_INFO_MAX = 5
};

UENUM(BlueprintType)
enum EDanceResultType
{
	EDanceResultType_NORMAL = 0,
	EDanceResultType_GREAT = 1,
	EDanceResultType_BAD = 2,
	EDanceResultType_MAX = 3
};

UENUM(BlueprintType)
enum ERaPuddingStateType
{
	ERaPuddingStateType_DEFAULT = 0,
	ERaPuddingStateType_DAMAGE = 1,
	ERaPuddingStateType_ANGRY = 2,
	ERaPuddingStateType_SHUTTER = 3,
	ERaPuddingStateType_HAPPY = 4,
	ERaPuddingStateType_MAX = 5
};

UENUM(BlueprintType)
enum ERaPuddingCommandType
{
	ERaPuddingCommandType_IDLE = 0,
	ERaPuddingCommandType_MOVEMENT = 1,
	ERaPuddingCommandType_ANIMATION = 2,
	ERaPuddingCommandType_ANGRY_VANISH = 3,
	ERaPuddingCommandType_HAPPY_VANISH = 4,
	ERaPuddingCommandType_FAIR_VANISH = 5,
	ERaPuddingCommandType_PANCAKE_DIVE = 6,
	ERaPuddingCommandType_PANCAKE_HIDE = 7,
	ERaPuddingCommandType_PANCAKE_EFFECT = 8,
	ERaPuddingCommandType_PANCAKE_APPEAR = 9,
	ERaPuddingCommandType_PANCAKE_VANISH = 10,
	ERaPuddingCommandType_TTR_ESCAPE = 11,
	ERaPuddingCommandType_TTR_START = 12,
	ERaPuddingCommandType_TTR_KEEP = 13,
	ERaPuddingCommandType_TTR_END = 14,
	PUDFORCE_IDLE = 15,
	PUDFORCE_MOVE = 16,
	PUDFORCE_POSE = 17,
	PUDFORCE_POSE01 = 18,
	PUDFORCE_POSE02 = 19,
	UMA_MOVE = 20,
	UMA_RISE = 21,
	UMA_KEEP = 22,
	UMA_FALL = 23,
	ICARUS_RISE = 24,
	ICARUS_KEEP = 25,
	ICARUS_FALL = 26,
	ICARUS_FALL_WAIT = 27,
	SET_MARKER_VALID = 28,
	SET_HIGH_MARKER_VALID = 29,
	SET_HIGH_MARKER_ON = 30,
	SET_HIGH_MARKER_OFF = 31,
	SET_NORMAL_MARKER_VALID = 32,
	SET_NORMAL_MARKER_ON = 33,
	SET_NORMAL_MARKER_OFF = 34,
	ERaPuddingCommandType_1_MAX = 35,
	ERaPuddingCommandType_MAX = 36
};

UENUM(BlueprintType)
enum ETresGimmickSimpleMovementDirAxis
{
	ETresGimmickSimpleMovementDirAxis_Forward = 0,
	ETresGimmickSimpleMovementDirAxis_Right = 1,
	ETresGimmickSimpleMovementDirAxis_Up = 2,
	ETresGimmickSimpleMovementDirAxis_MAX = 3
};

UENUM(BlueprintType)
enum ETresGimmickSimpleMovementAcclType
{
	ETresGimmickSimpleMovementAcclType_Linear = 0,
	ETresGimmickSimpleMovementAcclType_Accelerator = 1,
	ETresGimmickSimpleMovementAcclType_Curve = 2,
	ETresGimmickSimpleMovementAcclType_MAX = 3
};

UENUM(BlueprintType)
enum ETresGimmickSimpleMovementMoveType
{
	ETresGimmickSimpleMovementMoveType_Straight = 0,
	ETresGimmickSimpleMovementMoveType_Homing = 1,
	ETresGimmickSimpleMovementMoveType_TargetDir = 2,
	ETresGimmickSimpleMovementMoveType_TargetPoint = 3,
	ETresGimmickSimpleMovementMoveType_Parabola = 4,
	ETresGimmickSimpleMovementMoveType_MAX = 5
};

UENUM(BlueprintType)
enum ETresGimmickSimpleMovementStateType
{
	ETresGimmickSimpleMovementStateType_Idle = 0,
	ETresGimmickSimpleMovementStateType_Fire = 1,
	ETresGimmickSimpleMovementStateType_MAX = 2
};

UENUM(BlueprintType)
enum ETresGumiShipAtkHitTestType
{
	HT_NONE = 0,
	HT_ENEMY_ONLY = 1,
	HT_PLAYER_ONLY = 2,
	HT_ALL = 3,
	HT_MAX = 4
};

UENUM(BlueprintType)
enum ETresGumiShipObjectSize
{
	SMALL_SIZE = 0,
	MIDDLE_SIZE = 1,
	BIG_SIZE = 2,
	SIZE_TYPE_MAX = 3,
	ETresGumiShipObjectSize_MAX = 4
};

UENUM(BlueprintType)
enum ETresGumiShipGameBGM_ID
{
	FIELD_BGM = 0,
	NORMAL_BATTLE_BGM = 1,
	BOSS_BATTLE_BGM = 2,
	BATTLE_RESULT_BGM = 3,
	E_GM623_BATTLE_BGM = 4,
	E_GM628_BATTLE_BGM = 5,
	ETresGumiShipGameBGM_MAX = 6
};

UENUM(BlueprintType)
enum ETresGumiShipDirectNotifyType
{
	DNT_FINISHED_BATTLE_MISSION = 0 UMETA(DisplayName = "Finished Battle Mission"),
	DNT_ENCOUNT_BATTLE_START_CAMERA_SIGNAL = 1 UMETA(DisplayName = "Encount Battle Start Camera Signal"),
	DNT_MAX = 2  UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGumiShipCinematicModeEventFlag
{
	NOTIFY_RUN_MATINEE = 0,
	BOSS_ENEMY_APPEAR_EVENT = 1,
	ETresGumiShipCinematicModeEventFlag_MAX = 2
};

UENUM(BlueprintType)
enum ETresGumiShipClusterGeneratorShape
{
	ETresGumiShipClusterGeneratorShape_BOX = 0,
	ETresGumiShipClusterGeneratorShape_SPHERE = 1,
	ETresGumiShipClusterGeneratorShape_CAPSULE = 2,
	ETresGumiShipClusterGeneratorShape_1_MAX = 3,
	ETresGumiShipClusterGeneratorShape_MAX = 4
};

UENUM(BlueprintType)
enum ETresGumiShipCureValueType
{
	CVT_VALUE = 0,
	CVT_PERCENT = 1,
	CVT_MAX = 2
};

UENUM(BlueprintType)
enum ETresGumiShipAttackSubElemntType
{
	ASET_NONE = 0,
	ASET_SPECIAL = 1,
	ASET_MAX = 2
};

UENUM(BlueprintType)
enum ETresGumiShipAttackElementType
{
	AET_NONE = 0,
	AET_SHOT = 1,
	AET_LASER = 2,
	AET_STRIKE = 3,
	AET_MAX = 4
};

UENUM(BlueprintType)
enum ETresGumiShipLimitType
{
	LIMIT_ENDOFWORLD = 0,
	LIMIT_NOENTRY = 1,
	LIMIT_HP = 2,
	LIMIT_ATTACK = 3,
	LIMIT_POWER = 4,
	LIMIT_SPEED = 5,
	LIMIT_ROLL = 6,
	LIMIT_TURN = 7,
	LIMIT_NONE = 8,
	LIMIT_MAX = 9
};

UENUM(BlueprintType)
enum EGUMISHIP_ENEMY622_STATUS
{
	E_GM622_SHIELD_MODE = 0,
	E_GM622_INVINCIBLE_MODE = 1,
	E_GM622_CORE_MODE = 2,
	E_GM622_MAX = 3
};

UENUM(BlueprintType)
enum EGUMISHIP_ENEMY625_STATUS
{
	E_GM625_LATENT = 0,
	E_GM625_EMERGENCE = 1,
	E_GM625_MAX = 2
};

UENUM(BlueprintType)
enum EGUMISHIP_ENEMY625_METEORO_TARGET
{
	E_GM625_TARGET_METEORO1 = 0,
	E_GM625_TARGET_METEORO2 = 1,
	E_GM625_TARGET_METEORO3 = 2,
	E_GM625_TARGET_MAX = 3
};

UENUM(BlueprintType)
enum EGUMISHIP_ENEMY625_METEORO_BONE
{
	BACK_GM625_BONE = 0,
	BOTTOM_GM625_BONE = 1,
	CENTER_GM625_BONE = 2,
	FRONT_GM625_BONE = 3,
	LEFT_GM625_BONE = 4,
	RIGHT_GM625_BONE = 5,
	TOP_GM625_BONE = 6,
	NEAR_GM625_BONE = 7,
	GUMISHIP_ENEMY625_METEORO_MAX = 8
};

UENUM(BlueprintType)
enum EGUMISHIP_ENEMY625_MOTIONS
{
	E_GM625_MOTION_COME = 0,
	E_GM625_MOTION_LATENT = 1,
	E_GM625_MOTION_COME_IDOL = 2,
	E_GM625_MOTION_IDOL1 = 3,
	E_GM625_MOTION_IDOL2 = 4,
	E_GM625_MOTION_IDOL3 = 5,
	E_GM625_MOTION_MOVER = 6,
	E_GM625_MOTION_BODY_BLOW = 7,
	E_GM625_MOTION_BODY_BLOW01 = 8,
	E_GM625_MOTION_BODY_BLOW02 = 9,
	E_GM625_MOTION_LASER = 10,
	E_GM625_MOTION_LASER01 = 11,
	E_GM625_MOTION_LASER02 = 12,
	E_GM625_MOTION_STAND_BEAM1 = 13,
	E_GM625_MOTION_STAND_BEAM2 = 14,
	E_GM625_MOTION_STAND_BEAM3 = 15,
	E_GM625_MOTION_MAX = 16
};

UENUM(BlueprintType)
enum EGUMI_SHIP_ENEMY_GM626_CANNON
{
	EGUMI_SHIP_ENEMY_GM626_CANNON_UPPER_CANNON_ = 0,
	EGUMI_SHIP_ENEMY_GM626_CANNON_UNDER_CANNON_ = 1,
	EGUMI_SHIP_ENEMY_GM626_CANNON_MAX = 2
};

UENUM(BlueprintType)
enum EGUMI_SHIP_ENEMY_GM626_EYEMUZZLE
{
	EGUMI_SHIP_ENEMY_GM626_EYEMUZZLE_NOMAL_LASER_ = 0,
	EGUMI_SHIP_ENEMY_GM626_EYEMUZZLE_ZOMBIE_LASER_ = 1,
	EGUMI_SHIP_ENEMY_GM626_EYEMUZZLE_MAX = 2
};

UENUM(BlueprintType)
enum EGUMI_SHIP_ENEMY_GM626_STATUS
{
	EGUMI_SHIP_ENEMY_GM626_STATUS_UPPER_MODE_ = 0,
	EGUMI_SHIP_ENEMY_GM626_STATUS_LOWER_MODE_ = 1,
	EGUMI_SHIP_ENEMY_GM626_STATUS_UPPER_MODE2_ = 2,
	EGUMI_SHIP_ENEMY_GM626_STATUS_CENTER_MODE_ = 3,
	EGUMI_SHIP_ENEMY_GM626_STATUS_INVINCIBLE_ = 4,
	EGUMI_SHIP_ENEMY_GM626_STATUS_MAX = 5
};

UENUM(BlueprintType)
enum EGUMI_SHIP_ENEMY_GM626_SHIELD
{
	EGUMI_SHIP_ENEMY_GM626_SHIELD_SHIELD_NON_ = 0,
	EGUMI_SHIP_ENEMY_GM626_SHIELD_SHIELD_UPPER_ = 1,
	EGUMI_SHIP_ENEMY_GM626_SHIELD_SHIELD_LOWER_ = 2,
	EGUMI_SHIP_ENEMY_GM626_SHIELD_SHIELD_ZOMBIE_ = 3,
	EGUMI_SHIP_ENEMY_GM626_SHIELD_SHIELD_MAX = 4
};

UENUM(BlueprintType)
enum ETresGumiShipEnemySpawnConditionType
{
	TRIGGER_COLLISION_OVERLAP = 0,
	OTHER_ENEMY_GROUPS_WIPE_OUT = 1,
	OTHER_ENEMY_GROUPS_DISAPPEAR = 2,
	OTHER_ENEMY_GROUPS_NON_EXISTS = 3,
	EXTERNAL_NOTIFICATION = 4,
	SPAWN_CONDITION_TYPE_MAX = 5,
	ETresGumiShipEnemySpawnConditionType_MAX = 6
};

UENUM(BlueprintType)
enum ETresGumiShipEnemyGroupDisappearType
{
	LIFE_TIME_OUT = 0,
	SPLINE_PATH_END_ARRIVED = 1,
	OTHER_ENEMY_GROUP_APPEAR = 2,
	NON_DISAPPEAR_TYPE = 3,
	DISAPPEAR_TYPE_MAX = 4,
	ETresGumiShipEnemyGroupDisappearType_MAX = 5
};

UENUM(BlueprintType)
enum ETresGumiShipEnemyGroupMoveType
{
	FIXED_LOCATION = 0,
	STATIC_SPLINE_PATH_MOVE = 1,
	ATTACHED_SPLINE_PATH_MOVE = 2,
	UNIQUE_MOVE = 3,
	GROUP_MOVE_TYPE_MAX = 4,
	ETresGumiShipEnemyGroupMoveType_MAX = 5
};

UENUM(BlueprintType)
enum EGUMI_SHIP_TREASURE_SE
{
	TREASURE_SE_CORE_LOOP_START = 0,
	TREASURE_SE_CORE_LOOP_ERROR = 1,
	TREASURE_SE_CORE_LOOP_END = 2,
	TREASURE_SE_LOOP_GEAR = 3,
	TREASURE_SE_GEAR_SUCCESS = 4,
	TREASURE_SE_MAX = 5
};

UENUM(BlueprintType)
enum EGUMI_SHIP_TREASURE_STATE
{
	TREASURE_STATE_IDLEING = 0,
	TREASURE_STATE_ST_EVENT = 1,
	TREASURE_STATE_ST_RAILSLID = 2,
	TREASURE_STATE_ST_SUCCESS = 3,
	TREASURE_STATE_ST_FAILURE = 4,
	TREASURE_STATE_CLOSE = 5,
	TREASURE_STATE_MAX = 6
};

UENUM(BlueprintType)
enum EGUMI_SHIP_GIMMICK_PLAYER_MODE
{
	_PLAYER_MODE_EVENT_ = 0,
	_PLAYER_MODE_NOMAL_ = 1,
	_PLAYER_MODE_MAX = 2
};

UENUM(BlueprintType)
enum EGUMI_SHIP_GIMMICK_TREASURE_STATE
{
	_TREASURE_SUCCESS_ = 0,
	_TREASURE_FAILURE_ = 1,
	_TREASURE_NOW_ = 2,
	_TREASURE_MAX = 3
};

UENUM(BlueprintType)
enum EGUMI_SHIP_GIMMICK_GM200_CORE
{
	_CORE_A_ = 0,
	_CORE_B_ = 1,
	_CORE_MAX = 2
};

UENUM(BlueprintType)
enum ETresGumiShipHudMode
{
	HUD_MODE_QUEST = 0,
	HUD_MODE_BATTLE = 1,
	HUD_MODE_MAX = 2
};

UENUM(BlueprintType)
enum EGUMI_SHIP_DROPITEM_RARITY
{
	RARITY_LOW = 0,
	RARITY_CENTER = 1,
	RARITY_HIGH = 2,
	RARITY_MAX = 3
};

UENUM(BlueprintType)
enum ETresGummiSpaceDef
{
	SPACE_NON = 0,
	SPACE1 = 1,
	SPACE2 = 2,
	SPACE3 = 3,
	SPACE4 = 4,
	SPACE_MAX = 5,
	ETresGummiSpaceDef_MAX = 6
};

UENUM(BlueprintType)
enum ETresGumiShipBattleMissionItemRankType
{
	BMIRT_A = 0,
	BMIRT_B = 1,
	BMIRT_C = 2,
	BMIRT_MAX = 3
};

UENUM(BlueprintType)
enum ETresGumiShipBattleMissionDefeatedBonusRankType
{
	BMDBRT_A = 0,
	BMDBRT_B = 1,
	BMDBRT_C = 2,
	BMDBRT_MAX = 3
};

UENUM(BlueprintType)
enum ETresGumiShipBattleMissionTimeBonusRankType
{
	BMTBRT_A = 0,
	BMTBRT_B = 1,
	BMTBRT_C = 2,
	BMTBRT_D = 3,
	BMTBRT_E = 4,
	BMTBRT_F = 5,
	BMTBRT_G = 6,
	BMTBRT_H = 7,
	BMTBRT_MAX = 8
};

UENUM(BlueprintType)
enum ETresGumiShipBattleMissionType
{
	BMT_DEFEAT_TARGET = 0,
	BMT_SPRINE_END = 1,
	BMT_TIME_ATTACK = 2,
	BMT_DEFEAT_COUNT = 3,
	BMT_MAX = 4
};

UENUM(BlueprintType)
enum EGUMISHIP_ENEMY703_PARTS_KIND
{
	E_GM703_PARTS_SHIELD = 0,
	E_GM703_PARTS_PETAL = 1,
	E_GM703_PARTS_MAX = 2
};

UENUM(BlueprintType)
enum ETresGumiShipSpWeaponType
{
	SPWT_REPAIR_KIT = 0,
	SPWT_FORCE_FIELD = 1,
	SPWT_HEAVY_ROCKET = 2,
	SPWT_TWIN_SHOT = 3,
	SPWT_FIRE_STORM = 4,
	SPWT_LASER_SQUALL = 5,
	SPWT_SUNLIGHT_LASER = 6,
	SPWT_TEMPEST_KNUCKLE = 7,
	SPWT_HAMMER_HURRICANE = 8,
	SPWT_BARRIER_WALL = 9,
	SPWT_HOMING_LASER = 10,
	SPWT_AUTO_ATTACKER = 11,
	SPWT_ELECTRO_SHOT = 12,
	SPWT_SONIC_SCREAM = 13,
	SPWT_PILE_BUNKER = 14,
	SPWT_KNIGHT_KIT = 15,
	SPWT_TRINITY_FIRE = 16,
	SPWT_DECOY_TRIO = 17,
	SPWT_NONE = 18,
	SPWT_MAX = 19
};

UENUM(BlueprintType)
enum ETresGumiShipPlayerLockonState
{
	LOS_NONE_TYPE = 0,
	LOS_AUTO_LOCKON_TYPE = 1,
	LOS_MANUAL_LOCKON_TYPE = 2,
	LOS_TYPE_MAX = 3,
	LOS_MAX = 4
};

UENUM(BlueprintType)
enum EGUMI_SHIP_PRIZE_ITEM_KIND
{
	GM_EX_PRIZE_MIN = 0,
	GM_EX_PRIZE_MID = 1,
	GM_EX_PRIZE_MAX = 2,
	GM_HP_PRIZE_MIN = 3,
	GM_HP_PRIZE_MID = 4,
	GM_HP_PRIZE_MAX = 5,
	GM_MUNNY_PRIZE_MIN = 6,
	GM_MUNNY_PRIZE_MID = 7,
	GM_MUNNY_PRIZE_MAX = 8,
	GM_NONE = 9,
	GM_ITEM_DEFGUMI_PARTS = 10,
	GM_ITEM_DEFGUMI_MATERIAL = 11,
	GM_ITEM_DEFGUMI_PATTERN = 12,
	GM_ITEM_DEFGUMI_STICKER = 13,
	GM_ITEM_DEFGUMI_SHIPBP = 14,
	GM_ITEM_DEFGUMI_ETC = 15,
	GM_ITEM_TRES_MATERIAL = 16,
	GM_MAX = 17
};

UENUM(BlueprintType)
enum ETresGumiShipRaderEntityType
{
	ICON_TYPE_MARKER = 0,
	ICON_TYPE_WORLD = 1,
	ICON_TYPE_ARENA = 2,
	ICON_TYPE_TRAVEL = 3,
	ICON_TYPE_TREASUER = 4,
	ICON_TYPE_CRYSTAL = 5,
	ICON_TYPE_PRIZEBOX = 6,
	ICON_TYPE_NONE = 7,
	ICON_TYPE_MAX = 8
};

UENUM(BlueprintType)
enum EFTresGumiShipRailSlideRailType
{
	RSR_ROAD_TYPE = 0,
	RSR_BOSS_TRACKING_TYPE = 1,
	RSR_NORMAL_TRACKING_TYPE = 2,
	RSR_TREASURE_TYPE = 3,
	RSR_MAX = 4
};

UENUM(BlueprintType)
enum ETresGumiShipRailSlideSpeedAdjustmentType
{
	RSSA_NONE = 0,
	RSSA_ENEMY = 1,
	RSSA_PLAYER = 2,
	RSSA_MAX = 3
};

UENUM(BlueprintType)
enum ETresGumiShipTinyShipFormation
{
	FORWARD_SIDE = 0,
	FORWARD_FRONT = 1,
	FORWARD_UPDOWN = 2,
	FORWARD_BACK = 3,
	SIDEWAY_WIDE = 4,
	SIDEWAY_OUT = 5,
	BACKWARD_SIDE = 6,
	BACKWARD_BACK = 7,
	BACKWARD_UPDOWN = 8,
	BACKWARD_WIDE = 9,
	ROLL_Z = 10,
	ROLL_Y = 11,
	ROLL_X = 12,
	ROLL_Z_OUT = 13,
	SWING_Y = 14,
	SWING_Z = 15,
	SWING_X = 16,
	SWING_Y_BACK = 17,
	SP_OPTION = 18,
	SP_RANDOM = 19,
	SP_HOMING = 20,
	ETresGumiShipTinyShipFormation_UNKNOWN = 21,
	ETresGumiShipTinyShipFormation_MAX = 22
};

UENUM(BlueprintType)
enum ETresGumiShipMultiWeaponSetTargetType
{
	MWSTT_NORMAL = 0,
	MWSTT_MOST_NEAR_DIST = 1,
	MWSTT_MOST_LOW_HP = 2,
	MWSTT_MAX = 3
};

UENUM(BlueprintType)
enum ETresShipCreateKind
{
	TYPE_SAVE = 0,
	TYPE_PLAN = 1,
	TYPE_SPECIAL = 2,
	TYPE_NEW = 3,
	TYPE_NON = 4,
	TYPE_MAX = 5
};

UENUM(BlueprintType)
enum ETresGummiKind
{
	GUMMI_KIND_NULL = 0,
	GUMMI_KIND_BASE = 1,
	GUMMI_KIND_DECO = 2,
	GUMMI_KIND_TYPE_MAX = 3,
	GUMMI_KIND_MAX = 4
};

UENUM(BlueprintType)
enum ETresStickerType
{
	STICKER_TYPE_NULL = 0,
	STICKER_TYPE_NUMBER = 1,
	STICKER_TYPE_SYMBOL = 2,
	STICKER_TYPE_DESIGN = 3,
	STICKER_TYPE_CHARACTER = 4,
	STICKER_TYPE_MAX = 5
};

UENUM(BlueprintType)
enum ETresGummiType
{
	ETresGummiType_TYPE_NULL = 0,
	ETresGummiType_TYPE_EDGE = 1,
	ETresGummiType_TYPE_CURVE = 2,
	ETresGummiType_TYPE_PIPE = 3,
	ETresGummiType_TYPE_AERO = 4,
	ETresGummiType_TYPE_SHOOTING = 5,
	ETresGummiType_TYPE_LASER = 6,
	ETresGummiType_TYPE_STRIKE = 7,
	ETresGummiType_TYPE_ENGINE = 8,
	ETresGummiType_TYPE_WING = 9,
	ETresGummiType_TYPE_WHEEL = 10,
	ETresGummiType_TYPE_COCKPIT = 11,
	ETresGummiType_TYPE_SHIELD = 12,
	ETresGummiType_TYPE_OPTION = 13,
	ETresGummiType_TYPE_CHARACTER = 14,
	ETresGummiType_TYPE_MAX = 15
};

UENUM(BlueprintType)
enum EGummiEditorState
{
	GummiEditorLoad = 0,
	GummiEditorPrepare = 1,
	GummiEditorTop = 2,
	GummiEditorPlanSelect = 3,
	GummiEditorMainEditSelect = 4,
	GummiEditorMaterialGummiCategorySelect = 5,
	GummiEditorMaterialGummiBlockSelect = 6,
	GummiEditorState_MAX = 7
};

UENUM(BlueprintType)
enum ETresGummiMissionReleaseCondition
{
	RELEASE_NON = 0,
	RELEASE_FIRST = 1,
	RELEASE_AFTER_TRAVELER = 2,
	RELEASE_AFTER_MASTER_TRAVELER = 3,
	RELEASE_AFTER_WORLD_SEEKER = 4,
	RELEASE_AFTER_MASTER_WORLD_SEEKER = 5,
	RELEASE_CLEAR_TT = 6,
	RELEASE_CLEAR_TS_RA = 7,
	RELEASE_CLEAR_MI_FZ = 8,
	RELEASE_CLEAR_BX_CA = 9,
	RELEASE_AFTER_HEARTLESS_HUNT_BEGINNER = 10,
	RELEASE_AFTER_HEARTLESS_HUNT_NOVIS = 11,
	RELEASE_AFTER_HEARTLESS_HUNT_MIDDLE = 12,
	RELEASE_AFTER_HEARTLESS_HUNT_EXPERT = 13,
	RELEASE_AFTER_SWEAPON_COLLECT_BEGINNER = 14,
	RELEASE_AFTER_SWEAPON_COLLECT_NOVIS = 15,
	RELEASE_AFTER_SWEAPON_COLLECT_MIDDLE = 16,
	RELEASE_AFTER_SWEAPON_COLLECT_EXPERT = 17,
	RELEASE_AFTER_TREASURE_HUNT_BEGINNER = 18,
	RELEASE_AFTER_TREASURE_HUNT_NOVIS = 19,
	RELEASE_AFTER_TREASURE_HUNT_MIDDLE = 20,
	RELEASE_AFTER_TREASURE_HUNT_EXPERT = 21,
	ETresGummiMissionReleaseCondition_RARITY_MAX = 22,
	ETresGummiMissionReleaseCondition_MAX = 23
};

UENUM(BlueprintType)
enum ETresGummiMissionRarity
{
	ETresGummiMissionRarity_RARITY_NON = 0,
	ETresGummiMissionRarity_RARITY_LOW = 1,
	ETresGummiMissionRarity_RARITY_MIDDLE = 2,
	ETresGummiMissionRarity_RARITY_HIGH = 3,
	ETresGummiMissionRarity_RARITY_MAX = 4
};

UENUM(BlueprintType)
enum ETresGumiShipJumpPointID
{
	E_GM01_JP_01 = 0,
	E_GM01_JP_02 = 1,
	E_GM01_JP_03 = 2,
	E_GM01_JP_04 = 3,
	E_GM01_JP_05 = 4,
	E_GM01_JP_06 = 5,
	E_GM01_JP_07 = 6,
	E_GM01_JP_08 = 7,
	E_GM01_JP_09 = 8,
	E_GM01_JP = 9,
	E_GM02_JP_01 = 10,
	E_GM02_JP_02 = 11,
	E_GM02_JP_03 = 12,
	E_GM02_JP_04 = 13,
	E_GM02_JP_05 = 14,
	E_GM02_JP_06 = 15,
	E_GM02_JP_07 = 16,
	E_GM02_JP_08 = 17,
	E_GM02_JP_09 = 18,
	E_GM02_JP = 19,
	E_GM03_JP_01 = 20,
	E_GM03_JP_02 = 21,
	E_GM03_JP_03 = 22,
	E_GM03_JP_04 = 23,
	E_GM03_JP_05 = 24,
	E_GM03_JP_06 = 25,
	E_GM03_JP_07 = 26,
	E_GM03_JP_08 = 27,
	E_GM03_JP_09 = 28,
	E_GM03_JP = 29,
	E_RESERVE_JP_01 = 30,
	E_RESERVE_JP_02 = 31,
	E_RESERVE_JP_03 = 32,
	E_RESERVE_JP_04 = 33,
	E_RESERVE_JP_05 = 34,
	E_RESERVE_JP_06 = 35,
	E_RESERVE_JP_07 = 36,
	E_RESERVE_JP_08 = 37,
	E_RESERVE_JP_09 = 38,
	E_RESERVE_JP = 39,
	E_RESERVE_JP01 = 40,
	E_RESERVE_JP02 = 41,
	E_RESERVE_JP03 = 42,
	E_RESERVE_JP04 = 43,
	E_RESERVE_JP05 = 44,
	E_RESERVE_JP06 = 45,
	E_RESERVE_JP07 = 46,
	E_RESERVE_JP08 = 47,
	E_RESERVE_JP09 = 48,
	E_RESERVE_JP10 = 49,
	JUMP_POINT_MAX = 50,
	ETresGumiShipJumpPointID_MAX = 51
};

UENUM(BlueprintType)
enum ETresGumiShipConstellationCode
{
	C01 = 0,
	C02 = 1,
	C03 = 2,
	C04 = 3,
	C05 = 4,
	C06 = 5,
	C07 = 6,
	C08 = 7,
	C09 = 8,
	ETresGumiShipConstellationCode_1_Max = 9,
	ETresGumiShipConstellationCode_MAX = 10
};

UENUM(BlueprintType)
enum ETresGumiShipGumiCrystalID
{
	E_GM01_GC_01 = 0,
	E_GM01_GC_02 = 1,
	E_GM01_GC_03 = 2,
	E_GM01_GC_04 = 3,
	E_GM01_GC_05 = 4,
	E_GM01_GC_06 = 5,
	E_GM01_GC_07 = 6,
	E_GM01_GC_08 = 7,
	E_GM01_GC_09 = 8,
	E_GM01_GC = 9,
	E_GM01_GC01 = 10,
	E_GM01_GC02 = 11,
	E_GM01_GC03 = 12,
	E_GM01_GC04 = 13,
	E_GM01_GC05 = 14,
	E_GM01_GC06 = 15,
	E_GM01_GC07 = 16,
	E_GM01_GC08 = 17,
	E_GM01_GC09 = 18,
	E_GM01_GC10 = 19,
	E_GM02_GC_01 = 20,
	E_GM02_GC_02 = 21,
	E_GM02_GC_03 = 22,
	E_GM02_GC_04 = 23,
	E_GM02_GC_05 = 24,
	E_GM02_GC_06 = 25,
	E_GM02_GC_07 = 26,
	E_GM02_GC_08 = 27,
	E_GM02_GC_09 = 28,
	E_GM02_GC = 29,
	E_GM02_GC01 = 30,
	E_GM02_GC02 = 31,
	E_GM02_GC03 = 32,
	E_GM02_GC04 = 33,
	E_GM02_GC05 = 34,
	E_GM02_GC06 = 35,
	E_GM02_GC07 = 36,
	E_GM02_GC08 = 37,
	E_GM02_GC09 = 38,
	E_GM02_GC10 = 39,
	E_GM03_GC_01 = 40,
	E_GM03_GC_02 = 41,
	E_GM03_GC_03 = 42,
	E_GM03_GC_04 = 43,
	E_GM03_GC_05 = 44,
	E_GM03_GC_06 = 45,
	E_GM03_GC_07 = 46,
	E_GM03_GC_08 = 47,
	E_GM03_GC_09 = 48,
	E_GM03_GC = 49,
	E_GM03_GC01 = 50,
	E_GM03_GC02 = 51,
	E_GM03_GC03 = 52,
	E_GM03_GC04 = 53,
	E_GM03_GC05 = 54,
	E_GM03_GC06 = 55,
	E_GM03_GC07 = 56,
	E_GM03_GC08 = 57,
	E_GM03_GC09 = 58,
	E_GM03_GC10 = 59,
	E_GM04_GC_01 = 60,
	E_GM04_GC_02 = 61,
	E_GM04_GC_03 = 62,
	E_GM04_GC_04 = 63,
	E_GM04_GC_05 = 64,
	E_GM04_GC_06 = 65,
	E_GM04_GC_07 = 66,
	E_GM04_GC_08 = 67,
	E_GM04_GC_09 = 68,
	E_GM04_GC = 69,
	GUMI_CRYSTAL_MAX = 70,
	ETresGumiShipGumiCrystalID_MAX = 71
};

UENUM(BlueprintType)
enum ETresGumiShipSpecialCrystalID
{
	E_GM01_SC_01 = 0,
	E_GM01_SC_02 = 1,
	E_GM01_SC_03 = 2,
	E_GM01_SC_04 = 3,
	E_GM01_SC_05 = 4,
	E_GM01_SC_06 = 5,
	E_GM01_SC_07 = 6,
	E_GM01_SC_08 = 7,
	E_GM01_SC_09 = 8,
	E_GM01_SC = 9,
	E_GM01_SC01 = 10,
	E_GM01_SC02 = 11,
	E_GM01_SC03 = 12,
	E_GM01_SC04 = 13,
	E_GM01_SC05 = 14,
	E_GM02_SC_01 = 15,
	E_GM02_SC_02 = 16,
	E_GM02_SC_03 = 17,
	E_GM02_SC_04 = 18,
	E_GM02_SC_05 = 19,
	E_GM02_SC_06 = 20,
	E_GM02_SC_07 = 21,
	E_GM02_SC_08 = 22,
	E_GM02_SC_09 = 23,
	E_GM02_SC = 24,
	E_GM02_SC01 = 25,
	E_GM02_SC02 = 26,
	E_GM02_SC03 = 27,
	E_GM02_SC04 = 28,
	E_GM02_SC05 = 29,
	E_GM03_SC_01 = 30,
	E_GM03_SC_02 = 31,
	E_GM03_SC_03 = 32,
	E_GM03_SC_04 = 33,
	E_GM03_SC_05 = 34,
	E_GM03_SC_06 = 35,
	E_GM03_SC_07 = 36,
	E_GM03_SC_08 = 37,
	E_GM03_SC_09 = 38,
	E_GM03_SC = 39,
	E_GM03_SC01 = 40,
	E_GM03_SC02 = 41,
	E_GM03_SC03 = 42,
	E_GM03_SC04 = 43,
	E_GM03_SC05 = 44,
	E_GM04_SC_01 = 45,
	E_GM04_SC_02 = 46,
	E_GM04_SC_03 = 47,
	E_GM04_SC_04 = 48,
	E_GM04_SC_05 = 49,
	E_GM04_SC_06 = 50,
	E_GM04_SC_07 = 51,
	E_GM04_SC_08 = 52,
	E_GM04_SC_09 = 53,
	E_GM04_SC = 54,
	E_GM04_SC01 = 55,
	E_GM04_SC02 = 56,
	E_GM04_SC03 = 57,
	E_GM04_SC04 = 58,
	E_GM04_SC05 = 59,
	SPECIAL_CRYSTAL_MAX = 60,
	ETresGumiShipSpecialCrystalID_MAX = 61
};

UENUM(BlueprintType)
enum ETresGumiShipTreasureSphereID
{
	E_GM01_TR_01 = 0,
	E_GM01_TR_02 = 1,
	E_GM01_TR_03 = 2,
	E_GM02_TR_01 = 3,
	E_GM02_TR_02 = 4,
	E_GM02_TR_03 = 5,
	E_GM03_TR_01 = 6,
	E_GM03_TR_02 = 7,
	E_GM03_TR_03 = 8,
	E_GM04_TR_01 = 9,
	E_GM04_TR_02 = 10,
	E_GM04_TR_03 = 11,
	TREASURE_SPHERE_MAX = 12,
	ETresGumiShipTreasureSphereID_MAX = 13
};

UENUM(BlueprintType)
enum ETresGumiShipTravelPointID
{
	E_GM01_TP_01 = 0,
	E_GM01_TP_02 = 1,
	E_GM01_TP_03 = 2,
	E_GM02_TP_01 = 3,
	E_GM02_TP_02 = 4,
	E_GM02_TP_03 = 5,
	E_GM03_TP_01 = 6,
	E_GM03_TP_02 = 7,
	E_GM03_TP_03 = 8,
	E_GM04_TP_01 = 9,
	E_GM04_TP_02 = 10,
	E_GM04_TP_03 = 11,
	TRAVEL_POINT_MAX = 12,
	ETresGumiShipTravelPointID_MAX = 13
};

UENUM(BlueprintType)
enum ETresGumiShipWorldSymbolID
{
	E_GM01_WS_HE = 0,
	E_GM01_WS_TT = 1,
	E_GM01_WS_TS = 2,
	E_GM01_WS_RA = 3,
	E_GM02_WS_FZ = 4,
	E_GM02_WS_MI = 5,
	E_GM02_WS_BX = 6,
	E_GM02_WS_CA = 7,
	E_GM03_WS_KG = 8,
	E_GM03_WS_BT = 9,
	E_GM03_WS_01 = 10,
	E_GM03_WS_02 = 11,
	E_GM04_WS_CS = 12,
	E_GM04_WS_01 = 13,
	E_GM04_WS_02 = 14,
	WORLD_SYMBOL_MAX = 15,
	ETresGumiShipWorldSymbolID_MAX = 16
};

UENUM(BlueprintType)
enum ETresEnemyEx761_Location
{
	ETresEnemyEx761_Location_Home = 0,
	ETresEnemyEx761_Location_Center = 1,
	ETresEnemyEx761_Location_1_Max = 2,
	ETresEnemyEx761_MAX = 3
};

UENUM(BlueprintType)
enum ETresUIControllerButtonType
{
	ETresUIControllerButtonType_Circle = 0,
	ETresUIControllerButtonType_Triangle = 1,
	ETresUIControllerButtonType_Square = 2,
	ETresUIControllerButtonType_Cross = 3,
	ETresUIControllerButtonType_1_Max = 4,
	ETresUIControllerButtonType_MAX = 5
};

UENUM(BlueprintType)
enum ETresInfluenceEmitterShape
{
	ETresInfluenceEmitterShape_Box = 0,
	ETresInfluenceEmitterShape_Sphere = 1,
	ETresInfluenceEmitterShape_Cone = 2,
	ETresInfluenceEmitterShape_Ring = 3,
	ETresInfluenceEmitterShape_MAX = 4
};

UENUM(BlueprintType)
enum ETresInfluenceMapLayer
{
	ETresInfluenceMapLayer_PlayerAndFriendNpc = 0,
	ETresInfluenceMapLayer_Enemy = 1,
	ETresInfluenceMapLayer_Wall = 2,
	ETresInfluenceMapLayer_VectorField = 3,
	ETresInfluenceMapLayer_Extra1 = 4,
	ETresInfluenceMapLayer_Extra2 = 5,
	ETresInfluenceMapLayer_Extra3 = 6,
	ETresInfluenceMapLayer_Extra4 = 7,
	ETresInfluenceMapLayer_LayerMax = 8,
	ETresInfluenceMapLayer_MAX = 9
};

UENUM(BlueprintType)
enum ESQEX_Bonamik_ControlType
{
	ESQEX_Bonamik_ControlType_DoNothing = 0,
	ESQEX_Bonamik_ControlType_On = 1,
	ESQEX_Bonamik_ControlType_Off = 2,
	ESQEX_Bonamik_ControlType_MAX = 3
};

UENUM(BlueprintType)
enum ETresEffectAttachTrack_AttachType
{
	ETresEffectAttachTrack_AttachType_Attach = 0,
	ETresEffectAttachTrack_AttachType_End = 1,
	ETresEffectAttachTrack_AttachType_CommonSet_ENEMY_APPEAR0 = 2,
	ETresEffectAttachTrack_AttachType_CommonSet_ENEMY_APPEAR1 = 3,
	ETresEffectAttachTrack_AttachType_CommonSet_ENEMY_APPEAR2 = 4,
	ETresEffectAttachTrack_AttachType_CommonSet_ENEMY_DEATH0 = 5,
	ETresEffectAttachTrack_AttachType_CommonSet_ENEMYDISAPPEAR0 = 6,
	ETresEffectAttachTrack_AttachType_MAX = 7
};

UENUM(BlueprintType)
enum ETresEffectTriggerTrack_TriggerType
{
	ETresEffectTriggerTrack_TriggerType_OnActive = 0,
	ETresEffectTriggerTrack_TriggerType_OnDective = 1,
	ETresEffectTriggerTrack_TriggerType_OnLoopEnd = 2,
	ETresEffectTriggerTrack_TriggerType_OnFadeOut = 3,
	ETresEffectTriggerTrack_TriggerType_OnFadeIn = 4,
	ETresEffectTriggerTrack_TriggerType_OnColorChange = 5,
	ETresEffectTriggerTrack_TriggerType_MAX = 6
};

UENUM(BlueprintType)
enum ETresFadeTrack_Color
{
	ETresFadeTrack_Color_Black = 0,
	ETresFadeTrack_Color_White = 1,
	ETresFadeTrack_Color_Custom = 2,
	ETresFadeTrack_Color_MAX = 3
};

UENUM(BlueprintType)
enum ETresSubtitleTrack_OptionVoice
{
	ETresSubtitleTrack_OptionVoice_DoNotCare = 0,
	ETresSubtitleTrack_OptionVoice_Original = 1,
	ETresSubtitleTrack_OptionVoice_Changed = 2,
	ETresSubtitleTrack_OptionVoice_MAX = 3
};

UENUM(BlueprintType)
enum ETresFoodstuffDropperID
{
	ETresFoodstuffDropperID_NONE = 0,
	HERBS01 = 1,
	HERBS02 = 2,
	HERBS03 = 3,
	HERBS04 = 4,
	FRUITS01 = 5,
	FRUITS02 = 6,
	FRUITS03 = 7,
	FRUITS04 = 8,
	SHELLFISH01 = 9,
	SHELLFISH02 = 10,
	SHELLFISH03 = 11,
	SHELLFISH04 = 12,
	FISH01 = 13,
	FISH02 = 14,
	FISH03 = 15,
	FISH04 = 16,
	GIMMICK01 = 17,
	GIMMICK02 = 18,
	GIMMICK03 = 19,
	GIMMICK04 = 20,
	ETresFoodstuffDropperID_1_MAX = 21,
	ETresFoodstuffDropperID_MAX = 22
};

UENUM(BlueprintType)
enum class ETresDropItemID : uint8
{
	None = 0,
	PRIZE_HpS = 1,
	PRIZE_HpL = 2,
	PRIZE_MpS = 3,
	PRIZE_MpL = 4,
	PRIZE_FpS = 5,
	PRIZE_FpL = 6,
	PRIZE_MunnyS = 7,
	PRIZE_MunnyM = 8,
	PRIZE_MunnyL = 9,
	ITEM_Potion = 10,
	ITEM_HighPotion = 11,
	ITEM_MegaPotion = 12,
	ITEM_Ether = 13,
	ITEM_MegaEther = 14,
	ITEM_Elixir = 15,
	ITEM_LastElixir = 16,
	ITEM_FocusSupply = 17,
	ITEM_HighFocusSupply = 18,
	ITEM_AllCure = 19,
	ITEM_Crab = 20,
	ITEM_MovableCrab = 21,
	ITEM_HighEther = 22,
	ITEM_Material01 = 23,
	ITEM_Material02 = 24,
	ITEM_Material03 = 25,
	ITEM_Material04 = 26,
	ITEM_Material05 = 27,
	ITEM_Material06 = 28,
	ITEM_Material07 = 29,
	ITEM_Material08 = 30,
	ITEM_Material09 = 31,
	ITEM_Material10 = 32,
	ITEM_Material11 = 33,
	ITEM_Material12 = 34,
	ITEM_Material13 = 35,
	ITEM_Material14 = 36,
	ITEM_Material15 = 37,
	ITEM_Material16 = 38,
	ITEM_Material17 = 39,
	ITEM_Material18 = 40,
	ITEM_Material19 = 41,
	ITEM_Material20 = 42,
	ITEM_Material21 = 43,
	ITEM_Material22 = 44,
	ITEM_Material23 = 45,
	ITEM_Material24 = 46,
	ITEM_Material25 = 47,
	ITEM_Material26 = 48,
	ITEM_Material27 = 49,
	ITEM_Material28 = 50,
	ITEM_Material29 = 51,
	ITEM_Material30 = 52,
	ITEM_Material31 = 53,
	ITEM_Material32 = 54,
	ITEM_Material33 = 55,
	ITEM_Material34 = 56,
	ITEM_Material35 = 57,
	ITEM_Material36 = 58,
	ITEM_Material37 = 59,
	ITEM_Material38 = 60,
	ITEM_Material39 = 61,
	ITEM_Material40 = 62,
	ITEM_Material41 = 63,
	ITEM_Material42 = 64,
	ITEM_Material43 = 65,
	ITEM_Material44 = 66,
	ITEM_Material45 = 67,
	ITEM_Material46 = 68,
	ITEM_Material47 = 69,
	ITEM_Material48 = 70,
	ITEM_Material49 = 71,
	ITEM_Material50 = 72,
	ITEM_Material51 = 73,
	ITEM_Material52 = 74,
	ITEM_Material53 = 75,
	ITEM_Material54 = 76,
	ITEM_Material55 = 77,
	ITEM_Material56 = 78,
	ITEM_Material57 = 79,
	ITEM_Material58 = 80,
	ITEM_Material59 = 81,
	ITEM_Material60 = 82,
	ITEM_Foodstuff01 = 83,
	ITEM_Foodstuff02 = 84,
	ITEM_Foodstuff03 = 85,
	ITEM_Foodstuff04 = 86,
	ITEM_Foodstuff05 = 87,
	ITEM_Foodstuff06 = 88,
	ITEM_Foodstuff07 = 89,
	ITEM_Foodstuff08 = 90,
	ITEM_Foodstuff09 = 91,
	ITEM_Foodstuff10 = 92,
	ITEM_Foodstuff11 = 93,
	ITEM_Foodstuff12 = 94,
	ITEM_Foodstuff13 = 95,
	ITEM_Foodstuff14 = 96,
	ITEM_Foodstuff15 = 97,
	ITEM_Foodstuff16 = 98,
	ITEM_Foodstuff17 = 99,
	ITEM_Foodstuff18 = 100,
	ITEM_Foodstuff19 = 101,
	ITEM_Foodstuff20 = 102,
	ITEM_Foodstuff21 = 103,
	ITEM_Foodstuff22 = 104,
	ITEM_Foodstuff23 = 105,
	ITEM_Foodstuff24 = 106,
	ITEM_Foodstuff25 = 107,
	ITEM_Foodstuff26 = 108,
	ITEM_Foodstuff27 = 109,
	ITEM_Foodstuff28 = 110,
	ITEM_Foodstuff29 = 111,
	ITEM_Foodstuff30 = 112,
	ITEM_Foodstuff31 = 113,
	ITEM_Foodstuff32 = 114,
	ITEM_Foodstuff33 = 115,
	ITEM_Foodstuff34 = 116,
	ITEM_Foodstuff35 = 117,
	ITEM_Foodstuff36 = 118,
	ITEM_Foodstuff37 = 119,
	ITEM_Foodstuff38 = 120,
	ITEM_Foodstuff39 = 121,
	ITEM_Foodstuff40 = 122,
	ITEM_Foodstuff41 = 123,
	ITEM_Foodstuff42 = 124,
	ITEM_Foodstuff43 = 125,
	ITEM_Foodstuff44 = 126,
	ITEM_Foodstuff45 = 127,
	ITEM_Foodstuff46 = 128,
	ITEM_Foodstuff47 = 129,
	ITEM_Foodstuff48 = 130,
	ITEM_Foodstuff49 = 131,
	ITEM_Foodstuff50 = 132,
	ITEM_Foodstuff51 = 133,
	ITEM_Foodstuff52 = 134,
	ITEM_Foodstuff53 = 135,
	ITEM_Foodstuff54 = 136,
	ITEM_Foodstuff55 = 137,
	ITEM_Foodstuff56 = 138,
	ITEM_Foodstuff57 = 139,
	ITEM_Foodstuff58 = 140,
	ITEM_Foodstuff59 = 141,
	PRIZE_LightS = 142,
	PRIZE_LightL = 143,
	_DROP_ITEM_ID_MAX = 144  UMETA(Hidden),
	ETresDropItemID_MAX = 145  UMETA(Hidden)
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
	ETresItemDefGumiEtc_1_MAX = 77 UMETA(Hidden),
	ETresItemDefGumiEtc_MAX = 78  UMETA(Hidden)
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
	ETresItemDefGumiShipBP_1_MAX = 196 UMETA(Hidden),
	ETresItemDefGumiShipBP_MAX = 197  UMETA(Hidden)
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
	ETresItemDefGumiSticker_1_MAX = 86 UMETA(Hidden),
	ETresItemDefGumiSticker_MAX = 87  UMETA(Hidden)
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
	ETresItemDefGumiPattern_1_MAX = 108 UMETA(Hidden),
	ETresItemDefGumiPattern_MAX = 109  UMETA(Hidden)
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
	ETresItemDefGumiMaterial_1_MAX = 69 UMETA(Hidden),
	ETresItemDefGumiMaterial_MAX = 70  UMETA(Hidden)
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
	ETresItemDefGumiParts_1_MAX = 183 UMETA(Hidden),
	ETresItemDefGumiParts_MAX = 184  UMETA(Hidden)
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
	ETresItemDefReport_1_MAX = 15 UMETA(Hidden),
	ETresItemDefReport_MAX = 16 UMETA(Hidden)
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
	ETresItemDefNavimap_1_MAX = 53 UMETA(Hidden),
	ETresItemDefNavimap_MAX = 54 UMETA(Hidden)
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
	ETresItemDefLSIGameItem_1_MAX = 24 UMETA(Hidden),
	ETresItemDefLSIGameItem_MAX = 25 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresItemDefMognetItem
{
	ETresItemDefMognetItem_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemDefMognetItem_ITEM01 = 1 UMETA(DisplayName = "Item 01"),
	ETresItemDefMognetItem_1_MAX = 2 UMETA(Hidden),
	ETresItemDefMognetItem_MAX = 3 UMETA(Hidden)
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
	ETresItemDefKeyItem_1_MAX = 14 UMETA(Hidden),
	ETresItemDefKeyItem_MAX = 15 UMETA(Hidden)
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
	ETresItemDefFoodstuff_1_MAX = 60 UMETA(Hidden),
	ETresItemDefFoodstuff_MAX = 61 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresItemDefMaterial
{
	ETresItemDefMaterial_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemDefMaterial_ITEM01 = 1 UMETA(DisplayName = "Blazing Shard"),
	ETresItemDefMaterial_ITEM02 = 2 UMETA(DisplayName = "Blazing Stone"),
	ETresItemDefMaterial_ITEM03 = 3 UMETA(DisplayName = "Blazing Gem"),
	ETresItemDefMaterial_ITEM04 = 4 UMETA(DisplayName = "Blazing Crystal"),
	ETresItemDefMaterial_ITEM05 = 5 UMETA(DisplayName = "Frost Shard"),
	ETresItemDefMaterial_ITEM06 = 6 UMETA(DisplayName = "Frost Stone"),
	ETresItemDefMaterial_ITEM07 = 7 UMETA(DisplayName = "Frost Gem"),
	ETresItemDefMaterial_ITEM08 = 8 UMETA(DisplayName = "Frost Crystal"),
	ETresItemDefMaterial_ITEM09 = 9 UMETA(DisplayName = "Lightning Shard"),
	ETresItemDefMaterial_ITEM10 = 10 UMETA(DisplayName = "Lightning Stone"),
	ETresItemDefMaterial_ITEM11 = 11 UMETA(DisplayName = "Lightning Gem"),
	ETresItemDefMaterial_ITEM12 = 12 UMETA(DisplayName = "Lightning Crystal"),
	ETresItemDefMaterial_ITEM13 = 13 UMETA(DisplayName = "Lucid Shard"),
	ETresItemDefMaterial_ITEM14 = 14 UMETA(DisplayName = "Lucid Stone"),
	ETresItemDefMaterial_ITEM15 = 15 UMETA(DisplayName = "Lucid Gem"),
	ETresItemDefMaterial_ITEM16 = 16 UMETA(DisplayName = "Lucid Crystal"),
	ETresItemDefMaterial_ITEM17 = 17 UMETA(DisplayName = "Pulsing Shard"),
	ETresItemDefMaterial_ITEM18 = 18 UMETA(DisplayName = "Pulsing Stone"),
	ETresItemDefMaterial_ITEM19 = 19 UMETA(DisplayName = "Pulsing Gem"),
	ETresItemDefMaterial_ITEM20 = 20 UMETA(DisplayName = "Pulsing Crystal"),
	ETresItemDefMaterial_ITEM21 = 21 UMETA(DisplayName = "Writhing Shard"),
	ETresItemDefMaterial_ITEM22 = 22 UMETA(DisplayName = "Writhing Stone"),
	ETresItemDefMaterial_ITEM23 = 23 UMETA(DisplayName = "Writhing Gem"),
	ETresItemDefMaterial_ITEM24 = 24 UMETA(DisplayName = "Writhing Crystal"),
	ETresItemDefMaterial_ITEM25 = 25 UMETA(DisplayName = "Betwixt Shard"),
	ETresItemDefMaterial_ITEM26 = 26 UMETA(DisplayName = "Betwixt Stone"),
	ETresItemDefMaterial_ITEM27 = 27 UMETA(DisplayName = "Betwixt Gem"),
	ETresItemDefMaterial_ITEM28 = 28 UMETA(DisplayName = "Betwixt Crystal"),
	ETresItemDefMaterial_ITEM29 = 29 UMETA(DisplayName = "Twilight Shard"),
	ETresItemDefMaterial_ITEM30 = 30 UMETA(DisplayName = "Twilight Stone"),
	ETresItemDefMaterial_ITEM31 = 31 UMETA(DisplayName = "Twilight Gem"),
	ETresItemDefMaterial_ITEM32 = 32 UMETA(DisplayName = "Twilight Crystal"),
	ETresItemDefMaterial_ITEM33 = 33 UMETA(DisplayName = "Mythril Shard"),
	ETresItemDefMaterial_ITEM34 = 34 UMETA(DisplayName = "Mythril Stone"),
	ETresItemDefMaterial_ITEM35 = 35 UMETA(DisplayName = "Mythril Gem"),
	ETresItemDefMaterial_ITEM36 = 36 UMETA(DisplayName = "Mythril Crystal"),
	ETresItemDefMaterial_ITEM37 = 37 UMETA(DisplayName = "Sinister Shard"),
	ETresItemDefMaterial_ITEM38 = 38 UMETA(DisplayName = "Sinister Stone"),
	ETresItemDefMaterial_ITEM39 = 39 UMETA(DisplayName = "Sinister Gem"),
	ETresItemDefMaterial_ITEM40 = 40 UMETA(DisplayName = "Sinister Crystal"),
	ETresItemDefMaterial_ITEM41 = 41 UMETA(DisplayName = "Soothing Shard"),
	ETresItemDefMaterial_ITEM42 = 42 UMETA(DisplayName = "Soothing Stone"),
	ETresItemDefMaterial_ITEM43 = 43 UMETA(DisplayName = "Soothing Gem"),
	ETresItemDefMaterial_ITEM44 = 44 UMETA(DisplayName = "Soothing Crystal"),
	ETresItemDefMaterial_ITEM45 = 45 UMETA(DisplayName = "Wellspring Shard"),
	ETresItemDefMaterial_ITEM46 = 46 UMETA(DisplayName = "Wellspring Stone"),
	ETresItemDefMaterial_ITEM47 = 47 UMETA(DisplayName = "Wellspring Gem"),
	ETresItemDefMaterial_ITEM48 = 48 UMETA(DisplayName = "Wellspring Crystal"),
	ETresItemDefMaterial_ITEM49 = 49 UMETA(DisplayName = "Hungry Shard"),
	ETresItemDefMaterial_ITEM50 = 50 UMETA(DisplayName = "Hungry Stone"),
	ETresItemDefMaterial_ITEM51 = 51 UMETA(DisplayName = "Hungry Gem"),
	ETresItemDefMaterial_ITEM52 = 52 UMETA(DisplayName = "Hungry Crystal"),
	ETresItemDefMaterial_ITEM53 = 53 UMETA(DisplayName = "Fluorite"),
	ETresItemDefMaterial_ITEM54 = 54 UMETA(DisplayName = "Damascus"),
	ETresItemDefMaterial_ITEM55 = 55 UMETA(DisplayName = "Adamantite"),
	ETresItemDefMaterial_ITEM56 = 56 UMETA(DisplayName = "Orichalcum"),
	ETresItemDefMaterial_ITEM57 = 57 UMETA(DisplayName = "Orichalcum+"),
	ETresItemDefMaterial_ITEM58 = 58 UMETA(DisplayName = "Electrum"),
	ETresItemDefMaterial_ITEM59 = 59 UMETA(DisplayName = "Evanescent Crystal"),
	ETresItemDefMaterial_ITEM60 = 60 UMETA(DisplayName = "Illusory Crystal"),
	ETresItemDefMaterial_1_MAX = 61 UMETA(Hidden),
	ETresItemDefMaterial_MAX = 62 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresItemRank
{
	ETresItemRank_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresItemRank_RANK00 = 1 UMETA(DisplayName = "Rank 00"),
	ETresItemRank_RANK01 = 2 UMETA(DisplayName = "Rank 01"),
	ETresItemRank_RANK02 = 3 UMETA(DisplayName = "Rank 02"),
	ETresItemRank_RANK03 = 4 UMETA(DisplayName = "Rank 03"),
	ETresItemRank_1_MAX = 5 UMETA(Hidden),
	ETresItemRank_MAX = 6 UMETA(Hidden)
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
	ETresItemDefFood_1_MAX = 57 UMETA(Hidden),
	ETresItemDefFood_MAX = 58 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefAccessory : uint8
{
	NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ITEM01 = 1 UMETA(DisplayName = "Laughter Pin"),
	ITEM02 = 2 UMETA(DisplayName = "Forest Clasp"),
	ITEM03 = 3 UMETA(DisplayName = "Ability Ring"),
	ITEM04 = 4 UMETA(DisplayName = "Ability Ring+"),
	ITEM05 = 5 UMETA(DisplayName = "Technician's Ring"),
	ITEM06 = 6 UMETA(DisplayName = "Technician's Ring+"),
	ITEM07 = 7 UMETA(DisplayName = "Skill Ring"),
	ITEM08 = 8 UMETA(DisplayName = "Skillful Ring"),
	ITEM09 = 9 UMETA(DisplayName = "Expert's Ring"),
	ITEM10 = 10 UMETA(DisplayName = "Master's Ring"),
	ITEM11 = 11 UMETA(DisplayName = "Cosmic Ring"),
	ITEM12 = 12 UMETA(DisplayName = "Power Ring"),
	ITEM13 = 13 UMETA(DisplayName = "Buster Ring"),
	ITEM14 = 14 UMETA(DisplayName = "Valor Ring"),
	ITEM15 = 15 UMETA(DisplayName = "Phantom Ring"),
	ITEM16 = 16 UMETA(DisplayName = "Orichalcum Ring"),
	ITEM17 = 17 UMETA(DisplayName = "Magic Ring"),
	ITEM18 = 18 UMETA(DisplayName = "Rune Ring"),
	ITEM19 = 19 UMETA(DisplayName = "Force Ring"),
	ITEM20 = 20 UMETA(DisplayName = "Sorcerer's Ring"),
	ITEM21 = 21 UMETA(DisplayName = "Wisdom Ring"),
	ITEM22 = 22 UMETA(DisplayName = "Bronze Necklace"),
	ITEM23 = 23 UMETA(DisplayName = "Silver Necklace"),
	ITEM24 = 24 UMETA(DisplayName = "Master's Necklace"),
	ITEM25 = 25 UMETA(DisplayName = "Bronze Amulet"),
	ITEM26 = 26 UMETA(DisplayName = "Silver Amulet"),
	ITEM27 = 27 UMETA(DisplayName = "Gold Amulet"),
	ITEM28 = 28 UMETA(DisplayName = "Junior Medal"),
	ITEM29 = 29 UMETA(DisplayName = "Master Medal"),
	ITEM30 = 30 UMETA(DisplayName = "Star Medal"),
	ITEM31 = 31 UMETA(DisplayName = "Mickey Clasp"),
	ITEM32 = 32 UMETA(DisplayName = "Soldier's Earring"),
	ITEM33 = 33 UMETA(DisplayName = "Fencer's Earring"),
	ITEM34 = 34 UMETA(DisplayName = "Mage's Earring"),
	ITEM35 = 35 UMETA(DisplayName = "Slayer's Earring"),
	ITEM36 = 36 UMETA(DisplayName = "Moon Amulet"),
	ITEM37 = 37 UMETA(DisplayName = "Star Charm"),
	ITEM38 = 38 UMETA(DisplayName = "Cosmic Arts"),
	ITEM39 = 39 UMETA(DisplayName = "Crystal Regalia"),
	ITEM40 = 40 UMETA(DisplayName = "Water Cufflink"),
	ITEM41 = 41 UMETA(DisplayName = "Thunder Cufflink"),
	ITEM42 = 42 UMETA(DisplayName = "Fire Cufflink"),
	ITEM43 = 43 UMETA(DisplayName = "Aero Cufflink"),
	ITEM44 = 44 UMETA(DisplayName = "Blizzard Cufflink"),
	ITEM45 = 45 UMETA(DisplayName = "Celestriad"),
	ITEM46 = 46 UMETA(DisplayName = "Yin-Yang Cufflink"),
	ITEM47 = 47 UMETA(DisplayName = "Gourmand's Ring"),
	ITEM48 = 48 UMETA(DisplayName = "Draw Ring"),
	ITEM49 = 49 UMETA(DisplayName = "Lucky Ring"),
	ITEM50 = 50 UMETA(DisplayName = "Flanniversary Badge"),
	ITEM51 = 51 UMETA(DisplayName = "Breakthrough"),
	ITEM52 = 52 UMETA(DisplayName = "Crystal Regalia+"),
	ITEM53 = 53 UMETA(DisplayName = "Item 53"),
	ITEM54 = 54 UMETA(DisplayName = "Item 54"),
	ITEM55 = 55 UMETA(DisplayName = "Item 55"),
	ITEM56 = 56 UMETA(DisplayName = "Item 56"),
	ITEM57 = 57 UMETA(DisplayName = "Item 57"),
	ITEM58 = 58 UMETA(DisplayName = "Item 58"),
	ITEM59 = 59 UMETA(DisplayName = "Item 59"),
	ITEM60 = 60 UMETA(DisplayName = "Item 60"),
	ITEM61 = 61 UMETA(DisplayName = "Item 61"),
	ITEM62 = 62 UMETA(DisplayName = "Item 62"),
	ITEM63 = 63 UMETA(DisplayName = "Item 63"),
	ITEM64 = 64 UMETA(DisplayName = "Item 64"),
	ITEM65 = 65 UMETA(DisplayName = "Item 65"),
	ITEM66 = 66 UMETA(DisplayName = "Item 66"),
	ITEM67 = 67 UMETA(DisplayName = "Item 67"),
	ITEM68 = 68 UMETA(DisplayName = "Item 68"),
	ITEM69 = 69 UMETA(DisplayName = "Item 69"),
	ITEM70 = 70 UMETA(DisplayName = "Item 70"),
	ITEM71 = 71 UMETA(DisplayName = "Item 71"),
	ITEM72 = 72 UMETA(DisplayName = "Item 72"),
	ITEM73 = 73 UMETA(DisplayName = "Item 73"),
	ITEM74 = 74 UMETA(DisplayName = "Item 74"),
	ITEM75 = 75 UMETA(DisplayName = "Item 75"),
	ITEM76 = 76 UMETA(DisplayName = "Item 76"),
	ITEM77 = 77 UMETA(DisplayName = "Item 77"),
	ITEM78 = 78 UMETA(DisplayName = "Item 78"),
	ITEM79 = 79 UMETA(DisplayName = "Item 79"),
	ITEM80 = 80 UMETA(DisplayName = "Item 80"),
	ITEM81 = 81 UMETA(DisplayName = "Item 81"),
	ITEM82 = 82 UMETA(DisplayName = "Item 82"),
	ITEM83 = 83 UMETA(DisplayName = "Item 83"),
	ITEM84 = 84 UMETA(DisplayName = "Item 84"),
	ITEM85 = 85 UMETA(DisplayName = "Item 85"),
	ITEM86 = 86 UMETA(DisplayName = "Item 86"),
	ITEM87 = 87 UMETA(DisplayName = "Item 87"),
	ITEM88 = 88 UMETA(DisplayName = "Item 88"),
	ITEM89 = 89 UMETA(DisplayName = "Item 89"),
	ITEM90 = 90 UMETA(DisplayName = "Item 90"),
	ITEM91 = 91 UMETA(DisplayName = "Item 91"),
	ITEM92 = 92 UMETA(DisplayName = "Item 92"),
	ITEM93 = 93 UMETA(DisplayName = "Item 93"),
	ITEM94 = 94 UMETA(DisplayName = "Item 94"),
	ITEM95 = 95 UMETA(DisplayName = "Item 95"),
	ITEM96 = 96 UMETA(DisplayName = "Item 96"),
	ITEM97 = 97 UMETA(DisplayName = "Item 97"),
	ITEM98 = 98 UMETA(DisplayName = "Item 98"),
	ITEM99 = 99 UMETA(DisplayName = "Item 99"),
	ITEM100 = 100 UMETA(DisplayName = "Item 100"),
	ITEM101 = 101 UMETA(DisplayName = "Item 101"),
	ITEM102 = 102 UMETA(DisplayName = "Item 102"),
	ITEM103 = 103 UMETA(DisplayName = "Item 103"),
	ITEM104 = 104 UMETA(DisplayName = "Item 104"),
	ITEM105 = 105 UMETA(DisplayName = "Item 105"),
	ITEM106 = 106 UMETA(DisplayName = "Item 106"),
	ITEM107 = 107 UMETA(DisplayName = "Item 107"),
	ITEM108 = 108 UMETA(DisplayName = "Item 108"),
	ITEM109 = 109 UMETA(DisplayName = "Item 109"),
	ITEM110 = 110 UMETA(DisplayName = "Item 110"),
	ITEM111 = 111 UMETA(DisplayName = "Item 111"),
	ITEM112 = 112 UMETA(DisplayName = "Item 112"),
	_MAX = 113 UMETA(Hidden),
	ETresItemDefAccessory_MAX = 114 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefProtector : uint8
{
	NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ITEM01 = 1 UMETA(DisplayName = "Hero's Belt"),
	ITEM02 = 2 UMETA(DisplayName = "Hero's Glove"),
	ITEM03 = 3 UMETA(DisplayName = "Shield Belt"),
	ITEM04 = 4 UMETA(DisplayName = "Defense Belt"),
	ITEM05 = 5 UMETA(DisplayName = "Guardian's Belt"),
	ITEM06 = 6 UMETA(DisplayName = "Power Band"),
	ITEM07 = 7 UMETA(DisplayName = "Buster Band"),
	ITEM08 = 8 UMETA(DisplayName = "Buster Band+"),
	ITEM09 = 9 UMETA(DisplayName = "Cosmic Belt"),
	ITEM10 = 10 UMETA(DisplayName = "Cosmic Belt+"),
	ITEM11 = 11 UMETA(DisplayName = "Fire Bangle"),
	ITEM12 = 12 UMETA(DisplayName = "Firaga Bangle"),
	ITEM13 = 13 UMETA(DisplayName = "Firaza Bangle"),
	ITEM14 = 14 UMETA(DisplayName = "Fire Chain"),
	ITEM15 = 15 UMETA(DisplayName = "Blizzard Choker"),
	ITEM16 = 16 UMETA(DisplayName = "Blizzara Choker"),
	ITEM17 = 17 UMETA(DisplayName = "Blizzaga Choker"),
	ITEM18 = 18 UMETA(DisplayName = "Blizzard Chain"),
	ITEM19 = 19 UMETA(DisplayName = "Thunder Trinket"),
	ITEM20 = 20 UMETA(DisplayName = "Thundaga Trinket"),
	ITEM21 = 21 UMETA(DisplayName = "Thundaza Trinket"),
	ITEM22 = 22 UMETA(DisplayName = "Thunder Chain"),
	ITEM23 = 23 UMETA(DisplayName = "Dark Anklet"),
	ITEM24 = 24 UMETA(DisplayName = "Midnight Anklet"),
	ITEM25 = 25 UMETA(DisplayName = "Chaos Anklet"),
	ITEM26 = 26 UMETA(DisplayName = "Dark Chain"),
	ITEM27 = 27 UMETA(DisplayName = "Divine Bandanna"),
	ITEM28 = 28 UMETA(DisplayName = "Elven Bandanna"),
	ITEM29 = 29 UMETA(DisplayName = "Aqua Chaplet"),
	ITEM30 = 30 UMETA(DisplayName = "Wind Fan"),
	ITEM31 = 31 UMETA(DisplayName = "Storm Fan"),
	ITEM32 = 32 UMETA(DisplayName = "Aero Armlet"),
	ITEM33 = 33 UMETA(DisplayName = "Aegis Chain"),
	ITEM34 = 34 UMETA(DisplayName = "Acrisius"),
	ITEM35 = 35 UMETA(DisplayName = "Cosmic Chain"),
	ITEM36 = 36 UMETA(DisplayName = "Petite Ribbon"),
	ITEM37 = 37 UMETA(DisplayName = "Ribbon"),
	ITEM38 = 38 UMETA(DisplayName = "Fira Bangle"),
	ITEM39 = 39 UMETA(DisplayName = "Blizzaza Choker"),
	ITEM40 = 40 UMETA(DisplayName = "Thundara Trinket"),
	ITEM41 = 41 UMETA(DisplayName = "Shadow Anklet"),
	ITEM42 = 42 UMETA(DisplayName = "Abas Chain"),
	ITEM43 = 43 UMETA(DisplayName = "Acrisius+"),
	ITEM44 = 44 UMETA(DisplayName = "Royal Ribbon"),
	ITEM45 = 45 UMETA(DisplayName = "Firefighter Rosette"),
	ITEM46 = 46 UMETA(DisplayName = "Umbrella Rosette"),
	ITEM47 = 47 UMETA(DisplayName = "Mask Rosette"),
	ITEM48 = 48 UMETA(DisplayName = "Snowman Rosette"),
	ITEM49 = 49 UMETA(DisplayName = "Insulator Rosette"),
	ITEM50 = 50 UMETA(DisplayName = "Power Weight"),
	ITEM51 = 51 UMETA(DisplayName = "Magic Weight"),
	ITEM52 = 52 UMETA(DisplayName = "Master Belt"),
	_MAX = 53 UMETA(Hidden),
	ETresItemDefProtector_MAX = 54 UMETA(Hidden)
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
	ETresItemDefCampItem_1_MAX = 6 UMETA(Hidden),
	ETresItemDefCampItem_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefBattleItem : uint8
{
	NOTHING = 0 UMETA(DisplayName = "Nothing"),
	BI_POTION = 1 UMETA(DisplayName = "Potion"),
	BI_HIGHPOTION = 2 UMETA(DisplayName = "Hi-Potion"),
	BI_MEGAPOTION = 3 UMETA(DisplayName = "Mega-Potion"),
	BI_ETHER = 4 UMETA(DisplayName = "Ether"),
	BI_MEGAETHER = 5 UMETA(DisplayName = "Mega-Ether"),
	BI_ELIXIR = 6 UMETA(DisplayName = "Elixir"),
	BI_LASTELIXIR = 7 UMETA(DisplayName = "Megalixir"),
	BI_FOCUSSUPPLY = 8 UMETA(DisplayName = "Refocuser"),
	BI_HIGHFOCUSSUPPLY = 9 UMETA(DisplayName = "Hi-Refocuser"),
	BI_ALLCURE = 10 UMETA(DisplayName = "Panacea"),
	BI_HIGHETHER = 11 UMETA(DisplayName = "Hi-Ether"),
	_MAX = 12 UMETA(Hidden),
	ETresItemDefBattleItem_MAX = 13 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresItemSubCategoryKeyItem
{
	ETresItemSubCategoryKeyItem_NONE = 0,
	ETresItemSubCategoryKeyItem_EVENT = 1,
	ETresItemSubCategoryKeyItem_SYNTHESIS_RECIPE = 2,
	ETresItemSubCategoryKeyItem_1_MAX = 3 UMETA(Hidden),
	ETresItemSubCategoryKeyItem_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresItemSubCategoryFoodStuff
{
	SEAFOOD = 0,
	VEGETABLE = 1,
	MUSHROOM = 2,
	HERB = 3,
	FRUIT = 4,
	SEVENPUDDING = 5,
	MEAT = 6,
	ETresItemSubCategoryFoodStuff_1_MAX = 7 UMETA(Hidden),
	ETresItemSubCategoryFoodStuff_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresItemSubCategoryFood
{
	ETresItemSubCategoryFood_SOUP = 0,
	ETresItemSubCategoryFood_APPETIZER = 1,
	ETresItemSubCategoryFood_FISHDISH = 2,
	ETresItemSubCategoryFood_MEETDISH = 3,
	ETresItemSubCategoryFood_DESSERT = 4,
	ETresItemSubCategoryFood_1_MAX = 5 UMETA(Hidden),
	ETresItemSubCategoryFood_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresItemCategoryIcon
{
	ETresItemCategoryIcon_NONE = 0,
	ETresItemCategoryIcon_WEAPON = 1,
	ETresItemCategoryIcon_WEAPON_D = 2,
	ETresItemCategoryIcon_WEAPON_G = 3,
	ETresItemCategoryIcon_WEAPON_F = 4,
	ETresItemCategoryIcon_BATTLEITEM = 5,
	ETresItemCategoryIcon_CAMPITEM = 6,
	ETresItemCategoryIcon_PROTECTOR = 7,
	ETresItemCategoryIcon_ACCESSORY = 8,
	ETresItemCategoryIcon_FOODSTUFF = 9,
	ETresItemCategoryIcon_KEYITEM = 10,
	ETresItemCategoryIcon_MATERIAL = 11,
	ETresItemCategoryIcon_MOGNET = 12,
	ETresItemCategoryIcon_FOOD = 13,
	ETresItemCategoryIcon_GUMI_BASE = 14,
	ETresItemCategoryIcon_GUMI_DECO = 15,
	ETresItemCategoryIcon_GUMI_MATERIAL = 16,
	ETresItemCategoryIcon_GUMI_PATTERN = 17,
	ETresItemCategoryIcon_GUMI_STICKER = 18,
	ETresItemCategoryIcon_GUMI_SHIP_BP = 19,
	ETresItemCategoryIcon_GUMI_SHIP_BP_PIECE = 20,
	ETresItemCategoryIcon_GUMI_WEAPON_SP = 21,
	ETresItemCategoryIcon_GUMI_TREASURE_MAP = 22,
	ETresItemCategoryIcon_1_MAX = 23 UMETA(Hidden),
	ETresItemCategoryIcon_MAX = 24 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresItemCategory
{
	CAT_NONE = 0,
	BATTLEITEM = 1,
	CAMPITEM = 2,
	WEAPON = 3,
	PROTECTOR = 4,
	ACCESSORY = 5,
	FOOD = 6,
	MATERIAL = 7,
	FOODSTUFF = 8,
	KEYITEM = 9,
	MOGNET = 10,
	LSIGAME = 11,
	NAVIMAP = 12,
	REPORT = 13,
	GUMI_PARTS = 14,
	GUMI_MATERIAL = 15,
	GUMI_PATTERN = 16,
	GUMI_STICKER = 17,
	GUMI_SHIP_BP = 18,
	GUMI_ETC = 19,
	_CAT_MAX = 20 UMETA(Hidden),
	ETresItemCategory_MAX = 21 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresItemCollectRewardKind
{
	TICR_GET_ITEM = 0,
	TICR_ENABLE_SYNTHESIS = 1,
	TICR_ENABLE_BUY = 2,
	TICR_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresItemCollectCondition
{
	TICC_MAT_KIND_NUM = 0,
	TICC_MAT_TOTAL_NUM = 1,
	TICC_MAT_KIND_ALL = 2,
	TICC_MAT_SPKIND_NUM = 3,
	TICC_MAT_GET_RANK = 4,
	TICC_MAT_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresItemSynthesisCondition
{
	TISC_NONE = 0,
	TISC_COLLECT_LIST = 1,
	TISC_MOTIF_LIST = 2,
	TISC_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESqexCPPKHSWorldType
{
	SQEX_CPP_KHS_WORLD_DEFAULT = 0,
	SQEX_CPP_KHS_WORLD_KH = 1,
	SQEX_CPP_KHS_WORLD_CG = 2,
	SQEX_CPP_KHS_WORLD_REAL = 3,
	SQEX_CPP_KHS_WORLD_POO = 4,
	SQEX_CPP_KHS_WORLD_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresLevelEntityRestartSequence
{
	RESTART_ENTER_SEQUENCE = 0,
	RESTART_EXIT_SEQUENCE = 1,
	RESTART_BOTH_SEQUENCE = 2,
	RESTART_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresLevelEntitySequenceConditionDistanceSelector
{
	ETresLevelEntitySequenceConditionDistanceSelector_Nearest = 0,
	ETresLevelEntitySequenceConditionDistanceSelector_Farthest = 1,
	ETresLevelEntitySequenceConditionDistanceSelector_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresLevelEntitySequenceConditionDistanceCompare
{
	ETresLevelEntitySequenceConditionDistanceCompare_GraeterEqual = 0,
	ETresLevelEntitySequenceConditionDistanceCompare_LessEqual = 1,
	ETresLevelEntitySequenceConditionDistanceCompare_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresLevelEntitySequenceConditionBinOp
{
	ETresLevelEntitySequenceConditionBinOp_Less = 0,
	ETresLevelEntitySequenceConditionBinOp_Greater = 1,
	ETresLevelEntitySequenceConditionBinOp_LessEqual = 2,
	ETresLevelEntitySequenceConditionBinOp_GraeterEqual = 3,
	ETresLevelEntitySequenceConditionBinOp_EqualEqual = 4,
	ETresLevelEntitySequenceConditionBinOp_NotEqual = 5,
	ETresLevelEntitySequenceConditionBinOp_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresLevelLoadAndVisible
{
	ETresLevelLoadAndVisible_None = 0,
	LoadAndVisible = 1,
	LoadAndHidden = 2,
	Unload = 3,
	ETresLevelLoadAndVisible_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresLevelVisibility
{
	ETresLevelVisibility_Default = 0,
	ETresLevelVisibility_Hidden = 1,
	ETresLevelVisibility_Hidden_Tick = 2,
	ETresLevelVisibility_None = 3,
	ETresLevelVisibility_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresLinkActorEx202Size
{
	TRES_LINKACTOR_EX202_SIZE = 0,
	TRES_LINKACTOR_EX202_SIZE01 = 1,
	TRES_LINKACTOR_EX202_SIZE02 = 2,
	TRES_LINKACTOR_EX202_SIZE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresNavLinkSegment_e_ex035_
{
	NavLinkSegmentLeft_ = 0,
	NavLinkSegmentRight_ = 1,
	ETresNavLinkSegment_e_ex035__MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresLocomotionMode
{
	ETresLocomotionMode_Forward = 0,
	ETresLocomotionMode_Omnidirectional = 1,
	ETresLocomotionMode_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresLSIBarnyardSportsMode
{
	the100m = 0,
	hurdle = 1,
	triplejump = 2,
	multisports = 3,
	ETresLSIBarnyardSportsMode_MAX = 4
};

UENUM(BlueprintType)
enum ETresLSIHowtoPlayBaseballMode
{
	the1Inning = 0,
	the3Inning = 1,
	the6Inning = 2,
	the9Inning = 3,
	ETresLSIHowtoPlayBaseballMode_MAX = 4
};

UENUM(BlueprintType)
enum ETresLSIHowtoPlayGolfMode
{
	the3HOLE = 0,
	the9HOLE = 1,
	the18HOLE = 2,
	ETresLSIHowtoPlayGolfMode_MAX = 3
};

UENUM(BlueprintType)
enum ETresLSIMusicFarmerMode
{
	GAME_A = 0,
	GAME_B = 1,
	GAME_MAX = 2
};

UENUM(BlueprintType)
enum ETresMapSetObjType
{
	LevelPath = 0,
	StreamingVolume = 1,
	ETresMapSetObjType_MAX = 2
};

UENUM(BlueprintType)
enum ETresMBCurveTrack
{
	ETresMBCRVT_ScalingX = 0,
	ETresMBCRVT_ScalingY = 1,
	ETresMBCRVT_ScalingZ = 2,
	ETresMBCRVT_RotationX = 3,
	ETresMBCRVT_RotationY = 4,
	ETresMBCRVT_RotationZ = 5,
	ETresMBCRVT_TranslationX = 6,
	ETresMBCRVT_TranslationY = 7,
	ETresMBCRVT_TranslationZ = 8,
	ETresMBCRVT_Roll = 9,
	ETresMBCRVT_FieldOfView = 10,
	ETresMBCRVT_Max = 11
};

UENUM(BlueprintType)
enum ETresMBCurveInterp
{
	ETresMBCI_Constant = 0,
	ETresMBCI_Linear = 1,
	ETresMBCI_Cubic = 2,
	ETresMBCI_Max = 3
};

UENUM(BlueprintType)
enum ETresMiRxHolySealType
{
	ETresMiRxHolySealType_HOLY_SEAL_TYPE_NONE = 0 UMETA(DisplayName = "None"),
	ETresMiRxHolySealType_HOLY_SEAL_TYPE_SINGLE = 1 UMETA(DisplayName = "Single"),
	ETresMiRxHolySealType_HOLY_SEAL_TYPE_FULL_FIRE = 2 UMETA(DisplayName = "Full Fire"),
	ETresMiRxHolySealType_HOLY_SEAL_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresMiRxReplicaManagerStateKind
{
	STATE_KIND_IDLE = 0,
	STATE_KIND_LASER_OMEN = 1,
	STATE_KIND_SINGLE_LASER = 2,
	STATE_KIND_FULL_FIRE_LASER = 3,
	STATE_KIND_WARP_ATTACK = 4,
	STATE_KIND_WARP_ATTACK_TWICE = 5,
	STATE_KIND_WARP_ATTACK_THREE_TIMES = 6,
	STATE_KIND_SLASER_AND_WARPATTACK = 7,
	STATE_KIND_SLASER_AND_WARPATTACK01 = 8,
	STATE_KIND_SLASER_AND_WARPATTACK02 = 9,
	STATE_KIND_WARPATTACK_1_AND_SLASER = 10,
	STATE_KIND_WARPATTACK_2_AND_SLASER = 11,
	STATE_KIND_WARPATTACK_3_AND_SLASER = 12,
	STATE_KIND_SIMULTANEOUT_WARPATTACK = 13,
	STATE_KIND_WAIT = 14,
	STATE_KIND_WAIT_CHANGE_IDLE = 15,
	STATE_KIND_MAX = 16
};

UENUM(BlueprintType)
enum ETresGoalType_e_ex042_Hook
{
	ETresGoalType_e_ex042_Hook_Destination = 0,
	ETresGoalType_e_ex042_Hook_Target = 1,
	ETresGoalType_e_ex042_Hook_MAX = 2
};

UENUM(BlueprintType)
enum EEX731_DashEffectType
{
	EEX731_DashEffectType_Loop = 0,
	EEX731_DashEffectType_End = 1,
	EEX731_DashEffectType_Max = 2
};

UENUM(BlueprintType)
enum ETresFNpcAIAttackFlowWaitPhase
{
	FNPC_AI_ATK_FLOW_WAIT_PHASE = 0,
	FNPC_AI_ATK_FLOW_WAIT_PHASE01 = 1,
	FNPC_AI_ATK_FLOW_WAIT_PHASE_MAX = 2
};

UENUM(BlueprintType)
enum ETresFNPC_AI_LeadFinish
{
	TRES_FNPC_AI_LEAD_FINISH_ALL_UP = 0,
	TRES_FNPC_AI_LEAD_FINISH_GOAL = 1,
	TRES_FNPC_AI_LEAD_FINISH_GOAL_TURN = 2,
	TRES_FNPC_AI_LEAD_FINISH_MAX = 3
};

UENUM(BlueprintType)
enum ETresFNPC_AI_LeadGoalWaitRelease
{
	TRES_FNPC_AI_LEAD_GOAL_WAIT_R_DIST = 0,
	TRES_FNPC_AI_LEAD_GOAL_WAIT_R_TIME = 1,
	TRES_FNPC_AI_LEAD_GOAL_WAIT_R_MANUAL = 2,
	TRES_FNPC_AI_LEAD_GOAL_WAIT_R_MAX = 3
};

UENUM(BlueprintType)
enum ETresFNPC_AI_LeadGoalAction
{
	TRES_FNPC_AI_LEAD_GOAL_WAIT = 0,
	TRES_FNPC_AI_LEAD_GOAL_TALK = 1,
	TRES_FNPC_AI_LEAD_GOAL_FREE_WALK = 2,
	TRES_FNPC_AI_LEAD_GOAL_FREE_WALK_TALK = 3,
	TRES_FNPC_AI_LEAD_GOAL_MAX = 4
};

UENUM(BlueprintType)
enum ETresFNPC_AI_LeadMoveType
{
	TRES_FNPC_AI_LEAD_MOVE_RUN = 0,
	TRES_FNPC_AI_LEAD_MOVE_WALK = 1,
	TRES_FNPC_AI_LEAD_MOVE_MAX = 2
};

UENUM(BlueprintType)
enum ETresFNPC_AI_LeadMode
{
	TRES_FNPC_AI_LEAD_MODE_LEAD = 0,
	TRES_FNPC_AI_LEAD_MODE_LEAD_POINT = 1,
	TRES_FNPC_AI_LEAD_MODE_ROUTE = 2,
	TRES_FNPC_AI_LEAD_MODE_MAX = 3
};

UENUM(BlueprintType)
enum ETresFNpcAINpcMode
{
	TRES_FNPC_AI_NPC_MODE_NONE = 0,
	TRES_FNPC_AI_NPC_MODE_WAIT = 1,
	TRES_FNPC_AI_NPC_MODE_TALK = 2,
	TRES_FNPC_AI_NPC_MODE_FREE_WALK = 3,
	TRES_FNPC_AI_NPC_MODE_FREE_WALK_TALK = 4,
	TRES_FNPC_AI_NPC_MODE_MAX = 5
};

UENUM(BlueprintType)
enum ETresNpcGimmickTargetKind
{
	TRES_NPC_GTK_RAND = 0,
	TRES_NPC_GTK_NEAR = 1,
	TRES_NPC_GTK_PLAYER_NEAR = 2,
	TRES_NPC_GTK_TIME = 3,
	TRES_NPC_GTK_MAX = 4
};

UENUM(BlueprintType)
enum ETresFNpcAICombiRole
{
	COMBI_ROLE_NONE = 0,
	COMBI_ROLE_MAIN = 1,
	COMBI_ROLE_PARTNER = 2,
	COMBI_ROLE_MAX = 3
};

UENUM(BlueprintType)
enum ETresFNpcAICombiState
{
	STATE_COMBI_DISABLE = 0,
	STATE_COMBI_ENABLE = 1,
	STATE_COMBI_STANDBY = 2,
	STATE_COMBI_EXECUTE = 3,
	STATE_COMBI_MAX = 4
};

UENUM(BlueprintType)
enum ETresFNpcAICombiID
{
	TRES_FNPC_AI_COMBI_NONE = 0,
	TRES_FNPC_AI_COMBI_MI201_EX001 = 1,
	TRES_FNPC_AI_COMBI_MAX = 2
};

UENUM(BlueprintType)
enum ETresFNPCMat
{
	TRES_FNPC_MAT_NORMAL = 0,
	TRES_FNPC_MAT_SCRIBBLE = 1,
	TRES_FNPC_MAT_MAX = 2
};

UENUM(BlueprintType)
enum ETresNpcUseItemType
{
	TRES_NPC_USE_ITEM_NONE = 0,
	TRES_NPC_USE_ITEM_HP = 1,
	TRES_NPC_USE_ITEM_MP = 2,
	TRES_NPC_USE_ITEM_MAX = 3
};

UENUM(BlueprintType)
enum ETresNpcActionOnType
{
	TRES_NPC_AOT_NONE = 0,
	TRES_NPC_AOT_APPEAL = 1,
	TRES_NPC_AOT_COMICAL_BTL = 2,
	TRES_NPC_AOT_ACTION_POINT_MOVE = 3,
	TRES_NPC_AOT_ACTION_POINT_ARRIVAL = 4,
	TRES_NPC_AOT_TALK_POINT_MOVE = 5,
	TRES_NPC_AOT_TALK_POINT_WAIT = 6,
	TRES_NPC_AOT_SNOWCOVERSWING_WAIT = 7,
	TRES_NPC_AOT_GIMMICK_WAIT = 8,
	TRES_NPC_AOT_MOTION_PLAY = 9,
	TRES_NPC_AOT_HAIR_ACTION = 10,
	TRES_NPC_AOT_HAIR_ACTION_END = 11,
	TRES_NPC_AOT_PRECEDE_MOVEMENT = 12,
	TRES_NPC_AOT_MAX = 13
};

UENUM(BlueprintType)
enum ETresNpcSmartphoneCameraState
{
	TRES_NPC_SMARTPHONE_CAM_STATE_STANDBY = 0,
	TRES_NPC_SMARTPHONE_CAM_STATE_READY = 1,
	TRES_NPC_SMARTPHONE_CAM_STATE_EXECUT = 2,
	TRES_NPC_SMARTPHONE_CAM_STATE_MAX = 3
};

UENUM(BlueprintType)
enum EHologramWorldInitParamValueType
{
	EHologramWorldInitParamValueType_Float = 0,
	EHologramWorldInitParamValueType_Vector = 1,
	EHologramWorldInitParamValueType_Color = 2,
	EHologramWorldInitParamValueType_1_Max = 3,
	EHologramWorldInitParamValueType_MAX = 4
};

UENUM(BlueprintType)
enum EHologramActorCategory
{
	EHologramActorCategory_SORA = 0,
	EHologramActorCategory_SORA_KH2 = 1,
	EHologramActorCategory_LIGHT = 2,
	EHologramActorCategory_DARK = 3,
	EHologramActorCategory_FRIEND = 4,
	EHologramActorCategory_ENEMY = 5,
	EHologramActorCategory_OBJ_SPIRIT = 6,
	EHologramActorCategory_OBJ_GUMIENEMY = 7,
	EHologramActorCategory_OBJ_GUMIPARTS = 8,
	EHologramActorCategory_OBJ_EFFECT = 9,
	EHologramActorCategory_OBJ_OTHERS = 10,
	EHologramActorCategory_PHOTOGRAPH_ASSIST = 11,
	EHologramActorCategory_PHOTOGRAPH_ASSIST_LIGHT = 12,
	EHologramActorCategory_EFF_CAMATTACH = 13,
	EHologramActorCategory_EFF_FILTER = 14,
	EHologramActorCategory_1_MAX = 15,
	EHologramActorCategory_MAX = 16
};

UENUM(BlueprintType)
enum ETresSevenPrincessType
{
	ETresSevenPrincessType_EX_Donald = 0,
	ETresSevenPrincessType_EX_Goofy = 1,
	ETresSevenPrincessType_HE_Hercules = 2,
	ETresSevenPrincessType_TS_Woody = 3,
	ETresSevenPrincessType_TS_Buzz = 4,
	ETresSevenPrincessType_RA_Rapunzel = 5,
	ETresSevenPrincessType_RA_Flynn = 6,
	ETresSevenPrincessType_FZ_Marshmallow = 7,
	ETresSevenPrincessType_MI_Sulley = 8,
	ETresSevenPrincessType_MI_Mike = 9,
	ETresSevenPrincessType_CA_Jack = 10,
	ETresSevenPrincessType_BX_Baymax = 11,
	ETresSevenPrincessType_1_MAX = 12,
	ETresSevenPrincessType_MAX = 13
};

UENUM(BlueprintType)
enum ETresDetectCollShape2D
{
	ETresDetectCollShape2D_CIRCLE = 0,
	ETresDetectCollShape2D_RECTANGLE = 1,
	ETresDetectCollShape2D_POINT = 2,
	ETresDetectCollShape2D_1_MAX = 3,
	ETresDetectCollShape2D_MAX = 4
};

UENUM(BlueprintType)
enum ETresOneActionType
{
	ETresOneActionType_DEFAULT = 0,
	ETresOneActionType_SPECIAL_PERFORM = 1,
	ETresOneActionType_IMPRESSION_BIRD = 2,
	ETresOneActionType_1_MAX = 3,
	ETresOneActionType_MAX = 4
};

UENUM(BlueprintType)
enum EPRIZE_KIND
{
	PRIZE_KIND_HpPrizeS = 0 UMETA(DisplayName = "HP Prize S"),
	PRIZE_KIND_HpPrizeL = 1 UMETA(DisplayName = "HP Prize L"),
	PRIZE_KIND_MpPrizeS = 2 UMETA(DisplayName = "MP Prize S"),
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
	PRIZE_KIND_MAX = 17 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresClaymoreState_e_ex306
{
	ETresClaymoreState_e_ex306_Appear = 0,
	ETresClaymoreState_e_ex306_Idle = 1,
	ETresClaymoreState_e_ex306_SwingDown = 2,
	ETresClaymoreState_e_ex306_Free = 3,
	ETresClaymoreState_e_ex306_MAX = 4
};

UENUM(BlueprintType)
enum ETres_e_ex352_DarkMineKind
{
	DarkMineKind_Release = 0,
	DarkMineKind_Surround = 1,
	DarkMineKind_MAX = 2
};

UENUM(BlueprintType)
enum ETres_e_ex352_LightBulbKind
{
	LightBulbKind_Homing = 0,
	LightBulbKind_Rotation = 1,
	LightBulbKind_Scattering = 2,
	LightBulbKind_MAX = 3
};

UENUM(BlueprintType)
enum ETresClaymoreState_e_ex355
{
	ETresClaymoreState_e_ex355_Appear = 0,
	ETresClaymoreState_e_ex355_Idle = 1,
	ETresClaymoreState_e_ex355_SwingDown = 2,
	ETresClaymoreState_e_ex355_Free = 3,
	ETresClaymoreState_e_ex355_MAX = 4
};

UENUM(BlueprintType)
enum EEX355_ClaymoreRoamCenterType
{
	EEX355_ClaymoreRoamCenterType_Owner = 0,
	EEX355_ClaymoreRoamCenterType_Target = 1,
	EEX355_ClaymoreRoamCenterType_Map = 2,
	EEX355_ClaymoreRoamCenterType_Max = 3
};

UENUM(BlueprintType)
enum EEX359_SpawnDirType
{
	EEX359_SpawnDirType_Self = 0,
	EEX359_SpawnDirType_Target = 1,
	EEX359_SpawnDirType_ToTarget = 2,
	EEX359_SpawnDirType_Camera = 3,
	EEX359_SpawnDirType_ProjToTarget = 4,
	EEX359_SpawnDirType_Max = 5
};

UENUM(BlueprintType)
enum EEX359_SpawnLocType
{
	EEX359_SpawnLocType_Self = 0,
	EEX359_SpawnLocType_Target = 1,
	EEX359_SpawnLocType_Owner = 2,
	EEX359_SpawnLocType_Max = 3
};

UENUM(BlueprintType)
enum ETresEnemyEEX771_FLARE_SHOT_SPAWN_TYPE
{
	ETresEnemyEEX771_FLARE_SHOT_SPAWN_TYPE_SPAWN_TYPE_LR = 0,
	ETresEnemyEEX771_FLARE_SHOT_SPAWN_TYPE_SPAWN_TYPE_L = 1,
	ETresEnemyEEX771_FLARE_SHOT_SPAWN_TYPE_SPAWN_TYPE_R = 2,
	ETresEnemyEEX771_FLARE_SHOT_SPAWN_TYPE_SPAWN_TYPE_MAX = 3
};

UENUM(BlueprintType)
enum ETresEnemyEEX773_FLARE_SHOT_SPAWN_TYPE
{
	ETresEnemyEEX773_FLARE_SHOT_SPAWN_TYPE_SPAWN_TYPE_LR = 0,
	ETresEnemyEEX773_FLARE_SHOT_SPAWN_TYPE_SPAWN_TYPE_L = 1,
	ETresEnemyEEX773_FLARE_SHOT_SPAWN_TYPE_SPAWN_TYPE_R = 2,
	ETresEnemyEEX773_FLARE_SHOT_SPAWN_TYPE_SPAWN_TYPE_MAX = 3
};

UENUM(BlueprintType)
enum ETresPuddingResultRank
{
	ETresPuddingResultRank_RANK_A = 0,
	ETresPuddingResultRank_RANK_B = 1,
	ETresPuddingResultRank_RANK_C = 2,
	ETresPuddingResultRank_RANK_MAX = 3
};

UENUM(BlueprintType)
enum ETresPuddingTaskType
{
	ETresPuddingTaskType_NONE = 0,
	ETresPuddingTaskType_HE = 1,
	ETresPuddingTaskType_BX = 2,
	ETresPuddingTaskType_CA = 3,
	ETresPuddingTaskType_TS = 4,
	ETresPuddingTaskType_MI = 5,
	ETresPuddingTaskType_FZ = 6,
	ETresPuddingTaskType_RA = 7,
	ETresPuddingTaskType_MAX = 8
};

UENUM(BlueprintType)
enum ECuttingMainState
{
	ECuttingMainState_None = 0,
	ECuttingMainState_Prepare = 1,
	ECuttingMainState_Sloping = 2,
	ECuttingMainState_SubSloping = 3,
	ECuttingMainState_Calculate = 4,
	ECuttingMainState_PrepareReload = 5,
	ECuttingMainState_CommandReload = 6,
	ECuttingMainState_StickOnlyReload = 7,
	ECuttingMainState_WaitReload = 8,
	ECuttingMainState_ResultWait = 9,
	CuttingMainState_MAX = 10
};

UENUM(BlueprintType)
enum ECuttingReloadType
{
	ECuttingReloadType_Command = 0,
	ECuttingReloadType_StickOnly = 1,
	CuttingReloadType_MAX = 2
};

UENUM(BlueprintType)
enum EggCrackingV2MainState
{
	EggCrackingV2MainState_None = 0,
	EggCrackingV2MainState_CrackPrepare = 1,
	EggCrackingV2MainState_CrackSloping = 2,
	EggCrackingV2MainState_PullPrepare = 3,
	EggCrackingV2MainState_PullSloping = 4,
	EggCrackingV2MainState_Finished = 5,
	EggCrackingV2MainState_MAX = 6
};

UENUM(BlueprintType)
enum EggCrackingV2AnimationType
{
	EggCrackingV2AnimationType_TypeA = 0,
	EggCrackingV2AnimationType_TypeB = 1,
	EggCrackingV2AnimationType_MAX = 2
};

UENUM(BlueprintType)
enum EggCrackingV2MaterialAmountIncreaseType
{
	EggCrackingV2MaterialAmountIncreaseType_TypeA = 0,
	EggCrackingV2MaterialAmountIncreaseType_TypeB = 1,
	EggCrackingV2MaterialAmountIncreaseType_TypeC = 2,
	EggCrackingV2MaterialAmountIncreaseType_TypeD = 3,
	EggCrackingV2MaterialAmountIncreaseType_MAX = 4
};

UENUM(BlueprintType)
enum ESprinklePepperMainState
{
	ESprinklePepperMainState_None = 0,
	ESprinklePepperMainState_Prepare = 1,
	ESprinklePepperMainState_Sloping = 2,
	ESprinklePepperMainState_Calculate = 3,
	ESprinklePepperMainState_Finish = 4,
	SprinklePepperMainState_MAX = 5
};

UENUM(BlueprintType)
enum ESprinklePepperV2InputJudgementType
{
	ESprinklePepperV2InputJudgementType_TypeA = 0,
	ESprinklePepperV2InputJudgementType_TypeB = 1,
	ESprinklePepperV2InputJudgementType_TypeC = 2,
	SprinklePepperV2InputJudgementType_MAX = 3
};

UENUM(BlueprintType)
enum ESprinklePepperV2InputType
{
	ESprinklePepperV2InputType_InputTypeNone = 0,
	ESprinklePepperV2InputType_InputTypeA = 1,
	ESprinklePepperV2InputType_InputTypeB = 2,
	ESprinklePepperV2InputType_InputTypeC = 3,
	ESprinklePepperV2InputType_InputTypeD = 4,
	SprinklePepperV2InputType_MAX = 5
};

UENUM(BlueprintType)
enum ESprinklePepperV2InputTimingEvalution
{
	InputTimingEvalutionNone = 0,
	InputTimingEvalutionTooFast = 1,
	InputTimingEvalutionSuccess = 2,
	InputTimingEvalutionGreatSuccess = 3,
	InputTimingEvalutionTooSlow = 4,
	SprinklePepperV2InputTimingEvalution_MAX = 5
};

UENUM(BlueprintType)
enum ESprinklePepperV2MainState
{
	ESprinklePepperV2MainState_None = 0,
	ESprinklePepperV2MainState_TypeABPrepare = 1,
	ESprinklePepperV2MainState_TypeABSloping = 2,
	ESprinklePepperV2MainState_TypeABCalculate = 3,
	ESprinklePepperV2MainState_TypeCDPrepare = 4,
	ESprinklePepperV2MainState_TypeCDSloping = 5,
	ESprinklePepperV2MainState_TypeCDCalculate = 6,
	ESprinklePepperV2MainState_WaitThrowAnimation = 7,
	ESprinklePepperV2MainState_WaitAnimation = 8,
	ESprinklePepperV2MainState_TypeABWaitStickNeutral = 9,
	ESprinklePepperV2MainState_TypeCDWaitStickNeutral = 10,
	ESprinklePepperV2MainState_GameEndWaitThrowAnimation = 11,
	ESprinklePepperV2MainState_GameEnd = 12,
	SprinklePepperV2MainState_MAX = 13
};

UENUM(BlueprintType)
enum ERemyFPSMode
{
	ERemyFPSMode_FPS_Config = 0,
	ERemyFPSMode_FPS = 1,
	ERemyFPSMode_FPS01 = 2,
	FPS_MAX = 3
};

UENUM(BlueprintType)
enum ERemyDishLevel
{
	RemyDishLevel1 = 0,
	RemyDishLevel2 = 1,
	RemyDishLevel3 = 2,
	RemyDishLevel4 = 3,
	RemyDishLevel5 = 4,
	RemyDishLevel_MAX = 5
};

UENUM(BlueprintType)
enum ERemyKitchenGrade
{
	RemyKitchenGrade1 = 0,
	RemyKitchenGrade2 = 1,
	RemyKitchenGrade3 = 2,
	RemyKitchenGrade4 = 3,
	RemyKitchenGrade_MAX = 4
};

UENUM(BlueprintType)
enum ERemyMilestone
{
	RemyMilestone0 = 0,
	RemyMilestone1 = 1,
	RemyMilestone2 = 2,
	RemyMilestone3 = 3,
	RemyMilestone_MAX = 4
};

UENUM(BlueprintType)
enum ERemyRestaurantRank
{
	RemyRestaurantRank0 = 0,
	RemyRestaurantRank1 = 1,
	RemyRestaurantRank2 = 2,
	RemyRestaurantRank3 = 3,
	RemyRestaurantRank4 = 4,
	RemyRestaurantRank5 = 5,
	RemyRestaurantRank_MAX = 6
};

UENUM(BlueprintType)
enum ERemyShowFinishOperationUITiming
{
	ERemyShowFinishOperationUITiming_None = 0,
	ERemyShowFinishOperationUITiming_HaveMaterial = 1,
	ERemyShowFinishOperationUITiming_OnSuccess = 2,
	RemyShowFinishOperationUITiming_MAX = 3
};

UENUM(BlueprintType)
enum ERemyStickControlType
{
	SoraViewpoint = 0,
	UserViewpoint = 1,
	RemyStickControlType_MAX = 2
};

UENUM(BlueprintType)
enum ERemyCookingCommand
{
	ERemyCookingCommand_Up = 0,
	ERemyCookingCommand_Down = 1,
	ERemyCookingCommand_Left = 2,
	ERemyCookingCommand_Right = 3,
	RemyCookingCommand_MAX = 4
};

UENUM(BlueprintType)
enum ERemySprinklePepperContentsType
{
	RemySprinklePepperContentsA = 0,
	RemySprinklePepperContentsB = 1,
	RemySprinklePepperContentsC = 2,
	RemySprinklePepperContentsD = 3,
	RemySprinklePepperContentsE = 4,
	RemySprinklePepperContentsF = 5,
	RemySprinklePepperContentsG = 6,
	RemySprinklePepperContentsType_MAX = 7
};

UENUM(BlueprintType)
enum ERemySprinklePepperEquipmentType
{
	RemySprinklePepperNone = 0,
	RemySprinklePepperSaucepan = 1,
	RemySprinklePepperPan = 2,
	RemySprinklePepperBowl = 3,
	RemySprinklePepperEquipmentType_MAX = 4
};

UENUM(BlueprintType)
enum ERemyCuttingFoodType
{
	RemyCuttingOnion = 0,
	RemyCuttingZucchini = 1,
	RemyCuttingMushroom = 2,
	RemyCuttingApple = 3,
	RemyCuttingTomato = 4,
	RemyCuttingPear = 5,
	RemyCuttingFoodType_MAX = 6
};

UENUM(BlueprintType)
enum ERemyFlambeFoodType
{
	RemyFlambeCrab = 0,
	RemyFlambeScallops = 1,
	RemyFlambeEel = 2,
	RemyFlambeSweetbread = 3,
	RemyFlambeCrepe = 4,
	RemyFlambeSeaperch = 5,
	RemyFlambeFilletMeat = 6,
	RemyFlambeFoodType_MAX = 7
};

UENUM(BlueprintType)
enum ERemyCameraWorkTiming
{
	RemyCameraFirstPlay = 0,
	RemyCameraGetReward1stMilestone = 1,
	RemyCameraGetReward2ndMilestone = 2,
	RemyCameraMenu = 3,
	FlambeCameraCountDown = 4,
	FlambeCameraStart = 5,
	FlambeCameraFlambe = 6,
	FlambeCameraNothingFlambe = 7,
	FlambeCameraSuccessFire = 8,
	FlambeCameraGreatSuccessFire = 9,
	FlambeCameraTooManyFire = 10,
	FlambeCameraTooLittleFire = 11,
	FlambeCameraTimeOutThrowPan = 12,
	FlambeCameraSuccess = 13,
	FlambeCameraGreatSuccess = 14,
	FlambeCameraTimeOut = 15,
	FlambeCameraTooMany = 16,
	FlambeCameraTooLittle = 17,
	FlambeCameraNothing = 18,
	FlambeCameraRetry = 19,
	FlambeCameraReturnToMenu = 20,
	CuttingCameraCountDown = 21,
	CuttingCameraStart = 22,
	CuttingCameraSuccess = 23,
	CuttingCameraGreatSuccess = 24,
	CuttingCameraFail = 25,
	CuttingCameraResultSuccess = 26,
	CuttingCameraResultGreatSuccess = 27,
	CuttingCameraResultFail = 28,
	CuttingCameraRetry = 29,
	CuttingCameraReturnToMenu = 30,
	EggCrackingCameraCountDown = 31,
	EggCrackingCameraStart = 32,
	EggCrackingCameraGreatSuccessBowl = 33,
	EggCrackingCameraFail = 34,
	EggCrackingCameraSuccess = 35,
	EggCrackingCameraGreatSuccess = 36,
	EggCrackingCameraTooMany = 37,
	EggCrackingCameraTimeOut = 38,
	EggCrackingCameraResultSuccess = 39,
	EggCrackingCameraResultGreatSuccess = 40,
	EggCrackingCameraResultFail = 41,
	EggCrackingCameraRetry = 42,
	EggCrackingCameraReturnToMenu = 43,
	SprinklePepperCameraCountDown = 44,
	SprinklePepperCameraStart = 45,
	SprinklePepperCameraSuccess = 46,
	SprinklePepperCameraGreatSuccess = 47,
	SprinklePepperCameraFail = 48,
	SprinklePepperCameraResultSuccess = 49,
	SprinklePepperCameraResultGreatSuccess = 50,
	SprinklePepperCameraResultFail = 51,
	SprinklePepperCameraRetry = 52,
	SprinklePepperCameraReturnToMenu = 53,
	RemyCameraWorkTiming_MAX = 54
};

UENUM(BlueprintType)
enum ERemyResultAnimationType
{
	RemyResultAnimSuccess = 0,
	RemyResultAnimSuccessLoop = 1,
	RemyResultAnimGreatSuccess = 2,
	RemyResultAnimGreatSuccessLoop = 3,
	RemyResultAnimFail = 4,
	RemyResultAnimFailLoop = 5,
	RemyResultAnimationType_MAX = 6
};

UENUM(BlueprintType)
enum ERemyAnimationType
{
	FlambeIdle = 0,
	FlambeTakeProp = 1,
	FlambeReadyIdle = 2,
	FlambeTiltBottle = 3,
	FlambeTurnBottleLoop = 4,
	FlambeTooMany = 5,
	FlambeTimeOut = 6,
	FlambeSuccess = 7,
	FlambeGreatSuccess = 8,
	FlambeFail = 9,
	CuttingIdle = 10,
	CuttingTakeProp = 11,
	CuttingReadyIdle = 12,
	CuttingCut = 13,
	CuttingReload = 14,
	CuttingSuccess = 15,
	CuttingGreatSuccess = 16,
	CuttingFail = 17,
	EggCrackingIdle = 18,
	EggCrackingTakeProp = 19,
	EggCrackingReadyIdle = 20,
	EggCrackingTooMany = 21,
	EggCrackingTimeOut = 22,
	EggCrackingSuccess = 23,
	EggCrackingGreatSuccess = 24,
	EggCrackingFail = 25,
	SprinklePepperIdle = 26,
	SprinklePepperTakeProp = 27,
	SprinklePepperReadyIdle = 28,
	SprinklePepperFirstThrow = 29,
	SprinklePepperLeftHandThrow = 30,
	SprinklePepperRightHandThrow = 31,
	SprinklePepperLeftHandMiss = 32,
	SprinklePepperRightHandMiss = 33,
	SprinklePepperLeftHandCatchFail = 34,
	SprinklePepperRightHandCatchFail = 35,
	SprinklePepperLeftHandSprinkleFail = 36,
	SprinklePepperRightHandSprinkleFail = 37,
	SprinklePepperLeftHandCatchSuccess = 38,
	SprinklePepperRightHandCatchSuccess = 39,
	SprinklePepperLeftHandSprinkleSuccess = 40,
	SprinklePepperRightHandSprinkleSuccess = 41,
	SprinklePepperLeftHandSprinkleGreatSuccess = 42,
	SprinklePepperRightHandSprinkleGreatSuccess = 43,
	RemyAnimationType_MAX = 44
};

UENUM(BlueprintType)
enum ERemyCookingEvaluationResult
{
	RemyCookingResultNothing = 0,
	RemyCookingResultTooLittle = 1,
	RemyCookingResultSuccess = 2,
	RemyCookingResultGreatSuccess = 3,
	RemyCookingResultTooMany = 4,
	RemyCookingResultTimeOut = 5,
	RemyCookingResultTooFast = 6,
	RemyCookingResultTooSlow = 7,
	RemyCookingEvaluationResult_MAX = 8
};

UENUM(BlueprintType)
enum ERemyCookingEvalution
{
	RemyCookingEvalutionNothing = 0,
	RemyCookingEvalutionTooLittle = 1,
	RemyCookingEvalutionSuccess = 2,
	RemyCookingEvalutionGreatSuccess = 3,
	RemyCookingEvalutionTooMany = 4,
	RemyCookingEvalutionTooFast = 5,
	RemyCookingEvalutionTooSlow = 6,
	RemyCookingEvalution_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ERemyCookingGameState
{
	RemyCookingPrepare = 0,
	RemyCookingTitle = 1,
	RemyCookingTutorial = 2,
	RemyCookingCountDown = 3,
	RemyCookingMain = 4,
	RemyCookingResult = 5,
	RemyCookingPerformance = 6,
	RemyCookingEnd = 7,
	RemyCookingRetry = 8,
	RemyCookingGameState_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ERemyGameState
{
	RemyPrepare = 0,
	RemyFirstPlay = 1,
	RemyMenu = 2,
	RemyMain = 3,
	RemyCircumductionReward = 4,
	RemyRankup = 5,
	RemyMilestoneReward = 6,
	RemyRetry = 7,
	RemyFinalize = 8,
	RemyGameState_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ERemyCookingGameType
{
	Flambe = 0,
	EggCracking = 1,
	SprinklePepper = 2,
	Cutting = 3,
	FlambeV2 = 4,
	EggCrackingV2 = 5,
	SprinklePepperV2 = 6,
	RemyCookingGameTypeNum = 7,
	RemyCookingGameType_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ERemyRecipeType
{
	ERemyRecipeType_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ERemyRecipeType_Recipe01 = 1 UMETA(DisplayName = "Recipe 01"),
	ERemyRecipeType_Recipe02 = 2 UMETA(DisplayName = "Recipe 02"),
	ERemyRecipeType_Recipe03 = 3 UMETA(DisplayName = "Recipe 03"),
	ERemyRecipeType_Recipe04 = 4 UMETA(DisplayName = "Recipe 04"),
	ERemyRecipeType_Recipe05 = 5 UMETA(DisplayName = "Recipe 05"),
	ERemyRecipeType_Recipe06 = 6 UMETA(DisplayName = "Recipe 06"),
	ERemyRecipeType_Recipe07 = 7 UMETA(DisplayName = "Recipe 07"),
	ERemyRecipeType_Recipe08 = 8 UMETA(DisplayName = "Recipe 08"),
	ERemyRecipeType_Recipe09 = 9 UMETA(DisplayName = "Recipe 09"),
	ERemyRecipeType_Recipe10 = 10 UMETA(DisplayName = "Recipe 10"),
	ERemyRecipeType_Recipe11 = 11 UMETA(DisplayName = "Recipe 11"),
	ERemyRecipeType_Recipe12 = 12 UMETA(DisplayName = "Recipe 12"),
	ERemyRecipeType_Recipe13 = 13 UMETA(DisplayName = "Recipe 13"),
	ERemyRecipeType_Recipe14 = 14 UMETA(DisplayName = "Recipe 14"),
	ERemyRecipeType_Recipe15 = 15 UMETA(DisplayName = "Recipe 15"),
	ERemyRecipeType_Recipe16 = 16 UMETA(DisplayName = "Recipe 16"),
	ERemyRecipeType_Recipe17 = 17 UMETA(DisplayName = "Recipe 17"),
	ERemyRecipeType_Recipe18 = 18 UMETA(DisplayName = "Recipe 18"),
	ERemyRecipeType_Recipe19 = 19 UMETA(DisplayName = "Recipe 19"),
	ERemyRecipeType_Recipe20 = 20 UMETA(DisplayName = "Recipe 20"),
	ERemyRecipeType_Recipe21 = 21 UMETA(DisplayName = "Recipe 21"),
	ERemyRecipeType_Recipe22 = 22 UMETA(DisplayName = "Recipe 22"),
	ERemyRecipeType_Recipe23 = 23 UMETA(DisplayName = "Recipe 23"),
	ERemyRecipeType_Recipe24 = 24 UMETA(DisplayName = "Recipe 24"),
	ERemyRecipeType_Recipe25 = 25 UMETA(DisplayName = "Recipe 25"),
	ERemyRecipeType_Recipe26 = 26 UMETA(DisplayName = "Recipe 26"),
	ERemyRecipeType_Recipe27 = 27 UMETA(DisplayName = "Recipe 27"),
	ERemyRecipeType_Recipe28 = 28 UMETA(DisplayName = "Recipe 28"),
	ERemyRecipeType_1_MAX = 29 UMETA(Hidden),
	RemyRecipeType_MAX = 30 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ERemyMenuType
{
	ERemyMenuType_Normal = 0,
	ERemyMenuType_Special = 1,
	RemyMenuType_MAX = 2
};

UENUM(BlueprintType)
enum ERemyDishCategory
{
	ERemyDishCategory_Appetizer = 0,
	ERemyDishCategory_Soup = 1,
	ERemyDishCategory_Fish = 2,
	ERemyDishCategory_Meat = 3,
	ERemyDishCategory_Dessert = 4,
	ERemyDishCategory_RemyDishCategoryNum = 5,
	RemyDishCategory_MAX = 6
};

UENUM(BlueprintType)
enum ERemyAccessMethod
{
	ERemyAccessMethod_None = 0 UMETA(DisplayName = "None"),
	ERemyAccessMethod_FromEntrance = 1 UMETA(DisplayName = "From Entrance"),
	ERemyAccessMethod_FromSaveMenu = 2 UMETA(DisplayName = "From Save Menu"),
	ERemyAccessMethod_FromWorldMap = 3 UMETA(DisplayName = "From World Map"),
	RemyAccessMethod_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresShopChrID
{
	ETresShopChrID_MOOGLE = 0 UMETA(DisplayName = "Moogle"),
	ETresShopChrID_HUEY = 1 UMETA(DisplayName = "Huey"),
	ETresShopChrID_DEWEY = 2 UMETA(DisplayName = "Dewey"),
	ETresShopChrID_LOUIE = 3 UMETA(DisplayName = "Louie"),
	ETresShopChrID_1_MAX = 4 UMETA(Hidden),
	ETresShopChrID_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresShopID
{
	ETresShopID_NOTHING = 0,
	ETresShopID_COMMON = 1,
	ETresShopID_BT_MOOGLE1 = 2,
	ETresShopID_DB_MOOGLE1 = 3,
	ETresShopID_DW_MOOGLE1 = 4,
	ETresShopID_HE_MOOGLE1 = 5,
	ETresShopID_TS_MOOGLE1 = 6,
	ETresShopID_CS_MOOGLE1 = 7,
	ETresShopID_RA_MOOGLE1 = 8,
	ETresShopID_FZ_MOOGLE1 = 9,
	ETresShopID_CA_MOOGLE1 = 10,
	ETresShopID_PO_MOOGLE1 = 11,
	ETresShopID_MI_MOOGLE1 = 12,
	ETresShopID_TT_MOOGLE1 = 13,
	ETresShopID_YT_MOOGLE1 = 14,
	ETresShopID_KB_MOOGLE1 = 15,
	ETresShopID_FW_MOOGLE1 = 16,
	ETresShopID_DC_MOOGLE1 = 17,
	ETresShopID_WI_MOOGLE1 = 18,
	ETresShopID_IN_MOOGLE1 = 19,
	ETresShopID_BX_MOOGLE1 = 20,
	ETresShopID_SR_MOOGLE1 = 21,
	ETresShopID_CO_MOOGLE1 = 22,
	ETresShopID_EW_MOOGLE1 = 23,
	ETresShopID_DI_MOOGLE1 = 24,
	ETresShopID_RG_MOOGLE1 = 25,
	ETresShopID_DP_MOOGLE1 = 26,
	ETresShopID_SF_MOOGLE1 = 27,
	ETresShopID_GM_MOOGLE1 = 28,
	ETresShopID_WM_MOOGLE1 = 29,
	ETresShopID_GUMI_SHOP_L1 = 30,
	ETresShopID_GUMI_SHOP_L2 = 31,
	ETresShopID_GUMI_SHOP_L3 = 32,
	ETresShopID_GUMI_SHOP_L4 = 33,
	ETresShopID_GUMI_SHOP_L5 = 34,
	ETresShopID_GUMI_SHOP_L6 = 35,
	ETresShopID_1_MAX = 36 UMETA(Hidden),
	ETresShopID_MAX = 37 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresSkeletalFootStampDir
{
	ETresSkeletalFootStampDir_Normal = 0,
	LR_Reverse = 1,
	FB_Reverse = 2,
	LRFB_Reverse = 3,
	ETresSkeletalFootStampDir_MAX = 4
};

UENUM(BlueprintType)
enum ETresSoundAliasLabel_Projectile
{
	ETresSoundAliasLabel_Projectile_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresSoundAliasLabel_Projectile_HIT1 = 1 UMETA(DisplayName = "Hit 1"),
	ETresSoundAliasLabel_Projectile_HIT2 = 2 UMETA(DisplayName = "Hit 2"),
	ETresSoundAliasLabel_Projectile_1_MAX = 3 UMETA(Hidden),
	ETresSoundAliasLabel_Projectile_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresSoundAliasLabel_WeaponSwing : uint8
{
	NOTHING UMETA(DisplayName = "Nothing"),
	SWING1 UMETA(DisplayName = "Swing1"),
	SWING2 UMETA(DisplayName = "Swing2"),
	SWING3 UMETA(DisplayName = "Swing3"),
	SWING4 UMETA(DisplayName = "Swing4"),
	SWING5 UMETA(DisplayName = "Swing5"),
	SWING6 UMETA(DisplayName = "Swing6"),
	SWING7 UMETA(DisplayName = "Swing7"),
	SWING8 UMETA(DisplayName = "Swing8"),
	SWING9 UMETA(DisplayName = "Swing9"),
	SWING10 UMETA(DisplayName = "Swing10"),
	SWING11 UMETA(DisplayName = "Swing11"),
	SWING12 UMETA(DisplayName = "Swing12"),
	SWING13 UMETA(DisplayName = "Swing13"),
	MAX UMETA(Hidden)

};

/*
UENUM(BlueprintType)
enum ETresSoundAliasLabel_WeaponSwing
{
	ETresSoundAliasLabel_WeaponSwing_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresSoundAliasLabel_WeaponSwing_SWING1 = 1 UMETA(DisplayName = "Swing 1"),
	ETresSoundAliasLabel_WeaponSwing_SWING2 = 2 UMETA(DisplayName = "Swing 2"),
	ETresSoundAliasLabel_WeaponSwing_SWING3 = 3 UMETA(DisplayName = "Swing 3"),
	ETresSoundAliasLabel_WeaponSwing_SWING4 = 4 UMETA(DisplayName = "Swing 4"),
	ETresSoundAliasLabel_WeaponSwing_SWING5 = 5 UMETA(DisplayName = "Swing 5"),
	ETresSoundAliasLabel_WeaponSwing_SWING6 = 6 UMETA(DisplayName = "Swing 6"),
	ETresSoundAliasLabel_WeaponSwing_SWING7 = 7 UMETA(DisplayName = "Swing 7"),
	ETresSoundAliasLabel_WeaponSwing_SWING8 = 8 UMETA(DisplayName = "Swing 8"),
	ETresSoundAliasLabel_WeaponSwing_SWING9 = 9 UMETA(DisplayName = "Swing 9"),
	ETresSoundAliasLabel_WeaponSwing_SWING10 = 10 UMETA(DisplayName = "Swing 10"),
	ETresSoundAliasLabel_WeaponSwing_SWING11 = 11 UMETA(DisplayName = "Swing 11"),
	ETresSoundAliasLabel_WeaponSwing_SWING12 = 12 UMETA(DisplayName = "Swing 12"),
	ETresSoundAliasLabel_WeaponSwing_SWING13 = 13 UMETA(DisplayName = "Swing 13"),
	ETresSoundAliasLabel_WeaponSwing_1_MAX = 14 UMETA(Hidden),
	ETresSoundAliasLabel_WeaponSwing_MAX = 15 UMETA(Hidden)
};

*/

UENUM(BlueprintType)
enum class ETresSoundAliasLabel_WeaponHit : uint8
{
	NOTHING UMETA(DisplayName = "Nothing"),
	HIT1 UMETA(DisplayName = "Hit 1"),
	HIT2 UMETA(DisplayName = "Hit 2"),
	HIT3 UMETA(DisplayName = "Hit 3"),
	HIT4 UMETA(DisplayName = "Hit 4"),
	HIT5 UMETA(DisplayName = "Hit 5"),
	HIT6 UMETA(DisplayName = "Hit 6"),
	HIT7 UMETA(DisplayName = "Hit 7"),
	HIT8 UMETA(DisplayName = "Hit 8"),
	HIT9 UMETA(DisplayName = "Hit 9"),
	HIT10 UMETA(DisplayName = "Hit 10"),
	HIT11 UMETA(DisplayName = "Hit 11"),
	HIT12 UMETA(DisplayName = "Hit 12"),
	HIT13 UMETA(DisplayName = "Hit 13"),
	MAX UMETA(Hidden)
};
/*
UENUM(BlueprintType)
enum ETresSoundAliasLabel_WeaponHit
{
	ETresSoundAliasLabel_WeaponHit_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresSoundAliasLabel_WeaponHit_HIT1 = 1 UMETA(DisplayName = "Hit 1"),
	ETresSoundAliasLabel_WeaponHit_HIT2 = 2 UMETA(DisplayName = "Hit 2"),
	ETresSoundAliasLabel_WeaponHit_HIT3 = 3 UMETA(DisplayName = "Hit 3"),
	ETresSoundAliasLabel_WeaponHit_HIT4 = 4 UMETA(DisplayName = "Hit 4"),
	ETresSoundAliasLabel_WeaponHit_HIT5 = 5 UMETA(DisplayName = "Hit 5"),
	ETresSoundAliasLabel_WeaponHit_HIT6 = 6 UMETA(DisplayName = "Hit 6"),
	ETresSoundAliasLabel_WeaponHit_HIT7 = 7 UMETA(DisplayName = "Hit 7"),
	ETresSoundAliasLabel_WeaponHit_HIT8 = 8 UMETA(DisplayName = "Hit 8"),
	ETresSoundAliasLabel_WeaponHit_HIT9 = 9 UMETA(DisplayName = "Hit 9"),
	ETresSoundAliasLabel_WeaponHit_HIT10 = 10 UMETA(DisplayName = "Hit 10"),
	ETresSoundAliasLabel_WeaponHit_HIT11 = 11 UMETA(DisplayName = "Hit 11"),
	ETresSoundAliasLabel_WeaponHit_1_MAX = 12 UMETA(Hidden),
	ETresSoundAliasLabel_WeaponHit_MAX = 13 UMETA(Hidden)
};
*/

UENUM(BlueprintType)
enum class ETresSoundAliasUnit : uint8
{
	NOTHING UMETA(DisplayName = "Nothing"),
	RH_WEAPON UMETA(DisplayName = "RH Weapon"),
	LH_WEAPON UMETA(DisplayName = "LH Weapon"),
	RL_WEAPON UMETA(DisplayName = "RL Weapon"),
	LL_WEAPON UMETA(DisplayName = "LL Weapon"),
	MAX UMETA(Hidden)
};

/*
UENUM(BlueprintType)
enum ETresSoundAliasUnit
{
	ETresSoundAliasUnit_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	ETresSoundAliasUnit_RH_WEAPON = 1 UMETA(DisplayName = "RH Weapon"),
	ETresSoundAliasUnit_LH_WEAPON = 2 UMETA(DisplayName = "LH Weapon"),
	ETresSoundAliasUnit_RL_WEAPON = 3 UMETA(DisplayName = "RL Weapon"),
	ETresSoundAliasUnit_LL_WEAPON = 4 UMETA(DisplayName = "LL Weapon"),
	ETresSoundAliasUnit_1_MAX = 5 UMETA(Hidden),
	ETresSoundAliasUnit_MAX = 6 UMETA(Hidden)
};
*/

UENUM(BlueprintType)
enum ETresSoundAliasLabel
{
	SEAL_NOTHING = 0,
	SEAL_HIT1 = 1,
	SEAL_HIT2 = 2,
	SEAL_HIT3 = 3,
	SEAL_HIT4 = 4,
	SEAL_HIT5 = 5,
	SEAL_HIT6 = 6,
	SEAL_HIT7 = 7,
	SEAL_SWING1 = 8,
	SEAL_SWING2 = 9,
	SEAL_SWING3 = 10,
	SEAL_SWING4 = 11,
	_SEAL_MAX = 12 UMETA(Hidden),
	ETresSoundAliasLabel_MAX = 13 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresCategoryVolumeLayers
{
	ETresCategoryVolumeLayers_GAME = 0,
	ETresCategoryVolumeLayers_MATINEE = 1,
	ETresCategoryVolumeLayers_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresWorldStaticBGMTypes
{
	ETresWorldStaticBGMTypes_FIELD = 0,
	ETresWorldStaticBGMTypes_BATTLE = 1,
	ETresWorldStaticBGMTypes_BOSS_BATTLE = 2,
	ETresWorldStaticBGMTypes_EVENT_01 = 3,
	ETresWorldStaticBGMTypes_MAX = 4
};

UENUM(BlueprintType)
enum ETresSoundModes
{
	ETresSoundModes_BLACKOUT = 0,
	ETresSoundModes_PAUSE = 1,
	ETresSoundModes_SLOW = 2,
	ETresSoundModes_PLAYER_DEAD = 3,
	ETresSoundModes_BOSS_DEAD = 4,
	ETresSoundModes_THANKYOU_FOR_PLAYING = 5,
	ETresSoundModes_EVENT_SKIP_FADING = 6,
	ETresSoundModes_MOVIE = 7,
	ETresSoundModes_MAX = 8
};

UENUM(BlueprintType)
enum ETresSpawnPointSize
{
	ETresSpawnPointSize_Small = 0,
	ETresSpawnPointSize_Big = 1,
	ETresSpawnPointSize_MAX = 2
};

UENUM(BlueprintType)
enum ETresSpawnPointBuildMethod
{
	ETresSpawnPointBuildMethod_Simple = 0,
	ETresSpawnPointBuildMethod_PathFinding = 1,
	ETresSpawnPointBuildMethod_MAX = 2
};

UENUM(BlueprintType)
enum ETresSpawnPointHeightFilterType
{
	ETresSpawnPointHeightFilterType_DoNotCare = 0,
	ETresSpawnPointHeightFilterType_LessThan = 1,
	ETresSpawnPointHeightFilterType_LessEqual = 2,
	ETresSpawnPointHeightFilterType_Equal = 3,
	ETresSpawnPointHeightFilterType_GraterEqual = 4,
	ETresSpawnPointHeightFilterType_GraterThan = 5,
	ETresSpawnPointHeightFilterType_MAX = 6
};

UENUM(BlueprintType)
enum ETresSpawnPointRadiusFilterType
{
	ETresSpawnPointRadiusFilterType_DoNotCare = 0,
	ETresSpawnPointRadiusFilterType_LessThan = 1,
	ETresSpawnPointRadiusFilterType_LessEqual = 2,
	ETresSpawnPointRadiusFilterType_Equal = 3,
	ETresSpawnPointRadiusFilterType_GraterEqual = 4,
	ETresSpawnPointRadiusFilterType_GraterThan = 5,
	ETresSpawnPointRadiusFilterType_MAX = 6
};

UENUM(BlueprintType)
enum ETresSplineMoverMove
{
	Location = 0,
	LocationAndRotation = 1,
	MI_02_BeltConveyor = 2,
	TS_02_UFO = 3,
	TT_Train = 4,
	ETresSplineMoverMove_MAX = 5
};

UENUM(BlueprintType)
enum ETresSplineLast
{
	ETresSplineLast_None = 0,
	ETresSplineLast_End = 1,
	ETresSplineLast_Loop = 2,
	ETresSplineLast_MAX = 3
};

UENUM(BlueprintType)
enum ETresStaticSE
{
	se00000_001 = 0,
	se00000_002 = 1,
	se00000_003 = 2,
	se00000_004 = 3,
	se00000_005 = 4,
	se00000_006 = 5,
	se00000_007 = 6,
	se00000_008 = 7,
	se00000_009 = 8,
	se00000_010 = 9,
	se00000_011 = 10,
	se00000_012 = 11,
	se00000_013 = 12,
	se00000_014 = 13,
	se00000_015 = 14,
	se00000_018 = 15,
	se00000_019 = 16,
	se00000_020 = 17,
	se00000_039 = 18,
	se00000_042 = 19,
	se00000_043 = 20,
	se00000_046 = 21,
	se00000_047 = 22,
	se00000_048 = 23,
	se00000_050 = 24,
	se00000_051 = 25,
	se00000_054 = 26,
	se00000_057 = 27,
	se00000_059 = 28,
	se00000_062 = 29,
	se00000_063 = 30,
	se00000_064 = 31,
	se00000_066 = 32,
	se00000_067 = 33,
	se00000_068 = 34,
	se00000_069 = 35,
	se00000_071 = 36,
	se00000_072 = 37,
	se00000_073 = 38,
	se00000_075 = 39,
	se00001 = 40,
	se00000_076 = 41,
	se00000_077 = 42,
	_se00000_MAX = 43,
	ETresStaticSE_MAX = 44
};

UENUM(BlueprintType)
enum ETresNavLinkSegment_e_ex035
{
	NavLinkSegmentLeft = 0,
	NavLinkSegmentRight = 1,
	ETresNavLinkSegment_e_ex035_MAX = 2
};

UENUM(BlueprintType)
enum ETresNotifyFriendNpc
{
	MoveToActionPointStart = 0,
	MoveToActionPointEnd = 1,
	ETresNotifyFriendNpc_MAX = 2
};

UENUM(BlueprintType)
enum ETresDetectMarkerType
{
	ETresDetectMarkerType_Default = 0,
	LuckyMark = 1,
	GumiConstellation = 2,
	RaPudding = 3,
	NpcSmartphoneReaction = 4,
	PhotoMission = 5,
	ETresDetectMarkerType_MAX = 6
};

UENUM(BlueprintType)
enum ETresPropertyTrackTermnation
{
	RestoreValue = 0,
	SetEndValue = 1,
	KeepValue = 2,
	ETresPropertyTrackTermnation_MAX = 3
};

UENUM(BlueprintType)
enum ETresEffectCustomAreaCode
{
	TRES_EFFECT_CUSTOM_AREA = 0,
	TRES_EFFECT_CUSTOM_AREA01 = 1,
	TRES_EFFECT_CUSTOM_AREA02 = 2,
	TRES_EFFECT_CUSTOM_AREA03 = 3,
	TRES_EFFECT_CUSTOM_AREA04 = 4,
	TRES_EFFECT_CUSTOM_AREA05 = 5,
	TRES_EFFECT_CUSTOM_AREA06 = 6,
	TRES_EFFECT_CUSTOM_AREA07 = 7,
	TRES_EFFECT_CUSTOM_AREA08 = 8,
	TRES_EFFECT_CUSTOM_AREA09 = 9,
	TRES_EFFECT_CUSTOM_AREA10 = 10,
	TRES_EFFECT_CUSTOM_AREA11 = 11,
	TRES_EFFECT_CUSTOM_AREA12 = 12,
	TRES_EFFECT_CUSTOM_AREA13 = 13,
	TRES_EFFECT_CUSTOM_AREA14 = 14,
	TRES_EFFECT_CUSTOM_AREA15 = 15,
	TRES_EFFECT_CUSTOM_AREA16 = 16,
	TRES_EFFECT_CUSTOM_AREA17 = 17,
	TRES_EFFECT_CUSTOM_AREA18 = 18,
	TRES_EFFECT_CUSTOM_AREA19 = 19,
	TRES_EFFECT_CUSTOM_AREA20 = 20,
	TRES_EFFECT_CUSTOM_AREA21 = 21,
	TRES_EFFECT_CUSTOM_AREA22 = 22,
	TRES_EFFECT_CUSTOM_AREA23 = 23,
	TRES_EFFECT_CUSTOM_AREA24 = 24,
	TRES_EFFECT_CUSTOM_AREA25 = 25,
	TRES_EFFECT_CUSTOM_AREA26 = 26,
	TRES_EFFECT_CUSTOM_AREA27 = 27,
	TRES_EFFECT_CUSTOM_AREA28 = 28,
	TRES_EFFECT_CUSTOM_AREA29 = 29,
	TRES_EFFECT_CUSTOM_AREA30 = 30,
	TRES_EFFECT_CUSTOM_AREA_MAX = 31 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEffectAreaCode
{
	TRES_EFFECT_AREA_00 = 0,
	TRES_EFFECT_AREA_01 = 1,
	TRES_EFFECT_AREA_02 = 2,
	TRES_EFFECT_AREA_03 = 3,
	TRES_EFFECT_AREA_04 = 4,
	TRES_EFFECT_AREA_05 = 5,
	TRES_EFFECT_AREA_06 = 6,
	TRES_EFFECT_AREA_07 = 7,
	TRES_EFFECT_AREA_08 = 8,
	TRES_EFFECT_AREA_09 = 9,
	TRES_EFFECT_AREA = 10,
	TRES_EFFECT_AREA01 = 11,
	TRES_EFFECT_AREA02 = 12,
	TRES_EFFECT_AREA03 = 13,
	TRES_EFFECT_AREA04 = 14,
	TRES_EFFECT_AREA05 = 15,
	TRES_EFFECT_AREA06 = 16,
	TRES_EFFECT_AREA07 = 17,
	TRES_EFFECT_AREA08 = 18,
	TRES_EFFECT_AREA09 = 19,
	TRES_EFFECT_AREA10 = 20,
	TRES_EFFECT_AREA11 = 21,
	TRES_EFFECT_AREA12 = 22,
	TRES_EFFECT_AREA13 = 23,
	TRES_EFFECT_AREA14 = 24,
	TRES_EFFECT_AREA15 = 25,
	TRES_EFFECT_AREA16 = 26,
	TRES_EFFECT_AREA17 = 27,
	TRES_EFFECT_AREA18 = 28,
	TRES_EFFECT_AREA19 = 29,
	TRES_EFFECT_AREA20 = 30,
	TRES_EFFECT_AREA_MAX = 31 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresCampPawnAnimTypeID
{
	TCPAID_NORMAL = 0,
	TCPAID_IDLE = 1,
	TCPAID_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresDlcChallengeRank
{
	RANK_NONE = 0,
	RANK = 1,
	RANK01 = 2,
	RANK02 = 3,
	RANK03 = 4,
	RANK04 = 5,
	RANK05 = 6,
	RANK06 = 7,
	RANK07 = 8,
	RANK08 = 9,
	RANK09 = 10,
	RANK10 = 11,
	RANK11 = 12,
	RANK12 = 13,
	ETresDlcChallengeRank_1_Max = 14 UMETA(Hidden),
	ETresDlcChallengeRank_MAX = 15 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresDlcChallengeScoreID
{
	ETresDlcChallengeScoreID_ID01 = 0,
	ETresDlcChallengeScoreID_ID02 = 1,
	ETresDlcChallengeScoreID_ID03 = 2,
	ETresDlcChallengeScoreID_ID04 = 3,
	ETresDlcChallengeScoreID_ID05 = 4,
	ETresDlcChallengeScoreID_ID06 = 5,
	ETresDlcChallengeScoreID_ID07 = 6,
	ETresDlcChallengeScoreID_ID08 = 7,
	ETresDlcChallengeScoreID_ID09 = 8,
	ETresDlcChallengeScoreID_ID10 = 9,
	ETresDlcChallengeScoreID_ID11 = 10,
	ETresDlcChallengeScoreID_ID12 = 11,
	ETresDlcChallengeScoreID_ID13 = 12,
	ETresDlcChallengeScoreID_ID14 = 13,
	ETresDlcChallengeScoreID_ID15 = 14,
	ETresDlcChallengeScoreID_ID16 = 15,
	ETresDlcChallengeScoreID_ID17 = 16,
	ETresDlcChallengeScoreID_ID18 = 17,
	ETresDlcChallengeScoreID_ID19 = 18,
	ETresDlcChallengeScoreID_ID20 = 19,
	ETresDlcChallengeScoreID_ID21 = 20,
	ETresDlcChallengeScoreID_ID22 = 21,
	ETresDlcChallengeScoreID_ID23 = 22,
	ETresDlcChallengeScoreID_ID24 = 23,
	ETresDlcChallengeScoreID_ID25 = 24,
	ETresDlcChallengeScoreID_ID26 = 25,
	ETresDlcChallengeScoreID_ID27 = 26,
	ETresDlcChallengeScoreID_ID28 = 27,
	ETresDlcChallengeScoreID_ID29 = 28,
	ETresDlcChallengeScoreID_ID30 = 29,
	ETresDlcChallengeScoreID_ID31 = 30,
	ETresDlcChallengeScoreID_ID32 = 31,
	ETresDlcChallengeScoreID_ID33 = 32,
	ETresDlcChallengeScoreID_ID34 = 33,
	ETresDlcChallengeScoreID_1_Max = 34,
	ETresDlcChallengeScoreID_MAX = 35
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
	ETresDlcChallengeRecordID_1_Max = 44 UMETA(Hidden),
	ETresDlcChallengeRecordID_MAX = 45 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresDlcChallengeCode
{
	LevelOne = 0,
	GuardZero = 1,
	APLimit = 2,
	HPCurse = 3,
	MPCurse = 4,
	BanCure = 5,
	BanBattleItem = 6,
	BanFormChange = 7,
	BanShootflow = 8,
	BanAttractionFlow = 9,
	BanFriendLink = 10,
	BanDisneyMagic = 11,
	BanMogMedal = 12,
	_CodeMax = 13,
	ETresDlcChallengeCode_1_Max = 14 UMETA(Hidden),
	ETresDlcChallengeCode_MAX = 15 UMETA(Hidden)
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
	ETresDlcCheatAchievementID_1_Max = 10 UMETA(Hidden),
	ETresDlcCheatAchievementID_MAX = 11 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresDlcCheatCode
{
	PowerWorld = 0,
	APFree = 1,
	AutoGuard = 2,
	HPRegenerate = 3,
	MPRegenerate = 4,
	FormRegenerate = 5,
	FocusRegenerate = 6,
	AttractionFever = 7,
	FriendLinkFever = 8,
	LinkExtend = 9,
	RageFever = 10,
	ShopDeflation = 11,
	BattleVictory = 12,
	PerfectCooking = 13,
	GumiCheat = 14,
	ETresDlcCheatCode_CodeMax = 15,
	ETresDlcCheatCode_1_Max = 16 UMETA(Hidden),
	ETresDlcCheatCode_MAX = 17 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresFadeTrack_TheaterMode
{
	ETresFadeTrack_TheaterMode_Disable = 0,
	ETresFadeTrack_TheaterMode_Only = 1,
	ETresFadeTrack_TheaterMode_Regardless = 2,
	ETresFadeTrack_TheaterMode_MAX = 3
};

UENUM(BlueprintType)
enum ETresPauseMenuType
{
	ETresPauseMenuType_Normal = 0,
	ETresPauseMenuType_EventSkip = 1,
	ETresPauseMenuType_EventSkipButDisallow = 2,
	ETresPauseMenuType_MiniGame = 3,
	ETresPauseMenuType_NoRetryMiniGame = 4,
	ETresPauseMenuType_Tutorial = 5,
	ETresPauseMenuType_MAX = 6
};

UENUM(BlueprintType)
enum ETresGameHelpCategory
{
	ETresGameHelpCategory_None = 0,
	GameSystem = 1,
	PlayerAction = 2,
	Battle = 3,
	World = 4,
	LSI = 5,
	GumiHelp = 6,
	GumiEditHelp = 7,
	ReMind = 8,
	ETresGameHelpCategory_1_Max = 9,
	ETresGameHelpCategory_MAX = 10
};

UENUM(BlueprintType)
enum ETresLevelentityGroup_Selector
{
	ETresLevelentityGroup_Selector_None = 0,
	ETresLevelentityGroup_Selector_MAX = 1
};

UENUM(BlueprintType)
enum ETresLevelEntityDisappearMode
{
	ETresLevelEntityDisappearMode_Immediate = 0,
	ETresLevelEntityDisappearMode_Perform1 = 1,
	ETresLevelEntityDisappearMode_Perform2 = 2,
	ETresLevelEntityDisappearMode_Perform3 = 3,
	ETresLevelEntityDisappearMode_RunAway = 4,
	ETresLevelEntityDisappearMode_Force = 5,
	ETresLevelEntityDisappearMode_MAX = 6
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
	ETresLevelEntityAppearMode_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemySetVanishMode
{
	ETresEnemySetVanishMode_Immediate = 0,
	ETresEnemySetVanishMode_Perform1 = 1,
	ETresEnemySetVanishMode_Perform2 = 2,
	ETresEnemySetVanishMode_Perform3 = 3,
	ETresEnemySetVanishMode_MAX = 4
};

UENUM(BlueprintType)
enum ETresEnemySetAppearMode
{
	ETresEnemySetAppearMode_Immediate = 0,
	ETresEnemySetAppearMode_Perform1 = 1,
	ETresEnemySetAppearMode_Perform2 = 2,
	ETresEnemySetAppearMode_Perform3 = 3,
	ETresEnemySetAppearMode_Perform4 = 4,
	ETresEnemySetAppearMode_Special1 = 5,
	ETresEnemySetAppearMode_Special2 = 6,
	ETresEnemySetAppearMode_Special3 = 7,
	ETresEnemySetAppearMode_MAX = 8
};

UENUM(BlueprintType)
enum ETresFNpcAIAttackDefType
{
	TRES_FNPC_AI_ATK_DEF_NONE = 0,
	TRES_FNPC_AI_ATK_DEF_NORMAL_ATTACK = 1,
	TRES_FNPC_AI_ATK_DEF_ABILITY_ATTACK = 2,
	TRES_FNPC_AI_ATK_DEF_ABILITY_CURE = 3,
	TRES_FNPC_AI_ATK_DEF_ABILITY_SUPPORT = 4,
	TRES_FNPC_AI_ATK_DEF_MAX = 5
};

UENUM(BlueprintType)
enum ETresFNpcAIModeLevelSetting
{
	TRES_FNPC_AI_MODE_LV_SET_FOLLOW = 0,
	TRES_FNPC_AI_MODE_LV_SET_NPC_WAIT = 1,
	TRES_FNPC_AI_MODE_LV_SET_NPC_TALK = 2,
	TRES_FNPC_AI_MODE_LV_SET_NPC_FREE_WALK = 3,
	TRES_FNPC_AI_MODE_LV_SET_NPC_FREE_WALK_TALK = 4,
	TRES_FNPC_AI_MODE_LV_SET_MAX = 5
};

UENUM(BlueprintType)
enum ETresFNpcAIStyle_Cure
{
	TRES_FNPC_AI_STYLE_CURE_OFTEN = 0,
	TRES_FNPC_AI_STYLE_CURE_PINCH = 1,
	TRES_FNPC_AI_STYLE_CURE_ALWAYS = 2,
	TRES_FNPC_AI_STYLE_CURE_MAX = 3
};

UENUM(BlueprintType)
enum ETresFNpcAIStyle_Ability
{
	TRES_FNPC_AI_STYLE_ABILITY_FREE = 0,
	TRES_FNPC_AI_STYLE_ABILITY_BALANCE = 1,
	TRES_FNPC_AI_STYLE_ABILITY_LESS = 2,
	TRES_FNPC_AI_STYLE_ABILITY_MAX = 3
};

UENUM(BlueprintType)
enum ETresFNpcAIStyle_Battle
{
	TRES_FNPC_AI_STYLE_BATTLE_TOGETHER = 0,
	TRES_FNPC_AI_STYLE_BATTLE_FREE = 1,
	TRES_FNPC_AI_STYLE_BATTLE_SUPPORT = 2,
	TRES_FNPC_AI_STYLE_BATTLE_FOCUS = 3,
	TRES_FNPC_AI_STYLE_BATTLE_MAX = 4
};

UENUM(BlueprintType)
enum ETresCmnCureEffectGrpID
{
	TRES_CURE_GRP_NONE = 0,
	TRES_CURE_GRP_SAVEPOINT = 1,
	TRES_CURE_GRP_PRIZE = 2,
	TRES_CURE_GRP_POTION = 3,
	TRES_CURE_GRP_HIGHPOTION = 4,
	TRES_CURE_GRP_ETHER = 5,
	TRES_CURE_GRP_ELIXIR = 6,
	TRES_CURE_GRP_CURE = 7,
	TRES_CURE_GRP_CURA = 8,
	TRES_CURE_GRP_CURAGA = 9,
	TRES_CURE_GRP_BONUS_CURE = 10,
	TRES_CURE_GRP_BONUS_CURA = 11,
	TRES_CURE_GRP_BONUS_CURAGA = 12,
	TRES_CURE_GRP_DRAIN = 13,
	D_CURE = 14,
	BONUS_D_CURE = 15,
	CURE_SPRAY = 16,
	BONUS_CURE_SPRAY = 17,
	TRES_CURE_GRP_HIGHETHER = 18,
	TRES_CURE_GRP_FOCUSSUPPLY = 19,
	TRES_CURE_GRP_HIGHFOCUSSUPPLY = 20,
	TRES_CURE_GRP_ALLCURE = 21,
	TRES_CURE_GRP_FOCUSASPIR = 22,
	TRES_CURE_GRP_MAX = 23,
	ETresCmnCureEffectGrpID_MAX = 24
};

UENUM(BlueprintType)
enum ETresPawnCmnChargeEffectCategory
{
	TRES_CMN_CEC_WEAPON = 0,
	TRES_CMN_CEC_STYLECHANGE = 1,
	TRES_CMN_CEC_MAX = 2
};

UENUM(BlueprintType)
enum ETresPawnCmnEffectID
{
	TRES_PAWN_CMN_EFFECT_FREEFLOW = 0,
	TRES_PAWN_CMN_EFFECT_MAGIC_CAST = 1,
	TRES_PAWN_CMN_EFFECT_BAD_STATES = 2,
	TRES_PAWN_CMN_EFFECT_APPEAR = 3,
	TRES_PAWN_CMN_EFFECT_CURE = 4,
	TRES_PAWN_CMN_EFFECT_MAX = 5
};

UENUM(BlueprintType)
enum ETresCharInputType
{
	TRES_CHAR_INPUT_AI = 0,
	TRES_CHAR_INPUT_PAD = 1,
	TRES_CHAR_INPUT_DEBUG_PAD = 2,
	TRES_CHAR_INPUT_DONOTING = 3,
	TRES_CHAR_INPUT_OTHER = 4,
	TRES_CHAR_INPUT_MAX = 5
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
	ETresCinematicPlayerStyleType_1_MAX = 6 UMETA(Hidden),
	ETresCinematicPlayerStyleType_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresCinematicPlayerStateType
{
	TCPST_NONE = 0 UMETA(DisplayName = "None"),
	TCPST_TPVIEW = 1 UMETA(DisplayName = "TP View"),
	TCPST_CLEAR = 2 UMETA(DisplayName = "Clear"),
	TCPST_FORCE_CLEAR = 3 UMETA(DisplayName = "Force Clear"),
	_TCPST_MAX = 4 UMETA(Hidden),
	ETresCinematicPlayerStateType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresCinematicLayerChannel
{
	TCLC_EVENT1 = 0,
	TCLC_EVENT2 = 1,
	TCLC_EVENT3 = 2,
	TCLC_EVENT4 = 3,
	TCLC_LEVEL1 = 4,
	TCLC_LEVEL2 = 5,
	TCLC_LEVEL3 = 6,
	TCLC_LEVEL4 = 7,
	_TCLC_MAX = 8,
	ETresCinematicLayerChannel_MAX = 9
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
	CH_MAX = 16 UMETA(Hidden),
	ETresObjTypeProcChannel_MAX = 17 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresBadStatCloudWeatherType
{
	TRES_BS_WEATHER_TYPE_NONE = 0 UMETA(DisplayName = "None"),
	TRES_BS_WEATHER_TYPE_CLOUD = 1 UMETA(DisplayName = "Cloud"),
	TRES_BS_WEATHER_TYPE_LIGHT_RAIN = 2 UMETA(DisplayName = "Light Rain"),
	TRES_BS_WEATHER_TYPE_HEAVY_RAIN = 3 UMETA(DisplayName = "Heavy Rain"),
	TRES_BS_WEATHER_TYPE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresAtkCollReflectReaction : uint8
{
	TRES_ATK_RR_DEFAULT = 0 UMETA(DisplayName = "Default"),
	TRES_ATK_RR_STAGGER = 1 UMETA(DisplayName = "Stagger"),
	TRES_ATK_RS_GUARD = 2 UMETA(DisplayName = "Guard"),
	TRES_ATK_RR_NOREACTION = 3 UMETA(DisplayName = "No Reaction"),
	_TRES_ATK_RR_MAX = 4 UMETA(Hidden),
	ETresAtkCollReflectReaction_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresIkCollision
{
	ETresIkCollision_SPHERE = 0,
	ETresIkCollision_CAPSULE = 1,
	ETresIkCollision_BOX = 2,
	ETresIkCollision_1_MAX = 3 UMETA(Hidden),
	ETresIkCollision_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresAtkCollMapHitType
{
	NOHIT = 0,
	PHYSOBJ_NOHIT = 1,
	HITMAP = 2,
	IGNORE_GROUND = 3,
	ETresAtkCollMapHitType_1_MAX = 4,
	ETresAtkCollMapHitType_MAX = 5
};

UENUM(BlueprintType)
enum ETresAtkCollLocationAttachType
{
	ETresAtkCollLocationAttachType_NORMAL = 0,
	ETresAtkCollLocationAttachType_OWNER_ATTACHED_MESH = 1,
	ETresAtkCollLocationAttachType_WORLD = 2,
	ETresAtkCollLocationAttachType_MAX = 3
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
	ETresCollision_1_MAX = 9 UMETA(Hidden),
	ETresCollision_MAX = 10 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresLockonPriority
{
	LOW = 0,
	HIGH = 1,
	ETresLockonPriority_MAX = 2
};

UENUM(BlueprintType)
enum ETresReactorCommandID
{
	TRES_RCID_UNKNOWN = 0,
	TRES_RCID_SAVE = 1,
	TRES_RCID_TALK = 2,
	TRES_RCID_OPEN = 3,
	TRES_RCID_CHECK = 4,
	TRES_RCID_SHOP = 5,
	TRES_RCID_RESCUE = 6,
	TRES_RCID_VEHICLE = 7,
	TRES_RCID_SHIP = 8,
	TRES_RCID_PLANE = 9,
	TRES_RCID_GETOFF = 10,
	TRES_RCID_GIGAS_ELECTRO = 11,
	TRES_RCID_RAILSLIDE = 12,
	TRES_RCID_PLANEBOSS = 13,
	TRES_RCID_ENEMYSHIP = 14,
	TRES_RCID_TRICK = 15,
	TRES_RCID_WATERPLAY = 16,
	TRES_RCID_EXTENDHAND = 17,
	TRES_RCID_PUDDING = 18,
	TRES_RCID_MAILINGTO = 19,
	TRES_RCID_ANS_ENDURE = 20,
	TRES_RCID_ANS_CHALLENGE = 21,
	TRES_RCID_ANS_MIXING = 22,
	TRES_RCID_ANS_BUMPING = 23,
	TRES_RCID_ANS_BELIEVE = 24,
	TRES_RCID_ANS_ACCEPT = 25,
	TRES_RCID_SWING = 26,
	TRES_RCID_ANS_USUAL = 27,
	TRES_RCID_ANS_EASY = 28,
	TRES_RCID_ANS_CHALLENGING = 29,
	TRES_RCID_CARDDRAW = 30,
	_TRES_RCID_MAX = 31,
	ETresReactorCommandID_MAX = 32
};

UENUM(BlueprintType)
enum ETresAttackerPosition
{
	ETresAttackerPosition_Front = 0,
	ETresAttackerPosition_Back = 1,
	ETresAttackerPosition_Right = 2,
	ETresAttackerPosition_Left = 3,
	ETresAttackerPosition_1_Max = 4,
	ETresAttackerPosition_MAX = 5
};

UENUM(BlueprintType)
enum ETresGrass
{
	ETresGrass_RADIAL = 0 UMETA(DisplayName = "Radial"),
	ETresGrass_CLOCKWISE = 1 UMETA(DisplayName = "Clockwise"),
	ETresGrass_CCLOCKWISE = 2 UMETA(DisplayName = "Counter Clockwise"),
	ETresGrass_ETresGrass_1_MAX = 3 UMETA(Hidden),
	ETresGrass_ETresGrass_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresScalabilityType
{
	SCALABILITY_TYPE_ENGINE = 0,
	SCALABILITY_TYPE_GAME = 1,
	SCALABILITY_TYPE_CUT_SCENE = 2,
	SCALABILITY_TYPE_MAX = 3
};

UENUM(BlueprintType)
enum ETresBoneSpacesType
{
	TBST_WorldSpace = 0 UMETA(DisplayName = "World Space"),
	TBST_LocalSpace = 1 UMETA(DisplayName = "Local Space"),
	TBST_ComponentSpace = 2 UMETA(DisplayName = "Component Space"),
	TBST_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresSaveLevel
{
	ETresSaveLevel_Visible = 0,
	ETresSaveLevel_Load = 1,
	ETresSaveLevel_1_Max = 2,
	ETresSaveLevel_MAX = 3
};

UENUM(BlueprintType)
enum ETresClimbingAnimPose
{
	TRES_CLIMBINGANIMPOSE_NONE = 0,
	TRES_CLIMBINGANIMPOSE_LOW = 1,
	TRES_CLIMBINGANIMPOSE_MIDDLE = 2,
	TRES_CLIMBINGANIMPOSE_HIGH = 3,
	TRES_CLIMBINGANIMPOSE_MAX = 4
};

UENUM(BlueprintType)
enum ETresLandAnimPose
{
	TRES_LANDANIMPOSE_NONE = 0,
	TRES_LANDANIMPOSE_LAND = 1,
	TRES_LANDANIMPOSE_LIGHT = 2,
	TRES_LANDANIMPOSE_LIGHT_R = 3,
	TRES_LANDANIMPOSE_LIGHT_L = 4,
	TRES_LANDANIMPOSE_MAX = 5
};

UENUM(BlueprintType)
enum ETresLastAnimPose
{
	TRES_LASTANIMPOSE_NORMAL = 0,
	TRES_LASTANIMPOSE_BATTLE = 1,
	TRES_LASTANIMPOSE_MAX = 2
};

UENUM(BlueprintType)
enum ETresCharRestrictActionID
{
	ETresCharRestrictActionID_ATTACK = 0,
	ETresCharRestrictActionID_MAGIC = 1,
	ETresCharRestrictActionID_ITEM = 2,
	ETresCharRestrictActionID_LINK = 3,
	ETresCharRestrictActionID_FRIENDLINK = 4,
	ETresCharRestrictActionID_ATTRACTIONFLOW = 5,
	ETresCharRestrictActionID_STYLE = 6,
	ETresCharRestrictActionID_SITUATION = 7,
	ETresCharRestrictActionID_GUARD = 8,
	ETresCharRestrictActionID_JUMP = 9,
	ETresCharRestrictActionID_SHOOTLOCK = 10,
	ETresCharRestrictActionID_RUN = 11,
	ETresCharRestrictActionID_DIVEFALL = 12,
	ETresCharRestrictActionID_DEEPDIVING = 13,
	ETresCharRestrictActionID_CANCELSITUATION = 14,
	ETresCharRestrictActionID_ALWAYS_USESPAWNPOINT = 15,
	ETresCharRestrictActionID_PHOTO_MODE = 16,
	ETresCharRestrictActionID_1_MAX = 17,
	ETresCharRestrictActionID_MAX = 18
};

UENUM(BlueprintType)
enum ETresCoverIdlingDirID
{
	TRES_CID_ID_NONE = 0,
	TRES_CID_ID_LEFT = 1,
	TRES_CID_ID_RIGHT = 2,
	_TRES_CID_ID_MAX = 3,
	ETresCoverIdlingDirID_MAX = 4
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
	TRES_DIR_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresRiskDodgeType
{
	TRDT_NONE = 0,
	TRDT_UNDERSLIDE = 1,
	TRDT_OVERSLIDE = 2,
	TRDT_SLIDETURN = 3,
	TRDT_WARP = 4,
	TRDT_MAX = 5
};

UENUM(BlueprintType)
enum ETresHopMotionType
{
	THIM_NONE = 0,
	THIM_HOPPING = 1,
	THIM_SURFING = 2,
	THIM_NORMAL = 3,
	THIM_BALANCE_BREAK = 4,
	THIM_ROLLING = 5,
	THIM_TRIPPING = 6,
	THIM_DANGLE = 7,
	THIM_HASSOU_JUMP = 8,
	THIM_HASSOU_JUMP_HIGH = 9,
	THIM_HASSOU_JUMP_FLIGHT = 10,
	THIM_MAX = 11
};

UENUM(BlueprintType)
enum ETresPlayerHoukouModes
{
	TPH_FRONT = 0,
	TPH_BACK = 1,
	TPH_RIGHT = 2,
	TPH_LEFT = 3,
	TPH_MAX = 4
};

UENUM(BlueprintType)
enum ETresCharEquipPart
{
	ETresCharEquipPart_UNKNOWN = 0,
	ETresCharEquipPart_RIGHT_HAND = 1,
	ETresCharEquipPart_LEFT_HAND = 2,
	ETresCharEquipPart_BOTH_HAND = 3,
	ETresCharEquipPart_RIGHT_LEG = 4,
	ETresCharEquipPart_LEFT_LEG = 5,
	ETresCharEquipPart_BOTH_LEG = 6,
	ETresCharEquipPart_ALL = 7,
	ETresCharEquipPart_1_MAX = 8,
	ETresCharEquipPart_MAX = 9
};

UENUM(BlueprintType)
enum ETresWeaponGrowLvl
{
	TRES_WEAPON_GROW_LVL01 = 0,
	TRES_WEAPON_GROW_LVL02 = 1,
	TRES_WEAPON_GROW_LVL03 = 2,
	TRES_WEAPON_GROW_MAX = 3
};

UENUM(BlueprintType)
enum ETresWeaponForm
{
	TRES_WEAPON_FORM_NONE = 0,
	TRES_WEAPON_FORM_01 = 1,
	TRES_WEAPON_FORM_02 = 2,
	TRES_WEAPON_FORM_03 = 3,
	TRES_WEAPON_FORM_04 = 4,
	TRES_WEAPON_FORM_05 = 5,
	TRES_WEAPON_FORM_06 = 6,
	TRES_WEAPON_FORM_07 = 7,
	TRES_WEAPON_FORM_08 = 8,
	TRES_WEAPON_FORM_09 = 9,
	TRES_WEAPON_FORM_0A = 10,
	TRES_WEAPON_FORM_0B = 11,
	TRES_WEAPON_FORM_0C = 12,
	TRES_WEAPON_FORM_0D = 13,
	TRES_WEAPON_FORM_0E = 14,
	TRES_WEAPON_FORM_0F = 15,
	TRES_WEAPON_FORM = 16,
	TRES_WEAPON_FORM01 = 17,
	TRES_WEAPON_FORM02 = 18,
	TRES_WEAPON_FORM03 = 19,
	TRES_WEAPON_FORM04 = 20,
	TRES_WEAPON_FORM05 = 21,
	TRES_WEAPON_FORM06 = 22,
	TRES_WEAPON_FORM07 = 23,
	TRES_WEAPON_FORM08 = 24,
	ETresWeaponForm_1_TRES_WEAPON_FORM_MAX = 25 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresDamageLeaveOneType
{
	ETresDamageLeaveOneType_NORMAL = 0,
	ETresDamageLeaveOneType_ANYONE = 1,
	ETresDamageLeaveOneType_PLAYER_ONLY = 2,
	ETresDamageLeaveOneType_PLAYERTEAM_ONLY = 3,
	ETresDamageLeaveOneType_ENEMY_ONLY = 4,
	ETresDamageLeaveOneType_1_MAX = 5 UMETA(Hidden),
	ETresDamageLeaveOneType_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresDamageCalcType
{
	ETresDamageCalcType_NORMAL = 0,
	ETresDamageCalcType_RATE_MAXHP = 1,
	ETresDamageCalcType_RATE_HP = 2,
	ETresDamageCalcType_NO_OXYGEN = 3,
	ETresDamageCalcType_1_MAX = 4 UMETA(Hidden),
	ETresDamageCalcType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresMapJumpFadeKind
{
	MAPJUMP_FADE_KIND_NONE = 0 UMETA(DisplayName = "None"),
	MAPJUMP_FADE_KIND_FADEOUT = 1 UMETA(DisplayName = "Fade Out"),
	MAPJUMP_FADE_KIND_WHITEOUT = 2 UMETA(DisplayName = "White Out"),
	MAPJUMP_FADE_KIND_WIPEOUT = 3 UMETA(DisplayName = "Wipe Out"),
	MAPJUMP_FADE_KIND_MAX = 4 UMETA(Hidden)
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
	TRES_WAID_AREA_MAX = 16 UMETA(Hidden)
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
	TRES_WCID_MAX = 32 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGameOverMenuType
{
	ETresGameOverMenuType_NORMAL = 0 UMETA(DisplayName = "Normal"),
	ETresGameOverMenuType_BOSSBATTLE = 1 UMETA(DisplayName = "Boss Battle"),
	ETresGameOverMenuType_MISSION_FAILED = 2 UMETA(DisplayName = "Mission Failed"),
	ETresGameOverMenuType_MAX = 3 UMETA(Hidden)
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
	ETresGameMiniGameType_MAX = 19 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGameOverKind
{
	GAMEOVER_KIND_NORMAL = 0 UMETA(DisplayName = "Normal"),
	GAMEOVER_KIND_MISSION_FAILED = 1 UMETA(DisplayName = "Mission Failed"),
	GAMEOVER_KIND_GUMISHIP = 2 UMETA(DisplayName = "Gumiship"),
	GAMEOVER_KIND_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresPlayerAbilityGrowthType
{
	ETresPlayerAbilityGrowthType_TYPE_A = 0 UMETA(DisplayName = "Type A"),
	ETresPlayerAbilityGrowthType_TYPE_B = 1 UMETA(DisplayName = "Type B"),
	ETresPlayerAbilityGrowthType_TYPE_C = 2 UMETA(DisplayName = "Type C"),
	ETresPlayerAbilityGrowthType_1_MAX = 3 UMETA(Hidden),
	ETresPlayerAbilityGrowthType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresPlayerGrowthType
{
	ETresPlayerGrowthType_POWER = 0 UMETA(DisplayName = "Power"),
	ETresPlayerGrowthType_MAGIC = 1 UMETA(DisplayName = "Magic"),
	ETresPlayerGrowthType_DEFENSE = 2 UMETA(DisplayName = "Defense"),
	ETresPlayerGrowthType_1_MAX = 3 UMETA(Hidden),
	ETresPlayerGrowthType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGameLevelID
{
	TRES_GAME_LVID_BEGINNER = 0 UMETA(DisplayName = "Beginner"),
	TRES_GAME_LVID_STANDARD = 1 UMETA(DisplayName = "Standard"),
	TRES_GAME_LVID_PROUD = 2 UMETA(DisplayName = "Proud"),
	TRES_GAME_LVID_CRITICAL = 3 UMETA(DisplayName = "Critical"),
	TRES_GAME_LVID_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIMainCommandTitleKind
{
	ETresUIMainCommandTitleKind_None = 0,
	ETresUIMainCommandTitleKind_Logo = 1,
	ETresUIMainCommandTitleKind_Button = 2,
	ETresUIMainCommandTitleKind_ShootLock = 3,
	ETresUIMainCommandTitleKind_Operation = 4,
	ETresUIMainCommandTitleKind_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUICheatCategory
{
	ETresUICheatCategory_None = 0,
	ETresUICheatCategory_Battle = 1,
	ETresUICheatCategory_Support = 2,
	ETresUICheatCategory_1_Max = 3 UMETA(Hidden),
	ETresUICheatCategory_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUISlideShowDataType
{
	ETresUISlideShowDataType_Simple = 0,
	ETresUISlideShowDataType_Gorgeous = 1,
	ETresUISlideShowDataType_1_Max = 2 UMETA(Hidden),
	ETresUISlideShowDataType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EActionCommandSearchMethod
{
	Latest = 0,
	Oldest = 1,
	EActionCommandSearchMethod_MAX = 2
};

UENUM(BlueprintType)
enum EHudCommandActionCommandType
{
	ACTION_COMMAND_TYPE_HATENA = 0,
	ACTION_COMMAND_TYPE_WEP = 1,
	ACTION_COMMAND_TYPE_ATF = 2,
	ACTION_COMMAND_TYPE_DMAGIC = 3,
	ACTION_COMMAND_TYPE_FRIEND = 4,
	ACTION_COMMAND_TYPE_LINK = 5,
	ACTION_COMMAND_TYPE_MAX = 6,
	ACTION_COMMAND_TYPE_STYLE_POINT_GAUGE = 7
};

UENUM(BlueprintType)
enum ETresCockpitActionSelectCategory
{
	TCASC_NONE = 0,
	TCASC_COMMAND = 1,
	TCASC_MISSION = 2,
	TCASC_STYLE_POINT_GAUGE = 3,
	TCASC_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresCockpitCmdCategory
{
	TCCC_NONE = 0,
	TCCC_BATTLE = 1,
	TCCC_ACTION = 2,
	TCCC_CHANGE = 3,
	TCCC_CHANGE_FINISH = 4,
	TCCC_AFLOW = 5,
	TCCC_AFLOW_FINISH = 6,
	TCCC_FRIEND = 7,
	TCCC_SFLOW = 8,
	TCCC_STYLE_POINT_GAUGE = 9,
	TCCC_DMAGIC = 10,
	TCCC_VEHICLE = 11,
	TCCC_SHIP = 12,
	TCCC_EVENT = 13,
	TCCC_EVENT2 = 14,
	TCCC_EVENT3 = 15,
	TCCC_RAILSP = 16,
	TCCC_OTHER = 17,
	TCCC_MAX = 18 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIMessageBGColor
{
	MESSAGE_BG_COLOR_BLACK = 0 UMETA(DisplayName = "Black"),
	MESSAGE_BG_COLOR_RED = 1 UMETA(DisplayName = "Red"),
	MESSAGE_BG_COLOR_BLUE = 2 UMETA(DisplayName = "Blue"),
	MESSAGE_BG_COLOR_DEBUG = 3 UMETA(DisplayName = "Debug"),
	MESSAGE_BG_COLOR_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIMessageTitleType
{
	MESSAGE_TITLE_TYPE_NONE = 0 UMETA(DisplayName = "None"),
	MESSAGE_TITLE_TYPE_INFORMATION = 1 UMETA(DisplayName = "Information"),
	MESSAGE_TITLE_TYPE_QUESTION = 2 UMETA(DisplayName = "Question"),
	MESSAGE_TITLE_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUICommonAction
{
	TUCA_Open = 0 UMETA(DisplayName = "Open"),
	TUCA_Close = 1 UMETA(DisplayName = "Close"),
	TUCA_Decide = 2 UMETA(DisplayName = "Decide"),
	TUCA_DecideClose = 3 UMETA(DisplayName = "Decide Close"),
	TUCA_Open2 = 4 UMETA(DisplayName = "Open 2"),
	TUCA_DecideClose2 = 5 UMETA(DisplayName = "Decide Close 2"),
	TUCA_MAX = 6 UMETA(Hidden)
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
	TUPBT_MAX = 38 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIFaceUniqueID
{
	TRES_FACE_UID_UNKNOWN = 0 UMETA(DisplayName = "Unknown"),
	TRES_FACE_UID_LEON = 1 UMETA(DisplayName = "Leon"),
	TRES_FACE_UID_AERITH = 2 UMETA(DisplayName = "Aerith"),
	TRES_FACE_UID_YUFFIE = 3 UMETA(DisplayName = "Yuffie"),
	TRES_FACE_UID_CID = 4 UMETA(DisplayName = "CID"),
	TRES_FACE_UID_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIDataVersion
{
	ETresUIDataVersion_None = 0 UMETA(DisplayName = "None"),
	ETresUIDataVersion_DLC = 1 UMETA(DisplayName = "DLC"),
	ETresUIDataVersion_1_Max = 2 UMETA(Hidden),
	ETresUIDataVersion_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIDialogColor
{
	ETresUIDialogColor_World = 0 UMETA(DisplayName = "World"),
	ETresUIDialogColor_DH = 1 UMETA(DisplayName = "DH"),
	ETresUIDialogColor_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIGameDataInstallMessageType
{
	ETresUIGameDataInstallMessageType_Block = 0 UMETA(DisplayName = "Block"),
	ETresUIGameDataInstallMessageType_Wait = 1 UMETA(DisplayName = "Wait"),
	ETresUIGameDataInstallMessageType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIDictionaryEnemyCategory
{
	ETresUIDictionaryEnemyCategory_Heartless = 0 UMETA(DisplayName = "Heartless"),
	ETresUIDictionaryEnemyCategory_Nobody = 1 UMETA(DisplayName = "Nobody"),
	ETresUIDictionaryEnemyCategory_Unversed = 2 UMETA(DisplayName = "Unversed"),
	ETresUIDictionaryEnemyCategory_Other = 3 UMETA(DisplayName = "Other"),
	ETresUIDictionaryEnemyCategory_1_Max = 4 UMETA(Hidden),
	ETresUIDictionaryEnemyCategory_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIValueCompareType
{
	ETresUIValueCompareType_GreaterEq = 0 UMETA(DisplayName = "Greater EQ"),
	ETresUIValueCompareType_Grater = 1 UMETA(DisplayName = "Grater"),
	ETresUIValueCompareType_LessEq = 2 UMETA(DisplayName = "Less EQ"),
	ETresUIValueCompareType_Less = 3 UMETA(DisplayName = "Less"),
	ETresUIValueCompareType_Equal = 4 UMETA(DisplayName = "Equal"),
	ETresUIValueCompareType_NotEqual = 5 UMETA(DisplayName = "Not Equal"),
	ETresUIValueCompareType_None = 6 UMETA(DisplayName = "None"),
	ETresUIValueCompareType_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUICharaID
{
	ETresUICharaID_SORA = 0 UMETA(DisplayName = "Sora"),
	ETresUICharaID_RIKU = 1 UMETA(DisplayName = "Riku"),
	ETresUICharaID_KAIRI = 2 UMETA(DisplayName = "Kairi"),
	ETresUICharaID_MICKEY = 3 UMETA(DisplayName = "Mickey"),
	ETresUICharaID_DONALD = 4 UMETA(DisplayName = "Donald"),
	ETresUICharaID_GOOFY = 5 UMETA(DisplayName = "Goofy"),
	ETresUICharaID_TERRA = 6 UMETA(DisplayName = "Terra"),
	ETresUICharaID_VENTUS = 7 UMETA(DisplayName = "Ventus"),
	ETresUICharaID_AQUA = 8 UMETA(DisplayName = "Aqua"),
	ETresUICharaID_ROXAS = 9 UMETA(DisplayName = "Roxas"),
	ETresUICharaID_LEA = 10 UMETA(DisplayName = "Lea"),
	ETresUICharaID_XION = 11 UMETA(DisplayName = "Xion"),
	ETresUICharaID_JACK_SPARROW = 12 UMETA(DisplayName = "Jack Sparrow"),
	ETresUICharaID_WOODY = 13 UMETA(DisplayName = "Woody"),
	ETresUICharaID_BUZZ = 14 UMETA(DisplayName = "Buzz"),
	ETresUICharaID_HERCULES = 15 UMETA(DisplayName = "Hercules"),
	ETresUICharaID_RAPUNZEL = 16 UMETA(DisplayName = "Rapunzel"),
	ETresUICharaID_FLYNN = 17 UMETA(DisplayName = "Flynn"),
	ETresUICharaID_SULLEY = 18 UMETA(DisplayName = "Sulley"),
	ETresUICharaID_MIKE = 19 UMETA(DisplayName = "Mike"),
	ETresUICharaID_BOO = 20 UMETA(DisplayName = "Boo"),
	ETresUICharaID_MARSHMALLOW = 21 UMETA(DisplayName = "Marshmallow"),
	ETresUICharaID_BAYMAX = 22 UMETA(DisplayName = "Baymax"),
	ETresUICharaID_IENZO = 23 UMETA(DisplayName = "Ienzo"),
	ETresUICharaID_PENCE = 24 UMETA(DisplayName = "Pence"),
	ETresUICharaID_UNKNOWN = 25 UMETA(DisplayName = "Unknown"),
	ETresUICharaID_MAX = 26 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUILSIScoreType
{
	ETresUILSIScoreType_Score = 0 UMETA(DisplayName = "Score"),
	ETresUILSIScoreType_Stage = 1 UMETA(DisplayName = "Stage"),
	ETresUILSIScoreType_Win = 2 UMETA(DisplayName = "Win"),
	ETresUILSIScoreType_BarnyardSports = 3 UMETA(DisplayName = "Barnyard Sports"),
	ETresUILSIScoreType_TheMusicalFarmer = 4 UMETA(DisplayName = "The Musical Farmer"),
	ETresUILSIScoreType_HowToPlayGolf = 5 UMETA(DisplayName = "How to Play Golf"),
	ETresUILSIScoreType_HowToPlayBaseball = 6 UMETA(DisplayName = "How to Play Baseball"),
	ETresUILSIScoreType_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIShopType
{
	ETresUIShopType_Normal = 0 UMETA(DisplayName = "Normal"),
	ETresUIShopType_Gummi_Huey = 1 UMETA(DisplayName = "Gummi Huey"),
	ETresUIShopType_Gummi_Dewey = 2 UMETA(DisplayName = "Gummi Dewey"),
	ETresUIShopType_Gummi_Louie = 3 UMETA(DisplayName = "Gummi Louie"),
	ETresUIShopType_1_Max = 4 UMETA(Hidden),
	ETresUIShopType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIActorAnimType
{
	ETresUIActorAnimType_None = 0,
	ETresUIActorAnimType_Idle = 1,
	ETresUIActorAnimType_IdleBreak1 = 2,
	ETresUIActorAnimType_IdleBreak2 = 3,
	ETresUIActorAnimType_1_Max = 4 UMETA(Hidden),
	ETresUIActorAnimType_MAX = 5 UMETA(Hidden)
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
	ETresUIGradeTextValue_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUICinematicCockpitID
{
	ETresUICinematicCockpitID_None = 0 UMETA(DisplayName = "None"),
	ETresUICinematicCockpitID_HudOlaf = 1 UMETA(DisplayName = "HUD Olaf"),
	ETresUICinematicCockpitID_HudLeft = 2 UMETA(DisplayName = "HUD Left"),
	ETresUICinematicCockpitID_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIHudPuddingCountDown
{
	ETresUIHudPuddingCountDown_Three = 0 UMETA(DisplayName = "Three"),
	ETresUIHudPuddingCountDown_Two = 1 UMETA(DisplayName = "Two"),
	ETresUIHudPuddingCountDown_One = 2 UMETA(DisplayName = "One"),
	ETresUIHudPuddingCountDown_Start = 3 UMETA(DisplayName = "Start"),
	ETresUIHudPuddingCountDown_Finish = 4 UMETA(DisplayName = "Finish"),
	ETresUIHudPuddingCountDown_1_MAX = 5 UMETA(Hidden),
	ETresUIHudPuddingCountDown_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIHudBaymaxHero
{
	ETresUIHudBaymaxHero_Lemon = 0 UMETA(DisplayName = "Lemon"),
	ETresUIHudBaymaxHero_Tomago = 1 UMETA(DisplayName = "Tomago"),
	ETresUIHudBaymaxHero_Wasabi = 2 UMETA(DisplayName = "Wasabi"),
	ETresUIHudBaymaxHero_Fred = 3 UMETA(DisplayName = "Fred"),
	ETresUIHudBaymaxHero_1_MAX = 4 UMETA(Hidden),
	ETresUIHudBaymaxHero_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIHudBaymaxResult
{
	ETresUIHudBaymaxResult_RankA = 0 UMETA(DisplayName = "Rank A"),
	ETresUIHudBaymaxResult_RankB = 1 UMETA(DisplayName = "Rank B"),
	ETresUIHudBaymaxResult_RankC = 2 UMETA(DisplayName = "Rank C"),
	ETresUIHudBaymaxResult_RankD = 3 UMETA(DisplayName = "Rank D"),
	ETresUIHudBaymaxResult_1_MAX = 4 UMETA(Hidden),
	ETresUIHudBaymaxResult_MAX = 5 UMETA(Hidden)
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
	ETresUIHudBaymaxCountDown_1_MAX = 7 UMETA(Hidden),
	ETresUIHudBaymaxCountDown_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIHudBaymaxKind
{
	ETresUIHudBaymaxKind_None = 0 UMETA(DisplayName = "None"),
	ETresUIHudBaymaxKind_FlashTracer = 1 UMETA(DisplayName = "Flash Tracer"),
	ETresUIHudBaymaxKind_FlashTracer_MiniGame = 2 UMETA(DisplayName = "Flash Tracer Minigame"),
	ETresUIHudBaymaxKind_HeroRescue = 3 UMETA(DisplayName = "Hero Rescue"),
	ETresUIHudBaymaxKind_DarkCube = 4 UMETA(DisplayName = "Dark Cube"),
	ETresUIHudBaymaxKind_1_MAX = 5 UMETA(Hidden),
	ETresUIHudBaymaxKind_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUINauticalChartPoint
{
	No1 = 0,
	No2 = 1,
	No3 = 2,
	No4 = 3,
	No5 = 4,
	No6 = 5,
	No7 = 6,
	No8 = 7,
	No9 = 8,
	No10 = 9,
	No11 = 10,
	No12 = 11,
	No13 = 12,
	ETresUINauticalChartPoint_1_MAX = 13 UMETA(Hidden),
	ETresUINauticalChartPoint_MAX = 14 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIHudBlackPearlAlert
{
	ETresUIHudBlackPearlAlert_Normal = 0 UMETA(DisplayName = "Normal"),
	ETresUIHudBlackPearlAlert_Blink1 = 1 UMETA(DisplayName = "Blink 1"),
	ETresUIHudBlackPearlAlert_Blink2 = 2 UMETA(DisplayName = "Blink 2"),
	ETresUIHudBlackPearlAlert_1_MAX = 3 UMETA(Hidden),
	ETresUIHudBlackPearlAlert_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIHudBlackPearlMarker
{
	ETresUIHudBlackPearlMarker_Player = 0 UMETA(DisplayName = "Player"),
	ETresUIHudBlackPearlMarker_BlackPearl = 1 UMETA(DisplayName = "Black Pearl"),
	ETresUIHudBlackPearlMarker_1_MAX = 2 UMETA(Hidden),
	ETresUIHudBlackPearlMarker_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIHudSpecialShipMarker
{
	ETresUIHudSpecialShipMarker_Player = 0 UMETA(DisplayName = "Player"),
	ETresUIHudSpecialShipMarker_Enemy = 1 UMETA(DisplayName = "Enemy"),
	ETresUIHudSpecialShipMarker_1_MAX = 2 UMETA(Hidden),
	ETresUIHudSpecialShipMarker_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIHudSpecialShip
{
	ETresUIHudSpecialShip_Normal = 0 UMETA(DisplayName = "Normal"),
	ETresUIHudSpecialShip_Marker = 1 UMETA(DisplayName = "Marker"),
	ETresUIHudSpecialShip_1_MAX = 2 UMETA(Hidden),
	ETresUIHudSpecialShip_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIHudScoreMode
{
	ETresUIHudScoreMode_None = 0 UMETA(DisplayName = "None"),
	ETresUIHudScoreMode_Default = 1 UMETA(DisplayName = "Default"),
	ETresUIHudScoreMode_Pudding = 2 UMETA(DisplayName = "Pudding"),
	ETresUIHudScoreMode_1_MAX = 3 UMETA(Hidden),
	ETresUIHudScoreMode_MAX = 4 UMETA(Hidden)
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
	ETresUIHudCommonIcon_1_MAX = 12 UMETA(Hidden),
	ETresUIHudCommonIcon_MAX = 13 UMETA(Hidden)
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
	ETresUIHudCommonKind_1_MAX = 9 UMETA(Hidden),
	ETresUIHudCommonKind_MAX = 10 UMETA(Hidden)
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
	ETresUIHudCommandExKind_1_MAX = 21 UMETA(Hidden),
	ETresUIHudCommandExKind_MAX = 22 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUISnowSlideRank
{
	ETresUISnowSlideRank_A = 0 UMETA(DisplayName = "A"),
	ETresUISnowSlideRank_B = 1 UMETA(DisplayName = "B"),
	ETresUISnowSlideRank_C = 2 UMETA(DisplayName = "C"),
	ETresUISnowSlideRank_D = 3 UMETA(DisplayName = "D"),
	ETresUISnowSlideRank_1_Max = 4 UMETA(Hidden),
	ETresUISnowSlideRank_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUISnowSlideCountDownType
{
	ETresUISnowSlideCountDownType_Three = 0 UMETA(DisplayName = "Three"),
	ETresUISnowSlideCountDownType_Two = 1 UMETA(DisplayName = "Two"),
	ETresUISnowSlideCountDownType_One = 2 UMETA(DisplayName = "One"),
	ETresUISnowSlideCountDownType_Start = 3 UMETA(DisplayName = "Start"),
	ETresUISnowSlideCountDownType_Finish = 4 UMETA(DisplayName = "Finish"),
	ETresUISnowSlideCountDownType_1_Max = 5 UMETA(Hidden),
	ETresUISnowSlideCountDownType_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIOlafPartsType
{
	ETresUIOlafPartsType_Head = 0 UMETA(DisplayName = "Head"),
	ETresUIOlafPartsType_Body = 1 UMETA(DisplayName = "Body"),
	ETresUIOlafPartsType_Leg = 2 UMETA(DisplayName = "Leg"),
	ETresUIOlafPartsType_1_Max = 3 UMETA(Hidden),
	ETresUIOlafPartsType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIGigasGameResultRank
{
	ETresUIGigasGameResultRank_A = 0 UMETA(DisplayName = "A"),
	ETresUIGigasGameResultRank_B = 1 UMETA(DisplayName = "B"),
	ETresUIGigasGameResultRank_C = 2 UMETA(DisplayName = "C"),
	ETresUIGigasGameResultRank_D = 3 UMETA(DisplayName = "D"),
	ETresUIGigasGameResultRank_Max = 4 UMETA(Hidden),
	ETresUIGigasGameResultRank_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIGigasGameStartSignalType
{
	ETresUIGigasGameStartSignalType_Ready = 0 UMETA(DisplayName = "Ready"),
	ETresUIGigasGameStartSignalType_Start = 1 UMETA(DisplayName = "Start"),
	ETresUIGigasGameStartSignalType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIGigasGameGimmickType
{
	ETresUIGigasGameGimmickType_SparkTrap = 0 UMETA(DisplayName = "Spark Trap"),
	ETresUIGigasGameGimmickType_HeatBlast = 1 UMETA(DisplayName = "Heat Blast"),
	ETresUIGigasGameGimmickType_CrystalSmash = 2 UMETA(DisplayName = "Crystal Smash"),
	ETresUIGigasGameGimmickType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUITimerType
{
	CountDown = 0 UMETA(DisplayName = "Count Down"),
	CountUp = 1 UMETA(DisplayName = "Count Up"),
	ETresUITimerType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUITimerColor
{
	ETresUITimerColor_Common = 0 UMETA(DisplayName = "Common"),
	ETresUITimerColor_Red1 = 1 UMETA(DisplayName = "Red 1"),
	ETresUITimerColor_Red2 = 2 UMETA(DisplayName = "Red 2"),
	ETresUITimerColor_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUISubtitleUsage
{
	ETresUISubtitleUsage_Cutscene = 0 UMETA(DisplayName = "Cutscene"),
	ETresUISubtitleUsage_FieldVoice = 1 UMETA(DisplayName = "Field Voice"),
	ETresUISubtitleUsage_Talk = 2 UMETA(DisplayName = "Talk"),
	ETresUISubtitleUsage_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIMissionGageIconType
{
	ETresUIMissionGageIconType_ComicalBattle1 = 0 UMETA(DisplayName = "Comical Battle 1"),
	ETresUIMissionGageIconType_ComicalBattle2 = 1 UMETA(DisplayName = "Comical Battle 2"),
	ETresUIMissionGageIconType_ComicalBattle3 = 2 UMETA(DisplayName = "Comical Battle 3"),
	ETresUIMissionGageIconType_1_Max = 3 UMETA(Hidden),
	ETresUIMissionGageIconType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUILoadingScreenType
{
	ETresUILoadingScreenType_NORMAL = 0 UMETA(DisplayName = "Normal"),
	ETresUILoadingScreenType_EXTRA = 1 UMETA(DisplayName = "Extra"),
	ETresUILoadingScreenType_1_Max = 2 UMETA(Hidden),
	ETresUILoadingScreenType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUILoadingScreenBGColor
{
	ETresUILoadingScreenBGColor_BLACK = 0 UMETA(DisplayName = "Black"),
	ETresUILoadingScreenBGColor_WHITE = 1 UMETA(DisplayName = "White"),
	ETresUILoadingScreenBGColor_1_Max = 2 UMETA(Hidden),
	ETresUILoadingScreenBGColor_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EGameOverHintType
{
	CommonHint = 0 UMETA(DisplayName = "Common Hint"),
	SpecialHint = 1 UMETA(DisplayName = "Special Hint"),
	TopPriority = 2 UMETA(DisplayName = "Top Priority"),
	FixedHit = 3 UMETA(DisplayName = "Fixed Hit"),
	EGameOverHintType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIFullscreenVideoCallbackType
{
	ETresUIFullscreenVideoCallbackType_PlayTimeOut = 0 UMETA(DisplayName = "Play Time Out"),
	ETresUIFullscreenVideoCallbackType_PlayFinish = 1 UMETA(DisplayName = "Play Finish"),
	ETresUIFullscreenVideoCallbackType_Prepared = 2 UMETA(DisplayName = "Prepared"),
	ETresUIFullscreenVideoCallbackType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIWindowPositionType
{
	WINDOW_POSITION_TYPE_NONE = 0 UMETA(DisplayName = "None"),
	WINDOW_POSITION_TYPE_RATE = 1 UMETA(DisplayName = "Rate"),
	WINDOW_POSITION_TYPE_FREE = 2 UMETA(DisplayName = "Free"),
	WINDOW_POSITION_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIWindowWaitType
{
	WINDOW_WAIT_TYPE_WAIT = 0 UMETA(DisplayName = "Wait"),
	WINDOW_WAIT_TYPE_NO_WAIT = 1 UMETA(DisplayName = "No Wait"),
	WINDOW_WAIT_TYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUICutsceneTextHideMethod
{
	ETresUICutsceneTextHideMethod_None = 0 UMETA(DisplayName = "None"),
	ETresUICutsceneTextHideMethod_Fade = 1 UMETA(DisplayName = "Fade"),
	ETresUICutsceneTextHideMethod_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUICutsceneTextShowMethod
{
	ETresUICutsceneTextShowMethod_None = 0 UMETA(DisplayName = "None"),
	ETresUICutsceneTextShowMethod_Fade = 1 UMETA(DisplayName = "Fade"),
	ETresUICutsceneTextShowMethod_LineFade = 2 UMETA(DisplayName = "Line Fade"),
	ETresUICutsceneTextShowMethod_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUITextAlignV
{
	ETresUITextAlignV_Top = 0 UMETA(DisplayName = "Top"),
	ETresUITextAlignV_Center = 1 UMETA(DisplayName = "Center"),
	ETresUITextAlignV_Bottom = 2 UMETA(DisplayName = "Bottom"),
	ETresUITextAlignV_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUITextAlignH
{
	ETresUITextAlignH_Left = 0 UMETA(DisplayName = "Left"),
	ETresUITextAlignH_Center = 1 UMETA(DisplayName = "Center"),
	ETresUITextAlignH_Right = 2 UMETA(DisplayName = "Right"),
	ETresUITextAlignH_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIMissionGageColorType
{
	ETresUIMissionGageColorType_Yellow = 0 UMETA(DisplayName = "Yellow"),
	ETresUIMissionGageColorType_Red = 1 UMETA(DisplayName = "Red"),
	ETresUIMissionGageColorType_Green = 2 UMETA(DisplayName = "Green"),
	ETresUIMissionGageColorType_1_Max = 3 UMETA(Hidden),
	ETresUIMissionGageColorType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresUIMapMarkerType
{
	ETresUIMapMarkerType_SavePoint = 0 UMETA(DisplayName = "Save Point"),
	ETresUIMapMarkerType_Shop = 1 UMETA(DisplayName = "Shop"),
	ETresUIMapMarkerType_MapLine = 2 UMETA(DisplayName = "Map Line"),
	ETresUIMapMarkerType_EnemyGigas = 3 UMETA(DisplayName = "Enemy Gigas"),
	ETresUIMapMarkerType_EnemyGigasAce = 4 UMETA(DisplayName = "Enemy Gigas Ace"),
	ETresUIMapMarkerType_Gigas = 5 UMETA(DisplayName = "Gigas"),
	ETresUIMapMarkerType_EnemySea = 6 UMETA(DisplayName = "Enemy Sea"),
	ETresUIMapMarkerType_EnemySeaLuxord = 7 UMETA(DisplayName = "Enemy Sea Luxord"),
	ETresUIMapMarkerType_1_Max = 8 UMETA(Hidden),
	ETresUIMapMarkerType_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresVBonusAbilityType : uint8
{
	NONE = 0 UMETA(DisplayName = "None"),
	EQUIP = 1 UMETA(DisplayName = "Equip"),
	HAVE = 2 UMETA(DisplayName = "Have"),
	_MAX = 3 UMETA(Hidden),
	ETresVBonusAbilityType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresVictoryBonusKind : uint8
{
	NONE = 0 UMETA(DisplayName = "None"),
	HP_UP3 = 1 UMETA(DisplayName = "HP Up 3"),
	HP_UP5 = 2 UMETA(DisplayName = "HP Up 5"),
	HP_UP10 = 3 UMETA(DisplayName = "HP Up 10"),
	HP_UP15 = 4 UMETA(DisplayName = "HP Up 15"),
	HP_UP30 = 5 UMETA(DisplayName = "HP Up 30"),
	_RESERVE6 = 6 UMETA(DisplayName = "Reserve 6"),
	_RESERVE7 = 7 UMETA(DisplayName = "Reserve 7"),
	MP_UP3 = 8 UMETA(DisplayName = "MP Up 3"),
	MP_UP5 = 9 UMETA(DisplayName = "MP Up 5"),
	MP_UP10 = 10 UMETA(DisplayName = "MP Up 10"),
	MP_UP20 = 11 UMETA(DisplayName = "MP Up 20"),
	_RESERVE12 = 12 UMETA(DisplayName = "Reserve 12"),
	_RESERVE13 = 13 UMETA(DisplayName = "Reserve 13"),
	_RESERVE14 = 14 UMETA(DisplayName = "Reserve 14"),
	_RESERVE15 = 15 UMETA(DisplayName = "Reserve 15"),
	DEF_SLOT_UP1 = 16 UMETA(DisplayName = "Def Slot Up 1"),
	ACC_SLOT_UP1 = 17 UMETA(DisplayName = "Acc Slot Up 1"),
	ITEM_SLOT_UP1 = 18 UMETA(DisplayName = "Item Slot Up 1"),
	_RESERVE19 = 19 UMETA(DisplayName = "Reserve 19"),
	_RESERVE20 = 20 UMETA(DisplayName = "Reserve 20"),
	_RESERVE21 = 21 UMETA(DisplayName = "Reserve 21"),
	_RESERVE22 = 22 UMETA(DisplayName = "Reserve 22"),
	_RESERVE23 = 23 UMETA(DisplayName = "Reserve 23"),
	MELEM_FIRE = 24 UMETA(DisplayName = "Melem Fire"),
	MELEM_BLIZZARD = 25 UMETA(DisplayName = "Melem Blizzard"),
	MELEM_THUNDER = 26 UMETA(DisplayName = "Melem Thunder"),
	MELEM_WATER = 27 UMETA(DisplayName = "Melem Water"),
	MELEM_AERO = 28 UMETA(DisplayName = "Melem Aero"),
	MELEM_CURE = 29 UMETA(DisplayName = "Melem Cure"),
	_RESERVE30 = 30 UMETA(DisplayName = "Reserve 30"),
	_RESERVE31 = 31 UMETA(DisplayName = "Reserve 31"),
	TYPE_MAX = 32 UMETA(Hidden),
	ETresVictoryBonusKind_MAX = 33 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EWinniePuzzleStopElapsedTimeTiming
{
	WhenShoot = 0,
	PlayerUnitsMoved = 1,
	WinniePuzzleStopElapsedTimeTiming_MAX = 2
};

UENUM(BlueprintType)
enum EWinniePuzzleSlopeActionRemoveFindingTarget
{
	DontRemove = 0,
	SlopeDirection = 1,
	Around = 2,
	All = 3,
	WinniePuzzleSlopeActionRemoveFindingTarget_MAX = 4
};

UENUM(BlueprintType)
enum EWinniePuzzleUnitAppearColumnDependencyDirection
{
	FrontToBack = 0,
	BackToFront = 1,
	WinniePuzzleUnitAppearColumnDependencyDirection_MAX = 2
};

UENUM(BlueprintType)
enum EWinniePuzzleUnitAppearDelayType
{
	EWinniePuzzleUnitAppearDelayType_None = 0,
	EWinniePuzzleUnitAppearDelayType_ColumnDependency = 1,
	EWinniePuzzleUnitAppearDelayType_Random = 2,
	WinniePuzzleUnitAppearDelayType_MAX = 3
};

UENUM(BlueprintType)
enum EWinniePuzzleVoicePriority
{
	EWinniePuzzleVoicePriority_Low = 0,
	EWinniePuzzleVoicePriority_Medium = 1,
	EWinniePuzzleVoicePriority_High = 2,
	WinniePuzzleVoicePriority_MAX = 3
};

UENUM(BlueprintType)
enum EWinniePuzzleVoice
{
	PlayerGameStart = 0,
	PlayerShot = 1,
	PlayerStrike = 2,
	PlayerHarvestStart = 3,
	PlayerCharacterBonusReply = 4,
	PlayerAdditionalInvocation = 5,
	PlayerClearOrFinish = 6,
	RabbitStrike = 7,
	RabbitChainOccurred = 8,
	RabbitHarvestStart = 9,
	RabbitHarvestedNormal = 10,
	RabbitHarvestedGood = 11,
	RabbitHarvestHint = 12,
	RabbitBeforeHarvest = 13,
	PoohHungry = 14,
	PoohCatchHoneyPot = 15,
	PoohEatingHoney = 16,
	PoohIdle = 17,
	PoohClearOrFinish = 18,
	PoohLevelUp = 19,
	TiggerInvokable = 20,
	TiggerInvoke = 21,
	TiggerInvokableRepeat = 22,
	LumpyInvokable = 23,
	LumpyInvoke = 24,
	LumpyInvokableRepeat = 25,
	GopherInvokable = 26,
	GopherInvoke = 27,
	GopherInvokableRepeat = 28,
	Num = 29,
	EWinniePuzzleVoice_None = 30,
	WinniePuzzleVoice_MAX = 31
};

UENUM(BlueprintType)
enum EWinniePuzzleSoundEffect
{
	EWinniePuzzleSoundEffect_Countdown = 0,
	EWinniePuzzleSoundEffect_GameStart = 1,
	EWinniePuzzleSoundEffect_GameClear = 2,
	EWinniePuzzleSoundEffect_GameOver = 3,
	EWinniePuzzleSoundEffect_Match1st = 4,
	EWinniePuzzleSoundEffect_Match2nd = 5,
	EWinniePuzzleSoundEffect_Match3rd = 6,
	EWinniePuzzleSoundEffect_Aiming = 7,
	EWinniePuzzleSoundEffect_SwitchUnit = 8,
	EWinniePuzzleSoundEffect_FillBuckets = 9,
	EWinniePuzzleSoundEffect_DecreaseBucket = 10,
	EWinniePuzzleSoundEffect_PowerGauge = 11,
	EWinniePuzzleSoundEffect_UnitVibration = 12,
	EWinniePuzzleSoundEffect_AdditionalBonus = 13,
	EWinniePuzzleSoundEffect_ResultScore = 14,
	EWinniePuzzleSoundEffect_ResultNewRecord = 15,
	EWinniePuzzleSoundEffect_ResultEvalution = 16,
	WinniePuzzleSoundEffect_MAX = 17
};

UENUM(BlueprintType)
enum EWinniePuzzleTotalScoreEvalution
{
	EWinniePuzzleTotalScoreEvalution_None = 0,
	EWinniePuzzleTotalScoreEvalution_LowerGood = 1,
	EWinniePuzzleTotalScoreEvalution_Good = 2,
	EWinniePuzzleTotalScoreEvalution_Cool = 3,
	EWinniePuzzleTotalScoreEvalution_Fantastic = 4,
	WinniePuzzleTotalScoreEvalution_MAX = 5
};

UENUM(BlueprintType)
enum EWinniePuzzleRuleGameOverCondition
{
	EWinniePuzzleRuleGameOverCondition_None = 0,
	EWinniePuzzleRuleGameOverCondition_Increase = 1,
	EWinniePuzzleRuleGameOverCondition_TimeLimit = 2,
	WinniePuzzleRuleGameOverCondition_MAX = 3
};

UENUM(BlueprintType)
enum EWinniePuzzleRuleGameClearCondition
{
	EWinniePuzzleRuleGameClearCondition_None = 0,
	EWinniePuzzleRuleGameClearCondition_EarnUnitsNum = 1,
	EWinniePuzzleRuleGameClearCondition_Decrease = 2,
	EWinniePuzzleRuleGameClearCondition_TimeLimit = 3,
	EWinniePuzzleRuleGameClearCondition_EarnHoneypotsNum = 4,
	WinniePuzzleRuleGameClearCondition_MAX = 5
};

UENUM(BlueprintType)
enum EWinniePuzzlePowerGaugeLevel
{
	EWinniePuzzlePowerGaugeLevel_Level1 = 0,
	EWinniePuzzlePowerGaugeLevel_Level2 = 1,
	EWinniePuzzlePowerGaugeLevel_Level3 = 2,
	EWinniePuzzlePowerGaugeLevel_Level4 = 3,
	EWinniePuzzlePowerGaugeLevel_Level5 = 4,
	EWinniePuzzlePowerGaugeLevel_Level6 = 5,
	EWinniePuzzlePowerGaugeLevel_Level7 = 6,
	EWinniePuzzlePowerGaugeLevel_Level8 = 7,
	EWinniePuzzlePowerGaugeLevel_Level9 = 8,
	EWinniePuzzlePowerGaugeLevel_Level10 = 9,
	EWinniePuzzlePowerGaugeLevel_Level11 = 10,
	EWinniePuzzlePowerGaugeLevel_Level12 = 11,
	EWinniePuzzlePowerGaugeLevel_Num = 12,
	WinniePuzzlePowerGaugeLevel_MAX = 13
};

UENUM(BlueprintType)
enum EWinniePuzzleWallVolumeType
{
	EWinniePuzzleWallVolumeType_Bound = 0,
	EWinniePuzzleWallVolumeType_Snap = 1,
	EWinniePuzzleWallVolumeType_None = 2,
	WinniePuzzleWallVolumeType_MAX = 3
};

UENUM(BlueprintType)
enum EWinniePuzzleBucketFillMoveType
{
	EWinniePuzzleBucketFillMoveType_InOrder = 0,
	EWinniePuzzleBucketFillMoveType_Random = 1,
	WinniePuzzleBucketFillMoveType_MAX = 2
};

UENUM(BlueprintType)
enum EWinniePuzzleBucketType
{
	EWinniePuzzleBucketType_Normal = 0,
	EWinniePuzzleBucketType_Special = 1,
	WinniePuzzleBucketType_MAX = 2
};

UENUM(BlueprintType)
enum EWinniePuzzleUnitFillType
{
	EWinniePuzzleUnitFillType_RollOver = 0,
	EWinniePuzzleUnitFillType_Growing = 1,
	WinniePuzzleUnitFillType_MAX = 2
};

UENUM(BlueprintType)
enum EWinniePuzzleUnitAnimationType
{
	EWinniePuzzleUnitAnimationType_Idle = 0,
	EWinniePuzzleUnitAnimationType_Roll = 1,
	EWinniePuzzleUnitAnimationType_RollEnd = 2,
	EWinniePuzzleUnitAnimationType_Grow = 3,
	EWinniePuzzleUnitAnimationType_GrowWait = 4,
	WinniePuzzleUnitAnimationType_MAX = 5
};

UENUM(BlueprintType)
enum EWinniePuzzleUnitState
{
	Unit_State_Idle = 0,
	Unit_State_Roll = 1,
	Unit_State_Roll_End = 2,
	Unit_State_Grow = 3,
	Unit_State_Pool = 4,
	Unit_State_Particle_Destroyed = 5,
	Unit_State_None = 6,
	Unit_State_MAX = 7
};

UENUM(BlueprintType)
enum EWinniePuzzleUnitType
{
	EWinniePuzzleUnitType_Carrot = 0,
	EWinniePuzzleUnitType_Eggplant = 1,
	EWinniePuzzleUnitType_Garlic = 2,
	EWinniePuzzleUnitType_Pumpkin = 3,
	EWinniePuzzleUnitType_Tomato = 4,
	EWinniePuzzleUnitType_Zucchini = 5,
	EWinniePuzzleUnitType_VegetableBoss = 6,
	EWinniePuzzleUnitType_VegetableBossCollision = 7,
	EWinniePuzzleUnitType_Apple = 8,
	EWinniePuzzleUnitType_Blackberry = 9,
	EWinniePuzzleUnitType_GreenApple = 10,
	EWinniePuzzleUnitType_Lemon = 11,
	EWinniePuzzleUnitType_Orange = 12,
	EWinniePuzzleUnitType_Pear = 13,
	EWinniePuzzleUnitType_Anemone = 14,
	EWinniePuzzleUnitType_Daffodil = 15,
	EWinniePuzzleUnitType_Dahlia = 16,
	EWinniePuzzleUnitType_Gerbera = 17,
	EWinniePuzzleUnitType_OrangePixie = 18,
	EWinniePuzzleUnitType_RoofFlower = 19,
	EWinniePuzzleUnitType_Honeypot = 20,
	EWinniePuzzleUnitType_None = 21,
	WinniePuzzleUnitType_MAX = 22
};

UENUM(BlueprintType)
enum EWinniePuzzleBoundStartMoveDirection
{
	UpLeft = 0,
	UpRight = 1,
	WinniePuzzleBoundStartMoveDirection_MAX = 2
};

UENUM(BlueprintType)
enum EWinniePuzzleCharacterBonusGaugeType
{
	EWinniePuzzleCharacterBonusGaugeType_Single = 0,
	EWinniePuzzleCharacterBonusGaugeType_Dual = 1,
	EWinniePuzzleCharacterBonusGaugeType_None = 2,
	WinniePuzzleCharacterBonusGaugeType_MAX = 3
};

UENUM(BlueprintType)
enum EWinniePuzzleCharacterBonusType
{
	Tigger_Bound = 0,
	Lumpy_Decrease = 1,
	Gopher_Bomb = 2,
	WinniePuzzleCharacterBonusType_MAX = 3
};

UENUM(BlueprintType)
enum EWinnieCharacterState
{
	Rabbit_State_Idle = 0,
	Rabbit_State_See_Player = 1,
	Rabbit_State_See_Unit = 2,
	Rabbit_State_Happy = 3,
	Rabbit_State_Happy_Landing = 4,
	Rabbit_State_Move_In = 5,
	Rabbit_State_Well = 6,
	Rabbit_State_Harvest = 7,
	Rabbit_State_Harvest_End = 8,
	Rabbit_State_Landing = 9,
	Rabbit_State_Failure = 10,
	Tigger_State_Idle = 11,
	Tigger_State_Ready = 12,
	Tigger_State_Jump_Start = 13,
	Tigger_State_Entry = 14,
	Tigger_State_Bound_Ready = 15,
	Tigger_State_Bound_Moving = 16,
	Tigger_State_Standby = 17,
	Lumpy_State_Idle = 18,
	Lumpy_State_Ready = 19,
	Lumpy_State_Decrease = 20,
	Lumpy_State_Standby = 21,
	Gopher_State_Idle = 22,
	Gopher_State_Ready = 23,
	Gopher_State_Entry = 24,
	Gopher_State_Dive = 25,
	Gopher_State_Jump = 26,
	Gopher_State_Standby = 27,
	Pooh_State_Entry = 28,
	Pooh_State_Idle = 29,
	Pooh_State_Hungry = 30,
	Pooh_State_Happy = 31,
	Pooh_State_Happy_End = 32,
	Pooh_State_Level_Up = 33,
	Pooh_State_Eat_Honey = 34,
	Pooh_State_Down = 35,
	EWinnieCharacterState_State_None = 36,
	WinnieCharacterState_MAX = 37
};

UENUM(BlueprintType)
enum EWinnieCharacterAnimationType
{
	EWinnieCharacterAnimationType_Idle = 0,
	EWinnieCharacterAnimationType_Walk = 1,
	EWinnieCharacterAnimationType_JumpStart = 2,
	EWinnieCharacterAnimationType_JumpLoop = 3,
	EWinnieCharacterAnimationType_RabbitSeePlayer = 4,
	EWinnieCharacterAnimationType_RabbitSeeUnit = 5,
	EWinnieCharacterAnimationType_RabbitHappy = 6,
	EWinnieCharacterAnimationType_RabbitHappyLanding = 7,
	EWinnieCharacterAnimationType_RabbitWell = 8,
	EWinnieCharacterAnimationType_RabbitHarvest = 9,
	EWinnieCharacterAnimationType_RabbitHarvestEnd = 10,
	EWinnieCharacterAnimationType_RabbitLanding = 11,
	EWinnieCharacterAnimationType_RabbitFailureStart = 12,
	EWinnieCharacterAnimationType_RabbitFailureLoop = 13,
	EWinnieCharacterAnimationType_SuperJumpStart = 14,
	EWinnieCharacterAnimationType_SuperJumpLoop = 15,
	EWinnieCharacterAnimationType_SuperJumpBoundL = 16,
	EWinnieCharacterAnimationType_SuperJumpBoundR = 17,
	EWinnieCharacterAnimationType_TiggerLanding = 18,
	EWinnieCharacterAnimationType_TiggerJumpStart = 19,
	EWinnieCharacterAnimationType_LumpyIdle = 20,
	EWinnieCharacterAnimationType_LumpyRunL = 21,
	EWinnieCharacterAnimationType_LumpyRunR = 22,
	EWinnieCharacterAnimationType_LumpyRunLoopL = 23,
	EWinnieCharacterAnimationType_LumpyRunLoopR = 24,
	EWinnieCharacterAnimationType_LumpyEntry = 25,
	EWinnieCharacterAnimationType_LumpyStop = 26,
	EWinnieCharacterAnimationType_LumpyRunStart = 27,
	EWinnieCharacterAnimationType_LumpyRunLoop = 28,
	EWinnieCharacterAnimationType_GopherEntry = 29,
	EWinnieCharacterAnimationType_GopherOut = 30,
	EWinnieCharacterAnimationType_GopherWait = 31,
	EWinnieCharacterAnimationType_GopherLookAround = 32,
	EWinnieCharacterAnimationType_GopherDive = 33,
	EWinnieCharacterAnimationType_GopherJump = 34,
	EWinnieCharacterAnimationType_PoohEntry = 35,
	EWinnieCharacterAnimationType_PoohIdle = 36,
	EWinnieCharacterAnimationType_PoohHungry = 37,
	EWinnieCharacterAnimationType_PoohHappy = 38,
	EWinnieCharacterAnimationType_PoohHappyOnce = 39,
	EWinnieCharacterAnimationType_PoohHappyEnd = 40,
	EWinnieCharacterAnimationType_PoohEatHoneyStart = 41,
	EWinnieCharacterAnimationType_PoohEatingHoney = 42,
	EWinnieCharacterAnimationType_PoohEatHoneyEnd = 43,
	EWinnieCharacterAnimationType_PoohDownStart = 44,
	EWinnieCharacterAnimationType_PoohDownLoop = 45,
	WinnieCharacterAnimationType_MAX = 46
};

UENUM(BlueprintType)
enum EWinnieWalkingControlType
{
	WalkingWithStick = 0,
	WalkingWithDPad = 1,
	WinnieWalkingControlType_MAX = 2
};

UENUM(BlueprintType)
enum EWinniePuzzlePlayerState
{
	Player_State_Entry = 0,
	Player_State_Idle = 1,
	Player_State_Walk = 2,
	Player_State_Run = 3,
	Player_State_Turn = 4,
	Player_State_Prepare_Shot = 5,
	Player_State_Shot = 6,
	Player_State_Roll = 7,
	Player_State_Wait_Harvest = 8,
	Player_State_Greeting = 9,
	Player_State_Success = 10,
	Player_State_Failure = 11,
	Player_State_None = 12,
	Player_State_MAX = 13
};

UENUM(BlueprintType)
enum EWinniePuzzleResult
{
	PuzzleResultSuccess = 0,
	PuzzleResultFailure = 1,
	PuzzleResultFinish = 2,
	PuzzleResultNone = 3,
	WinniePuzzleResult_MAX = 4
};

UENUM(BlueprintType)
enum EWinniePuzzleState
{
	PuzzlePrepare = 0,
	PuzzleHelp = 1,
	PuzzleUnitAppear = 2,
	PuzzleCountdown = 3,
	PuzzleStartWait = 4,
	PuzzleWait = 5,
	PuzzleShootWait = 6,
	PuzzlePlayerUnitMoving = 7,
	PuzzleUnitRemoving = 8,
	PuzzleNoRemovableUnits = 9,
	PuzzleSlopeAction = 10,
	PuzzleSameKindUnitsRemoving = 11,
	PuzzleTurnEndProcess = 12,
	PuzzleAutoGrow = 13,
	PuzzleFillUnits = 14,
	PuzzleBound = 15,
	PuzzleIncrease = 16,
	PuzzleDecrease = 17,
	PuzzleBomb = 18,
	PuzzleResult = 19,
	PuzzleNone = 20,
	WinniePuzzleState_MAX = 21
};

UENUM(BlueprintType)
enum EWinniePuzzleManagerState
{
	PuzzleManagerMain = 0,
	PuzzleManagerRetry = 1,
	PuzzleManagerFinalize = 2,
	WinniePuzzleManagerState_MAX = 3
};

UENUM(BlueprintType)
enum EWinniePlayerSituation
{
	EWinniePlayerSituation_None = 0,
	EWinniePlayerSituation_Normal = 1,
	EWinniePlayerSituation_Weapon = 2,
	EWinniePlayerSituation_Battle = 3,
	EWinniePlayerSituation_Fixed = 4,
	WinniePlayerSituation_MAX = 5
};

UENUM(BlueprintType)
enum EWinniePlayerAnimationType
{
	EWinniePlayerAnimationType_IdleN = 0,
	EWinniePlayerAnimationType_IdleB = 1,
	EWinniePlayerAnimationType_IdleBreakN = 2,
	EWinniePlayerAnimationType_IdleBreakW = 3,
	WalkLoopN = 4,
	WalkLoopW = 5,
	WalkLoopB = 6,
	WalkEndL = 7,
	WalkEndLW = 8,
	WalkEndLB = 9,
	WalkEndR = 10,
	WalkEndRW = 11,
	WalkEndRB = 12,
	RunStartN = 13,
	RunStartW = 14,
	RunStartB = 15,
	RunLoopN = 16,
	RunLoopW = 17,
	RunLoopB = 18,
	RunEndL = 19,
	RunEndLW = 20,
	RunEndLB = 21,
	RunEndR = 22,
	RunEndRW = 23,
	RunEndRB = 24,
	EWinniePlayerAnimationType_Turn = 25,
	ShotPrepare = 26,
	EWinniePlayerAnimationType_Shot = 27,
	Strike = 28,
	RollLoop = 29,
	RollEnd = 30,
	Greeting = 31,
	HarvestStart = 32,
	HarvestLoop = 33,
	HarvestEnd = 34,
	EWinniePlayerAnimationType_Entry = 35,
	SuccessStart = 36,
	SuccessLoop = 37,
	FailureStart = 38,
	FailureLoop = 39,
	WinniePlayerAnimationType_MAX = 40
};

UENUM(BlueprintType)
enum EWinniePuzzleVagetableUnitRoot
{
	UnitRootNorth = 0,
	UnitRootSouth = 1,
	UnitRootWest = 2,
	UnitRootEast = 3,
	WinniePuzzleVagetableUnitRoot_MAX = 4
};

UENUM(BlueprintType)
enum EWinniePuzzleVagetableSlopeDirection
{
	SlopeNorth = 0,
	SlopeSouth = 1,
	SlopeWest = 2,
	SlopeEast = 3,
	WinniePuzzleVagetableSlopeDirection_MAX = 4
};

UENUM(BlueprintType)
enum EWinniePlayerStayDirection
{
	EWinniePlayerStayDirection_StayNorth = 0,
	EWinniePlayerStayDirection_StaySouth = 1,
	EWinniePlayerStayDirection_StayWest = 2,
	EWinniePlayerStayDirection_StayEast = 3,
	WinniePlayerStayDirection_MAX = 4
};

UENUM(BlueprintType)
enum EWinniePuzzleShootType
{
	EWinniePuzzleShootType_Pressed = 0,
	EWinniePuzzleShootType_Released = 1,
	WinniePuzzleShootType_MAX = 2
};

UENUM(BlueprintType)
enum EWinniePuzzleType
{
	EWinniePuzzleType_Vegetable = 0,
	EWinniePuzzleType_Fruit = 1,
	EWinniePuzzleType_Flower = 2,
	EWinniePuzzleType_Num = 3,
	EWinniePuzzleType_None = 4,
	WinniePuzzleType_MAX = 5
};

UENUM(BlueprintType)
enum ETresWoldMapObjID
{
	WM_OBJ_ID00 = 0,
	WM_OBJ_SPACE_CENTER = 1,
	WM_OBJ_BG = 2,
	WM_OBJ_WORLD_SYMBOL = 3,
	WM_OBJ_ID_TRAVEL = 4,
	WM_OBJ_ID_TREASURE = 5,
	WM_OBJ_ID_TERRITORY = 6,
	WM_OBJ_WORLD_SYMBOL_DUMMY = 7,
	WM_OBJ_WORLD_SYMBOL_PREVIEW = 8,
	WM_OBJ_ID_JUMP_POINT = 9,
	WM_OBJ_KG_MIST = 10,
	WM_OBJ_TYPE_MAX = 11,
	WM_OBJ_MAX = 12
};

UENUM(BlueprintType)
enum ETresWoldPlaceID
{
	WM_PLACE_ID00 = 0,
	WM_PLACE_ID01 = 1,
	WM_PLACE_ID02 = 2,
	WM_PLACE_ID03 = 3,
	WM_PLACE_ID04 = 4,
	WM_PLACE_MAX = 5
};

UENUM(BlueprintType)
enum ESQEX_ATTACH_OBJECT_NAME
{
	SQEX_ATTACH_OBJECT_OWNER = 0 UMETA(DisplayName = "Owner"),
	SQEX_ATTACH_OBJECT_ATTACH_TO_WEAPON = 1 UMETA(DisplayName = "Weapon"),
	SQEX_ATTACH_OBJECT_ATTACH_TO_RIGHT_HAND_WEAPON = 2 UMETA(DisplayName = "RH Weapon"),
	SQEX_ATTACH_OBJECT_ATTACH_TO_LEFT_HAND_WEAPON = 3  UMETA(DisplayName = "LH Weapon"),
	SQEX_ATTACH_OBJECT_ATTACH_TO_ALL_WEAPON = 4	UMETA(DisplayName = "All Weapon")
};

UENUM(BlueprintType)
enum ESQEX_ATTACH_THEMES
{
	ESQEX_ATTACH_THEMES_ALWAYS = 0  UMETA(DisplayName = "Always")
};

UENUM(BlueprintType)
enum ESQEX_CHANGE_ANIMATION_TYPE
{
	ESQEX_CHANGE_ANIMATION_TYPE_END = 0 UMETA(DisplayName = "End")
};

UENUM(BlueprintType)
enum ESQEX_ATTACH_EFFECT_END_TYPE
{
	ESQEX_ATTACH_EFFECT_END_TYPE_LOOPEND = 0 UMETA(DisplayName = "Loop End"),
	ESQEX_ATTACH_EFFECT_END_TYPE_FADEOUT = 1 UMETA(DisplayName = "Fade Out")
};

UENUM(BlueprintType)
enum ETresAreaCustonEffectsType
{
	//	Most of these are only guesses, I've only found type 1 and 4 so far.
	ETresAreaCustonEffectType1 = 0 UMETA(DisplayName = "Type1"),
	ETresAreaCustonEffectType2 = 1 UMETA(DisplayName = "Type2"),
	ETresAreaCustonEffectType3 = 2 UMETA(DisplayName = "Type3"),
	ETresAreaCustonEffectType4 = 3 UMETA(DisplayName = "Type4"),
	ETresAreaCustonEffectType5 = 4 UMETA(DisplayName = "Type5"),
	ETresAreaCustonEffectType6 = 5 UMETA(DisplayName = "Type6"),
	ETresAreaCustonEffectType7 = 6 UMETA(DisplayName = "Type7"),
	ETresAreaCustonEffectType8 = 7 UMETA(DisplayName = "Type8"),
	ETresAreaCustonEffectType9 = 8 UMETA(DisplayName = "Type9")
};

//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

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

USTRUCT(BlueprintType)
struct FTresUIWindowSetting
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUIWindowSetting")
		TEnumAsByte<ETresUIWindowWaitType> WaitType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUIWindowSetting")
		TEnumAsByte<ETresUIWindowPositionType> PositionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUIWindowSetting")
		FVector2D Position;
};

struct FTresMovementComponentPostPhysicsTickFunction : public FTickFunction
{
	//Looks Empty
};

USTRUCT(BlueprintType)
struct FTresRailSlideWork
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresRailSlideWork")
	class AActor* m_LeadActor;
	//class ASQEX_SplineActor* m_RailSlideActor;
	//class USQEX_SplineComponent* m_RailSlideComponent;
	//class ASQEX_SplineActor* m_LastRailSlideActor;
	//class USQEX_SplineComponent* m_LastRailSlideComponent;
	//class ASQEX_SplineActor* m_PauseCheckActor;
	//class USQEX_SplineComponent* m_PauseCheckComponent;
};

USTRUCT(BlueprintType)
struct FTresSkeletalFootStepUnit
{
	GENERATED_BODY()
public:
	struct FBoneReference m_Bone;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	FName m_BoneName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	int m_BoneIndex;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	TEnumAsByte<ETresIkCollision> m_ShapeType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	FVector m_OffsetLocation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	FRotator m_OffsetRotation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	FVector m_Size;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	FVector m_CheckDist;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	float m_TouchedCheckDist;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	FVector m_EffectScale;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	class UTresFootStepSet* m_FootStepSet;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	FVector m_FootStepSize;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	TEnumAsByte<ETresSkeletalFootStampDir> m_FootStampDir;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	float m_StampCheckDist;
};

USTRUCT(BlueprintType)
struct FTresAtkCollShapeAssetUnit
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	FName m_GrpName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	FName m_DefaultAttackDataIDName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	TEnumAsByte<ETresCollision> m_ShapeType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	class UStaticMesh* m_Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	struct FCollisionProfileName m_CollisionProfileName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	TEnumAsByte<ETresAtkCollLocationAttachType> m_AttachType1; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	FName m_SocketName1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	bool m_bSocketName1UseParentSkeleton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	FVector m_RelativeLocation1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	bool m_bAbsoluteOffset1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	bool m_bDisableLocation1Attach;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	TEnumAsByte<ETresAtkCollLocationAttachType> m_AttachType2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	FName m_SocketName2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	bool m_bSocketName2UseParentSkeleton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	FVector m_RelativeLocation2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	bool m_bAbsoluteOffset2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	bool m_bDisableLocation2Attach;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	FVector m_Size;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	FVector m_IncSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	FVector m_IncMaxSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	class UCurveVector* m_SizeVectorCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	bool m_bSizeVectorCurveLoop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	FRotator m_RelativeRocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	TEnumAsByte<ETresAtkCollRotAttachType> m_RotAttachType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	FVector m_Scale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	FVector m_IncScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	FVector m_IncMaxScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	class UCurveVector* m_ScaleVectorCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	bool m_bScaleVectorCurveLoop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	bool m_bDisableSweep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	bool m_bEnablePawnRootCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	bool m_bIsPhysAttackCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	TEnumAsByte<ETresAtkCollMapHitType> m_MapHitType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	bool m_bEnableMapHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	bool m_bDisableGround;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	bool m_bDisableTakeDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	bool m_bDisableTeamCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	bool m_bZeroDamageIfSameTeam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	bool m_bDisableCharHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	bool m_bIgnoreParentScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	FName m_EffectGrpName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	class USoundBase* m_HitSEAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollShapeAssetUnit")
	TEnumAsByte<ETresSoundAliasLabel> m_HitSEID;
};

USTRUCT(BlueprintType)
struct FTresDecalData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresDecalData")
	class UMaterial* m_DecalMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresDecalData")
	float m_DecalSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresDecalData")
	float m_LifeSpan;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresDecalData")
	float m_FadeinTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresDecalData")
	float m_FadeoutTime;
};

USTRUCT(BlueprintType)
struct FTresAtkCollHitEffUnit
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollHitEffUnit")
	class UParticleSystem* m_PawnHitEffect;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollHitEffUnit")
	class USoundBase* m_PawnHitSEAsset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollHitEffUnit")
	class UParticleSystem* m_PawnHitEffectPerAttr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollHitEffUnit")
	class USoundBase* m_PawnHitSEAssetPerAttr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollHitEffUnit")
	class UParticleSystem* m_DirectHitEffect;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollHitEffUnit")
	bool m_bChangeMapHit;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollHitEffUnit")
	class UParticleSystem* m_MapHitEffect;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollHitEffUnit")
	bool m_bChangeSEMapHit;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollHitEffUnit")
	class USoundBase* m_MapHitSEAsset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollHitEffUnit")
	bool m_bEnableDecal;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollHitEffUnit")
	struct FTresDecalData m_DecalData;
};

USTRUCT(BlueprintType)
struct FTresAtkColHitEffect
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkColHitEffect")
	FName m_GrpName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkColHitEffect")
	class UParticleSystem* m_PawnHitEffect;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkColHitEffect")
	class USoundBase* m_PawnHitSEAsset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkColHitEffect")
	class UParticleSystem* m_PawnHitEffectPerAttr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkColHitEffect")
	class USoundBase* m_PawnHitSEAssetPerAttr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkColHitEffect")
	class UParticleSystem* m_DirectHitEffect;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkColHitEffect")
	bool m_bChangeMapHit;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkColHitEffect")
	class UParticleSystem* m_MapHitEffect;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkColHitEffect")
	bool m_bChangeSEMapHit;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkColHitEffect")
	class USoundBase* m_MapHitSEAsset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkColHitEffect")
	bool m_bEnableDecal;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkColHitEffect")
	struct FTresDecalData m_DecalData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkColHitEffect")
	TArray<struct FTresAtkCollHitEffUnit> m_HitEffSet;
};

USTRUCT(BlueprintType)
struct FTresAtkCollAutoActivate
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollAutoActivate")
	FName m_GrpName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollAutoActivate")
	FName m_AttackDataIDName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAtkCollAutoActivate")
	float m_AttackInterval;
};

USTRUCT(BlueprintType)
struct FTresPhysMatEffectAssetUnit
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresPhysMatEffectAssetUnit")
	bool m_bEnableInnerWater;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresPhysMatEffectAssetUnit")
	float m_NmlSpeedParam;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresPhysMatEffectAssetUnit")
	class UParticleSystem* m_NmlEffect;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresPhysMatEffectAssetUnit")
	float m_HighSpeedParam;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresPhysMatEffectAssetUnit")
	class UParticleSystem* m_HighEffect;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresPhysMatEffectAssetUnit")
	class UParticleSystem* m_StillEffect;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresPhysMatEffectAssetUnit")
	class UParticleSystem* m_EnterEffect;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresPhysMatEffectAssetUnit")
	class UParticleSystem* m_LeaveEffect;
};

USTRUCT(BlueprintType)
struct FTresMapSetObjData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresMapSetObjData")
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresMapSetObjData")
	TEnumAsByte<ETresMapSetObjType> Type;
};

USTRUCT(BlueprintType)
struct FTresMapSetData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresMapSetData")
	bool Load;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresMapSetData")
	bool Visible;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresMapSetData")
	bool Ignore;
};

USTRUCT(BlueprintType)
struct FTresMapSetDataArray
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresMapSetObjData")
	TArray<FTresMapSetData> DataArray;
};

USTRUCT(BlueprintType)
struct FTresBehaviorTreeInjectionData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBehaviorTreeInjectionData")
	struct FGameplayTag InjectionTag;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBehaviorTreeInjectionData")
	class UBehaviorTree* BehaviorTree;
};

USTRUCT(BlueprintType)
struct FTresProjectileSpawnData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresProjectileSpawnData")
	class UClass* m_GenerateClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresProjectileSpawnData")
	TEnumAsByte<ETresProjectileRespawnType> m_CheckType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresProjectileSpawnData")
	TEnumAsByte<ETresProjectileRespawnRotType> m_RotInheritType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresProjectileSpawnData")
	float m_CheckRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresProjectileSpawnData")
	bool m_bOnGroundOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresProjectileSpawnData")
	bool m_bBlockByWaterSurface;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresProjectileSpawnData")
	bool m_bTakeOverAtkTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresProjectileSpawnData")
	bool m_bTakeOverAtkCollHitList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresProjectileSpawnData")
	bool m_bTakeOverAtkCollFinishFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresProjectileSpawnData")
	bool m_bIgnoreSendShutdownMsgToOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresProjectileSpawnData")
	bool m_bTakeOverEffectColorParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresProjectileSpawnData")
	bool m_bTakeOverEffectAlphaParam;
};

USTRUCT(BlueprintType)
struct FTresEffectUnit
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEffectUnit")
	class UParticleSystem* MyParticleSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEffectUnit")
	class USoundBase* MySoundCue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEffectUnit")
	struct FTresDecalData MyTresDecal;
};

USTRUCT(BlueprintType)
struct FTresVectorAnim
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVectorAnim")
	struct FVector m_SrcValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVectorAnim")
	struct FVector m_UpdatedValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVectorAnim")
	struct FVector m_LimitMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVectorAnim")
	struct FVector m_LimitMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVectorAnim")
	class UCurveVector* m_pCurveVectorAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVectorAnim")
	bool m_bLoopCurveAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVectorAnim")
	bool m_bLimitMinValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVectorAnim")
	bool m_bLimitMaxValue;
};

USTRUCT(BlueprintType)
struct FTresScaleVectorAnim : public FTresVectorAnim
{
	GENERATED_BODY()
public:
};

USTRUCT(BlueprintType)
struct FTresDebugMenuInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresDebugMenuInfo")
	class UTresDebugMenuScene* m_Instance;
};

USTRUCT(BlueprintType)
struct FTresTimerTaskData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresTimerTaskData")
	float Time;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresTimerTaskData")
	FName RemoteEventName;
};

USTRUCT(BlueprintType)
struct FTresFieldVoiceTextData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresFieldVoiceTextData")
	FString m_NameSpaceAndKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresFieldVoiceTextData")
	float m_Delay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresFieldVoiceTextData")
	float m_Duration;
};

USTRUCT(BlueprintType)
struct FTresFieldVoiceAnimData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresFieldVoiceAnimData")
	FString AnimName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresFieldVoiceAnimData")
	class UAnimationAsset* AnimAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresFieldVoiceAnimData")
	bool isLoop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresFieldVoiceAnimData")
	bool isForcePlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresFieldVoiceAnimData")
	FString SkipAnimName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresFieldVoiceAnimData")
	class UAnimationAsset* SkipAnimAsset;
};

USTRUCT(BlueprintType)
struct FTresVectorInt
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVectorInt")
	int X;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVectorInt")
	int Y;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVectorInt")
	int Z;
};

USTRUCT(BlueprintType)
struct FTresLgRxReactionMarkerData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLgRxReactionMarkerData")
	FName m_SocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLgRxReactionMarkerData")
	FVector m_Offset;
};

USTRUCT(BlueprintType)
struct FTresLgRxReactionData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLgRxReactionData")
	FVector m_Location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLgRxReactionData")
	FRotator m_Rotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLgRxReactionData")
	TArray<struct FTresLgRxReactionMarkerData> m_MarkerData;
};

USTRUCT(BlueprintType)
struct FTresLgRxRushData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLgRxRushData")
	int m_Rate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLgRxRushData")
	int m_NumMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLgRxRushData")
	int m_NumMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLgRxRushData")
	float m_TimeMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLgRxRushData")
	float m_TimeMax;
};

USTRUCT(BlueprintType)
struct FTresLgRxPhaseData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLgRxPhaseData")
	int m_Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLgRxPhaseData")
	float m_AttackRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLgRxPhaseData")
	int m_AttackCountMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLgRxPhaseData")
	int m_AttackCountMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLgRxPhaseData")
	int m_HeavyAttackRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLgRxPhaseData")
	TArray<struct FTresLgRxRushData> m_RushData;
};

USTRUCT(BlueprintType)
struct FTresFriendWarpPointData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresFriendWarpPointData")
	class AActor* m_WarpPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresFriendWarpPointData")
	bool m_bUsedRangeXY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresFriendWarpPointData")
	float m_WarpPointRangeXY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresFriendWarpPointData")
	bool m_bUsedRangeZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresFriendWarpPointData")
	float m_WarpPointRangeZ;
};

USTRUCT(BlueprintType)
struct FTresSpawnPointElement
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSpawnPointElement")
	FVector m_Position;
};

USTRUCT(BlueprintType)
struct FTresSpawnPointSet
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSpawnPointSet")
	FName m_Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSpawnPointSet")
	float m_Radius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSpawnPointSet")
	float m_Height;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSpawnPointSet")
	TArray<struct FTresSpawnPointElement> m_Elements;
};

USTRUCT(BlueprintType)
struct FTresFNpcAIAttackDefInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresFNpcAIAttackDefInfo")
	FName m_AttackParamKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresFNpcAIAttackDefInfo")
	TEnumAsByte<ETresFNpcAIAttackDefType> m_AttackDefType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresFNpcAIAttackDefInfo")
	ETresAbilityKind m_AttackAbilityKind;
};

USTRUCT(BlueprintType)
struct FAITestTractionParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FAITestTractionParam")
	bool m_bTractionXY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FAITestTractionParam")
	bool m_bTractionZUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FAITestTractionParam")
	bool m_bTractionZDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FAITestTractionParam")
	bool m_bTractionNear;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FAITestTractionParam")
	bool m_bTractionFar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FAITestTractionParam")
	float m_TractionDisMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FAITestTractionParam")
	float m_TractionDisMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FAITestTractionParam")
	float m_TractionMaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FAITestTractionParam")
	float m_TractionAcc;
};

USTRUCT(BlueprintType)
struct FTresFormAbilitySetUnit
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresFormAbilitySetUnit")
	TArray<ETresAbilityKind> m_Ability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresFormAbilitySetUnit")
	TArray<ETresTextAbilityKind> m_TextAbility;
};

USTRUCT(BlueprintType)
struct FTresAreaNameDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAreaNameDataTable")
	FString AreaNameKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAreaNameDataTable")
	FString SubAreaNameKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAreaNameDataTable")
	FName MapNameKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAreaNameDataTable")
	FName NavMapNameKey;
};

USTRUCT(BlueprintType)
struct FTresMapNameDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresMapNameDataTable")
	TAssetPtr<UTexture> IconAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresMapNameDataTable")
	FString NameKey;
};

USTRUCT(BlueprintType)
struct FTresTreasureDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresTreasureDataTable")
	FName m_TreasureName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresTreasureDataTable")
	TEnumAsByte<ETresWorldAreaCode> m_WorldAreaCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresTreasureDataTable")
	bool m_bUnused;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresTreasureDataTable")
	int m_UIPriority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresTreasureDataTable")
	FString m_Comment;
};

USTRUCT(BlueprintType)
struct FTresAbilityDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAbilityDataTable")
	FName m_KeyName;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAbilityDataTable")
	TEnumAsByte<ETresAbilityCategory> m_Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAbilityDataTable")
	TEnumAsByte<ETresAbilityEquipType> m_EquipType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAbilityDataTable")
	unsigned char m_UseAP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAbilityDataTable")
	unsigned char m_UseMP;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAbilityDataTable")
	uint8 m_MaxEquip;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAbilityDataTable")
	FString m_Comment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAbilityDataTable")
	int m_UIPriority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAbilityDataTable")
	FString m_NameTextID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAbilityDataTable")
	FString m_HelpTextID;
};

USTRUCT(BlueprintType)
struct FTresItemWeaponEnhanceIconDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemWeaponEnhanceIconDataTable")
	ETresItemDefWeapon m_WeaponID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemWeaponEnhanceIconDataTable")
	TAssetPtr<class UTexture> PickerIconAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemWeaponEnhanceIconDataTable")
	TAssetPtr<class UTexture> KeybladeIconAsset;
};

USTRUCT(BlueprintType)
struct FTresItemSynthesisDataTableBase : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemSynthesisDataTableBase")
	FName m_Material0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemSynthesisDataTableBase")
	int m_MatNum0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemSynthesisDataTableBase")
	FName m_Material1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemSynthesisDataTableBase")
	int m_MatNum1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemSynthesisDataTableBase")
	FName m_Material2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemSynthesisDataTableBase")
	int m_MatNum2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemSynthesisDataTableBase")
	FName m_Material3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemSynthesisDataTableBase")
	int m_MatNum3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemSynthesisDataTableBase")
	FName m_Material4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemSynthesisDataTableBase")
	int m_MatNum4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemSynthesisDataTableBase")
	FName m_Material5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemSynthesisDataTableBase")
	int m_MatNum5;
};

USTRUCT(BlueprintType)
struct FTresItemWeaponEnhanceDataTable : public FTresItemSynthesisDataTableBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemWeaponEnhanceDataTable")
	int m_FlagIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemWeaponEnhanceDataTable")
	ETresItemDefWeapon m_WeaponID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemWeaponEnhanceDataTable")
	bool m_bInitAchieved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemWeaponEnhanceDataTable")
	int m_WeaponLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemWeaponEnhanceDataTable")
	int m_AttackPlus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemWeaponEnhanceDataTable")
	int m_MagicPlus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresItemWeaponEnhanceDataTable")
	ETresAbilityKind m_AppendAbility;
};

USTRUCT(BlueprintType)
struct FTresChrInitEquip
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrInitEquip")
	TArray<ETresItemDefWeapon> m_Weapons;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrInitEquip")
	bool m_bWeaponFixed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrInitEquip")
	uint8 m_InitProtectorSlot = 1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrInitEquip")
	TArray<ETresItemDefProtector> m_Protectors;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrInitEquip")
	uint8 m_InitAccessorySlot = 1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrInitEquip")
	TArray<ETresItemDefAccessory> m_Accessorys;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrInitEquip")
	uint8 m_InitItemSlot = 3;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrInitEquip")
	TArray<ETresItemDefBattleItem> m_Items;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrInitEquip")
	TArray<ETresAbilityKind> m_EquipAbility;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrInitEquip")
	TArray<ETresAbilityKind> m_HaveAbility;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrInitEquip")
	TArray<ETresAbilityKind> m_CriticalEquipAbility;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrInitEquip")
	TArray<ETresAbilityKind> m_CriticalHaveAbility;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrInitEquip")
	class UDataTable* m_BaseParamData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrInitEquip")
	int m_CriticalUseAPUpNum;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrInitEquip")
	class UDataTable* m_LevelData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrInitEquip")
	class UTresFormAbilitySet* m_FormAbilityAsset;
};

USTRUCT(BlueprintType)
struct FTresChrLevelUpDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrLevelUpDataTable")
	int m_Exp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrLevelUpDataTable")
	int m_AttackPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrLevelUpDataTable")
	int m_MagicPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrLevelUpDataTable")
	int m_DefensePower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrLevelUpDataTable")
	int m_AbilityPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrLevelUpDataTable")
	ETresAbilityKind m_AbilityKind1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrLevelUpDataTable")
	ETresAbilityKind m_AbilityKind2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrLevelUpDataTable")
	ETresAbilityKind m_AbilityKind3;
};

USTRUCT(BlueprintType)
struct FTresChrBaseParamDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_MaxHitPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	float m_MaxHPRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_MaxMagicPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_MaxFocusPoint;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_AttackPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_MagicPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_DefensePower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_AbilityPoint;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	float m_ExpRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	ETresBodyPushPowerLevel m_BodyPushPower;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	ETresChrBiologicalType m_BioType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	float m_AttractionRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_MaxBodyStrongValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_MaxArmorHP;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_DamageMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_DamageMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_NeedReactionSameTeamZeroDmgAtk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	float m_RevengeLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_MaxRevengeCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	float m_RevengeCoolDownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	float m_RevengeCoefficientPhysical;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	float m_RevengeCoefficientFire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	float m_RevengeCoefficientBlizzard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	float m_RevengeCoefficientThunder;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	float m_RevengeCoefficientWater;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	float m_RevengeCoefficientAero;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	float m_RevengeCoefficientDark;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	float m_RevengeCoefficientNoType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_AttrResistPhysical;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_AttrResistFire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_AttrResistBlizzard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_AttrResistThunder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_AttrResistWater;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_AttrResistAero;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_AttrResistDark;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_AttrResistNoType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_ResistRapidFire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_ResistComboParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_AttrWeekPointPhysical;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_AttrWeekPointFire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_AttrWeekPointBlizzard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_AttrWeekPointThunder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_AttrWeekPointWater;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_AttrWeekPointAero;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_AttrWeekPointDark;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_AttrWeekPointNoType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_bResistEffectFreeFlow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_bResistEffectDeath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_bResistEffectCatch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_bResistEffectDrillBind;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_bResistEffectYoBind;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_bResistEffectRalphBind;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_bResistEffectEnergyBurst;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_bResistEffectFreeze;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_bResistEffectStop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_bResistEffectMagnet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_bResistEffectStun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_bResistEffectSneeze;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_bResistEffectHoney;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_bResistEffectCloud;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_bResistEffectDischarge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_bResistEffectBurn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	bool m_bResistEffectPoleSpinTurn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	ETresDropItemID m_DropPrize1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_NumDropPrize1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	ETresDropItemID m_DropPrize2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_NumDropPrize2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	ETresDropItemID m_DropItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_DropItemRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	ETresDropItemID m_DropItemID2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_DropItemRate2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	ETresDropItemID m_DropItemID3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrBaseParamDataTable")
	int m_DropItemRate3;
};

USTRUCT(BlueprintType)
struct FTresAttackDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	float m_Power;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	TEnumAsByte<ETresDamageKind> m_DamageKind;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	ETresDamageAttribute m_DamageAttribute;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	float m_DamagePowerScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	float m_DamageParabolaAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	float m_DamageMoveLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	float m_DamageBrakeParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	ETresAtkHitKnockbackType m_KnockbackType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	float m_DamageExecRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	float m_DamageEffectTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	ETresBadStatusType m_BadStatusKind;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	float m_BadStatusGenRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	float m_BadStatusEffectTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	float m_BadStatusEffectParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	ETresAtkTeamCheckType m_TeamCheckType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	int m_ReactionPowerValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	bool m_bIsScrumAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	int m_ArmorAttackPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	int m_FormPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	bool m_bIsMagicAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	bool m_bIsIvalidGuard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	bool m_bIsRapidFire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	bool m_bIsKillerAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	bool m_bIsAttractionDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	bool m_bIsCounterAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	bool m_bIsEnableWeakGuardAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	int m_ReflectLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	ETresAtkCollReflectReaction m_ReflectReaction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	float m_RevengePoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttackDataTable")
	ETresPhysDamageForceLevel m_PhysForceLv;
};

USTRUCT(BlueprintType)
struct FTresVictoryBonusDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	FName m_FlagName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	FString m_comment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresVBonusAbilityType m_InitAbilityEquipOnCriticalMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresVictoryBonusKind m_BonusSora1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresAbilityKind m_AbilitySora1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresVictoryBonusKind m_BonusSora2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresAbilityKind m_AbilitySora2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresVictoryBonusKind m_BonusDONALD1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresAbilityKind m_AbilityDONALD1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresVictoryBonusKind m_BonusGOOFY1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresAbilityKind m_AbilityGOOFY1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresVictoryBonusKind m_BonusHERCULES1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresAbilityKind m_AbilityHERCULES1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresVictoryBonusKind m_BonusWOODY1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresAbilityKind m_AbilityWOODY1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresVictoryBonusKind m_BonusBUZZ1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresAbilityKind m_AbilityBUZZ1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresVictoryBonusKind m_BonusRAPUNZEL1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresAbilityKind m_AbilityRAPUNZEL1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresVictoryBonusKind m_BonusFLYNN1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresAbilityKind m_AbilityFLYNN1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresVictoryBonusKind m_BonusSULLEY1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresAbilityKind m_AbilitySULLEY1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresVictoryBonusKind m_BonusMIKE1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresAbilityKind m_AbilityMIKE1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresVictoryBonusKind m_BonusMARSHMALLOW1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresAbilityKind m_AbilityMARSHMALLOW1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresVictoryBonusKind m_BonusBAYMAX1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresAbilityKind m_AbilityBAYMAX1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresVictoryBonusKind m_BonusJACK_SPARROW1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	ETresAbilityKind m_AbilityJACK_SPARROW1;
};

USTRUCT(BlueprintType)
struct FSQEX_AttachEffectNotifyDataToDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	bool bUseCommonAttachData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	int GroupID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	TEnumAsByte<ESQEX_ATTACH_OBJECT_NAME> AttachType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	FName SocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	TArray<class UParticleSystem*> AttachDatas;
};

USTRUCT(BlueprintType)
struct FSQEX_AttachObjectData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	TEnumAsByte<ESQEX_ATTACH_OBJECT_NAME> AttachType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	FName ObjectSearchSocketName;
};

USTRUCT(BlueprintType)
struct FSQEX_AttachEffectData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	int GroupID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	bool bCheckEndGroupID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	int EndGroupID = -2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	class UParticleSystem* AttachEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	FName CustomAttachName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	bool UseAttachObjectData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	FSQEX_AttachObjectData AttachObjectData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	bool bUseAreaEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	TEnumAsByte<ETresAreaCustonEffectsType> AreaEffectType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	bool bNoCleanupTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	FGuid DataGuid;
};

USTRUCT(BlueprintType)
struct FSQEX_StructParticleAttachData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	TEnumAsByte<ESQEX_ATTACH_THEMES> AttachThemes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	bool bUseCommonEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	TArray<FSQEX_AttachEffectData> EffectDataList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	int PlayNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	TEnumAsByte<ESQEX_CHANGE_ANIMATION_TYPE> WhenChangeAnimationType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	TEnumAsByte<ESQEX_ATTACH_EFFECT_END_TYPE> AttachEffectEndType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	float FadeIn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	float FadeOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	float StartDelayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	float EndDelayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	bool ToAttach = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	bool DetachAtEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	bool bAbsoluteLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	bool bAbsoluteRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	bool bAbsoluteScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	bool bUseCameraPositon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	float FieldOfView = 80;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	bool bAllowMultipleInstances;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	FName SocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	FName EndSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	FVector LocationOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	FRotator RotationOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	FVector ScaleOffset = FVector(1, 1, 1);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	FVector ParticleColor = FVector(1, 1, 1);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	float ParticleAlpha = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	bool bOnCastShadow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	bool bTakeoverAttachObjectVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	FGuid DataGuid;
};

USTRUCT(BlueprintType)
struct FSQEX_AttachEffectNotifyDataToMetaAttachData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	TEnumAsByte<ESQEX_ATTACH_OBJECT_NAME> AttachType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	FName SocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	TArray<FSQEX_StructParticleAttachData> MetaAttachData;
};

USTRUCT(BlueprintType)
struct FTresRandomVoice
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayVoice")
	class USoundBase* Voice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayVoice")
	int RandomWeights = 100;
};