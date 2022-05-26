// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Components/SkinnedMeshComponent.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
//#include "TresLevelEntitySequenceCondition.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneControllers/AnimNode_ModifyBone.h"
#include "BoneContainer.h"
#include "Animation/AnimSingleNodeInstanceProxy.h"
#include "Engine/CollisionProfile.h"
#include "BonamikRt_StructsAndEnums.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "UObject/AssetPtr.h"
#include "Engine/Texture2D.h"
#include "EngineData.h"
#include "TresFieldVoice.h"
#include "TresAnimInstance.h"
#include "TresAnimInstanceProxy.h"
#include "TresUIActor.h"
#include "TresUIDataAssetStatus.h"
#include "TresGame.generated.h"

class UTresLockonTargetComponent;
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------
UENUM(BlueprintType)
enum class ETresProjectileHomingType : uint8
{
	NORMAL UMETA(DisplayName = "Normal"),
	IGNORE_Z UMETA(DisplayName = "Ignore Z"),
	PITCH_YAW UMETA(DisplayName = "Pitch Yaw"),
	_MAX UMETA(Hidden),
	ETresProjectileHomingType_MAX
};

UENUM(BlueprintType)
enum class ETresSavePointDispType : uint8
{
	NORMAL UMETA(DisplayName = "Normal"),
	DISABLE UMETA(DisplayName = "Disable"),
	DESTROY UMETA(DisplayName = "Destroy"),
	_MAX UMETA(Hidden),
	ETresSavePointDispType_MAX
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
	TPDF_LV UMETA(DisplayName = "LV"),
	TPDF_LV01 UMETA(DisplayName = "LV 01"),
	TPDF_LV02 UMETA(DisplayName = "LV 02"),
	TPDF_LV03 UMETA(DisplayName = "LV 03"),
	_TPDF_LV_MAX UMETA(Hidden),
	ETresPhysDamageForceLevel_MAX
};

UENUM(BlueprintType)
enum class ETresBadStatusType : uint8
{
	TRES_BADSTAT_NONE UMETA(DisplayName = "None"),
	TRES_BADSTAT_DEATH UMETA(DisplayName = "Death"),
	TRES_BADSTAT_CATCH UMETA(DisplayName = "Catch"),
	TRES_BADSTAT_DRILL_BIND UMETA(DisplayName = "Drill Bind"),
	TRES_BADSTAT_YO_BIND UMETA(DisplayName = "Yo Bind"),
	TRES_BADSTAT_RALPH_BIND UMETA(DisplayName = "Ralph Bind"),
	TRES_BADSTAT_ENERGYBURST UMETA(DisplayName = "Energy Burst"),
	TRES_BADSTAT_FREEZE UMETA(DisplayName = "Freeze"),
	TRES_BADSTAT_STOP UMETA(DisplayName = "Stop"),
	TRES_BADSTAT_MAGNET UMETA(DisplayName = "Magnet"),
	TRES_BADSTAT_DRAIN UMETA(DisplayName = "Drain"),
	TRES_BADSTAT_ASPIR UMETA(DisplayName = "Aspir"),
	TRES_BADSTAT_STUN UMETA(DisplayName = "Stun"),
	TRES_BADSTAT_SNEEZE UMETA(DisplayName = "Sneeze"),
	TRES_BADSTAT_HONEY UMETA(DisplayName = "Honey"),
	TRES_BADSTAT_CLOUD UMETA(DisplayName = "Cloud"),
	TRES_BADSTAT_DISCHARGE UMETA(DisplayName = "Discharge"),
	TRES_BADSTAT_BURN UMETA(DisplayName = "Burn"),
	TRES_BADSTAT_HP_BREAK UMETA(DisplayName = "HP Break"),
	TRES_BADSTAT_TIME_BREAK UMETA(DisplayName = "Time Break"),
	TRES_BADSTAT_MAX
};

UENUM(BlueprintType)
enum class ETresAtkHitKnockbackType : uint8
{
	TRES_AHKBT_NORMAL UMETA(DisplayName = "Normal"),
	TRES_AHKBT_VELOCITY UMETA(DisplayName = "Velocity"),
	TRES_AHKBT_ATK_COLLISION UMETA(DisplayName = "Atk Collision"),
	TRES_AHKBT_INSTIGATOR_PAWN UMETA(DisplayName = "Instigator Pawn"),
	TRES_AHKBT_IMPACT_LOCATION UMETA(DisplayName = "Impact Location"),
	SPECIFIC UMETA(DisplayName = "Specific"),
	_TRES_AHKBT_MAX UMETA(Hidden),
	ETresAtkHitKnockbackType_MAX
};

UENUM(BlueprintType)
enum class ETresDamageAttribute : uint8
{
	TRES_DMG_ATTR_PHYSICAL UMETA(DisplayName = "Physical"),
	TRES_DMG_ATTR_FIRE UMETA(DisplayName = "Fire"),
	TRES_DMG_ATTR_BLIZZARD UMETA(DisplayName = "Blizzard"),
	TRES_DMG_ATTR_THUNDER UMETA(DisplayName = "Thunder"),
	TRES_DMG_ATTR_WATER UMETA(DisplayName = "Water"),
	TRES_DMG_ATTR_AERO UMETA(DisplayName = "Aero"),
	TRES_DMG_ATTR_DARK UMETA(DisplayName = "Dark"),
	TRES_DMG_ATTR_NOTYPE UMETA(DisplayName = "No Type"),
	TRES_DMG_ATTR_MAX
};

UENUM(BlueprintType)
enum ETresDamageKind
{
	TRES_DMG_KIND_NONE = 0 UMETA(DisplayName = "None"),
	TRES_DMG_KIND_SMALL = 1 UMETA(DisplayName = "Dark"),
	TRES_DMG_KIND_BLOW = 2 UMETA(DisplayName = "Blow"),
	TRES_DMG_KIND_SIDESPIN = 3 UMETA(DisplayName = "Side Spin"),
	TRES_DMG_KIND_VERTICALROLL = 4 UMETA(DisplayName = "Vertical Roll"),
	TRES_DMG_KIND_BILLIARD = 5 UMETA(DisplayName = "Billiard"),
	TRES_DMG_KIND_FLOAT = 6 UMETA(DisplayName = "Float"),
	TRES_DMG_KIND_TOSS = 7 UMETA(DisplayName = "Toss"),
	TRES_DMG_KIND_LAUNCH = 8 UMETA(DisplayName = "Launch"),
	TRES_DMG_KIND_BEAT = 9 UMETA(DisplayName = "Beat"),
	TRES_DMG_KIND_PARABOLA = 10 UMETA(DisplayName = "Parabola"),
	TRES_DMG_KIND_PARABOLA_NO_RECOVERY = 11 UMETA(DisplayName = "Parabola No Recovery"),
	TRES_DMG_KIND_WITHOUT = 12 UMETA(DisplayName = "Without"),
	TRES_DMG_KIND_RECOVER = 13 UMETA(DisplayName = "Recover"),
	TRES_DMG_KIND_KILL = 14 UMETA(DisplayName = "Kill"),
	TRES_DMG_KIND_STOP = 15 UMETA(DisplayName = "Stop"),
	TRES_DMG_KIND_MAGNET = 16 UMETA(DisplayName = "Magnet"),
	TRES_DMG_KIND_CATCH = 17 UMETA(DisplayName = "Catch"),
	TRES_DMG_KIND_BIND = 18 UMETA(DisplayName = "Bind"),
	TRES_DMG_KIND_SUCTION = 19 UMETA(DisplayName = "Suction"),
	TRES_DMG_KIND_EAT = 20 UMETA(DisplayName = "Eat"),
	TRES_DMG_KIND_SHIELD_BLOW = 21 UMETA(DisplayName = "Shield Blow"),
	TRES_DMG_KIND_SHIELD_TOSS = 22 UMETA(DisplayName = "Shield Toss"),
	TRES_DMG_KIND_FREE_FLOW = 23 UMETA(DisplayName = "Free Flow"),
	TRES_DMG_KIND_SHOOTING_RIDE = 24 UMETA(DisplayName = "Shooting Ride"),
	TRES_DMG_KIND_MERRYGOROUND = 25 UMETA(DisplayName = "Merry Go Round"),
	TRES_DMG_KIND_ZEROGRAVITY = 26 UMETA(DisplayName = "Zero Gravity"),
	TRES_DMG_KIND_SWALLOW = 27 UMETA(DisplayName = "Swallow"),
	TRES_DMG_KIND_UNIQUE = 28 UMETA(DisplayName = "Unique"),
	TRES_DMG_KIND_SWIRL_UP = 29 UMETA(DisplayName = "Swirl Up"),
	TRES_DMG_KIND_POLE_SPIN = 30 UMETA(DisplayName = "Pole Spin"),
	TRES_DMG_KIND_POLE_SWING = 31 UMETA(DisplayName = "Pole Spin"),
	TRES_DMG_KIND_RALPH_BIND = 32 UMETA(DisplayName = "Ralph Bind"),
	TRES_DMG_KIND_VIKINGSHIP_FRONT = 33 UMETA(DisplayName = "Viking Ship Front"),
	TRES_DMG_KIND_VIKINGSHIP_BACK = 34 UMETA(DisplayName = "Viking Ship Back"),
	TRES_DMG_KIND_DRILL_BIND = 35 UMETA(DisplayName = "Drill Bind"),
	TRES_DMG_KIND_YO_BIND = 36 UMETA(DisplayName = "Yo Bind"),
	TRES_DMG_KIND_EX071_BIND = 37 UMETA(DisplayName = "Kracken Tentacle Bind (EX071)"),
	TRES_DMG_KIND_GOOFY_TORNADO = 38 UMETA(DisplayName = "Goofy Tornado"),
	TRES_DMG_KIND_ENERGYBURST_ATTRACT = 39 UMETA(DisplayName = "Energy Burst Attract"),
	TRES_DMG_KIND_EX301_BIND = 40 UMETA(DisplayName = "Xehanort Bind (EX301)"),
	TRES_DMG_KIND_PUDDING_EAT = 41 UMETA(DisplayName = "Pudding Eat"),
	TRES_DMG_KIND_MAX = 42 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresShootFlowKind
{
	TRES_SF_KIND_NONE = 0 UMETA(DisplayName = "None"),
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
	TRES_SF_KIND_FOCUSASPIR = 36 UMETA(DisplayName = "Focus Aspir"),
	TRES_SF_KIND_ATHLETICFLOW = 37 UMETA(DisplayName = "Athletic Flow"),
	TRES_SF_KIND_RAINBOWSHOWER = 38 UMETA(DisplayName = "Rainbow Shower"),
	TRES_SF_KIND_SHINING = 39 UMETA(DisplayName = "Shining"),
	TRES_SF_KIND_SHOOTFLOW40 = 40,
	TRES_SF_KIND_SHOOTFLOW41 = 41,
	TRES_SF_KIND_SHOOTFLOW42 = 42,
	TRES_SF_KIND_DARKFIRAGA = 43 UMETA(DisplayName = "Dark Firaga"),
	TRES_SF_KIND_SHOOTFLOW44 = 44,
	TRES_SF_KIND_END = 45 UMETA(DisplayName = "End"),
	TRES_SF_KIND_MAX = 46 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresChrUniqueID : uint8
{
	TRES_CHR_UID_UNKNOWN UMETA(DisplayName = "Unknown"),
	TRES_CHR_UID_SORA UMETA(DisplayName = "Sora"),
	TRES_CHR_UID_RIKU UMETA(DisplayName = "Riku"),
	TRES_CHR_UID_KAIRI UMETA(DisplayName = "Kairi"),
	TRES_CHR_UID_TERRA UMETA(DisplayName = "Terra"),
	TRES_CHR_UID_VENTUS UMETA(DisplayName = "Ventus"),
	TRES_CHR_UID_AQUA UMETA(DisplayName = "Aqua"),
	TRES_CHR_UID_ROXAS UMETA(DisplayName = "Roxas"),
	TRES_CHR_UID_LEA UMETA(DisplayName = "Lea"),
	TRES_CHR_UID_XION UMETA(DisplayName = "Xion"),
	TRES_CHR_UID_MICKEY UMETA(DisplayName = "Mickey"),
	TRES_CHR_UID_DONALD UMETA(DisplayName = "Donald"),
	TRES_CHR_UID_GOOFY UMETA(DisplayName = "Goofy"),
	TRES_CHR_UID_JACK_SPARROW UMETA(DisplayName = "Jack Sparrow"),
	TRES_CHR_UID_WOODY UMETA(DisplayName = "Woody"),
	TRES_CHR_UID_BUZZ UMETA(DisplayName = "Buzz"),
	TRES_CHR_UID_HERCULES UMETA(DisplayName = "Hercules"),
	TRES_CHR_UID_RAPUNZEL UMETA(DisplayName = "Rapunzel"),
	TRES_CHR_UID_FLYNN UMETA(DisplayName = "Flynn"),
	TRES_CHR_UID_SULLEY UMETA(DisplayName = "Sulley"),
	TRES_CHR_UID_MIKE UMETA(DisplayName = "Mike"),
	TRES_CHR_UID_BOO UMETA(DisplayName = "Boo"),
	TRES_CHR_UID_MARSHMALLOW UMETA(DisplayName = "Marshmallow"),
	TRES_CHR_UID_BAYMAX UMETA(DisplayName = "Baymax"),
	TRES_CHR_UID_VEHICLE_GIGAS_POWER UMETA(DisplayName = "Vehicle Gigas Power"),
	TRES_CHR_UID_VEHICLE_GIGAS_POWER_GAME UMETA(DisplayName = "Vehicle Gigas Power Game"),
	TRES_CHR_UID_VEHICLE_GIGAS_POWER_ACE UMETA(DisplayName = "Vehicle Gigas Power Ace"),
	TRES_CHR_UID_VEHICLE_GIGAS_SPEED UMETA(DisplayName = "Vehicle Gigas Speed"),
	TRES_CHR_UID_VEHICLE_GIGAS_SPEED_GAME UMETA(DisplayName = "Vehicle Gigas Speed Game"),
	TRES_CHR_UID_VEHICLE_GIGAS_SPEED_ACE UMETA(DisplayName = "Vehicle Gigas Speed Ace"),
	TRES_CHR_UID_VEHICLE_GIGAS_LONG UMETA(DisplayName = "Vehicle Gigas Long"),
	TRES_CHR_UID_VEHICLE_GIGAS_LONG_GAME UMETA(DisplayName = "Vehicle Gigas Long Game"),
	TRES_CHR_UID_VEHICLE_GIGAS_LONG_ACE UMETA(DisplayName = "Vehicle Gigas Long Ace"),
	TRES_CHR_UID_VEHICLE_SPECIAL_SHIP UMETA(DisplayName = "Vehicle Special Ship"),
	TRES_CHR_UID_VEHICLE_BLACK_PEARL UMETA(DisplayName = "Vehicle Black Pearl"),
	TRES_CHR_UID_VEHICLE_SMALLAIRPLANE UMETA(DisplayName = "Vehicle Small Airplane"),
	TRES_CHR_UID_FRD_RIKU UMETA(DisplayName = "FRD Riku"),
	TRES_CHR_UID_FRD_AQUA UMETA(DisplayName = "FRD Aqua"),
	TRES_CHR_UID_ENEMY UMETA(DisplayName = "Enemy"),
	TRES_CHR_UID_FRD_SORA UMETA(DisplayName = "FRD Sora"),
	TRES_CHR_UID_MAXn
};

UENUM(BlueprintType)
enum class ETresEnemyUniqueID : uint8
{
	TRES_ENEMY_UID_UNKNOWN = 0 UMETA(DisplayName = "Unknown"),
	TRES_ENEMY_UID_EX001 = 1 UMETA(DisplayName = "Shadow (EX001)"),
	TRES_ENEMY_UID_EX003 = 2 UMETA(DisplayName = "Flame Core (EX003)"),
	TRES_ENEMY_UID_EX004 = 3 UMETA(DisplayName = "Water Core (EX004)"),
	TRES_ENEMY_UID_EX005 = 4 UMETA(DisplayName = "Earth Core (EX005)"),
	TRES_ENEMY_UID_EX016 = 5 UMETA(DisplayName = "Neoshadow (EX016)"),
	TRES_ENEMY_UID_EX081 = 6 UMETA(DisplayName = "Fluttering (EX081)"),
	TRES_ENEMY_UID_DW401 = 7 UMETA(DisplayName = "Demon Tide (DW401)"),
	TRES_ENEMY_UID_DW401_s0 = 8 UMETA(DisplayName = "Demon Tide (DW401S0)"),
	TRES_ENEMY_UID_DW401_s1 = 9 UMETA(DisplayName = "Demon Tide (DW401S1)"),
	TRES_ENEMY_UID_DW402 = 10 UMETA(DisplayName = "Demon Tower (DW402)"),
	TRES_ENEMY_UID_DW402_s1 = 11 UMETA(DisplayName = "Demon Tower (DW402S1)"),
	TRES_ENEMY_UID_DW405 = 12,
	TRES_ENEMY_UID_DW407 = 13 UMETA(DisplayName = "Darkside (DW407)"),
	TRES_ENEMY_UID_EX002 = 14 UMETA(DisplayName = "Large Body (EX002)"),
	TRES_ENEMY_UID_EX006 = 15 UMETA(DisplayName = "Satyr (EX006)"),
	TRES_ENEMY_UID_EX007 = 16 UMETA(DisplayName = "Bizarre Archer (EX007)"),
	TRES_ENEMY_UID_EX009 = 17 UMETA(DisplayName = "Soldier (EX009)"),
	TRES_ENEMY_UID_EX010 = 18 UMETA(DisplayName = "Air Soldier (EX010)"),
	TRES_ENEMY_UID_EX011 = 19 UMETA(DisplayName = "Chaos Carriage (EX011)"),
	TRES_ENEMY_UID_EX012 = 20 UMETA(DisplayName = "Chief Puff/Puffball Stack (EX012)"),
	TRES_ENEMY_UID_EX013 = 21 UMETA(DisplayName = "Chief Puff (EX013)"),
	TRES_ENEMY_UID_EX014 = 22 UMETA(DisplayName = "Puffball (EX014)"),
	TRES_ENEMY_UID_EX015 = 23 UMETA(DisplayName = "Toy Trooper (EX015)"),
	TRES_ENEMY_UID_EX017 = 24 UMETA(DisplayName = "Vermilion (Samba EX017)"),
	TRES_ENEMY_UID_EX036 = 25 UMETA(DisplayName = "Marine Rumba (EX036)"),
	TRES_ENEMY_UID_EX037 = 26 UMETA(DisplayName = "Gold Beat (EX037)"),
	TRES_ENEMY_UID_EX038 = 27 UMETA(DisplayName = "Malachite Bolero (EX038)"),
	TRES_ENEMY_UID_EX018 = 28 UMETA(DisplayName = "Gigas (EX018)"),
	TRES_ENEMY_UID_EX032 = 29 UMETA(DisplayName = "Gigas (EX032)"),
	TRES_ENEMY_UID_EX033 = 30 UMETA(DisplayName = "Gigas (EX033)"),
	TRES_ENEMY_UID_EX020 = 31 UMETA(DisplayName = "Marionette (EX020)"),
	TRES_ENEMY_UID_EX021 = 32 UMETA(DisplayName = "Raging Vulture (EX021)"),
	TRES_ENEMY_UID_EX026 = 33 UMETA(DisplayName = "Vaporfly (EX026)"),
	TRES_ENEMY_UID_EX027 = 34 UMETA(DisplayName = "Lightning Angler (EX027)"),
	TRES_ENEMY_UID_EX028 = 35 UMETA(DisplayName = "Sea Sprite (EX028)"),
	TRES_ENEMY_UID_EX035 = 36 UMETA(DisplayName = "Powerwild (EX035)"),
	TRES_ENEMY_UID_EX039 = 37 UMETA(DisplayName = "Parasol Beauty (EX039)"),
	TRES_ENEMY_UID_EX041 = 38 UMETA(DisplayName = "Sandworm (EX041)"),
	TRES_ENEMY_UID_EX042 = 39 UMETA(DisplayName = "Anchor Raider (EX042)"),
	TRES_ENEMY_UID_EX043 = 40 UMETA(DisplayName = "Dark Inferno (EX043)"),
	TRES_ENEMY_UID_EX044 = 41 UMETA(DisplayName = "Pole Cannon (EX044)"),
	TRES_ENEMY_UID_EX045 = 42 UMETA(DisplayName = "Winterhorn (EX045)"),
	TRES_ENEMY_UID_EX046 = 43 UMETA(DisplayName = "Frost Serpent (EX046)"),
	TRES_ENEMY_UID_EX047 = 44 UMETA(DisplayName = "Lich (EX047)"),
	TRES_ENEMY_UID_EX048 = 45 UMETA(DisplayName = "Tireblade (EX048)"),
	TRES_ENEMY_UID_EX049 = 46 UMETA(DisplayName = "Cherry Flan (EX049)"),
	TRES_ENEMY_UID_EX050 = 47 UMETA(DisplayName = "Strawberry Flan (EX050)"),
	TRES_ENEMY_UID_EX051 = 48 UMETA(DisplayName = "Orange Flan (EX051)"),
	TRES_ENEMY_UID_EX052 = 49 UMETA(DisplayName = "Banana Flan (EX052)"),
	TRES_ENEMY_UID_EX053 = 50 UMETA(DisplayName = "Grape Flan (EX053)"),
	TRES_ENEMY_UID_EX054 = 51 UMETA(DisplayName = "Catastrochorus (EX054)"),
	TRES_ENEMY_UID_EX055 = 52 UMETA(DisplayName = "Honeydew Flan (EX055)"),
	TRES_ENEMY_UID_EX056 = 53 UMETA(DisplayName = "Watermelon Flan (EX056)"),
	TRES_ENEMY_UID_EX059 = 54 UMETA(DisplayName = "Rock Troll (EX059)"),
	TRES_ENEMY_UID_EX061 = 55 UMETA(DisplayName = "Popcat (EX061)"),
	TRES_ENEMY_UID_EX065 = 56 UMETA(DisplayName = "Vitality Popcat (EX065)"),
	TRES_ENEMY_UID_EX066 = 57 UMETA(DisplayName = "Magic Popcat (EX066)"),
	TRES_ENEMY_UID_EX067 = 58 UMETA(DisplayName = "Focus Popcat (EX067)"),
	TRES_ENEMY_UID_EX068 = 59 UMETA(DisplayName = "Munny Popcat (EX068)"),
	TRES_ENEMY_UID_EX073 = 60 UMETA(DisplayName = "Pogo Shovel (EX073)"),
	TRES_ENEMY_UID_EX082 = 61 UMETA(DisplayName = "Frost Serpent (Grounded) (EX082)"),
	TRES_ENEMY_UID_EX085 = 62 UMETA(DisplayName = "Gigas (BoL) (EX085)"),
	TRES_ENEMY_UID_EX086 = 63 UMETA(DisplayName = "Gigas (BoL) (EX086)"),
	TRES_ENEMY_UID_EX086_s0 = 64 UMETA(DisplayName = "Gigas (BoL) (EX086S0)"),
	TRES_ENEMY_UID_EX086_s1 = 65 UMETA(DisplayName = "Gigas (BoL) (EX086S1)"),
	TRES_ENEMY_UID_EX087 = 66 UMETA(DisplayName = "Gigas (BoL) (EX087)"),
	TRES_ENEMY_UID_EX093 = 67 UMETA(DisplayName = "Mechanitaur (EX093)"),
	TRES_ENEMY_UID_EX094 = 68 UMETA(DisplayName = "High Soldier (EX094)"),
	TRES_ENEMY_UID_EX095 = 69 UMETA(DisplayName = "Helmed Body (EX095)"),
	TRES_ENEMY_UID_EX101 = 70 UMETA(DisplayName = "Dusk (EX101)"),
	TRES_ENEMY_UID_EX105 = 71 UMETA(DisplayName = "Sorcerer (EX105)"),
	TRES_ENEMY_UID_EX106 = 72 UMETA(DisplayName = "Sniper (EX106)"),
	TRES_ENEMY_UID_EX107 = 73 UMETA(DisplayName = "Berserker (EX107)"),
	TRES_ENEMY_UID_EX110 = 74 UMETA(DisplayName = "Gambler (EX110)"),
	TRES_ENEMY_UID_EX113 = 75 UMETA(DisplayName = "Reaper (EX113)"),
	TRES_ENEMY_UID_EX114 = 76 UMETA(DisplayName = "Ninja (EX114)"),
	TRES_ENEMY_UID_EX201 = 77 UMETA(DisplayName = "Flood (EX201)"),
	TRES_ENEMY_UID_EX202 = 78 UMETA(DisplayName = "Flowersnake (EX202)"),
	TRES_ENEMY_UID_EX203 = 79 UMETA(DisplayName = "Spiked Turtletoad (EX203)"),
	TRES_ENEMY_UID_EX205 = 80 UMETA(DisplayName = "Turtletoad (EX205)"),
	TRES_ENEMY_UID_EX301 = 81 UMETA(DisplayName = "Xehanort (EX301)"),
	TRES_ENEMY_UID_EX302 = 82 UMETA(DisplayName = "Young Xehanort (EX302)"),
	TRES_ENEMY_UID_EX316 = 83 UMETA(DisplayName = "Ansem (EX316)"),
	TRES_ENEMY_UID_EX304 = 84 UMETA(DisplayName = "Xemnas (EX304)"),
	TRES_ENEMY_UID_EX305 = 85 UMETA(DisplayName = "Xigbar (EX305)"),
	TRES_ENEMY_UID_EX306 = 86 UMETA(DisplayName = "Saix (EX306)"),
	TRES_ENEMY_UID_EX307 = 87 UMETA(DisplayName = "Luxord (EX307)"),
	TRES_ENEMY_UID_EX308 = 88 UMETA(DisplayName = "Marluxia (EX308)"),
	TRES_ENEMY_UID_EX309 = 89 UMETA(DisplayName = "Larxene (EX309)"),
	TRES_ENEMY_UID_EX310 = 90 UMETA(DisplayName = "Xion (Hooded) (EX310)"),
	TRES_ENEMY_UID_EX311 = 91 UMETA(DisplayName = "Vanitas (EX311)"),
	TRES_ENEMY_UID_EX313 = 92 UMETA(DisplayName = "Riku Replica (EX313)"),
	TRES_ENEMY_UID_EX322 = 93 UMETA(DisplayName = "Anti-Aqua (EX322)"),
	TRES_ENEMY_UID_EX325 = 94 UMETA(DisplayName = "Terra-Xehanort (EX325)"),
	TRES_ENEMY_UID_EX326 = 95 UMETA(DisplayName = "Xehanort's Guardian (EX326)"),
	TRES_ENEMY_UID_EX701 = 96 UMETA(DisplayName = "Lump of Horror (EX701)"),
	TRES_ENEMY_UID_EX702 = 97 UMETA(DisplayName = "Lump of Horror (Form 2) (EX702)"),
	TRES_ENEMY_UID_EX703 = 98 UMETA(DisplayName = "Lump of Horror (Hand) (EX703)"),
	TRES_ENEMY_UID_EX711 = 99 UMETA(DisplayName = "King of Toys (EX711)"),
	TRES_ENEMY_UID_EX721 = 100 UMETA(DisplayName = "Grim Guardianess (EX721)"),
	TRES_ENEMY_UID_EX731 = 101 UMETA(DisplayName = "Skoll (EX731)"),
	TRES_ENEMY_UID_EX732 = 102 UMETA(DisplayName = "Wolf Head (Skoll) (EX732)"),
	TRES_ENEMY_UID_EX734 = 103,
	TRES_ENEMY_UID_EX761 = 104 UMETA(DisplayName = "Xehanort Replica (EX761)"),
	TRES_ENEMY_UID_EX047_s0 = 105 UMETA(DisplayName = "Lich (EX047S0)"),
	TRES_ENEMY_UID_EX771 = 106 UMETA(DisplayName = "Xehanort (Keyblade Armor) (EX771)"),
	TRES_ENEMY_UID_EX77101 = 107 UMETA(DisplayName = "Xehanort (Keyblade Armor) (EX77101)"),
	TRES_ENEMY_UID_EX77102 = 108 UMETA(DisplayName = "Xehanort (Keyblade Armor) (EX77102)"),
	TRES_ENEMY_UID_EX047_s1 = 109 UMETA(DisplayName = "Lich (EX047S1)"),
	TRES_ENEMY_UID_EX801 = 110 UMETA(DisplayName = "Supreme Smasher (EX801)"),
	TRES_ENEMY_UID_EX806 = 111 UMETA(DisplayName = "Beasts & Bugs (EX806)"),
	TRES_ENEMY_UID_EX816 = 112 UMETA(DisplayName = "Angelic Amber (EX816)"),
	TRES_ENEMY_UID_EX830 = 113 UMETA(DisplayName = "Patchwork Animal (Bear) (EX830)"),
	TRES_ENEMY_UID_EX831 = 114 UMETA(DisplayName = "Patchwork Animal (Lion) (EX831)"),
	TRES_ENEMY_UID_EX832 = 115 UMETA(DisplayName = "Air Droid (EX832)"),
	TRES_ENEMY_UID_EX833 = 116 UMETA(DisplayName = "Air Droid (EX833)"),
	TRES_ENEMY_UID_EX834 = 117 UMETA(DisplayName = "Air Droid (EX834)"),
	TRES_ENEMY_UID_EX840 = 118 UMETA(DisplayName = "Bouncy Pet (Pig) (EX840)"),
	TRES_ENEMY_UID_EX841 = 119 UMETA(DisplayName = "Bouncy Pet (Dog) (EX841)"),
	TRES_ENEMY_UID_EX842 = 120 UMETA(DisplayName = "Bouncy Pet (Cat) (EX842)"),
	TRES_ENEMY_UID_EX843 = 121 UMETA(DisplayName = "Bouncy Pet (Elephant) (EX843)"),
	TRES_ENEMY_UID_EX844 = 122 UMETA(DisplayName = "Bouncy Pet (Cow) (EX844)"),
	TRES_ENEMY_UID_EX845 = 123 UMETA(DisplayName = "Bouncy Pet (Frog) (EX845)"),
	TRES_ENEMY_UID_BX059 = 124 UMETA(DisplayName = "Metal Troll (BX059)"),
	TRES_ENEMY_UID_BX901 = 125 UMETA(DisplayName = "Dark Baymax (BX901)"),
	TRES_ENEMY_UID_EX047_s2 = 126 UMETA(DisplayName = "Lich (EX047S2)"),
	TRES_ENEMY_UID_BX903 = 127 UMETA(DisplayName = "Darkubes (Disc) (BX903)"),
	TRES_ENEMY_UID_CA901 = 128 UMETA(DisplayName = "Davy Jones (CA901)"),
	TRES_ENEMY_UID_FZ903 = 129 UMETA(DisplayName = "Marshmallow (FZ903)"),
	TRES_ENEMY_UID_HE001 = 130 UMETA(DisplayName = "Rock Titan (HE001)"),
	TRES_ENEMY_UID_HE902 = 131 UMETA(DisplayName = "Ice Titan (HE902)"),
	TRES_ENEMY_UID_HE903 = 132 UMETA(DisplayName = "Tornado Titan (HE903)"),
	TRES_ENEMY_UID_HE904 = 133 UMETA(DisplayName = "Lava Titan (HE904)"),
	TRES_ENEMY_UID_CA401 = 134 UMETA(DisplayName = "Ship Sails (CA401)"),
	TRES_ENEMY_UID_CA402 = 135 UMETA(DisplayName = "Ship Sails (CA402)"),
	TRES_ENEMY_UID_CA403 = 136 UMETA(DisplayName = "Ship Sails (CA403)"),
	TRES_ENEMY_UID_CA404 = 137 UMETA(DisplayName = "Ship Sails (CA404)"),
	TRES_ENEMY_UID_CA405 = 138 UMETA(DisplayName = "Ship Sails (CA405)"),
	TRES_ENEMY_UID_EX071 = 139 UMETA(DisplayName = "Kraken Tentacle (EX071)"),
	TRES_ENEMY_UID_EX072 = 140 UMETA(DisplayName = "Spear Lizard (EX072)"),
	TRES_ENEMY_UID_EX407 = 141 UMETA(DisplayName = "Darkside (EX407)"),
	TRES_ENEMY_UID_EX064 = 142 UMETA(DisplayName = "Kraken Tentacle (EX064)"),
	TRES_ENEMY_UID_EX047_s3 = 143 UMETA(DisplayName = "Lich (EX047S3)"),
	TRES_ENEMY_UID_EX047_s4 = 144 UMETA(DisplayName = "Lich (EX047S4)"),
	TRES_ENEMY_UID_EX409 = 145 UMETA(DisplayName = "Darkside (ReMind) (EX409)"),
	TRES_ENEMY_UID_EX751 = 146 UMETA(DisplayName = "Dark Inferno X (EX751)"),
	TRES_ENEMY_UID_EX781 = 147 UMETA(DisplayName = "Yozora (EX781)"),
	TRES_ENEMY_UID_MAX = 148 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresPlayerUniqueID : uint8
{
	SORA_KH3 UMETA(DisplayName = "Sora KH3"),
	SORA_KH3CA UMETA(DisplayName = "Sora KH3: Caribbean"),
	SORA_KH3MI UMETA(DisplayName = "Sora KH3: Monsters Inc"),
	SORA_KH3TS UMETA(DisplayName = "Sora KH3: Toy Story"),
	SORA_KH3BX UMETA(DisplayName = "Sora KH3: Baymax"),
	SORA_KH3EW UMETA(DisplayName = "Sora KH3: Final World"),
	SORA_KH2 UMETA(DisplayName = "Sora KH2"),
	SORA_KH1 UMETA(DisplayName = "Sora KH1"),
	RIKU_KH3 UMETA(DisplayName = "Riku KH3"),
	RIKU_KH29 UMETA(DisplayName = "Riku KH2.9"),
	AQUA_KH3 UMETA(DisplayName = "Aqua KH3"),
	SORA_KH3TUTO UMETA(DisplayName = "Sora KH3: Tutorial"),
	SORA_KH3TS_GAME UMETA(DisplayName = "Sora KH3: Toy Story Game"),
	SORA_KH3PO UMETA(DisplayName = "Sora KH3: Pooh"),
	UNKNOWN UMETA(DisplayName = "Unknown"),
	SORA_KH3DL UMETA(DisplayName = "Sora KH3: Remind"),
	KAIRI_KH3 UMETA(DisplayName = "Kairi KH3"),
	ROXAS_KH3 UMETA(DisplayName = "Roxas KH3"),
	MICKEY_KH3MiRx UMETA(DisplayName = "Mickey KH3: Remind"),
	SORA_KH3SoKc UMETA(DisplayName = "Sora KH3: SoKc"),
	_MAX UMETA(Hidden),
	ETresPlayerUniqueID_MAX
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
	TRES_WEAR_FORM_NORMAL = 0 UMETA(DisplayName = "Normal"),
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
	WEP_AQUA00 = 61 UMETA(DisplayName = "Aqua (Master's Defender)"),
	WEP_AQUA01 = 62,
	WEP_AQUA02 = 63,
	WEP_AQUA03 = 64,
	WEP_MICKEY00 = 65,
	WEP_MICKEY01 = 66 UMETA(DisplayName = "Mickey (Kingdom Key D)"),
	WEP_MICKEY02 = 67 UMETA(DisplayName = "Mickey (Star Cluster)"),
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
	WEP_RIKU00 = 79 UMETA(DisplayName = "Riku (Braveheart)"),
	WEP_RIKU01 = 80 UMETA(DisplayName = "Riku (Way to the Dawn)"),
	WEP_RIKU02 = 81,
	WEP_RIKU03 = 82,
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
enum class ETresWeaponType : uint8
{
	TRES_WEAPON_TYPE_NONE = 0 UMETA(DisplayName = "None"),
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
	TSID_STATE_EMPTY = 0 UMETA(DisplayName = "Empty"),
	TSID_STATE_IDLE = 1 UMETA(DisplayName = "Idle"),
	TSID_STATE_RUN = 2 UMETA(DisplayName = "Run"),
	TSID_STATE_JUMP = 3 UMETA(DisplayName = "Jump"),
	TSID_STATE_GLIDE = 4 UMETA(DisplayName = "Glide"),
	TSID_STATE_FLOATING = 5 UMETA(DisplayName = "Floating"),
	TSID_STATE_DANGLE = 6 UMETA(DisplayName = "Dangle"),
	TSID_STATE_CLIMBING = 7 UMETA(DisplayName = "Climbing"),
	TSID_STATE_WALLRUN = 8 UMETA(DisplayName = "Wall Run"),
	TSID_STATE_HOPPING = 9 UMETA(DisplayName = "Hopping"),
	TSID_STATE_SLOPESLIDE = 10 UMETA(DisplayName = "Slide Slide"),
	TSID_STATE_SWAYING = 11 UMETA(DisplayName = "Swaying"),
	TSID_STATE_ATTACK = 12 UMETA(DisplayName = "Attack"),
	TSID_STATE_ATTACK_AQ = 13 UMETA(DisplayName = "Attack AQ"),
	TSID_STATE_ATTACK_RI = 14 UMETA(DisplayName = "Attack RI"),
	TSID_STATE_GUARD = 15 UMETA(DisplayName = "Guard"),
	TSID_STATE_DODGEROLL = 16 UMETA(DisplayName = "Dodge Roll"),
	TSID_STATE_RISKDODGE = 17 UMETA(DisplayName = "Risk Dodge"),
	TSID_STATE_FIREMAGIC = 18 UMETA(DisplayName = "Fire Magic"),
	TSID_STATE_DAMAGE = 19 UMETA(DisplayName = "Damage"),
	TSID_STATE_AIR_SLIDE = 20 UMETA(DisplayName = "Air Slide"),
	TSID_STATE_SUPER_SLIDE = 21 UMETA(DisplayName = "Super Slide"),
	TSID_STATE_RAIL_SLIDE = 22 UMETA(DisplayName = "Rail Slide"),
	TSID_STATE_WALL_KICK = 23 UMETA(DisplayName = "Wall Kick"),
	TSID_STATE_POLE_TURN = 24 UMETA(DisplayName = "Pole Turn"),
	TSID_STATE_ENEMY_FLOW = 25 UMETA(DisplayName = "Enemy Flow"),
	TSID_STATE_AF_ROLLER_COASTER = 26 UMETA(DisplayName = "AF: Roller Coaster"),
	TSID_STATE_AF_VIKING_SHIP = 27 UMETA(DisplayName = "AF: Viking Ship"),
	TSID_STATE_DM_SIMBA = 28 UMETA(DisplayName = "DM: Simba"),
	TSID_STATE_FRIENDATTACK = 29 UMETA(DisplayName = "Friend Attack"),
	TSID_STATE_FR_SHIELD_GUARDIAN = 30 UMETA(DisplayName = "FR: Shield Guardian"),
	TSID_STATE_STYLECHANGE = 31 UMETA(DisplayName = "Style Change"),
	TSID_STATE_WEAPONCHANGE = 32 UMETA(DisplayName = "Weapon Change"),
	TSID_STATE_STYLEFINISH = 33 UMETA(DisplayName = "Style Finish"),
	TSID_STATE_STYLEFINISH_DR = 34 UMETA(DisplayName = "Style Finish: DR"),
	TSID_STATE_STYLEFINISH_SK = 35 UMETA(DisplayName = "Style Finish: SK"),
	TSID_STATE_STYLEFINISH_GM = 36 UMETA(DisplayName = "Style Finish: GM"),
	TSID_STATE_STYLEFINISH_WA = 37 UMETA(DisplayName = "Style Finish: WA"),
	TSID_STATE_STYLEFINISH_SH = 38 UMETA(DisplayName = "Style Finish: SH"),
	TSID_STATE_STYLEFINISH_FL = 39 UMETA(DisplayName = "Style Finish: FL"),
	TSID_STATE_SHOOTERMODE = 40 UMETA(DisplayName = "Shooter Mode"),
	TSID_STATE_SHOOTFLOW = 41 UMETA(DisplayName = "Shoot Flow"),
	TSID_STATE_ATHLETICFLOW = 42 UMETA(DisplayName = "Athletic Flow"),
	TSID_STATE_NAVLINK_JUMP = 43 UMETA(DisplayName = "Navlink Jump"),
	TSID_STATE_TURN = 44 UMETA(DisplayName = "Turn"),
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
	TSID_STATE_APPEAR = 58 UMETA(DisplayName = "Appear"),
	TSID_STATE_DIE = 59 UMETA(DisplayName = "Die"),
	TSID_STATE_VANISH_DIE = 60 UMETA(DisplayName = "Vanish Die"),
	TSID_STATE_CATCH = 61 UMETA(DisplayName = "Catch"),
	TSID_STATE_BIND = 62 UMETA(DisplayName = "Bind"),
	TSID_STATE_EMOTION = 63 UMETA(DisplayName = "Emotion"),
	TSID_STATE_DISAPPEAR = 64 UMETA(DisplayName = "Disappear"),
	TSID_STATE_FLY = 65 UMETA(DisplayName = "Fly"),
	TSID_STATE_REFLECT = 66 UMETA(DisplayName = "Reflect"),
	TSID_STATE_CINEMATIC = 67 UMETA(DisplayName = "Cinematic"),
	TSID_STATE_ACTION = 68 UMETA(DisplayName = "Action"),
	TSID_STATE_UP_DOWN = 69 UMETA(DisplayName = "Up Down"),
	TSID_STATE_FLY1 = 70,
	TSID_STATE_FLY2 = 71,
	TSID_STATE_PLAY_MOTION = 72 UMETA(DisplayName = "Play Motion"),
	TSID_STATE_AF_TEACUP = 73 UMETA(DisplayName = "AF: Teacup"),
	TSID_STATE_OPEN_TREASURE_BOX = 74 UMETA(DisplayName = "Open Treasure Box"),
	TSID_STATE_COMBO_DW = 75 UMETA(DisplayName = "Combo: DW"),
	TSID_STATE_COMBO_HM = 76 UMETA(DisplayName = "Combo: HM"),
	TSID_STATE_COMBO_YO = 77 UMETA(DisplayName = "Combo: YO"),
	TSID_STATE_COMBO_BZ = 78 UMETA(DisplayName = "Combo: BZ"),
	TSID_STATE_COMBO_DR = 79 UMETA(DisplayName = "Combo: DR"),
	TSID_STATE_COMBO_SK = 80 UMETA(DisplayName = "Combo: SK"),
	TSID_STATE_COMBO_GM = 81 UMETA(DisplayName = "Combo: GM"),
	TSID_STATE_COMBO_SW = 82 UMETA(DisplayName = "Combo: SW"),
	TSID_STATE_COMBO_WA = 83 UMETA(DisplayName = "Combo: WA"),
	TSID_STATE_COMBO_SH = 84 UMETA(DisplayName = "Combo: SH"),
	TSID_STATE_COMBO_CL = 85 UMETA(DisplayName = "Combo: CL"),
	TSID_STATE_COMBO_AN = 86 UMETA(DisplayName = "Combo: AN"),
	TSID_STATE_COMBO_HL = 87 UMETA(DisplayName = "Combo: HL"),
	TSID_STATE_COMBO_FL = 88 UMETA(DisplayName = "Combo: FL"),
	TSID_STATE_COMBO_SWIM = 89 UMETA(DisplayName = "Combo Swim"),
	TSID_STATE_COMBO_LIMIT = 90 UMETA(DisplayName = "Combo Limit"),
	TSID_STATE_COMMON_ATTACK = 91 UMETA(DisplayName = "Combo Attack"),
	TSID_STATE_FR_MOUNTCURLING = 92 UMETA(DisplayName = "FR: Mount Curling"),
	TSID_STATE_COMMON_MOVE = 93 UMETA(DisplayName = "Common Move"),
	TSID_STATE_COMMON_ACTION = 94 UMETA(DisplayName = "Common Action"),
	TSID_STATE_AF_SHOOTINGRIDE = 95 UMETA(DisplayName = "AF: Shooting Ride"),
	TSID_STATE_GIGAS = 96 UMETA(DisplayName = "Gigas"),
	TSID_STATE_GIMMICK_ATTACH = 97 UMETA(DisplayName = "Gimmick Attach"),
	TSID_STATE_AI_MOVE = 98 UMETA(DisplayName = "AI Move"),
	TSID_STATE_AI_ACTION = 99 UMETA(DisplayName = "AI Action"),
	TSID_STATE_AI_ATTACK = 100 UMETA(DisplayName = "AI Attack"),
	TSID_STATE_FR_GOOFYSHOOT = 101 UMETA(DisplayName = "FR: Goofy Shoot"),
	TSID_STATE_SWIM = 102 UMETA(DisplayName = "Swim"),
	TSID_STATE_SPECIAL_SHIP = 103 UMETA(DisplayName = "Special Ship"),
	TSID_STATE_TALK = 104 UMETA(DisplayName = "Talk"),
	TSID_STATE_SAVE_MENU = 105 UMETA(DisplayName = "Save Menu"),
	TSID_STATE_SHOP_MENU = 106 UMETA(DisplayName = "Shop Menu"),
	TSID_STATE_NAVLINK_HOPPING = 107 UMETA(DisplayName = "Navlink Hopping"),
	TSID_STATE_CHECK = 108 UMETA(DisplayName = "Check"),
	TSID_STATE_RESCUE = 109 UMETA(DisplayName = "Rescue"),
	TSID_STATE_AF_MERRYGOROUND = 110 UMETA(DisplayName = "AF: Merry Go Round"),
	TSID_STATE_USE_ITEM = 111 UMETA(DisplayName = "Use Item"),
	TSID_STATE_FR_MICKEYCHAIN = 112 UMETA(DisplayName = "FR: Mickey Chain"),
	TSID_STATE_FR_MICKEYAQUA = 113 UMETA(DisplayName = "FR: Mickey Aqua"),
	TSID_STATE_FR_SNOWCURLING = 114 UMETA(DisplayName = "FR: Snow Curling"),
	TSID_STATE_FR_SNOWCHASE = 115 UMETA(DisplayName = "FR: Snow Chase"),
	TSID_STATE_FR_ICERAILSLIDE = 116 UMETA(DisplayName = "FR: Ice Rail Slide"),
	TSID_STATE_DM_WANDANYAN = 117 UMETA(DisplayName = "DM: Wandanyan"),
	TSID_STATE_GAMEOVER = 118 UMETA(DisplayName = "Game Over"),
	TSID_STATE_SMALLAIRPLANE = 119 UMETA(DisplayName = "Small Airplane"),
	TSID_STATE_AF_WATERRIDE = 120 UMETA(DisplayName = "AF: Water Ride"),
	TSID_STATE_FR_MIKEBOWLING = 121 UMETA(DisplayName = "FR: Mike Bowling"),
	TSID_STATE_BADSTAT_STUN = 122 UMETA(DisplayName = "Bad Stat: Stun"),
	TSID_STATE_BADSTAT_FREEZE = 123 UMETA(DisplayName = "Bad Stat: Freeze"),
	TSID_STATE_BADSTAT_BURN = 124 UMETA(DisplayName = "Bad Stat: Burn"),
	TSID_STATE_WARP = 125 UMETA(DisplayName = "Warp"),
	TSID_STATE_DM_RALPH = 126 UMETA(DisplayName = "DM: Ralph"),
	TSID_STATE_DM_ARIEL = 127 UMETA(DisplayName = "DM: Ariel"),
	TSID_STATE_DM_STITCH = 128 UMETA(DisplayName = "DM: Stitch"),
	TSID_STATE_FR_JACKSPIN = 129 UMETA(DisplayName = "FR: Jack Spin"),
	TSID_STATE_FR_POWERSTRIKE = 130 UMETA(DisplayName = "FR: Power Strike"),
	TSID_STATE_FR_GIANTSOLDIER = 131 UMETA(DisplayName = "FR: Giant Solder"),
	TSID_STATE_FR_ROCKETLASER = 132 UMETA(DisplayName = "FR: Rocket Laser"),
	TSID_STATE_FR_SPINNINGHOLD = 133 UMETA(DisplayName = "FR: Spinning Hold"),
	TSID_STATE_FR_SNOWCOVERSWING = 134 UMETA(DisplayName = "FR: Snow Cover Swing"),
	TSID_STATE_FR_CALLMETEOR = 135 UMETA(DisplayName = "FR: Call Meteor"),
	TSID_STATE_FR_FLAREFORCE = 136 UMETA(DisplayName = "FR: Flare Force"),
	TSID_STATE_FR_BAYMAXRIDE = 137 UMETA(DisplayName = "FR: Baymax Ride"),
	TSID_STATE_RAILSLIDE_MI = 138 UMETA(DisplayName = "Railslide Mi"),
	TSID_STATE_AI_SLOPESLIDE = 139 UMETA(DisplayName = "AI Slope Slide"),
	TSID_STATE_HIDDEN = 140 UMETA(DisplayName = "Hidden"),
	TSID_STATE_BTL_COMICAL = 141 UMETA(DisplayName = "BTL Comical"),
	TSID_STATE_COVER = 142 UMETA(DisplayName = "Cover"),
	TSID_STATE_AI_SWIM = 143 UMETA(DisplayName = "AI Swim"),
	TSID_STATE_HOLD_CAMERA = 144 UMETA(DisplayName = "Hold Camera"),
	TSID_STATE_FESTIVAL_DANCE = 145 UMETA(DisplayName = "Festival Dance"),
	TSID_STATE_IDLE_WAIT = 146 UMETA(DisplayName = "Idle Wait"),
	TSID_STATE_SITUATION_ACTION = 147 UMETA(DisplayName = "Situation Action"),
	TSID_STATE_PLANEBOSS = 148 UMETA(DisplayName = "Plane Boss"),
	TSID_STATE_TALK_MOTION = 149 UMETA(DisplayName = "Talk Motion"),
	TSID_STATE_ONE_ACTION = 150 UMETA(DisplayName = "One Action"),
	TSID_STATE_BADSTAT_SNEEZE = 151 UMETA(DisplayName = "Bad Stat: Freeze"),
	TSID_STATE_FR_MICKEYRIKU = 152 UMETA(DisplayName = "FR: Mickey Riku"),
	TSID_STATE_WATER_PLAY = 153 UMETA(DisplayName = "Water Play"),
	TSID_STATE_FR_DONALDSORA = 154 UMETA(DisplayName = "FR: Donald Sora"),
	TSID_STATE_FR_GOOFYSORA = 155 UMETA(DisplayName = "FR: Goofy Sora"),
	TSID_STATE_ATTACK_RO = 156 UMETA(DisplayName = "Attack: RO"),
	TSID_STATE_ATTACK_KA = 157 UMETA(DisplayName = "Attack: KA"),
	TSID_STATE_ATTACK_MI = 158 UMETA(DisplayName = "Attack: MI"),
	TSID_STATE_COMBO_LF = 159 UMETA(DisplayName = "Combo: LF"),
	TSID_STATE_COMBO_DF = 160 UMETA(DisplayName = "Combo: DF"),
	TSID_STATE_COMBO_TF = 161 UMETA(DisplayName = "Combo: TF"),
	TSID_STATE_SLIDE_TURN_RO = 162 UMETA(DisplayName = "Slide Turn RO"),
	TSID_STATE_FR_POPPINGHOLY = 163 UMETA(DisplayName = "FR: Popping Holy"),
	TSID_STATE_FR_BLIZZAGABOARD = 164 UMETA(DisplayName = "FR: Blizzaga Board"),
	TSID_STATE_FR_THINKOFYOU = 165 UMETA(DisplayName = "FR: Think of You"),
	TSID_STATE_FR_ULTIMATEEND = 166 UMETA(DisplayName = "FR: Ultimate End"),
	TSID_STATE_FR_PROMISEWINGS = 167 UMETA(DisplayName = "FR: Promise Wings"),
	TSID_STATE_QUICKBATTLE = 168 UMETA(DisplayName = "Quick Battle"),
	TSID_STATE_REMIND_LGRX = 169 UMETA(DisplayName = "Remind: LgRx"),
	TSID_STATE_REMIND_MIRX_DOWN_MI = 170 UMETA(DisplayName = "Remind: MiRx Attach Mi"),
	TSID_STATE_REMIND_MIRX_ATTACK_MI = 171 UMETA(DisplayName = "Remind: MiRx Attach Mi"),
	TSID_STATE_REMIND_MIRX_TIRED_MI = 172 UMETA(DisplayName = "Remind: MiRx Tired Mi"),
	TSID_STATE_REMIND_SOKC_MAIN = 173 UMETA(DisplayName = "Remind: SoKc Main"),
	TSID_STATE_MAX = 174 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresBodyCollReactionType : uint8
{
	TRES_BODY_RT_DEFAULT = 0 UMETA(DisplayName = "Tres Body RT Default"),
	TRES_BODY_RT_NO_REACTION = 1 UMETA(DisplayName = "Tres Body RT No Reaction"),
	STRONG = 2 UMETA(DisplayName = "Strong"),
	TRES_BODY_RT_GUARD = 3 UMETA(DisplayName = "Tres Body RT Guard"),
	WEAK_GUARD = 4 UMETA(DisplayName = "Weak Guard"),
	GUARD_NOREACT = 5 UMETA(DisplayName = "Guard No React"),
	TRES_BODY_RT_INVINCIBLE = 6 UMETA(DisplayName = "Tres Body RT Invincible"),
	INVINCIBLE_NOREACT = 7 UMETA(DisplayName = "Invincible No React"),
	TRES_BODY_RT_GHOST = 8 UMETA(DisplayName = "Tres Body RT Ghost"),
	GHOST_NOREACT = 9 UMETA(DisplayName = "Ghost No React"),
	REFLECT1 = 10 UMETA(DisplayName = "Reflect 1"),
	GHOST_INVINCIBLE = 11 UMETA(DisplayName = "Ghost Invincible"),
	_TRES_BODY_RT_MAX = 12 UMETA(Hidden),
	ETresBodyCollReactionType_MAX = 13 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresPlayerJumpModes : uint8
{
	TPJ_NORMAL UMETA(DisplayName = "Normal"),
	TPJ_HIGH UMETA(DisplayName = "High"),
	TPJ_SUPER UMETA(DisplayName = "Super"),
	TPJ_DOUBLE_FLIGHT UMETA(DisplayName = "Double Flight"),
	TPJ_SUPER_FLIGHT UMETA(DisplayName = "Super Flight"),
	TPJ_MAX
};

UENUM(BlueprintType)
enum ETresAnimNotifyBpEventID
{
	TRES_ANIMNOTIFYBPEVENT_NONE = 0 UMETA(DisplayName = "None"),
	TRES_ANIMNOTIFYBPEVENT_MAX = 1 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresTeam
{
	Player = 0 UMETA(DisplayName = "Player"),
	FriendNpc = 1 UMETA(DisplayName = "Friend Npc"),
	Enemy = 2 UMETA(DisplayName = "Enemy"),
	Heartless = 3 UMETA(DisplayName = "Heartless"),
	Nobody = 4 UMETA(DisplayName = "Nobody"),
	Unverse = 5 UMETA(DisplayName = "Unverse"),
	Neutral = 6 UMETA(DisplayName = "Neutral"),
	CityNpc = 7 UMETA(DisplayName = "City Npc"),
	Unknown = 8 UMETA(DisplayName = "Unknown"),
	ETresTeam_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresReactionResultType : uint8
{
	TRES_REACT_RESULT_NONE = 0 UMETA(DisplayName = "None"),
	TRES_REACT_RESULT_NOREACTION = 1 UMETA(DisplayName = "No Reaction"),
	TRES_REACT_RESULT_DAMAGE = 2 UMETA(DisplayName = "Damage"),
	TRES_REACT_RESULT_REFLECT = 3 UMETA(DisplayName = "Reflect"),
	TRES_REACT_RESULT_GUARD_REFLECT = 4 UMETA(DisplayName = "Guard Reflect"),
	TRES_REACT_RESULT_GUARD = 5 UMETA(DisplayName = "Guard"),
	ARMOR_BREAK = 6 UMETA(DisplayName = "Armor Break"),
	STRONG_BODY_DAMAGE1 = 7,
	STRONG_BODY_DAMAGE2 = 8,
	STRONG_BODY_DAMAGE3 = 9,
	STRONG_BODY_DAMAGE4 = 10,
	_MAX = 11 UMETA(Hidden),
	ETresReactionResultType_MAX = 12 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresProjectileInnerWaterVolumeProc : uint8
{
	NOTHING = 0 UMETA(DisplayName = "Nothing"),
	SHUTDOWN = 1 UMETA(DisplayName = "Shutdown"),
	MAPHITEXPLODE = 2 UMETA(DisplayName = "Map Hit Explode"),
	SHUTDOWN_DOWN = 3 UMETA(DisplayName = "Shutdown Down"),
	MAPHITEXPLODE_DOWN = 4 UMETA(DisplayName = "Map Hit Explode Down"),
	ETresProjectileInnerWaterVolumeProc_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresProjectileRespawnRotType : uint8
{
	TPRR_NORMAL UMETA(DisplayName = "Normal"),
	TPRR_YAW_ONLY UMETA(DisplayName = "Yaw Only"),
	TPRR_CLEAR UMETA(DisplayName = "Clear"),
	TPRR_MAX
};

UENUM(BlueprintType)
enum class ETresProjectileRespawnType : uint8
{
	TPR_TYPE_HIT_ALWAYS UMETA(DisplayName = "Hit Always"),
	TPR_TYPE_HIT_ANY UMETA(DisplayName = "Hit Any"),
	TPR_TYPE_HIT_PAWN UMETA(DisplayName = "Hit Pawn"),
	TPR_TYPE_HIT_MAP UMETA(DisplayName = "Hit Map"),
	TPR_TYPE_NO_HIT UMETA(DisplayName = "No Hit"),
	TPR_TYPE_MAX
};

UENUM(BlueprintType)
enum ETresBodyCollOverlapCameraFunction
{
	TRES_BODY_OVERLAPCAMERA_FADE = 0 UMETA(DisplayName = "Fade"),
	TRES_BODY_OVERLAPCAMERA_RESET = 1 UMETA(DisplayName = "Reset"),
	TRES_BODY_OVERLAPCAMERA_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresPlayerSpecificActionID
{
	TRES_PSA_ACCOMPANY_PAWN = 0 UMETA(DisplayName = "Accompany Pawn"),
	TRES_PSA_CHANT_END = 1 UMETA(DisplayName = "Chant End"),
	TRES_PSA_SHOOTFLOW_ACTION_END = 2 UMETA(DisplayName = "Shoot Flow Action End"),
	TRES_PSA_ATHLETICFLOW_ATTACK = 3 UMETA(DisplayName = "Athletic Flow Attack"),
	TRES_PSA_PLANEBOSS_START = 4 UMETA(DisplayName = "Plane Boss Start"),
	TRES_PSA_SMALLAIRPLANE_AUTOTURN_START = 5 UMETA(DisplayName = "Small Airplane Auto Turn Start"),
	TRES_PSA_SMALLAIRPLANE_AUTOTURN_END = 6 UMETA(DisplayName = "Small Airplane Auto Turn End"),
	TRES_PSA_SPECIALSHIP_DASHHIT_START = 7 UMETA(DisplayName = "Special Ship Dash Hit Start"),
	TRES_PSA_SPECIALSHIP_DASHHIT_END = 8 UMETA(DisplayName = "Special Ship Dash Hit End"),
	TRES_PSA_SPECIALSHIP_JUMP_START = 9 UMETA(DisplayName = "Special Ship Jump Start"),
	TRES_PSA_SPECIALSHIP_JUMP_DOWN = 10 UMETA(DisplayName = "Special Ship Jump Down"),
	TRES_PSA_SPECIALSHIP_JUMP_LAND = 11 UMETA(DisplayName = "Special Ship Jump Land"),
	TRES_PSA_SPECIALSHIP_ENEMY_START = 12 UMETA(DisplayName = "Special Ship Enemy Start"),
	TRES_PSA_SPECIALSHIP_HP0_START = 13 UMETA(DisplayName = "Special Ship HP 0 Start"),
	TRES_PSA_SPECIALSHIP_MAELSTROM_HP0_START = 14 UMETA(DisplayName = "Special Ship Maelstrom HP 0 Start"),
	TRES_PSA_RAIL_SLIDE_START = 15 UMETA(DisplayName = "Rail Slide Start"),
	TRES_PSA_RAIL_SLIDE_END = 16 UMETA(DisplayName = "Rail Slide End"),
	TRES_PSA_MI_04_DOOR_ATTACH_START = 17 UMETA(DisplayName = "MI 04 Door Attach Start"),
	TRES_PSA_MI_04_DOOR_ATTACH_END = 18 UMETA(DisplayName = "MI 04 Door Attach End"),
	TRES_PSA_VIKINGSHIP_APPEARSKIP = 19 UMETA(DisplayName = "Viking Ship Appear Skip"),
	TRES_PSA_VIKINGSHIP_START = 20 UMETA(DisplayName = "Viking Ship Start"),
	TRES_PSA_VIKINGSHIP_ATTACK = 21 UMETA(DisplayName = "Viking Ship Attack"),
	TRES_PSA_VIKINGSHIP_END = 22 UMETA(DisplayName = "Viking Ship End"),
	TRES_PSA_ROLLERCOASTER_PRE_JUMPSTART = 23 UMETA(DisplayName = "Rollercoaster Pre Jump Start"),
	TRES_PSA_ROLLERCOASTER_PRE_START = 24 UMETA(DisplayName = "Rollercoaster Pre Start"),
	TRES_PSA_ROLLERCOASTER_START = 25 UMETA(DisplayName = "Rollercoaster Start"),
	TRES_PSA_ROLLERCOASTER_JUMP = 26 UMETA(DisplayName = "Rollercoaster Jump"),
	TRES_PSA_ROLLERCOASTER_ATTACK = 27 UMETA(DisplayName = "Rollercoaster Attack"),
	TRES_PSA_ROLLERCOASTER_ENEMY_ATTACKREFLECT = 28 UMETA(DisplayName = "Rollercoaster Enemy Attack Reflect"),
	TRES_PSA_ROLLERCOASTER_CANCEL = 29 UMETA(DisplayName = "Rollercoaster Cancel"),
	TRES_PSA_ROLLERCOASTER_FINISH_START = 30 UMETA(DisplayName = "Rollercoaster Finish Start"),
	TRES_PSA_ROLLERCOASTER_FINISH_WIN_START = 31 UMETA(DisplayName = "Rollercoaster Finish Win Start"),
	TRES_PSA_ROLLERCOASTER_FINISH_WIN_END = 32 UMETA(DisplayName = "Rollercoaster Finish Win End"),
	TRES_PSA_ROLLERCOASTER_FINISH_CMD_START = 33 UMETA(DisplayName = "Rollercoaster Finish CMD Start"),
	TRES_PSA_TEACUP_APPEARSKIP = 34 UMETA(DisplayName = "Teacup Appear Skip"),
	TRES_PSA_TEACUP_FINISH = 35 UMETA(DisplayName = "Teacup Finish"),
	TRES_PSA_TEACUP_END = 36 UMETA(DisplayName = "Teacup End"),
	TRES_PSA_SHOOTINGRIDE_APPEARSKIP = 37 UMETA(DisplayName = "Shooting Ride Appear Skip"),
	TRES_PSA_MERRYGOROUND_APPEARSKIP = 38 UMETA(DisplayName = "Merry Go Round Appear Skip"),
	TRES_PSA_MERRYGOROUND_FINISH = 39 UMETA(DisplayName = "Merry Go Round Finish"),
	TRES_PSA_MERRYGOROUND_FINISH_ATTACK = 40 UMETA(DisplayName = "Merry Go Round Finish Attack"),
	TRES_PSA_MERRYGOROUND_END = 41 UMETA(DisplayName = "Merrgy Go Round End"),
	TRES_PSA_WATERRIDE_SPAWNWARP = 42 UMETA(DisplayName = "Water Ride Spawn Warp"),
	TRES_PSA_WATERRIDE_APPEARSKIP = 43 UMETA(DisplayName = "Water Ride Appear Skip"),
	TRES_PSA_WATERRIDE_START = 44 UMETA(DisplayName = "Water Ride Start"),
	TRES_PSA_WATERRIDE_FINISH = 45 UMETA(DisplayName = "Water Ride Finish"),
	TRES_PSA_WATERRIDE_FINISH_LAST = 46 UMETA(DisplayName = "Water Ride Finish Last"),
	TRES_PSA_WATERRIDE_FINISH_LAST2 = 47 UMETA(DisplayName = "Water Ride Finish Last 2"),
	TRES_PSA_WATERRIDE_END = 48 UMETA(DisplayName = "Water Ride End"),
	TRES_PSA_SIMBA_APPEARSKIP = 49 UMETA(DisplayName = "Simba Appear Skip"),
	TRES_PSA_SIMBA_START = 50 UMETA(DisplayName = "Simba Start"),
	TRES_PSA_SIMBA_FINISH = 51 UMETA(DisplayName = "Simba Finish"),
	TRES_PSA_SIMBA_END = 52 UMETA(DisplayName = "Simba End"),
	TRES_PSA_ARIEL_APPEARSKIP = 53 UMETA(DisplayName = "Ariel Appear Skip"),
	TRES_PSA_ARIEL_START = 54 UMETA(DisplayName = "Ariel Start"),
	TRES_PSA_ARIEL_CUT2 = 55 UMETA(DisplayName = "Ariel Cut 2"),
	TRES_PSA_ARIEL_END = 56 UMETA(DisplayName = "Ariel End"),
	TRES_PSA_RALPH_APPEARSKIP = 57 UMETA(DisplayName = "Ralph Appear Skip"),
	TRES_PSA_RALPH_EXPLOSION = 58 UMETA(DisplayName = "Ralph Explosion"),
	TRES_PSA_RALPH_END = 59 UMETA(DisplayName = "Ralph End"),
	TRES_PSA_STITCH_APPEARSKIP = 60 UMETA(DisplayName = "Stitch Appear Skip"),
	TRES_PSA_STITCH_START = 61 UMETA(DisplayName = "Stitch Start"),
	TRES_PSA_STITCH_END = 62 UMETA(DisplayName = "Stitch End"),
	TRES_PSA_WANDANYAN_APPEARSKIP = 63 UMETA(DisplayName = "Wandanyan Appear Skip"),
	TRES_PSA_STYLE_FINISH_SH_END = 64 UMETA(DisplayName = "Style Finish SH End"),
	TRES_PSA_STYLE_FINISH_WA_END = 65 UMETA(DisplayName = "Style Finish WA End"),
	TRES_PSA_STYLE_FINISH_SK_END = 66 UMETA(DisplayName = "Style Finish SK End"),
	TRES_PSA_STYLE_FINISH_GM_END = 67 UMETA(DisplayName = "Style Finish GM End"),
	TRES_PSA_SHIELD_GUARDIAN_FINISH = 68 UMETA(DisplayName = "Shield Guardian Finish"),
	TRES_PSA_SHIELD_GUARDIAN_END = 69 UMETA(DisplayName = "Shield Guardian End"),
	TRES_PSA_MICKEYCHAIN_START = 70 UMETA(DisplayName = "Mickey Chain Start"),
	TRES_PSA_SNOW_COVER_SWING_START = 71 UMETA(DisplayName = "Snow Cover Swing Start"),
	TRES_PSA_SNOW_COVER_SWING_ATTACK_SUCCESS = 72 UMETA(DisplayName = "Snow Cover Swing Attack Success"),
	TRES_PSA_SNOW_COVER_SWING_ATTACK_FAILED = 73 UMETA(DisplayName = "Snow Cover Swing Attack Success"),
	TRES_PSA_SNOW_COVER_SWING_FAILED = 74 UMETA(DisplayName = "Snow Cover Swing Attack Failed"),
	TRES_PSA_SPINNING_HOLD_START = 75 UMETA(DisplayName = "Spinning Hold Start"),
	TRES_PSA_SPINNING_HOLD_EXPLODE = 76 UMETA(DisplayName = "Spinning Hold Explode"),
	TRES_PSA_SPINNING_HOLD_LIGHTBALL_WALL_HIT = 77 UMETA(DisplayName = "Spinning Hold Lightball Wall Hit"),
	TRES_PSA_CALL_METEOR_START = 78 UMETA(DisplayName = "Call Meteor Start"),
	TRES_PSA_CALL_METEOR_FINISH = 79 UMETA(DisplayName = "Call Meteor Finish"),
	TRES_PSA_CALL_METEOR_END = 80 UMETA(DisplayName = "Call Meteor End"),
	TRES_PSA_BAYMAXRIDE_FINISH_RUSH = 81 UMETA(DisplayName = "Baymax Ride Finish Rush"),
	TRES_PSA_BAYMAXRIDE_FINISH_HIT = 82 UMETA(DisplayName = "Baymax Ride Finish Hit"),
	TRES_PSA_BAYMAXRIDE_FINISH_END = 83 UMETA(DisplayName = "Baymax Ride Finish End"),
	TRES_PSA_GIANTSOLDIER_START = 84 UMETA(DisplayName = "Giant Soldier Start"),
	TRES_PSA_GIANTSOLDIER_CANCEL = 85 UMETA(DisplayName = "Giant Soldier Cancel"),
	TRES_PSA_POWERSTRIKE_START = 86 UMETA(DisplayName = "Power Strike Start"),
	TRES_PSA_FLAREFORCE_START = 87 UMETA(DisplayName = "Flare Force Start"),
	TRES_PSA_BLIZZAGABOARD_CUT3 = 88 UMETA(DisplayName = "Blizzaga Board Cut 3"),
	TRES_PSA_BLIZZAGABOARD_CUT4 = 89 UMETA(DisplayName = "Blizzaga Board Cut 4"),
	TRES_PSA_BLIZZAGABOARD_EXP = 90 UMETA(DisplayName = "Blizzaga Board Exp"),
	TRES_PSA_BLIZZAGABOARD_EXPEND = 91 UMETA(DisplayName = "Blizzaga Board Expend"),
	TRES_PSA_THINKOFYOU_END = 92 UMETA(DisplayName = "Think of You End"),
	TRES_PSA_PROMISEWINGS_START = 93 UMETA(DisplayName = "Promise Wings Start"),
	TRES_PSA_PROMISEWINGS_MOVE = 94 UMETA(DisplayName = "Promise Wings Move"),
	TRES_PSA_PROMISEWINGS_FINISH = 95 UMETA(DisplayName = "Promise Wings Finish"),
	TRES_PSA_PROMISEWINGS_END = 96 UMETA(DisplayName = "Promise Wings End"),
	TRES_PSA_LGRX_PHASE_START = 97 UMETA(DisplayName = "LgRx Phase Start"),
	TRES_PSA_LGRX_ADD_COMMAND_FINISH = 98 UMETA(DisplayName = "LgRx Add Command Finish"),
	TRES_PSA_LGRX_RUSH_START = 99 UMETA(DisplayName = "LgRx Rush Start"),
	TRES_PSA_LGRX_RUSH_LAST = 100 UMETA(DisplayName = "LgRx Rush Last"),
	TRES_PSA_LGRX_RUSH_END = 101 UMETA(DisplayName = "LgRx Rush End"),
	TRES_PSA_LGRX_RUSH_HIT = 102 UMETA(DisplayName = "LgRx Rush Hit"),
	TRES_PSA_LGRX_GUARD_HIT = 103 UMETA(DisplayName = "LgRx Guard Hit"),
	TRES_PSA_LGRX_GUARDCOUNTER = 104 UMETA(DisplayName = "LgRx Guard Counter"),
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
	TRES_PSA_LGRX_REACTION_SUCCESS = 117 UMETA(DisplayName = "LgRx Reaction Success"),
	TRES_PSA_LGRX_REACTION_FAIL = 118 UMETA(DisplayName = "LgRx Reaction Fail"),
	TRES_PSA_LGRX_GAMECLEAR = 119 UMETA(DisplayName = "LgRx Game Clear"),
	TRES_PSA_LGRX_GAMEOVER_ONE = 120 UMETA(DisplayName = "LgRx Gameover One"),
	TRES_PSA_LGRX_GAMEOVER_ALL = 121 UMETA(DisplayName = "LgRx Gameover All"),
	TRES_PSA_MIRX_REPLICA_LASER_OMEN_START = 122 UMETA(DisplayName = "MiRx Replica Laser Omen Start"),
	TRES_PSA_MIRX_REPLICA_WARP_ATTACK_START = 123 UMETA(DisplayName = "MiRx Replica Warp Attack Start"),
	TRES_PSA_MIRX_MICKEY_BLOW_START = 124 UMETA(DisplayName = "MiRx Mickey Blow Start"),
	TRES_PSA_MIRX_MICKEY_DOWN_START = 125 UMETA(DisplayName = "MiRx Mickey Down Start"),
	TRES_PSA_MIRX_MICKEY_DOWN_DURING = 126 UMETA(DisplayName = "MiRx Mickey Down During"),
	TRES_PSA_MIRX_MICKEY_DOWN_END = 127 UMETA(DisplayName = "MiRx Mickey Down End"),
	TRES_PSA_MIRX_MICKEY_FAILDE_12_HOLY_SEAL = 128 UMETA(DisplayName = "MiRx Micked Failde 12 Holy Seal"),
	TRES_PSA_MIRX_MICKEY_RISE_LAST_HOLY_COMMAND = 129 UMETA(DisplayName = "MiRx Mickey Rise Last Holy Command"),
	TRES_PSA_MIRX_MICKEY_LAST_HOLY_START = 130 UMETA(DisplayName = "MiRx Mickey Last Holy Start"),
	TRES_PSA_MIRX_MICKEY_TIRED_START = 131 UMETA(DisplayName = "MiRx Mickey Tired Start"),
	TRES_PSA_MIRX_MICKEY_TIRED_END = 132 UMETA(DisplayName = "MiRx Mickey Tired End"),
	TRES_PSA_MIRX_REPLICA_STATE_END = 133 UMETA(DisplayName = "MiRx Replica State End"),
	TRES_PSA_MIRX_REPLICA_FULLFIRE_LASER_OMEN_START = 134 UMETA(DisplayName = "MiRx Replica Fullfire Laser Omen Start"),
	TRES_PSA_MAX = 135 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresActorSpecificActionID
{
	TRES_ASA_BOSS_DIE = 0 UMETA(DisplayName = "Boss Die"),
	TRES_ASA_SATYR_SCRUM = 1 UMETA(DisplayName = "Satyr Scrum"),
	TRES_ASA_SATYR_WARP = 2 UMETA(DisplayName = "Satyr Warp"),
	TRES_ASA_GOOFYSHOOT_TOWER = 3 UMETA(DisplayName = "Goofy Shoot Tower"),
	TRES_ASA_GOOFYSHOOT_TARUNVERSED = 4 UMETA(DisplayName = "Goofy Shoot Tar Unversed"),
	TRES_ASA_GOOFYSHOOT_GENERAL = 5 UMETA(DisplayName = "Goofy Shoot General"),
	TRES_ASA_TURTLEFROG_INHALE = 6 UMETA(DisplayName = "Turtle Frog Inhale"),
	TRES_ASA_TURTLEFROG_SPIT = 7 UMETA(DisplayName = "Turtle Frog Spit"),
	TRES_ASA_DAVYJONES_DRAWINGTOSS = 8 UMETA(DisplayName = "Davy Jones Drawing Toss"),
	TRES_ASA_DAVYJONES_DRAWINGEND = 9 UMETA(DisplayName = "Davy Jones Drawing End"),
	TRES_ASA_TORNADO_INHALE_START = 10 UMETA(DisplayName = "Tornado Inhale Start"),
	TRES_ASA_TORNADO_LAUNCH_START = 11 UMETA(DisplayName = "Tornado Launch Start"),
	TRES_ASA_TORNADO_LAUNCH_END = 12 UMETA(DisplayName = "Tornado Launch End"),
	TRES_ASA_PLANEBOSS_SHAKEOFF_START = 13 UMETA(DisplayName = "Plane Boss Shakeoff Start"),
	TRES_ASA_PLANEBOSS_SHAKEOFF_END = 14 UMETA(DisplayName = "Plane Boss Shakeoff End"),
	TRES_ASA_PLANEBOSS_TURNAROUND_START = 15 UMETA(DisplayName = "Plane Boss Turnaround Start"),
	TRES_ASA_E_EX027_EAT_BIND_START = 16 UMETA(DisplayName = "Lightning Angler (EX027) Eat Bind Start"),
	TRES_ASA_E_EX027_EAT_BIND_END = 17 UMETA(DisplayName = "Lightning Angler (EX027) Eat Bind End"),
	TRES_ASA_E_EX027_BITE_BIND_START = 18 UMETA(DisplayName = "Lightning Angler (EX027) Bite Bind Start"),
	TRES_ASA_E_EX027_BITE_BIND_END = 19 UMETA(DisplayName = "Lightning Angler (EX027) Bite Bind End"),
	TRES_ASA_E_EX054_JUMP_CHANGE_CAMERA = 20 UMETA(DisplayName = "Catastrochorus (EX054) Jump Change Camera"),
	TRES_ASA_E_CA901_TENTACLE_SUMMONS_CAMERA = 21 UMETA(DisplayName = "Davy Jones (CA901) Tentacle Summons Camera"),
	TRES_ASA_E_EX721_FLASH_CAMERA = 22 UMETA(DisplayName = "Grim Guardianess (EX721) Flash Camera"),
	TRES_ASA_E_CA404_BEFORE_STOLETRAP = 23 UMETA(DisplayName = "Ship Sails (CA404) Before Stole Trap"),
	TRES_ASA_E_CA404_EXEC_STOLETRAP = 24 UMETA(DisplayName = "Ship Sails (CA404) Exec Stole Trap"),
	TRES_ASA_GUMISHIP_WORLD_SYMBOL_START = 25 UMETA(DisplayName = "Gumiship World Symbol Start"),
	TRES_ASA_GUMISHIP_TRAVEL_POINT_START = 26 UMETA(DisplayName = "Gumiship Travel Point Start"),
	TRES_ASA_GUMISHIP_FINISHED_BATTLE_WIPE_START = 27 UMETA(DisplayName = "Gumiship Finished Battle Wipe Start"),
	TRES_ASA_LEVLE_PRIZEBOX_FOOD_GET = 28 UMETA(DisplayName = "Levle Prizebox Food Get"),
	TRES_ASA_MIRX_REPLICA_WARP_ATTACK_START = 29 UMETA(DisplayName = "MiRx Replica Warp Attack Start"),
	TRES_ASA_MIRX_REPLICA_WARP_ATTACK_END = 30 UMETA(DisplayName = "MiRx Replica Warp Attack End"),
	TRES_ASA_MIRX_MICKEY_HOLY_SEAL_START = 31 UMETA(DisplayName = "MiRx Mickey Holy Seal Start"),
	TRES_ASA_MIRX_MICKEY_HOLY_SEAL_END = 32 UMETA(DisplayName = "MiRx Mickey Holy Seal End"),
	TRES_ASA_MIRX_MICKEY_HIT_FINISH_ATTACK = 33 UMETA(DisplayName = "MiRx Mickey Hit Finish Attack"),
	TRES_ASA_MAX = 34 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresPlayerFlyModes
{
	TPF_GLIDE = 0 UMETA(DisplayName = "Glide"),
	TPF_SUPER_SLIDE = 1 UMETA(DisplayName = "Super Glide"),
	TPF_SONIC_SLIDE = 2 UMETA(DisplayName = "Sonic Glide"),
	TPF_SUPER_FLIGHT = 3 UMETA(DisplayName = "Super Flight"),
	TPF_AIR_DODGE = 4 UMETA(DisplayName = "Air Dodge"),
	TPF_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyMajorUseID
{
	MAJOR_USE_ID_COMMON = 0 UMETA(DisplayName = "Common"),
	MAJOR_USE_ID_BATTLE_PORTAL = 1 UMETA(DisplayName = "Battle Portal"),
	MAJOR_USE_ID_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemydw407Region
{
	TRES_ENEMY_DW407_REGION_RIGHTHAND = 0 UMETA(DisplayName = "Right Hand"),
	TRES_ENEMY_DW407_REGION_LEFTHAND = 1 UMETA(DisplayName = "Left Hand"),
	TRES_ENEMY_DW407_REGION_HEAD = 2 UMETA(DisplayName = "Head"),
	TRES_ENEMY_DW407_REGION_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemydw407ViewWay : uint8
{
	TRES_ENEMY_DW407_VIEWWAY_SEPARATESETTING = 0 UMETA(DisplayName = "Separate Setting"),
	TRES_ENEMY_DW407_VIEWWAY_HEIGHTFIXED = 1 UMETA(DisplayName = "Height Fixed"),
	TRES_ENEMY_DW407_VIEWWAY_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmickInstanceManagerInstanceState : uint8
{
	Alive = 0 UMETA(DisplayName = "Alive"),
	Destroy = 1 UMETA(DisplayName = "Destroy"),
	ETresGimmickInstanceManagerInstanceState_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyToyKind : uint8
{
	TRES_ENEMY_TOY_KIND_UNKNOWN = 0 UMETA(DisplayName = "Unknown"),
	TRES_ENEMY_TOY_KIND_MONSTER = 1 UMETA(DisplayName = "Monster"),
	TRES_ENEMY_TOY_KIND_ANGELICAMBER = 2 UMETA(DisplayName = "Angelic Amber"),
	TRES_ENEMY_TOY_KIND_BOUNCYPETS_PIGS = 3 UMETA(DisplayName = "Bouncy Pets (Pigs)"),
	TRES_ENEMY_TOY_KIND_BOUNCYPETS_DOG = 4 UMETA(DisplayName = "Bouncy Pets (Dog)"),
	TRES_ENEMY_TOY_KIND_BOUNCYPETS_CAT = 5 UMETA(DisplayName = "Bouncy Pets (Cat)"),
	TRES_ENEMY_TOY_KIND_BOUNCYPETS_ELEPHANT = 6 UMETA(DisplayName = "Bouncy Pets (Elephant)"),
	TRES_ENEMY_TOY_KIND_BOUNCYPETS_COW = 7 UMETA(DisplayName = "Bouncy Pets (Cow)"),
	TRES_ENEMY_TOY_KIND_BOUNCYPETS_FROG = 8 UMETA(DisplayName = "Bouncy Pets (Frog)"),
	TRES_ENEMY_TOY_KIND_PATCHWORKANIMALS_PANDA = 9 UMETA(DisplayName = "Patchwork Animals (Panda)"),
	TRES_ENEMY_TOY_KIND_PATCHWORKANIMALS_LION = 10 UMETA(DisplayName = "Patchwork Animals (Lion)"),
	TRES_ENEMY_TOY_KIND_ROBO_ELEPHANT = 11 UMETA(DisplayName = "Robo Elephant"),
	TRES_ENEMY_TOY_KIND_ROBO_FAN_WHITE = 12 UMETA(DisplayName = "Robo Fan (White)"),
	TRES_ENEMY_TOY_KIND_ROBO_FAN_BLUE = 13 UMETA(DisplayName = "Robo Fan (Blue)"),
	TRES_ENEMY_TOY_KIND_ROBO_FAN_GREEN = 14 UMETA(DisplayName = "Robo Fan (Green)"),
	TRES_ENEMY_TOY_KIND_MAX = 15 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresHologramSubAnimReplaceType : uint8
{
	None = 0 UMETA(DisplayName = "None"),
	LeftHand = 1 UMETA(DisplayName = "Left Hand"),
	RightHand = 2 UMETA(DisplayName = "Right Hand"),
	LeftHand2 = 3 UMETA(DisplayName = "Left Hand 2"),
	RightHand2 = 4 UMETA(DisplayName = "Right Hand 2"),
	LeftHand3 = 5 UMETA(DisplayName = "Left Hand 3"),
	RightHand3 = 6 UMETA(DisplayName = "RIght Hand 3"),
	Max = 7 UMETA(Hidden),
	ETresHologramSubAnimReplaceType_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EDancePerformType : uint8
{
	NONE = 0 UMETA(DisplayName = "None"),
	SPIN_PERFORM = 1 UMETA(DisplayName = "Spin Perform"),
	STEP_PERFORM = 2 UMETA(DisplayName = "Step Perform"),
	PAIR_IN = 3 UMETA(DisplayName = "Pair In"),
	PAIR_LOOP = 4 UMETA(DisplayName = "Pair Loop"),
	PAIR_OUT = 5 UMETA(DisplayName = "Pair Out"),
	PAIR_OUTIN_OUT = 6 UMETA(DisplayName = "Pair Out In Out"),
	PAIR_OUTIN_IN = 7 UMETA(DisplayName = "Pair Out In In"),
	PAIR_CHANGE = 8 UMETA(DisplayName = "Pair Change"),
	PAIR_CHANGE_FAILED = 9 UMETA(DisplayName = "Pair Change Failed"),
	SPECIAL_MOVE_SUCCESS = 10 UMETA(DisplayName = "Special Move Success"),
	SITUATION_COMMAND = 11 UMETA(DisplayName = "Situation Command"),
	RAPUNZEL_FINISH = 12 UMETA(DisplayName = "Rapunzel Finish"),
	CLAP_ACTION = 13 UMETA(DisplayName = "Clap Action"),
	EDancePerformType_MAX = 14 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresRaDanceAreaType : uint8
{
	RA_DANCE_NONE = 0 UMETA(DisplayName = "None"),
	RA_DANCE_NORMAL = 1 UMETA(DisplayName = "Normal"),
	RA_DANCE_RETURN = 2 UMETA(DisplayName = "Return"),
	RA_DANCE_CENTER = 3 UMETA(DisplayName = "Center"),
	RA_DANCE_CENTER_OUT = 4 UMETA(DisplayName = "Center Out"),
	RA_DANCE_OUTFIELD = 5 UMETA(DisplayName = "Outfield"),
	RA_DANCE_RAPUNZEL = 6 UMETA(DisplayName = "Rapunzel"),
	RA_DANCE_FLYNN = 7 UMETA(DisplayName = "Flynn"),
	RA_DANCE_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EDanceActorAction : uint8
{
	NORMAL_STEP = 0 UMETA(DisplayName = "Normal Step"),
	INVITE = 1 UMETA(DisplayName = "Invite"),
	INVITE01 = 2 UMETA(DisplayName = "Invite 01"),
	EDanceActorAction_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EDanceActorType : uint8
{
	MALE = 0 UMETA(DisplayName = "Male"),
	FEMALE = 1 UMETA(DisplayName = "Female"),
	ANY = 2 UMETA(DisplayName = "Any"),
	EDanceActorType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmickDistanceBetweenPlayer : uint8
{
	None = 0 UMETA(DisplayName = "None"),
	Near = 1 UMETA(DisplayName = "Near"),
	Middle = 2 UMETA(DisplayName = "Middle"),
	Far = 3 UMETA(DisplayName = "Far"),
	ETresGimmickDistanceBetweenPlayer_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGimmickLookAtType
{
	GLTYPE_NONE = 0 UMETA(DisplayName = "None"),
	GLTYPE_ALWAYS_TRUE = 1 UMETA(DisplayName = "Always True"),
	GLTYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGimmickLookAtTrackingType
{
	GLTTYPE_NONE = 0 UMETA(DisplayName = "None"),
	GLTTYPE_PLAYER = 1 UMETA(DisplayName = "Player"),
	GLTTYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EDanceSpecialPerformType : uint8
{
	BARREL = 0 UMETA(DisplayName = "Barrel"),
	FLAG = 1 UMETA(DisplayName = "Flag"),
	CART = 2 UMETA(DisplayName = "Cart"),
	EDanceSpecialPerformType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIHudDanceResult : uint8
{
	RankA = 0 UMETA(DisplayName = "Rank A"),
	RankB = 1 UMETA(DisplayName = "Rank B"),
	RankC = 2 UMETA(DisplayName = "Rank C"),
	RankD = 3 UMETA(DisplayName = "Rank D"),
	MAX = 4 UMETA(Hidden),
	ETresUIHudDanceResult_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EDanceClapMissionType : uint8
{
	PATTERN = 0 UMETA(DisplayName = "Pattern"),
	PATTERN01 = 1,
	PATTERN02 = 2,
	PATTERN_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipCollisionShape : uint8
{
	CS_SPHERE = 0 UMETA(DisplayName = "Sphere"),
	CS_CAPSULE = 1 UMETA(DisplayName = "Capsule"),
	CS_CAPSULE_ROOT = 2 UMETA(DisplayName = "Capsule Root"),
	CS_BOX = 3 UMETA(DisplayName = "Box"),
	CS_RING = 4 UMETA(DisplayName = "Ring"),
	CS_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipCollisionPriority : uint8
{
	CP_HIGH = 0 UMETA(DisplayName = "High"),
	CP_NORMAL = 1 UMETA(DisplayName = "Normal"),
	CP_LOW = 2 UMETA(DisplayName = "Low"),
	CP_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipWeaponPrimType : uint8
{
	SEQUENCE = 0 UMETA(DisplayName = "Sequence"),
	NORMAL_WEAPON = 1 UMETA(DisplayName = "Normal Weapon"),
	SPECIAL_WEAPON = 2 UMETA(DisplayName = "Special Weapon"),
	AUTO_MULTI_LOCKON_WEAPON = 3 UMETA(DisplayName = "Auto Multi Lockon Weapon"),
	MANUAL_MULTI_LOCKON_WEAPON = 4 UMETA(DisplayName = "Manual Multi Lockon Weapon"),
	NONE = 5 UMETA(DisplayName = "None"),
	TYPE_MAX = 6 UMETA(Hidden),
	ETresGumiShipWeaponPrimType_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipWeaponSequencePort : uint8
{
	WS_INDEX = 0 UMETA(DisplayName = "Index"),
	WS_INDEX01 = 1,
	WS_INDEX02 = 2,
	WS_INDEX03 = 3,
	WS_INDEX_SP = 4 UMETA(DisplayName = "Index SP"),
	WS_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipBadStateType : uint8
{
	BS_NONE = 0 UMETA(DisplayName = "None"),
	BS_STUN = 1 UMETA(DisplayName = "Stun"),
	BS_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipReactionType : uint8
{
	RT_NONE = 0 UMETA(DisplayName = "None"),
	RT_BLOW_SMALL = 1 UMETA(DisplayName = "Blow Small"),
	RT_BLOW_MIDDLE = 2 UMETA(DisplayName = "Blow Middle"),
	RT_BLOW_BIG = 3 UMETA(DisplayName = "Blow Big"),
	RT_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipPlayerAccelerationType : uint8
{
	AT_NONE_TYPE = 0 UMETA(DisplayName = "None"),
	AT_GEAR_CHANGE_TYPE = 1 UMETA(DisplayName = "Gear Change"),
	AT_ACCELERATOR_TYPE = 2 UMETA(DisplayName = "Accelerator"),
	AT_TYPE_MAX = 3 UMETA(Hidden),
	AT_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipPlayerMovementType : uint8
{
	MT_NONE_TYPE = 0 UMETA(DisplayName = "None"),
	MT_DEFAULT_TYPE = 1 UMETA(DisplayName = "Default"),
	MT_EXPERT_TYPE = 2 UMETA(DisplayName = "Expert"),
	MT_TRACKING_TYPE = 3 UMETA(DisplayName = "Tracking"),
	MT_RAIL_SLIDE_TYPE = 4 UMETA(DisplayName = "Rail Slide"),
	MT_RAIL_SLIDE_TYPE_TRACKING_LIKE = 5 UMETA(DisplayName = "Rail Slide Tracking Like"),
	MT_DEBUG_TYPE = 6 UMETA(DisplayName = "Debug"),
	MOVE_TYPE_MAX = 7 UMETA(Hidden),
	ETresGumiShipPlayerMovementType_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipSplineEventType : uint8
{
	ENEMY_MOVE_SPEED_UP_POINT = 0 UMETA(DisplayName = "Enemy Move Speed Up Point"),
	ENEMY_MOVE_SPEED_DOWN_POINT = 1 UMETA(DisplayName = "Enemy Move Speed Down Point"),
	ENEMY_ATTACK_CHECK_START_POINT = 2 UMETA(DisplayName = "Enemy Attack Check Start Point"),
	ENEMY_SPECIAL_EVENT_TRIGGER_POINT = 3 UMETA(DisplayName = "Enemy Special Event Trigger Point"),
	ARRIVED_SPLINE_END_POINT = 4 UMETA(DisplayName = "Arrived Spline End Point"),
	SPLINE_ADDITIONAL_DATA_KIND_MAX = 5 UMETA(Hidden),
	ETresGumiShipSplineEventType_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipEnemyStateID : uint8
{
	BLANK_STATE = 0 UMETA(DisplayName = "Blank"),
	DEAD_STATE = 1 UMETA(DisplayName = "Dead"),
	APPEAR_STATE = 2 UMETA(DisplayName = "Appear"),
	DISAPPEAR_STATE = 3 UMETA(DisplayName = "Disappear"),
	IDLING_STATE = 4 UMETA(DisplayName = "Idling"),
	CINEMATIC_MODE_STATE = 5 UMETA(DisplayName = "Cinematic Mode"),
	FIELD_ENCOUNT_SYMBOL_STATE = 6 UMETA(DisplayName = "Field Encount Symbol"),
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
enum class ETresGumiShipEnemyID : uint8
{
	ENEMY_ID_NONE = 0 UMETA(DisplayName = "None"),
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
enum class ETresGumiShipEnemyLookAtType : uint8
{
	KEEP_SPLINE_MOVE_DIRECTION = 0 UMETA(DisplayName = "Keep Spline Move Direction"),
	TURN_TO_GUMI_SHIP_PLAYER = 1 UMETA(DisplayName = "Turn to Gumi Ship Player"),
	TURN_TO_CAMERA_OFFSET_LOCATION = 2 UMETA(DisplayName = "Turn to Camera Offset Location"),
	DIRECTION_TYPE_MAX = 3 UMETA(Hidden),
	ETresGumiShipEnemyLookAtType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipEnemyStateResult : uint8
{
	RESULT_SUCCESS = 0 UMETA(DisplayName = "Success"),
	RESULT_FAILED = 1 UMETA(DisplayName = "Failed"),
	RESULT_ABORT = 2 UMETA(DisplayName = "Abort"),
	RESULT_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipGimmickID : uint8
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
	G_GM_NONE = 82 UMETA(DisplayName = "None"),
	G_GM_MAX = 83 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipBattleMissionEndFactorType : uint8
{
	BMEF_NONE = 0 UMETA(DisplayName = "None"),
	BMEF_RETRY = 1 UMETA(DisplayName = "Retry"),
	BMEF_QUIT = 2 UMETA(DisplayName = "Quit"),
	BMEF_SEARCH_RESTART = 3 UMETA(DisplayName = "Search Restart"),
	BMEF_NORMAL = 4 UMETA(DisplayName = "Normal"),
	BMEF_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipBattleMissionRankType : uint8
{
	BMRT_A = 0 UMETA(DisplayName = "A"),
	BMRT_B = 1 UMETA(DisplayName = "B"),
	BMRT_C = 2 UMETA(DisplayName = "C"),
	BMRT_D = 3 UMETA(DisplayName = "D"),
	BMRT_E = 4 UMETA(DisplayName = "E"),
	BMRT_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipEnemyBattleFinishType : uint8
{
	BATTLE_QUIT_SELECT = 0 UMETA(DisplayName = "Battle Quit"),
	BATTLE_RETRY_SELECT = 1 UMETA(DisplayName = "Battle Retry"),
	RETURN_FIELD_QUEST_SELECT = 2 UMETA(DisplayName = "Return Field Quest"),
	BATTLE_FINISH_TYPE_MAX = 3 UMETA(Hidden),
	ETresGumiShipEnemyBattleFinishType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipEnemyTerritoryID : uint8
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
enum class ETresGumiShipEnemyBattleStartType : uint8
{
	ENEMY_SYMBOL_ENCOUNTER = 0 UMETA(DisplayName = "Enemy Symbol Encounter"),
	BOSS_ENEMY_BATTLE_TRIGGER = 1 UMETA(DisplayName = "Boss Enemy Battle Trigger"),
	FIELD_TYPE_ENEMY_BATTLE_TRIGGER = 2 UMETA(DisplayName = "Field Type Enemy Battle Trigger"),
	BATTLE_START_TYPE_MAX = 3 UMETA(Hidden),
	ETresGumiShipEnemyBattleStartType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipBattleAreaState : uint8
{
	ACTIVE = 0 UMETA(DisplayName = "Active"),
	LEAVE_GUMI_SHIP = 1 UMETA(DisplayName = "Leave Gumiship"),
	ENEMY_DISAPPEAR = 2 UMETA(DisplayName = "Enemy Disappear"),
	NON_ACTIVE = 3 UMETA(DisplayName = "Nonactive"),
	ETresGumiShipBattleAreaState_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipRailSlideType : uint8
{
	RST_NONE = 0 UMETA(DisplayName = "None"),
	RST_ROUTE = 1 UMETA(DisplayName = "Route"),
	RST_TRACKING = 2 UMETA(DisplayName = "Tracking"),
	RST_SP_TRACKING = 3 UMETA(DisplayName = "SP Tracking"),
	RST_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipConsumptionType : uint8
{
	CT_CHARGE_TYPE = 0 UMETA(DisplayName = "Charge"),
	CT_COUNT_TYPE = 1 UMETA(DisplayName = "Count"),
	CT_TIME_TYPE = 2 UMETA(DisplayName = "Time"),
	CT_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipBonusKind : uint8
{
	BK_DEFEAD_COUNT = 0 UMETA(DisplayName = "Defeat Count"),
	BK_QUICK_TEAM_DEFEAD = 1 UMETA(DisplayName = "Quick Team Defead"),
	BK_AREA_DEFEAD = 2 UMETA(DisplayName = "Area Defead"),
	BK_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipBonusType : uint8
{
	BONUS_DEFEAT_ENEMY = 0 UMETA(DisplayName = "Defeat Enemy"),
	BONUS_DESTROY_PARTS = 1 UMETA(DisplayName = "Destroy Parts"),
	BONUS_DEFEAT_GROUP = 2 UMETA(DisplayName = "Defeat Group"),
	BONUS_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGameHelp : uint8
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
	Help_00650 = 125,
	Help105 = 126,
	Help106 = 127,
	Help107 = 128,
	Help108 = 129,
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
	Help120 = 141,
	Help121 = 142,
	Help122 = 143,
	Help123 = 144,
	Max = 145 UMETA(Hidden),
	Invalid = 146 UMETA(DisplayName = "Invalid"),
	ETresGameHelp_MAX = 147 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipMuzzleInfoCalcType : uint8
{
	MICT_RROT_RLOC = 0 UMETA(DisplayName = "RROT RLOC"),
	MICT_RLOC_RROT = 1 UMETA(DisplayName = "RLOC RROT"),
	MICT_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleComboEvalution : uint8
{
	None = 0 UMETA(DisplayName = "None"),
	Good = 1 UMETA(DisplayName = "Good"),
	Cool = 2 UMETA(DisplayName = "Cool"),
	Fantastic = 3 UMETA(DisplayName = "Fantastic"),
	WinniePuzzleComboEvalution_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleScoreEvalutionInOneTurnJudgementMethod : uint8
{
	ComboDependency = 0 UMETA(DisplayName = "Combo Dependency"),
	ScoreDependency = 1 UMETA(DisplayName = "Score Dependency"),
	WinniePuzzleScoreEvalutionInOneTurnJudgementMethod_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleUnitScoreSizeJudgementMethod : uint8
{
	UnitNumDependency = 0 UMETA(DisplayName = "Unit Num Dependency"),
	ScoreDependency = 1 UMETA(DisplayName = "Score Dependency"),
	WinniePuzzleUnitScoreSizeJudgementMethod_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresForwardDirection : uint8
{
	X_FORWAED = 0 UMETA(DisplayName = "X"),
	Y_FORWAED = 1 UMETA(DisplayName = "Y"),
	Z_FORWAED = 2 UMETA(DisplayName = "Z"),
	ETresForwardDirection_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresNavLinkSegment_Common
{
	NavLinkSegment_Left = 0 UMETA(DisplayName = "Left"),
	NavLinkSegment_Right = 1 UMETA(DisplayName = "Right"),
	NavLinkSegment_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESEQUENTIAL_EXEC_GET_TARGET_ACTOR : uint8
{
	Blackboard = 0 UMETA(DisplayName = "Blackboard"),
	EQS_DefaultTargetSelection = 1 UMETA(DisplayName = "EQS Default Target Selection"),
	SEQUENTIAL_EXEC_GET_TARGET_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESEQUENTIAL_EXEC_TASK_MODE : uint8
{
	None = 0 UMETA(DisplayName = "None"),
	MoveTo = 1 UMETA(DisplayName = "Move To"),
	MoveToWaitAnimEnd = 2 UMETA(DisplayName = "Move To Wait Anim End"),
	TurnTo = 3 UMETA(DisplayName = "Turn To"),
	SetTempDestination_Querier = 4 UMETA(DisplayName = "Set Temp Destination Querier"),
	SetTempDirection_Querier = 5 UMETA(DisplayName = "Set Time Direction Querier"),
	TerminateTask = 6 UMETA(DisplayName = "Terminate Task"),
	SkipSequence = 7 UMETA(DisplayName = "Skip Sequence"),
	SEQUENTIAL_EXEC_TASK_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EQS_PARAM_VALUE_Enum : uint8
{
	Literal = 0 UMETA(DisplayName = "Literal"),
	DistanceTargetToQuerier = 1 UMETA(DisplayName = "Distance Target To Querier"),
	DistanceTargetToQuerierPlusMargin = 2 UMETA(DisplayName = "Distance Target To Querier Plus Margin"),
	EQS_PARAM_VALUE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EQS_PARAM_NAME_Enum : uint8
{
	ONRING_MINRADIUS = 0 UMETA(DisplayName = "On Ring Min Radius"),
	ONRING_MAXRADIUS = 1 UMETA(DisplayName = "On Ring Max Radius"),
	ONRING_MINRADIUSITEMSPACING = 2 UMETA(DisplayName = "On Ring Min Radius Item Spacing"),
	ONRING_ANGLE = 3 UMETA(DisplayName = "On Ring Angle"),
	EQ_PAWNDISTANCE = 4 UMETA(DisplayName = "EQ Pawn Distance"),
	RANGE = 5 UMETA(DisplayName = "Range"),
	MINDISTANCE_FLOATVALUEMIN = 6 UMETA(DisplayName = "Min Distance Float Value Min"),
	MINDISTANCE_FLOATVALUEMAX = 7 UMETA(DisplayName = "Min Distance Float Value Max"),
	DOT_SCORINGFACTOR = 8 UMETA(DisplayName = "Dot Scoring Factor"),
	DOT_SCORINGFACTOR2 = 9 UMETA(DisplayName = "Dot Scoring Factor 2"),
	NOISE_SCORINGFACTOR = 10 UMETA(DisplayName = "Noise Scoring Factor"),
	EQS_PARAM_NAME_MAX = 11 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresAbilityEquipType : uint8
{
	NORMAL = 0 UMETA(DisplayName = "Normal"),
	AUTO = 1 UMETA(DisplayName = "Auto"),
	_MAX = 2 UMETA(Hidden),
	ETresAbilityEquipType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresTextAbilityKind : uint8
{
	NONE = 0 UMETA(DisplayName = "None"),
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
	TEXT_FORM_EXPLOSION = 30 UMETA(DisplayName = "Form Explosion"),
	TEXT_FORM_STRIDE_BREAK = 31 UMETA(DisplayName = "Form Stride Break"),
	TEXT_FORM_RIPPLE_FRIVE = 32 UMETA(DisplayName = "Form Ripple Frive"),
	TEXT_FORM_HURRICANE_PERIOD = 33 UMETA(DisplayName = "Form Hurricane Period"),
	TEXT_FORM_AERIAL_FINISH = 34 UMETA(DisplayName = "Form Aerial Finish"),
	TEXT_FORM_MAGNE_SPLASH = 35 UMETA(DisplayName = "Form Magne Splash"),
	TEXT_FORM_STUN_IMPACT = 36 UMETA(DisplayName = "Form Stun Impact"),
	TEXT_FORM_SONIC_RAVE = 37 UMETA(DisplayName = "Form Sonic Rave"),
	TEXT_FORM_LAST_ARCANUM = 38 UMETA(DisplayName = "Form Last Arcanum"),
	TEXT_FORM_UNION_DISCORD = 39 UMETA(DisplayName = "Form Union Discord"),
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
	TEXT_ACTION_SLASH_DODGE = 88 UMETA(DisplayName = "Action Splash Dodge"),
	TEXT_ACTION_BACK_SLIDE = 89 UMETA(DisplayName = "Action Back Slide"),
	TEXT_ACTION_BACK_SLASH = 90 UMETA(DisplayName = "Action Back Slash"),
	TEXT_ACTION_REFLECT = 91 UMETA(DisplayName = "Action Reflect"),
	TEXT_ACTION_BARRIER_CRACKER = 92 UMETA(DisplayName = "Action Barrier Cracker"),
	TEXT_ACTION_FINISH_ARTS = 93 UMETA(DisplayName = "Action Finish Arts"),
	TEXT_MOVE_TELEPO = 94 UMETA(DisplayName = "Move Telepo"),
	TEXT_MOVE_ACTIVE_HOVER = 95 UMETA(DisplayName = "Move Active Hover"),
	TEXT_MOVE_ICE_SLIDE = 96 UMETA(DisplayName = "Move Ice Slide"),
	TEXT_SUPPORT_FREE_FINISH = 97 UMETA(DisplayName = "Support Free Finish"),
	TEXT_SUPPORT_FULL_CARE = 98 UMETA(DisplayName = "Support Full Care"),
	TEXT_SUPPORT_FULL_REFRESH = 99 UMETA(DisplayName = "Support Full Refresh"),
	TEXT_SUPPORT_HONEY_JAM = 100 UMETA(DisplayName = "Support Honey Jam"),
	TEXT_SUPPORT_MULTI_LOCK = 101 UMETA(DisplayName = "Support Multi Lock"),
	TEXT_SUPPORT_GUARD_BREAK = 102 UMETA(DisplayName = "Support Guard Break"),
	TEXT_SUPPORT_TRANSFORM = 103 UMETA(DisplayName = "Support Transform"),
	TEXT_SUPPORT_RISK_CHARGE = 104 UMETA(DisplayName = "Support Risk Charge"),
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
enum class ETresAbilityCategory : uint8
{
	ACTION = 0 UMETA(DisplayName = "Action"),
	MOVE = 1 UMETA(DisplayName = "Move"),
	SUPPORT = 2 UMETA(DisplayName = "Support"),
	_MAX = 3 UMETA(Hidden),
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
enum class EBX901_CommonAction : uint8
{
	EBX901_CommonAction_ResetBoolProperty = 0 UMETA(DisplayName = "Reset Bool Property"),
	EBX901_CommonAction_BlockEffect = 1 UMETA(DisplayName = "Block Effect"),
	EBX901_CommonAction_BlockEffect_Wing = 2 UMETA(DisplayName = "Block Effect Wing"),
	EBX901_CommonAction_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx009ActionKind : uint8
{
	Singleshot_One = 0 UMETA(DisplayName = "Singleshot One"),
	Right_Step = 1 UMETA(DisplayName = "Right Step"),
	Left_Step = 2 UMETA(DisplayName = "Left Step"),
	MAX = 3 UMETA(Hidden),
	ETresEnemyEx009ActionKind_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx016ActionKind : uint8
{
	Footwork_Loop = 0 UMETA(DisplayName = "Footwork Loop"),
	MAX = 1 UMETA(Hidden),
	ETresEnemyEx016ActionKind_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ECommonAction_e_ex306 : uint8
{
	ECommonAction_e_ex306_ChangeDefaultBodyReactionType = 0 UMETA(DisplayName = "Change Default Body Reaction Type"),
	ECommonAction_e_ex306_SpawnClaymore = 1 UMETA(DisplayName = "Spawn Claymore"),
	ECommonAction_e_ex306_DestroyClaymore = 2 UMETA(DisplayName = "Destroy Claymore"),
	ECommonAction_e_ex306_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEX354_CommonAction : uint8
{
	EEX354_CommonAction_ChangeField_Standard = 0 UMETA(DisplayName = "Charge Field Standard"),
	EEX354_CommonAction_ChangeField_Narrow = 1 UMETA(DisplayName = "Charge Field Narrow"),
	EEX354_CommonAction_ChangeField_Doughnut = 2 UMETA(DisplayName = "Charge Field Doughnut"),
	EEX354_CommonAction_FinishQuickBattle = 3 UMETA(DisplayName = "Finish Quick Battle"),
	EEX354_CommonAction_BodyNoReaction = 4 UMETA(DisplayName = "Body No Reaction"),
	EEX354_CommonAction_NoAppearOnRevengeWarp = 5 UMETA(DisplayName = "No Appear On Revenge Wrap"),
	EEX354_CommonAction_ResetBodyReaction = 6 UMETA(DisplayName = "Reset Body Reaction"),
	EEX354_CommonAction_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ECommonAction_e_ex355 : uint8
{
	ECommonAction_e_ex355_ChangeDefaultBodyReactionType = 0 UMETA(DisplayName = "Change Default Body Reaction Type"),
	ECommonAction_e_ex355_SpawnClaymore = 1 UMETA(DisplayName = "Spawn Claymore"),
	ECommonAction_e_ex355_DestroyClaymore = 2 UMETA(DisplayName = "Destroy Claymore"),
	ECommonAction_e_ex355_ShowBerserkGage = 3 UMETA(DisplayName = "Show Berserk Gage"),
	ECommonAction_e_ex355_InitBerserkGage = 4 UMETA(DisplayName = "Init Verserk Gage"),
	ECommonAction_e_ex355_SetBodyTypeNormal = 5 UMETA(DisplayName = "Set Body Type Normal"),
	ECommonAction_e_ex355_SetBodyTypeBerserk = 6 UMETA(DisplayName = "Set Body Type Berserk"),
	ECommonAction_e_ex355_SetBodyTypeBlue = 7 UMETA(DisplayName = "Set Body Type Blue"),
	ECommonAction_e_ex355_SetBodyTypeStun = 8 UMETA(DisplayName = "Set Body Type Stun"),
	ECommonAction_e_ex355_NotifyHpDownAIChange = 9 UMETA(DisplayName = "Notify HP Down AI Change"),
	ECommonAction_e_ex355_ResetBodyReactionType = 10 UMETA(DisplayName = "Reset Body Reaction Type"),
	ECommonAction_e_ex355_MAX = 11 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEX359_CommonAction : uint8
{
	EEX359_CommonAction_LockonOn = 0 UMETA(DisplayName = "Lockon On"),
	EEX359_CommonAction_LockonOff = 1 UMETA(DisplayName = "Lockon Off"),
	EEX359_CommonAction_SceneChangeStart = 2 UMETA(DisplayName = "Scene Change Start"),
	EEX359_CommonAction_SceneChangeEnd = 3 UMETA(DisplayName = "Scene Change End"),
	EEX359_CommonAction_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEX731_CommonAction : uint8
{
	EEX731_CommonAction_Warp = 0 UMETA(DisplayName = "Warp"),
	EEX731_CommonAction_ModeChange = 1 UMETA(DisplayName = "Mode Change"),
	EEX731_CommonAction_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEX734_CommonAction : uint8
{
	EEX734_CommonAction_ModeChange = 0 UMETA(DisplayName = "Mode Change"),
	EEX734_CommonAction_MAX = 1 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETornado_CommonAction : uint8
{
	ETornado_CommonAction_GenerateDebris = 0 UMETA(DisplayName = "Generate Debris"),
	ETornado_CommonAction_Invincible = 1 UMETA(DisplayName = "Invincible"),
	ETornado_CommonAction_WarpIn = 2 UMETA(DisplayName = "Warp In"),
	ETornado_CommonAction_WarpOut = 3 UMETA(DisplayName = "Warp Out"),
	ETornado_CommonAction_PermitAttack = 4 UMETA(DisplayName = "Permit Attack"),
	ETornado_CommonAction_ProhibitAttack = 5 UMETA(DisplayName = "Prohibit Attack"),
	ETornado_CommonAction_EndFloatingMode = 6 UMETA(DisplayName = "End Floating Mode"),
	ETornado_CommonAction_BeginFloatingMode = 7 UMETA(DisplayName = "Begin Floating Mode"),
	ETornado_CommonAction_BeginBigTornado = 8 UMETA(DisplayName = "Begin Big Tornado"),
	ETornado_CommonAction_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyShipCondition
{
	MinCoreNum = 0 UMETA(DisplayName = "Min Core Num"),
	TypeMax = 1 UMETA(DisplayName = "Type Max"),
	ETresEnemyShipCondition_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EStoleTrapN : uint8
{
	CPT_Destination = 0 UMETA(DisplayName = "Destination"),
	CPT_BattleAreaCenter = 1 UMETA(DisplayName = "Battle Area Center"),
	CPT_OwnerLocation = 2 UMETA(DisplayName = "Owner Location"),
	CPT_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex035_StepType : uint8
{
	ETresEnemy_e_ex035_StepType_Back = 0 UMETA(DisplayName = "Back"),
	ETresEnemy_e_ex035_StepType_Right = 1 UMETA(DisplayName = "Right"),
	ETresEnemy_e_ex035_StepType_Left = 2 UMETA(DisplayName = "Left"),
	ETresEnemy_e_ex035_StepType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex043_SideBoostType : uint8
{
	ETresEnemy_e_ex043_SideBoostType_Right = 0 UMETA(DisplayName = "Right"),
	ETresEnemy_e_ex043_SideBoostType_Left = 1 UMETA(DisplayName = "Left"),
	ETresEnemy_e_ex043_SideBoostType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresActionTaskParamType : uint8
{
	Float = 0 UMETA(DisplayName = "Float"),
	Int = 1 UMETA(DisplayName = "Int"),
	Bool = 2 UMETA(DisplayName = "Bool"),
	ETresActionTaskParamType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EMovingTypes_e_ex047 : uint8
{
	TRES_ENEMY_EX047_MOVE_FRONT = 0 UMETA(DisplayName = "Move Front"),
	TRES_ENEMY_EX047_MOVE_BACK = 1 UMETA(DisplayName = "Move Back"),
	TRES_ENEMY_EX047_MOVE_LEFT = 2 UMETA(DisplayName = "Move Left"),
	TRES_ENEMY_EX047_MOVE_RIGHT = 3 UMETA(DisplayName = "Move Right"),
	TRES_ENEMY_EX047_MOVE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class Ee_ex059_ACTION_TYPE : uint8
{
	Single = 0 UMETA(DisplayName = "Single"),
	INCLUSIVE = 1 UMETA(DisplayName = "Inclusive"),
	CONDITION = 2 UMETA(DisplayName = "Condition"),
	e_ex059_ACTION_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETeleportTypes_e_ex301 : uint8
{
	TRES_ENEMY_EX301_TELEPORT_NORMAL = 0 UMETA(DisplayName = "Teleport Normal"),
	TRES_ENEMY_EX301_TELEPORT_SPAWN = 1 UMETA(DisplayName = "Teleport Spawn"),
	TRES_ENEMY_EX301_TELEPORT_INVISIBLE = 2 UMETA(DisplayName = "Teleport Invisible"),
	TRES_ENEMY_EX301_TELEPORT_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx304WarpType : uint8
{
	Warp = 0 UMETA(DisplayName = "Warp"),
	WarpFastMove = 1 UMETA(DisplayName = "Warp Fast Move"),
	MAX = 2 UMETA(Hidden),
	ETresEnemyEx304WarpType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyStepDirectionType_e_ex309 : uint8
{
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX309_RIGHT = 0 UMETA(DisplayName = "Right"),
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX309_LEFT = 1 UMETA(DisplayName = "Left"),
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX309_BACK = 2 UMETA(DisplayName = "Back"),
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX309_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EStepTypes_e_ex311 : uint8
{
	TRES_ENEMY_EX311_BACK_STEP = 0 UMETA(DisplayName = "Back Step"),
	TRES_ENEMY_EX311_RIGHT_STEP = 1 UMETA(DisplayName = "Right Step"),
	TRES_ENEMY_EX311_LEFT_STEP = 2 UMETA(DisplayName = "Left Step"),
	TRES_ENEMY_EX311_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex313_StepType : uint8
{
	ETresEnemy_e_ex313_StepType_Back = 0,
	ETresEnemy_e_ex313_StepType_Right = 1,
	ETresEnemy_e_ex313_StepType_Left = 2,
	ETresEnemy_e_ex313_StepType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EStepTypes_e_ex360 : uint8
{
	TRES_ENEMY_EX360_BACK_STEP = 0,
	TRES_ENEMY_EX360_RIGHT_STEP = 1,
	TRES_ENEMY_EX360_LEFT_STEP = 2,
	TRES_ENEMY_EX360_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx361CounterAfterActionKind : uint8
{
	Kabutowari = 0,
	AirCombo = 1,
	MAX = 2,
	ETresEnemyEx361CounterAfterActionKind_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex361_StepType : uint8
{
	ETresEnemy_e_ex361_StepType_Back = 0,
	ETresEnemy_e_ex361_StepType_Right = 1,
	ETresEnemy_e_ex361_StepType_Left = 2,
	ETresEnemy_e_ex361_StepType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETeleportTypes_e_ex367 : uint8
{
	TRES_ENEMY_EX367_TELEPORT_NORMAL = 0,
	TRES_ENEMY_EX367_TELEPORT_SPAWN = 1,
	TRES_ENEMY_EX367_TELEPORT_INVISIBLE = 2,
	TRES_ENEMY_EX367_TELEPORT_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex731_StepType : uint8
{
	ETresEnemy_e_ex731_StepType_Back = 0,
	ETresEnemy_e_ex731_StepType_Right = 1,
	ETresEnemy_e_ex731_StepType_Left = 2,
	ETresEnemy_e_ex731_StepType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEEX771_ACTION_1WARP_KIND : uint8
{
	WARP_KIND_COMMON = 0,
	WARP_KIND_ESCAPE = 1,
	WARP_KIND_HVN_PHASE3_FIRST = 2,
	WARP_KIND_FTRND_END = 3,
	WARP_KIND_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEEX773_ACTION_1WARP_KIND : uint8
{
	WARP_KIND_COMMON = 0,
	WARP_KIND_ESCAPE = 1,
	WARP_KIND_HVN_PHASE3_FIRST = 2,
	WARP_KIND_FTRND_END = 3,
	WARP_KIND_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EHVSceneTypes_e_ex781 : uint8
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
enum class ETresEnemyEx304FastMoveType : uint8
{
	FastMove = 0,
	FastMoveWarp = 1,
	MAX = 2 UMETA(Hidden),
	ETresEnemyEx304FastMoveType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EKBRideTypes_e_ex311 : uint8
{
	TRES_ENEMY_EX311_KBRIDE_ALL = 0,
	TRES_ENEMY_EX311_KBRIDE_CALL = 1,
	TRES_ENEMY_EX311_KBRIDE_RIDE = 2,
	TRES_ENEMY_EX311_KBRIDE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx353FastMoveType : uint8
{
	Speed = 0,
	Time = 1,
	MAX = 2 UMETA(Hidden),
	ETresEnemyEx353FastMoveType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex043_PhaseNum : uint8
{
	ETresEnemy_e_ex043_Phase1 = 0,
	ETresEnemy_e_ex043_Phase2 = 1,
	ETresEnemy_e_ex043_Phase3 = 2,
	ETresEnemy_e_ex043_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEX354_WarpPosType : uint8
{
	EEX354_WarpPosType_Land = 0,
	EEX354_WarpPosType_Fly = 1,
	EEX354_WarpPosType_Fly_NoRev = 2,
	EEX354_WarpPosType_Max = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEX354_WarpType : uint8
{
	EEX354_WarpType_Default = 0,
	EEX354_WarpType_Disappear = 1,
	EEX354_WarpType_Appear = 2,
	EEX354_WarpType_Max = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EBX901_QuickMoveDir : uint8
{
	EBX901_QuickMoveDir_Front = 0,
	EBX901_QuickMoveDir_Up = 1,
	EBX901_QuickMoveDir_Down = 2,
	EBX901_QuickMoveDir_Left = 3,
	EBX901_QuickMoveDir_Right = 4,
	EBX901_QuickMoveDir_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyHeight_e_ex357 : uint8
{
	Target = 0 UMETA(DisplayName = "Target"),
	Ground = 1 UMETA(DisplayName = "Ground"),
	ETresEnemyHeight_e_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyMove_e_ex357 : uint8
{
	Target = 0 UMETA(DisplayName = "Target"),
	InvTarget = 1 UMETA(DisplayName = "Inv Target"),
	ETresEnemyMove_e_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyArc_e_ex357 : uint8
{
	Right = 0 UMETA(DisplayName = "Right"),
	Left = 1 UMETA(DisplayName = "Left"),
	ETresEnemyArc_e_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWarpType_e_ex355 : uint8
{
	EWarpType_e_ex355_Appear = 0,
	EWarpType_e_ex355_Disappear = 1,
	EWarpType_e_ex355_Default = 2,
	EWarpType_e_ex355_Max = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEEX771_POINT_KIND : uint8
{
	POINT_KIND_NONE = 0,
	POINT_KIND_FACE_CLAW = 1,
	POINT_KIND_HEAVENLY_PILLAR_START = 2,
	POINT_KIND_HEAVENLY_PILLAR_END = 3,
	POINT_KIND_FLARE_TORNADO = 4,
	POINT_KIND_ALL_PILLAR_HEIGHT = 5,
	POINT_KIND_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEEX773_POINT_KIND : uint8
{
	POINT_KIND_NONE = 0,
	POINT_KIND_FACE_CLAW = 1,
	POINT_KIND_HEAVENLY_PILLAR_START = 2,
	POINT_KIND_HEAVENLY_PILLAR_END = 3,
	POINT_KIND_FLARE_TORNADO = 4,
	POINT_KIND_ALL_PILLAR_HEIGHT = 5,
	POINT_KIND_ECLIPSE13_WARP_ESCAPE = 6,
	POINT_KIND_ECLIPSE13_WARP_APEAR = 7,
	POINT_KIND_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx006ScrumState : uint8
{
	WARP = 0,
	IDLE = 1,
	WANTED_TURN = 2,
	TURN = 3,
	WANTED_DASH = 4,
	DASH = 5,
	MAX = 6 UMETA(Hidden),
	ETresEnemyEx006ScrumState_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresTurnMode : uint8
{
	TurnInPlace = 0,
	QuickTurn = 1,
	ETresTurnMode_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
namespace ETresAIAction
{
	enum Type
	{
		Move,
		Fall,
		Jump,
		Custom,
		ETresAIAction_MAX
	};
}

UENUM(BlueprintType)
enum class ETresEnemyca901WarpKind : uint8
{
	TRES_ENEMY_CA901_WARP_FIXEDPlACE = 0,
	TRES_ENEMY_CA901_WARP_TENTACLESUMMONS = 1,
	TRES_ENEMY_CA901_WARP_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex035_AIPointType : uint8
{
	ETresEnemy_e_ex035_AIPointType_Tree = 0,
	ETresEnemy_e_ex035_AIPointType_Carriage = 1,
	ETresEnemy_e_ex035_AIPointType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresAIActionAbortTimingID : uint8
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
enum class ETresAIAttrResistKind : uint8
{
	Normal = 0,
	Low = 1,
	High = 2,
	Invalid = 3,
	ETresAIAttrResistKind_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresWaypointKind : uint8
{
	Unknown = 0,
	PositionForShooting = 1,
	ETresWaypointKind_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresNavAreaFlag : uint8
{
	Default = 0,
	Jump = 1,
	Fall = 2,
	Hop = 3,
	Rail = 4,
	Vault = 5,
	PowerWildOnlyTreeBranch = 6,
	LowJump = 7,
	WaterSurface = 8,
	Damage = 9,
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
enum ETresFaceAnimType {
    NORMAL_AUTO,
    NORMAL_AUTO_IDLE_BATTLE,
    NORMAL_AUTO_BATTLE_IDLE,
    Normal,
    NO_1,
    NO_2,
    NO_3,
    NO_4,
    Battle,
    BATTLE_SINGLE,
    BA_1,
    Damage,
    DMG_LOOP,
    DMG_END,
    MAGIC_AUTO_IDLE_BATTLE,
    MAGIC2_AUTO_IDLE_BATTLE,
    USEITEM_AUTO_IDLE_BATTLE,
    NORMAL_AUTO_01,
    SA_FREEZE_0,
    SA_BARN_0,
    SA_OIL_0,
    SA_STEAM_0,
    SA_THUNDER_0,
    AF_RC_0,
    AF_VS_0,
    AF_TC_0,
    WEP_BS_0,
    WEP_GUN_0,
    WEP_SD_0,
    NORMAL_AUTO_EF01,
    NORMAL_AUTO_EU01,
    NORMAL_AUTO_ED01,
    NORMAL_AUTO_ED02,
    NORMAL_AUTO_ER01,
    NORMAL_AUTO_EL01,
    MOUTH_OPEN_01,
    MOUTH_OPEN_02,
    MOUTH_OPEN_03,
    MOUTH_OPEN_04,
    MOUTH_OPEN_05,
    TIPBALANCE_AUTO_R01,
    TIPBALANCE_AUTO_L01,
    RAILSLIDE_AUTO01,
    RAILSLIDE_AUTO02,
    PLEASURE_EYE00,
    PLEASURE_EYE01,
    PLEASURE_EYE02,
    PREASURE_LIP00,
    PREASURE_LIP01,
    PREASURE_LIP02,
    SURPRISE_EYE00,
    SURPRISE_EYE01,
    SURPRISE_LIP00,
    SURPRISE_LIP01,
    EMOTION_NO300,
    EMOTION_NO301,
    EMOTION_NO302,
    EMOTION_NO350,
    EMOTION_NO351,
    EMOTION_NO352,
    EMOTION_NO354,
    EMOTION_NO400,
    EMOTION_NO401,
    EMOTION_NO450,
    EMOTION_NO451,
    EMOTION_NO452,
    EMOTION_NO500,
    EMOTION_NO501,
    EMOTION_NO502,
    NORMAL_AUTO_EC01,
    EMOTION_TA_DE_E_00,
    EMOTION_TA_DE_E_01,
    EMOTION_TA_DE_E_02,
    EMOTION_TA_DE_E_03,
    EMOTION_TA_DE_E_04,
    EMOTION_TA_DE_E_05,
    EMOTION_TA_DE_E_06,
    EMOTION_TA_DE_E_07,
    EMOTION_TA_DE_E_08,
    EMOTION_TA_DE_E_09,
    EMOTION_TA_DE_E_10,
    EMOTION_TA_DE_E_11,
    EMOTION_TA_DE_E_12,
    EMOTION_TA_DE_M_00,
    EMOTION_TA_DE_M_01,
    EMOTION_TA_DE_M_02,
    EMOTION_TA_DE_M_03,
    EMOTION_TA_SM_E_00,
    EMOTION_TA_SM_E_01,
    EMOTION_TA_SM_E_02,
    EMOTION_TA_SM_E_03,
    EMOTION_TA_SM_M_00,
    EMOTION_TA_SM_M_01,
    EMOTION_TA_SM_M_02,
    EMOTION_TA_SM_M_03,
    EMOTION_TA_AN_E_00,
    EMOTION_TA_AN_E_01,
    EMOTION_TA_AN_E_02,
    EMOTION_TA_AN_E_20,
    EMOTION_TA_AN_M_00,
    EMOTION_TA_AN_M_01,
    EMOTION_TA_AN_M_02,
    EMOTION_TA_AN_M_03,
    EMOTION_TA_SA_E_00,
    EMOTION_TA_SA_E_01,
    EMOTION_TA_SA_E_02,
    EMOTION_TA_SA_E_03,
    EMOTION_TA_SA_E_04,
    EMOTION_TA_SA_E_20,
    EMOTION_TA_SA_M_00,
    EMOTION_TA_SA_M_01,
    EMOTION_TA_SA_M_02,
    EMOTION_TA_SU_E_00,
    EMOTION_TA_SU_E_01,
    EMOTION_TA_SU_E_02,
    EMOTION_TA_SU_E_20,
    EMOTION_TA_SU_M_00,
    EMOTION_TA_SU_M_02,
    FACE_ANIM_TYPE_MAX UMETA(Hidden),
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
	PRIO_MAX = 10,
	_PRIO_MAX = 11 UMETA(Hidden),
	ETresFaceAnimPlayPriority_MAX = 12 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresSplineAnchorInterpType : uint8
{
	TSAIT_SPLINE = 0 UMETA(DisplayName = "Spline"),
	TSAIT_LINEAR = 1 UMETA(DisplayName = "Linear"),
	_TSAIT_MAX = 2 UMETA(Hidden),
	ETresSplineAnchorInterpType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETRES_ATTACH_OBJECT_NAME : uint8
{
	TRES_ATTACH_OBJECT_OWNER = 0 UMETA(DisplayName = "Owner"),
	TRES_ATTACH_OBJECT_ATTACH_TO_OBJECT = 1 UMETA(DisplayName = "Attach to Object"),
	TRES_ATTACH_OBJECT_ATTACH_TO_WEAPON = 2 UMETA(DisplayName = "Attach to Weapon"),
	TRES_ATTACH_OBJECT_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresSoundAliasUnitID : uint8
{
	SEAU_NOTHING = 0 UMETA(DisplayName = "Nothing"),
	SEAU_RH_WEAPON = 1 UMETA(DisplayName = "RH Weapon"),
	SEAU_LH_WEAPON = 2 UMETA(DisplayName = "LH Weapon"),
	SEAU_RL_WEAPON = 3 UMETA(DisplayName = "RL Weapon"),
	SEAU_LL_WEAPON = 4 UMETA(DisplayName = "LL Weapon"),
	_SEAU_MAX = 5 UMETA(Hidden),
	ETresSoundAliasUnitID_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EFSQEX_EFFCT_CURVE_DATA_AXIS
{
	FSQEX_EFFCT_CURVE_DATA_AXIS_SCALE = 0 UMETA(DisplayName = "Scale"),
	FSQEX_EFFCT_CURVE_DATA_AXIS_XYZ = 1 UMETA(DisplayName = "XYZ"),
	FSQEX_EFFCT_CURVE_DATA_AXIS_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresAtkCollRotAttachType : uint8
{
	TRES_ACRA_NORMAL = 0 UMETA(DisplayName = "Normal"),
	TRES_ACRA_LOCAL = 1 UMETA(DisplayName = "Local"),
	TRES_ACRA_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyDw405PostWaitAction : uint8
{
	TRES_ENEMY_DW405_POSTWAITACTION_IDLE = 0 UMETA(DisplayName = "Idle"),
	TRES_ENEMY_DW405_POSTWAITACTION_WHEELROLL = 1 UMETA(DisplayName = "Wheel Roll"),
	TRES_ENEMY_DW405_POSTWAITACTION_WALK = 2 UMETA(DisplayName = "Walk"),
	TRES_ENEMY_DW405_POSTWAITACTION_RESTBARRIER = 3 UMETA(DisplayName = "DestroyClaymore"),
	TRES_ENEMY_DW405_POSTWAITACTION_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyDw405AttackPossibleKind
{
	TRES_ENEMY_DW405_ATTACKPOSSIBLE_LAND = 0 UMETA(DisplayName = "Land"),
	TRES_ENEMY_DW405_ATTACKPOSSIBLE_AIR = 1 UMETA(DisplayName = "Air"),
	TRES_ENEMY_DW405_ATTACKPOSSIBLE_ALWAYS = 2 UMETA(DisplayName = "Always"),
	TRES_ENEMY_DW405_ATTACKPOSSIBLE_NONE = 3 UMETA(DisplayName = "None"),
	TRES_ENEMY_DW405_ATTACKPOSSIBLE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyDw405ComboAttackType : uint8
{
	TRES_ENEMY_DW405_COMBOATTCKTYPE_LAND = 0 UMETA(DisplayName = "Land"),
	TRES_ENEMY_DW405_COMBOATTCKTYPE_AIR = 1 UMETA(DisplayName = "Air"),
	TRES_ENEMY_DW405_COMBOATTCKTYPE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx361ComboKind : uint8
{
	AirCombo_VerticalSwing = 0 UMETA(DisplayName = "Vertical Swing"),
	AirCombo_Turning = 1 UMETA(DisplayName = "Turning"),
	AirCombo_Thrust = 2 UMETA(DisplayName = "Thrust"),
	AirCombo_ContinuousAttack = 3 UMETA(DisplayName = "Continuous Attack"),
	AirCombo_Beat = 4 UMETA(DisplayName = "Beat"),
	MAX = 5 UMETA(Hidden),
	ETresEnemyEx361ComboKind_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresAttack_e_ex773_ReverseFlareMoveAxisType : uint8
{
	Camera = 0 UMETA(DisplayName = "Camera"),
	TargetDir2D = 1 UMETA(DisplayName = "Target Dir 2D"),
	ETresAttack_e_ex773_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresHitWallAction_e_ex011 : uint8
{
	None = 0 UMETA(DisplayName = "None"),
	AttackExit = 1 UMETA(DisplayName = "Attack Exit"),
	Reflection = 2 UMETA(DisplayName = "Reflection"),
	ETresHitWallAction_e_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresDashLimit_e_ex011 : uint8
{
	Distance = 0,
	Time = 1,
	TargetDistance = 2,
	ETresDashLimit_e_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EFireTurnTypes_e_ex047 : uint8
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
enum class EMoveSlashTypes_e_ex301 : uint8
{
	TRES_ENEMY_EX301_MOVESLASH1 = 0,
	TRES_ENEMY_EX301_MOVESLASH2 = 1,
	TRES_ENEMY_EX301_MOVESLASH3 = 2,
	TRES_ENEMY_EX301_MOVESLASH4 = 3,
	TRES_ENEMY_EX301_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx302ComboKind : uint8
{
	Combo_VerticalSwing = 0,
	Combo_SideSwing = 1,
	Combo_Attract = 2,
	Combo_JumpSlash = 3,
	Combo_NearBlow = 4,
	Combo_VerticalSwing2 = 5,
	Combo_AirShotDown = 6,
	MAX = 7 UMETA(Hidden),
	ETresEnemyEx302ComboKind_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx304ComboKind : uint8
{
	Combo_Short = 0,
	Combo_Medium = 1,
	Combo_Wide = 2,
	Combo_FinishBlow = 3,
	Combo_FinishToss = 4,
	MAX = 5 UMETA(Hidden),
	ETresEnemyEx304ComboKind_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex305_ShotDirType : uint8
{
	Front = 0,
	Back = 1,
	Left = 2,
	Right = 3,
	Down = 4,
	ETresEnemy_e_ex305_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex313_DarkHandComboType : uint8
{
	ETresEnemy_e_ex313_DarkHandComboType_Slash = 0,
	ETresEnemy_e_ex313_DarkHandComboType_Thrust = 1,
	ETresEnemy_e_ex313_DarkHandComboType_Finish = 2,
	ETresEnemy_e_ex313_DarkHandComboType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyex351ComboKind : uint8
{
	Combo_VerticalSwing = 0,
	Combo_SideSwing = 1,
	Combo_Attract = 2,
	Combo_JumpSlash = 3,
	Combo_NearBlow = 4,
	Combo_VerticalSwing2 = 5,
	Combo_AirShotDown = 6,
	MAX = 7 UMETA(Hidden),
	ETresEnemyex351ComboKind_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx353RootMotionCorrectionKind : uint8
{
	CurveData = 0,
	DistRate = 1,
	AimFinishLocation = 2,
	MAX = 3 UMETA(Hidden),
	ETresEnemyEx353RootMotionCorrectionKind_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx353ComboKind : uint8
{
	Combo_Short = 0,
	Combo_Medium = 1,
	Combo_Wide = 2,
	Combo_FinishBlow = 3,
	Combo_FinishToss = 4,
	Combo_KickUp = 5,
	Combo_RushRoundhouseKick = 6,
	MAX = 7 UMETA(Hidden),
	ETresEnemyEx353ComboKind_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEX354_NormalShotDistanceType : uint8
{
	Distance2D = 0,
	Distance3D = 1,
	EEX354_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex354_ShotDirType : uint8
{
	Front = 0,
	Back = 1,
	Left = 2,
	Right = 3,
	Down = 4,
	ETresEnemy_e_ex354_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyWarpCutMotionType_e_ex357
{
	WarpCut = 0,
	ContinuityCutStart = 1,
	ContinuityCutEnd = 2,
	ETresEnemyWarpCutMotionType_e_ex357_MAX = 3 UMETA(Hidden)
};

UENUM()
enum EEX359_ComboStartType {
	EEX359_ComboStartType_1,
	EEX359_ComboStartType_2,
	EEX359_ComboStartType_3,
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex361_DarkHandComboType : uint8
{
	ETresEnemy_e_ex361_DarkHandComboType_Slash = 0,
	ETresEnemy_e_ex361_DarkHandComboType_Thrust = 1,
	ETresEnemy_e_ex361_DarkHandComboType_Finish = 2,
	ETresEnemy_e_ex361_DarkHandComboType_VerticalSwing = 3,
	ETresEnemy_e_ex361_DarkHandComboType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EMoveSlashTypes_e_ex367
{
	TRES_ENEMY_EX367_MOVESLASH1 = 0,
	TRES_ENEMY_EX367_MOVESLASH2 = 1,
	TRES_ENEMY_EX367_MOVESLASH3 = 2,
	TRES_ENEMY_EX367_MOVESLASH4 = 3,
	TRES_ENEMY_EX367_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class Ee_ex731_DoubleClawType : uint8
{
	e_ex731_DoubleClawType_SINGLE = 0,
	e_ex731_DoubleClawType_CONDITION = 1,
	e_ex731_DoubleClawType_DASH = 2,
	e_ex731_DoubleClawType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ECloneBurstSlashTypes_e_ex360 : uint8
{
	TRES_ENEMY_EX360_CLONEBURSTSLASH_MOVE_CUTDOWN = 0,
	TRES_ENEMY_EX360_CLONEBURSTSLASH_CUTUP = 1,
	TRES_ENEMY_EX360_CLONEBURSTSLASH_CUTDOWN = 2,
	TRES_ENEMY_EX360_CLONEBURSTSLASH_SHOOT = 3,
	TRES_ENEMY_EX360_CLONEBURSTSLASH_MAX = 4 UMETA(Hidden)
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
	TRES_ENEMY_EX360_CLONEBURST_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EBreakSlashNumTypes_e_ex781 : uint8
{
	TRES_ENEMY_EX781_NORMAL_SLASH = 0,
	TRES_ENEMY_EX781_CONTINUOUS_SLASH = 1,
	TRES_ENEMY_EX781_FEINT = 2,
	TRES_ENEMY_EX781_FAST_SLASH = 3,
	TRES_ENEMY_EX781_FAST_CONTISLASH = 4,
	TRES_ENEMY_EX781_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex043_FlameFangBoostType : uint8
{
	ETresEnemy_e_ex043_FlameFangBoostType_Right = 0,
	ETresEnemy_e_ex043_FlameFangBoostType_Left = 1,
	ETresEnemy_e_ex043_FlameFangBoostType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresAttack2_e_ex081_RotationGliding_HitWallReactionType : uint8
{
	TRES_EX081_ATTACK2_HITWALLREACTIONTYPE_END = 0,
	TRES_EX081_ATTACK2_HITWALLREACTIONTYPE_REFLECTION = 1,
	TRES_EX081_ATTACK2_HITWALLREACTIONTYPE_ALONGWALL = 2,
	TRES_EX081_ATTACK2_HITWALLREACTIONTYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx302SlowEndKind : uint8
{
	LastBlow_EndSlow = 0,
	LastContinuousHit_EndSlow = 1,
	Last_EndSlow = 2,
	MAX = 3 UMETA(Hidden),
	ETresEnemyEx302SlowEndKind_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex305_ArmWarpType : uint8
{
	Random = 0,
	Vertical = 1,
	Horizontal = 2,
	ETresEnemy_e_ex305_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEX354_ArmSpawnPosAdjustType : uint8
{
	EEX354_ArmSpawnPosAdjustType_Pos = 0,
	EEX354_ArmSpawnPosAdjustType_Dir = 1,
	EEX354_ArmSpawnPosAdjustType_Max = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEX354_ArmAimDirType : uint8
{
	EEX354_ArmAimDirType_ToTarget = 0,
	EEX354_ArmAimDirType_OwnerToSelf = 1,
	EEX354_ArmAimDirType_OwnerToTarget = 2,
	EEX354_ArmAimDirType_Max = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEX354_ArmSpawnDirType : uint8
{
	EEX355_ArmSpawnDirType_Owner = 0,
	EEX355_ArmSpawnDirType_Target = 1,
	EEX355_ArmSpawnDirType_ToTarget = 2,
	EEX355_ArmSpawnDirType_Camera = 3,
	EEX355_ArmSpawnDirType_Max = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex354_ArmWarpPos : uint8
{
	Target = 0,
	Owner = 1,
	ETresEnemy_e_ex354_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex354_ArmWarpType : uint8
{
	Random = 0,
	Vertical = 1,
	Horizontal = 2,
	ETresEnemy_e_ex354_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex354_ArmTag : uint8
{
	ETresEnemy_e_ex354_ArmWarpTag_Left = 0,
	ETresEnemy_e_ex354_ArmWarpTag_Right = 1,
	ETresEnemy_e_ex354_ArmWarpTag_Max = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX355_RushAwayTurnDir
{
	EEX355_RushAwayTurnDir_Default = 0,
	EEX355_RushAwayTurnDir_Right = 1,
	EEX355_RushAwayTurnDir_Left = 2,
	EEX355_RushAwayTurnDir_Max = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX355_RushAwayTurnType
{
	EEX355_RushAwayTurnType_Destination = 0,
	EEX355_RushAwayTurnType_Target = 1,
	EEX355_RushAwayTurnType_Max = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyCardThrow_e_ex356 : uint8
{
	First = 0,
	Second = 1,
	Finish = 2,
	ETresEnemyCardThrow_e_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EBX901_ComboType : uint8
{
	EBX901_Combo_Claw = 0,
	EBX901_Combo_Punch = 1,
	EBX901_Combo_Chop = 2,
	EBX901_Combo_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEx304HandKind : uint8
{
	Left = 0,
	Right = 1,
	Max = 2 UMETA(Hidden),
	ETresEx304HandKind_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EDarkVolleyNumTypes_e_ex325 : uint8
{
	TRES_ENEMY_EX047_DARKVOLLEYNUM1 = 0,
	TRES_ENEMY_EX047_DARKVOLLEYNUM4 = 1,
	TRES_ENEMY_EX047_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx351RootMotionCorrectionKind : uint8
{
	AimFinishLocation = 0,
	DistRate = 1,
	MAX = 2 UMETA(Hidden),
	ETresEnemyEx351RootMotionCorrectionKind_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx351KeyBladeComboKind : uint8
{
	Combo_LeftRotaion = 0,
	Combo_RightRotation = 1,
	AirCombo_VerticalSwing = 2,
	AirCombo_SideSwing = 3,
	AirCombo_Attract = 4,
	AirMaliceWhip_VerticalSwing = 5,
	AirMaliceWhip_SideSwing = 6,
	MAX = 7 UMETA(Hidden),
	ETresEnemyEx351KeyBladeComboKind_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEx353HandKind : uint8
{
	Left = 0,
	Right = 1,
	Max = 2 UMETA(Hidden),
	ETresEx353HandKind_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX355_SwingTractionHorizontalDir
{
	EEX355_SwingTractionHorizontalDir_Both = 0,
	EEX355_SwingTractionHorizontalDir_Front = 1,
	EEX355_SwingTractionHorizontalDir_Rear = 2,
	EEX355_SwingTractionHorizontalDir_Max = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX355_SwingTractionDir
{
	EEX355_SwingTractionDir_Both = 0,
	EEX355_SwingTractionDir_Up = 1,
	EEX355_SwingTractionDir_Down = 2,
	EEX355_SwingTractionDir_Max = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresWeaponDirection_e_ex357 : uint8
{
	Vertical = 0,
	Horizontal = 1,
	Max = 2 UMETA(Hidden),
	ETresWeaponDirection_e_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEX359_BerserkComboType : uint8
{
	EEX359_BerserkComboType0 = 0,
	EEX359_BerserkComboType1 = 1,
	EEX359_BerserkComboType2 = 2,
	EEX359_BerserkComboType3 = 3,
	EEX359_BerserkComboType_Max = 4 UMETA(Hidden),
	EEX359_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx361SettingKind : uint8
{
	Myself = 0,
	Target = 1,
	Sandwich = 2,
	Ceiling = 3,
	Ring = 4,
	Row = 5,
	RowTarget = 6,
	MAX = 7 UMETA(Hidden),
	ETresEnemyEx361SettingKind_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EPowerAlcanamNumTypes_e_ex362 : uint8
{
	TRES_ENEMY_EX362_ATTACK_ALL = 0,
	TRES_ENEMY_EX362_ATTACK_TYPEA = 1,
	TRES_ENEMY_EX362_ATTACK_TYPEB = 2,
	TRES_ENEMY_EX362_ATTACK_TYPEC = 3,
	TRES_ENEMY_EX362_ATTACK_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EBX901_BoostAttack_Mine : uint8
{
	EBX901_BoostAttack_Mine_Back = 0,
	EBX901_BoostAttack_Mine_Forward = 1,
	EBX901_BoostAttack_Mine_Turn = 2,
	EBX901_BoostAttack_Mine_Max = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresAttack4AscensionTypes_e_ex301 : uint8
{
	TRES_ATTACK4_ENEMY_EX301_ASCENSION1 = 0,
	TRES_ATTACK4_ENEMY_EX301_ASCENSION2 = 1,
	TRES_ATTACK4_ENEMY_EX301_ASCENSION3 = 2,
	TRES_ATTACK4_ENEMY_EX301_ASCENSION4 = 3,
	TRES_ATTACK4_ENEMY_EX301_ASCENSION5 = 4,
	TRES_ATTACK4_ENEMY_EX301_ASCENSION6 = 5,
	TRES_ATTACK4_ENEMY_EX301_ASCENSION7 = 6,
	TRES_ATTACK4_ENEMY_EX301_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
namespace ETresEnemyPressCardAttribute_e_ex356
{
	enum Type
	{
		None,
		Fire,
		Thunder,
		ETresEnemyPressCardAttribute_e_MAX
	};
}

UENUM(BlueprintType)
enum class ETresEnemyContinuityCutAction_e_ex357 : uint8
{
	Auto = 0,
	ForceLand = 1,
	ForceAir = 2,
	ETresEnemyContinuityCutAction_e_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWaterActionTypes_e_ex047 : uint8
{
	TRES_ENEMY_EX047_WATERACTION_ALL = 0,
	TRES_ENEMY_EX047_WATERACTION_START = 1,
	TRES_ENEMY_EX047_WATERACTION_LOOP = 2,
	TRES_ENEMY_EX047_WATERACTION_END = 3,
	TRES_ENEMY_EX047_WATERACTION_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresAttack5XIIIAttackTypes_e_ex301 : uint8
{
	TRES_ATTACK5_ENEMY_EX301_XIIIATK1 = 0,
	TRES_ATTACK5_ENEMY_EX301_XIIIATK2 = 1,
	TRES_ATTACK5_ENEMY_EX301_XIIIATK3 = 2,
	TRES_ATTACK5_ENEMY_EX301_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx353EveryDirectionShotKind : uint8
{
	StartOrLoop = 0,
	End = 1,
	MAX = 2 UMETA(Hidden),
	ETresEnemyEx353EveryDirectionShotKind_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyWildDanceWarpHeight_e_ex358 : uint8
{
	Normal = 0,
	Absolute = 1,
	Relative = 2,
	TargetOffset = 3,
	ETresEnemyWildDanceWarpHeight_e_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyWildDanceWarpDirection_e_ex358 : uint8
{
	Right = 0,
	Front = 1,
	Left = 2,
	ETresEnemyWildDanceWarpDirection_e_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EDarkSplicerTypes_e_ex360 : uint8
{
	TRES_ENEMY_EX360_DARKSPLICER_MOVE_CUTDOWN = 0,
	TRES_ENEMY_EX360_DARKSPLICER_CUTDOWN = 1,
	TRES_ENEMY_EX360_DARKSPLICER_CUTUP = 2,
	TRES_ENEMY_EX360_DARKSPLICER_SPIN_CUTUP = 3,
	TRES_ENEMY_EX360_DARKSPLICER_MOVE_WCUT = 4,
	TRES_ENEMY_EX360_DARKSPLICER_WCUT = 5,
	TRES_ENEMY_EX360_DARKSPLICER_MOVE_SPINCUT = 6,
	TRES_ENEMY_EX360_DARKSPLICER_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx361ThunderKind : uint8
{
	HomingBaseTarget = 0,
	FirstBaseTarget = 1,
	MAX = 2 UMETA(Hidden),
	ETresEnemyEx361ThunderKind_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresAttack5XIIIAttackTypes_e_ex367 : uint8
{
	TRES_ATTACK5_ENEMY_EX367_XIIIATKSTART = 0,
	TRES_ATTACK5_ENEMY_EX367_CHANGECIRCLE = 1,
	TRES_ATTACK5_ENEMY_EX367_XIIIATKEND = 2,
	TRES_ATTACK5_ENEMY_EX367_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EProjectileSpawnPos : uint8
{
	EProjectileSpawnPos_L = 0,
	EProjectileSpawnPos_R = 1,
	EProjectileSpawnPos_H = 2,
	EProjectileSpawnPos_Max = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresHitWallAction_e_ex059 : uint8
{
	None = 0,
	AttackExit = 1,
	ETresHitWallAction_e_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EDarkRushTypes_e_ex325 : uint8
{
	TRES_ENEMY_EX325_DARKRUSH_START = 0,
	TRES_ENEMY_EX325_DARKRUSH_STROM = 1,
	TRES_ENEMY_EX325_DARKRUSH_ATTACK = 2,
	TRES_ENEMY_EX325_DARKRUSH_FINISH = 3,
	TRES_ENEMY_EX325_DARKRUSH_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX355_DashMiddleAction
{
	EEX355_DashMiddleAction_None = 0,
	EEX355_DashRoamDir_Accel = 1,
	EEX355_DashRoamDir_Swing = 2,
	EEX355_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX355_DashRoamDir
{
	EEX355_DashRoamDir_Left = 0,
	EEX355_DashRoamDir_Right = 1,
	EEX355_DashRoamDir_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EIceProjectileDestroyType_e_he903 : uint8
{
	DestroyType_Destroy = 0,
	DestroyType_NoHoming = 1,
	DestroyType_Evade = 2,
	DestroyType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEX355_CutDownClaymoreGoalBase : uint8
{
	EEX355_CutDownClaymoreGoalBase_Owner = 0,
	EEX355_CutDownClaymoreGoalBase_Target = 1,
	EEX355_CutDownClaymoreGoalBase_Map = 2,
	EEX355_CutDownClaymoreGoalBase_Max = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EReverseSlashTypes_e_ex781 : uint8
{
	TRES_ENEMY_EX781_RS_ALL = 0,
	TRES_ENEMY_EX781_RS_SLASH_UP = 1,
	TRES_ENEMY_EX781_RS_SLASH_DOWN = 2,
	TRES_ENEMY_EX781_RS_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EBigTornadoProjPos
{
	EBigTornadoProjPos_L = 0,
	EBigTornadoProjPos_R = 1,
	EBigTornadoProjPos_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresHitWallAction : uint8
{
	None = 0,
	AttackExit = 1,
	Reflection = 2,
	ETresHitWallAction_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresDashLimit : uint8
{
	Distance = 0,
	Time = 1,
	TargetDistance = 2,
	ETresDashLimit_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresJumpAttack : uint8
{
	Proximity = 0,
	Rush = 1,
	ETresJumpAttack_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresAutoNavLinkDebugDrawLabels : uint8
{
	Disable = 0,
	Score = 1,
	Priority = 2,
	ETresAutoNavLinkDebugDrawLabels_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresBPEM_SystemEventType : uint8
{
	UNKNOWN = 0,
	TICK_ENABLED = 1,
	TICK_DISABLED = 2,
	SUSPEND_START = 3,
	SUSPEND_END = 4,
	ETresBPEM_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresBPEM_BattleEventType : uint8
{
	UNKNOWN = 0,
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
	ETresBPEM_MAX = 25 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresBPEM_BattleType : uint8
{
	UNKNOWN = 0,
	XIII_A = 1,
	XIII_B = 2,
	XIII_E = 3,
	ETresBPEM_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresPlayerSpecialActionType : uint8
{
	Guard = 0,
	InvincibleTakeDamage = 1,
	ETresPlayerSpecialActionType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresCustomCompositeReturnCondition : uint8
{
	FirstSuccess = 0,
	FirstFailure = 1,
	LastNodeCompletes = 2,
	ETresCustomCompositeReturnCondition_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresControlledRandomPeriod : uint8
{
	NoRandom = 0,
	VeryLowRandom = 1,
	LowRandom = 2,
	MediumRandom = 3,
	PureRandom = 4,
	Custom = 5,
	ETresControlledRandomPeriod_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
namespace ETresArithmeticComparisonSource
{
	enum Type
	{
		Blackboard = 0,
		ActorProperty = 1,
		ActorFunction = 2,
		LiteralValue = 3,
		ETresArithmeticComparisonSource_MAX = 4 UMETA(Hidden)
	};
}

UENUM(BlueprintType)
enum class ETresCanCoopJoinRole : uint8
{
	Leader = 0,
	Follower = 1,
	LeaderOrFollower = 2,
	ETresCanCoopJoinRole_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX354_TargetMoveDir
{
	EEX354_TargetMoveDir_Front = 0,
	EEX354_TargetMoveDir_Rear = 1,
	EEX354_TargetMoveDir_Right = 2,
	EEX354_TargetMoveDir_Left = 3,
	EEX354_TargetMoveDir_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
namespace ETresHateCompare
{
	enum Type
	{
		Blackboard = 0,
		MostHated = 1,
		TotalHateAgainstAllEnemies = 2,
		ETresHateCompare_MAX = 3 UMETA(Hidden)
	};
}

UENUM(BlueprintType)
namespace EInterruptableEvent
{
	enum Type
	{
		IE_OnDamage = 0,
		IE_OnReflect = 1,
		IE_OnRevenge = 2,
		IE_OnDeath = 3,
		IE_OnScriptBegin = 4,
		IE_OnScriptEnd = 5,
		IE_MAX = 6 UMETA(Hidden)
	};
}

UENUM(BlueprintType)
namespace ETresDecoratorMercunaRaycast
{
	enum Type
	{
		Forward = 0,
		Left = 1,
		Right = 2,
		Back = 3,
		Up = 4,
		Down = 5,
		Direct = 6,
		ETresDecoratorMercunaRaycast_MAX = 7 UMETA(Hidden)
	};
}

UENUM(BlueprintType)
namespace ETresDecoratorNavigationRayDir
{
	enum Type
	{
		Forward = 0,
		Left = 1,
		Right = 2,
		Back = 3,
		Direct = 4,
		ETresDecoratorNavigationRayDir_MAX = 5 UMETA(Hidden)
	};
}

UENUM(BlueprintType)
namespace ETresDecoratorValueModifierMethod
{
	enum Type
	{
		Set = 0,
		Add = 1,
		Sub = 2,
		Mul = 3,
		Div = 4,
		ETresDecoratorValueModifierMethod_MAX = 5 UMETA(Hidden)
	};
}

UENUM(BlueprintType)
namespace ETresDecoratorVectorValueModifierMethod
{
	enum Type
	{
		Set = 0,
		Add = 1,
		Sub = 2,
		Mul = 3,
		Div = 4,
		ETresDecoratorVectorValueModifierMethod_MAX = 5 UMETA(Hidden)
	};
}

UENUM(BlueprintType)
enum class ETresBTPlayerStateCkeck : uint8
{
	FlyingMissionNormal = 0,
	FlyingMissionRideEx026 = 1,
	FlyingMissionRideEx021 = 2,
	ShootingRide = 3,
	RailSlide = 4,
	Max = 5 UMETA(Hidden),
	ETresBTPlayerStateCkeck_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
namespace ETresRandomEntryProbabilitySource
{
	enum Type
	{
		LiteralValue = 0,
		Blackboard = 1,
		ETresRandomEntryProbabilitySource_MAX = 2 UMETA(Hidden)
	};
}

UENUM(BlueprintType)
namespace ETresRandomEntryCooldownProbabilitySource
{
	enum Type
	{
		LiteralValue = 0,
		Blackboard = 1,
		ETresRandomEntryCooldownProbabilitySource_MAX = 2 UMETA(Hidden)
	};
}

UENUM(BlueprintType)
namespace ETresRangeCheckValueSource
{
	enum Type
	{
		LiteralValue = 0,
		Blackboard = 1,
		ETresRangeCheckValueSource_MAX = 2 UMETA(Hidden)
	};
}

UENUM(BlueprintType)
namespace ETresRangeCheckValueSetting
{
	enum Type
	{
		Minimum = 0,
		Maximum = 1,
		Range = 2,
		ETresRangeCheckValueSetting_MAX = 3 UMETA(Hidden)
	};
}

UENUM(BlueprintType)
enum ETresRangeCheckMode
{
	DirectDistance = 0,
	DirectDistance2D = 1,
	DirectDistanceZ = 2,
	PathDistance = 3,
	PathCost = 4,
	ETresRangeCheckMode_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresVelocityTestMode
{
	Velocity3D = 0,
	Velocity2D = 1,
	VelocityZ = 2,
	ETresVelocityTestMode_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
namespace ETresBlackboardValueModifierInOutMethod
{
	enum Type
	{
		Set = 0,
		Add = 1,
		Sub = 2,
		Mul = 3,
		Div = 4,
		ETresBlackboardValueModifierInOutMethod_MAX = 5 UMETA(Hidden)
	};
}

UENUM(BlueprintType)
namespace ETresArithmeticModifierSource
{
	enum Type
	{
		Blackboard = 0,
		ActorProperty = 1,
		ActorFunction = 2,
		LiteralValue = 3,
		ETresArithmeticModifierSource_MAX = 4 UMETA(Hidden)
	};
}

UENUM(BlueprintType)
namespace ETresValueModifierMethod
{
	enum Type
	{
		Set = 0,
		Add = 1,
		Sub = 2,
		Mul = 3,
		Div = 4,
		ETresValueModifierMethod_MAX = 5 UMETA(Hidden)
	};
}

UENUM(BlueprintType)
enum class ECOMMON_HANGAROUNDTARGET_MODE_Enum : uint8
{
	Boorish = 0,
	Smart = 1,
	COMMON_HANGAROUNDTARGET_MODE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ECOMMON_ROUNDANDROUND_MODE_Enum : uint8
{
	Right = 0,
	Unsteady = 1,
	COMMON_ROUNDANDROUND_MODE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EDIRECTIONAL_MOVE_MODE_Enum : uint8
{
	Forward = 0,
	Backward = 1,
	Left = 2,
	Right = 3,
	DIRECTIONAL_MOVE_MODE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
namespace ETresHateModifier
{
	enum Type
	{
		Blackboard = 0,
		Everyone = 1,
		EveryoneExcludeBlackboard = 2,
		ETresHateModifier_MAX = 3 UMETA(Hidden)
	};
}

UENUM(BlueprintType)
enum class ELEAVE_FROM_TARGET_MODE_Enum : uint8
{
	Away = 0,
	Forward = 1,
	Random = 2,
	LEAVE_FROM_TARGET_MODE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
namespace ETresRageSource
{
	enum Type
	{
		LiteralValue = 0,
		Blackboard = 1,
		ETresRageSource_MAX = 2 UMETA(Hidden)
	};
}

UENUM(BlueprintType)
enum class ECOMMON_RANDOMWALK_MODE_Enum : uint8
{
	Forward = 0,
	Backward = 1,
	ToTarget = 2,
	COMMON_RANDOMWALK_MODE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ECOMMON_SHADOWMOVE_MODE_Enum : uint8
{
	Approach = 0,
	ApproachEnd = 1,
	Surround = 2,
	LinkSurround = 3,
	COMMON_SHADOWMOVE_MODE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ECOMMON_SURROUNDTARGET_MODE_Enum : uint8
{
	Right = 0,
	Left = 1,
	UnsteadyTwoway = 2,
	COMMON_SURROUNDTARGET_MODE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresCameraStick : uint8
{
	TRES_CAMERA_STICK_RIGHT = 0,
	TRES_CAMERA_STICK_LEFT = 1,
	TRES_CAMERA_STICK_RIGHTLEFT = 2,
	TRES_CAMERA_STICK_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ECameraLensType : uint8
{
	LENS_DOF_OFF = 0,
	LENS_DOF_ON = 1,
	MAX = 2,
	LENS_FISHEYE = 3,
	ECameraLensType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresCameraTargetWallCheckType : uint8
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
enum class ETresChrDataTableSetType : uint8
{
	CDTS_TYPE_PLAYER = 0,
	CDTS_TYPE_ENEMY = 1,
	CDTS_TYPE_GIMMICK = 2,
	PLAYER_GIGAS = 3,
	PLAYER_SHIP = 4,
	ENEMY_SHIP = 5,
	CDTS_TYPE_MAX = 6 UMETA(Hidden),
	ETresChrDataTableSetType_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresChrLaunchType : uint8
{
	TCLT_NORMAL = 0,
	TCLT_AERO = 1,
	TCLT_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresCommandCategory : uint8
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
enum class ETresCommandType : uint8
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
enum class ETresComNpcMoveType : uint8
{
	CNPC_MOVE_NONE = 0,
	CNPC_MOVE_CONTROLLER = 1,
	CNPC_MOVE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
namespace ETresRandomDistributionType
{
	enum Type
	{
		Uniform,
		Normal,
		ETresRandomDistributionType_MAX
	};
}

UENUM(BlueprintType)
enum class ETresEnemy_e_ex761_CommonCoopFollowers : uint8
{
	NearDistance = 0,
	Max = 1 UMETA(Hidden),
	ETresEnemy_e_ex761_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex761_DarknessSpreadOut : uint8
{
	Near = 0,
	Middle = 1,
	Far = 2,
	Max = 3 UMETA(Hidden),
	ETresEnemy_e_ex761_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX355_AccelDir
{
	EEX355_AccelDir_Right = 0,
	EEX355_AccelDir_Left = 1,
	EEX355_AccelDir_Max = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EAccelVoice_e_ex359 : uint8
{
	EAccelVoice_e_ex359_Left = 0,
	EAccelVoice_e_ex359_Right = 1,
	EAccelVoice_e_ex359_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX359_CutDownYawType
{
	EEX359_CutDownYawType_Relative = 0,
	EEX359_CutDownYawType_Camera = 1,
	EEX359_CutDownYawType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresCoopRunningStatus : uint8
{
	Started = 0,
	Waiting = 1,
	Ready = 2,
	Running = 3,
	Finished = 4,
	Invaild = 5,
	ETresCoopRunningStatus_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresCoopRole : uint8
{
	Unknown = 0,
	Leader = 1,
	Follower = 2,
	ETresCoopRole_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ECreateGummiShipState : uint8
{
	GummiShipPrepare = 0,
	GummiShipLoad = 1,
	GummiShipBulliding = 2,
	GummiShipError = 3,
	CreateGummiShipState_MAX = 4 UMETA(Hidden)
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
	ETresTornadoDebrisStateName_IdleAlt = 12 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresDebugMenuBlendMode
{
	ETresDebugMenuBlendMode_normal = 0,
	ETresDebugMenuBlendMode_add = 1,
	ETresDebugMenuBlendMode_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EDrawTextFilterType
{
	EDrawTextFilterType_Blur = 0,
	EDrawTextFilterType_Glow = 1,
	EDrawTextFilterType_DropShadow = 2,
	EDrawTextFilterType_MAX = 3 UMETA(Hidden)
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
	ETresDebugMenuMotionObjectProperty_MAX = 31 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresDebugMenuTweenType
{
	ETresDebugMenuTweenType_off = 0,
	ETresDebugMenuTweenType_motion = 1,
	ETresDebugMenuTweenType_motion_object = 2,
	ETresDebugMenuTweenType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresDebugMenuTextVAlignment
{
	ETresDebugMenuTextVAlignment_top = 0,
	ETresDebugMenuTextVAlignment_center = 1,
	ETresDebugMenuTextVAlignment_bottom = 2,
	ETresDebugMenuTextVAlignment_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresDebugMenuTextAlignment
{
	ETresDebugMenuTextAlignment_left = 0,
	ETresDebugMenuTextAlignment_center = 1,
	ETresDebugMenuTextAlignment_right = 2,
	ETresDebugMenuTextAlignment_justify = 3,
	ETresDebugMenuTextAlignment_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresDebugMenuResourceType
{
	ETresDebugMenuResourceType_Image = 0,
	ETresDebugMenuResourceType_Text = 1,
	ETresDebugMenuResourceType_MovieClip = 2,
	ETresDebugMenuResourceType_Custom = 3,
	ETresDebugMenuResourceType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresDebugMenuState
{
	ETresDebugMenuState_Opening = 0,
	ETresDebugMenuState_Opened = 1,
	ETresDebugMenuState_Closing = 2,
	ETresDebugMenuState_Closed = 3,
	ETresDebugMenuState_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGameKey : uint8
{
	Decide = 0,
	Cancel = 1,
	SituationCommand = 2,
	AfCancel = 3,
	ETresGameKey_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresDecoPartsAttachPartIdx
{
	TDPE_HEAD = 0,
	TDPE_BODY = 1,
	TDPE_ARM = 2,
	TDPE_TEXPAT = 3,
	TDPE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresRalphBlockKind : uint8
{
	RALPH_BLOCK_KIND_A = 0,
	RALPH_BLOCK_KIND_B = 1,
	RALPH_BLOCK_KIND_C = 2,
	RALPH_BLOCK_KIND_D = 3,
	RALPH_BLOCK_KIND_E = 4,
	RALPH_BLOCK_KIND_F = 5,
	RALPH_BLOCK_KIND_ONE = 6,
	RALPH_BLOCK_KIND_CANNON = 7,
	RALPH_BLOCK_KIND_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEncountDisableVolumeType : uint8
{
	Type_Box = 0,
	Type_Circle = 1,
	Type_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEncountVolumeSnapTarget : uint8
{
	Snap_Nothing = 0,
	Snap_Ground = 1,
	Snap_Ocean = 2,
	Snap_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEncountVolumeVehicleMode : uint8
{
	DoNotCare = 0,
	NoVehicle = 1,
	OnlyVehicle = 2,
	ETresEncountVolumeVehicleMode_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EBX901_ActionTriggerType : uint8
{
	EBX901_ActionTriggerType_DarkBaymax = 0,
	EBX901_ActionTriggerType_Player = 1,
	EBX901_ActionTriggerType_Max = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx353CatchAfterSituation : uint8
{
	ChangeSituation = 0,
	Continuation = 1,
	AbsoluteAir = 2,
	Max = 3 UMETA(Hidden),
	ETresEnemyEx353CatchAfterSituation_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex307_DummyCardSpawn
{
	/*Scatter = 0,
	Collect = 1,*/
	ETresEnemy_e_ex307_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex307_Phase2CardAction : uint8
{
	Shake = 0,
	VerticalSway = 1,
	HorizontalSway = 2,
	Shine = 3,
	Max = 4 UMETA(Hidden),
	ETresEnemy_e_ex307_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex307_Phase2Card : uint8
{
	Correct = 0,
	Dummy = 1,
	Incorrect = 2,
	Max = 3 UMETA(Hidden),
	ETresEnemy_e_ex307_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex307_CardDesign : uint8
{
	King = 0,
	Luxord = 1,
	Not = 2,
	Plain = 3,
	ETresEnemy_e_ex307_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyGigasCheckActionState : uint8
{
	ETresEnemyGigasCheckActionState_MachineGun = 0,
	ETresEnemyGigasCheckActionState_Punch = 1,
	ETresEnemyGigasCheckActionState_BoosterTackle = 2,
	ETresEnemyGigasCheckActionState_Bomb = 3,
	ETresEnemyGigasCheckActionState_Cannon = 4,
	ETresEnemyGigasCheckActionState_Attack = 5,
	ETresEnemyGigasCheckActionState_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyGigasActionState : uint8
{
	ETresEnemyGigasActionState_MachineGun = 0,
	ETresEnemyGigasActionState_Punch = 1,
	ETresEnemyGigasActionState_BoosterTackle = 2,
	ETresEnemyGigasActionState_Bomb = 3,
	ETresEnemyGigasActionState_Cannon = 4,
	ETresEnemyGigasActionState_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEnemyLargeShipBase : uint8
{
	TO_TARGET = 0,
	SELF_ROT = 1,
	TARGET_ROT = 2,
	TO_TARGET_SIDE = 3,
	EEnemyLargeShipBase_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyXIIIELeaderChangeRule : uint8
{
	Alternate = 0,
	LessFrequent = 1,
	Random = 2,
	LowerHitPoint = 3,
	HigherHitPoint = 4,
	MAX = 5 UMETA(Hidden),
	ETresEnemyXIIIELeaderChangeRule_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyXIIIEFirstAnnihilationRule : uint8
{
	HpOrTime = 0,
	Hp = 1,
	Time = 2,
	MAX = 3 UMETA(Hidden),
	ETresEnemyXIIIEFirstAnnihilationRule_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EBX901_NoHitWallDamage : uint8
{
	EBX901_NoHitWallDamage_BLOW = 0,
	EBX901_NoHitWallDamage_PARABOLA = 1,
	EBX901_NoHitWallDamage_PARABOLA_NO_RECOVERY = 2,
	EBX901_NoHitWallDamage_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EBX901_EffectGroupID : uint8
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
	EBX901_EffectGroupID_Max = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyDarkBaymaxPhase : uint8
{
	PHASE1 = 0,
	PHASE2 = 1,
	_MAX = 2 UMETA(Hidden),
	ETresEnemyDarkBaymaxPhase_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyDw401CoreColor : uint8
{
	ETresEnemyDw401CoreColor_A = 0,
	ETresEnemyDw401CoreColor_B = 1,
	ETresEnemyDw401CoreColor_C = 2,
	ETresEnemyDw401CoreColor_D = 3,
	ETresEnemyDw401CoreColor_None = 4,
	ETresEnemyDw401CoreColor_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyDw405BattleCount : uint8
{
	TRES_ENEMY_DW405_BATTLECOUNT_ONE = 0,
	TRES_ENEMY_DW405_BATTLECOUNT_SECOND = 1,
	TRES_ENEMY_DW405_BATTLECOUNT_THIRD = 2,
	TRES_ENEMY_DW405_BATTLECOUNT_FOURTH = 3,
	TRES_ENEMY_DW405_BATTLECOUNT_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx409Event : uint8
{
	DestroyEffect = 0,
	Max = 1 UMETA(Hidden),
	ETresEnemyEx409Event_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex002_GuardType : uint8
{
	ETresEnemy_e_ex002_GuardType_None = 0,
	ETresEnemy_e_ex002_GuardType_State = 1,
	ETresEnemy_e_ex002_GuardType_Air = 2,
	ETresEnemy_e_ex002_GuardType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFortressType_ex011 : uint8
{
	TRES_ENEMY_EX011_FORTRESS_TYPE_LOWER = 0,
	TRES_ENEMY_EX011_FORTRESS_TYPE_MIDDLE = 1,
	TRES_ENEMY_EX011_FORTRESS_TYPE_UPPER = 2,
	TRES_ENEMY_EX011_FORTRESS_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresVehicleType_e_ex011 : uint8
{
	TRES_ENEMY_EX011_VEHICLE_TYPE_TOP = 0,
	TRES_ENEMY_EX011_VEHICLE_TYPE_SECOND = 1,
	TRES_ENEMY_EX011_VEHICLE_TYPE_THIRD = 2,
	TRES_ENEMY_EX011_VEHICLE_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex012_State : uint8
{
	None = 0,
	Appear = 1,
	Idle = 2,
	BeginCooperation = 3,
	BeginMove = 4,
	DuringMove = 5,
	FinishMove = 6,
	Damage = 7,
	BeginShowerNeedle = 8,
	DuringShowerNeedle = 9,
	FinishShowerNeedle = 10,
	Die = 11,
	Other = 12,
	ETresEnemy_e_ex012_MAX = 13 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_ex013_WatageMaterialType : uint8
{
	TRES_ENEMY_EX013_WATAGE_MATERIAL_TYPE_ALL = 0,
	TRES_ENEMY_EX013_WATAGE_MATERIAL_TYPE_HALF = 1,
	TRES_ENEMY_EX013_WATAGE_MATERIAL_TYPE_NONE = 2,
	TRES_ENEMY_EX013_WATAGE_MATERIAL_TYPE_NONE2 = 3,
	TRES_ENEMY_EX013_WATAGE_MATERIAL_TYPE_NONE3 = 4,
	TRES_ENEMY_EX013_WATAGE_MATERIAL_TYPE_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx021ActionMode : uint8
{
	NORMAL = 0,
	LONGSTUNNED = 1,
	BOARDED = 2,
	BOARDED_TURNAROUND = 3,
	SMALLDAMAGE = 4,
	MAX = 5,
	ETresEnemyEx021ActionMode_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresCoopColorSmokeKind : uint8
{
	RED = 0,
	BLUE = 1,
	YELLOW = 2,
	GREEN = 3,
	MAX = 4 UMETA(Hidden),
	ETresCoopColorSmokeKind_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex028_BodyColor : uint8
{
	ETresEnemy_e_ex028_BodyColor_Rainbow = 0,
	ETresEnemy_e_ex028_BodyColor_Blue = 1,
	ETresEnemy_e_ex028_BodyColor_Red = 2,
	ETresEnemy_e_ex028_BodyColor_Yellow = 3,
	ETresEnemy_e_ex028_BodyColor_Max = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class Ee_ex035_DAMAGE_TYPE : uint8
{
	BLOW = 0,
	Finish = 1,
	IMMOVABLE = 2,
	e_ex035_DAMAGE_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx046Region : uint8
{
	TRES_ENEMY_EX046_REGION_RIGHTWING = 0,
	TRES_ENEMY_EX046_REGION_LEFTWING = 1,
	TRES_ENEMY_EX046_REGION_TAIL = 2,
	TRES_ENEMY_EX046_REGION_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETrese_ex047WorldTypes : uint8
{
	TRES_ENEMY_EX047_WORLDTYPE_HE = 0,
	TRES_ENEMY_EX047_WORLDTYPE_RA = 1,
	TRES_ENEMY_EX047_WORLDTYPE_MI = 2,
	TRES_ENEMY_EX047_WORLDTYPE_TS = 3,
	TRES_ENEMY_EX047_WORLDTYPE_CA = 4,
	TRES_ENEMY_EX047_WORLDTYPE_FZ = 5,
	TRES_ENEMY_EX047_WORLDTYPE_BX = 6,
	TRES_ENEMY_EX047_WORLDTYPE_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx048Mode : uint8
{
	TRES_ENEMY_EX048_FLYMODE = 0,
	TRES_ENEMY_EX048_LANDMODE = 1,
	TRES_ENEMY_EX048_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEx050PuddingType : uint8
{
	SMALL = 0,
	BIG = 1,
	FLY = 2,
	CHASE = 3,
	ETresEx050PuddingType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex054_BattleStyle : uint8
{
	ETresEnemy_e_ex054_BattleStyle_Dinosaur = 0,
	ETresEnemy_e_ex054_BattleStyle_Volcano = 1,
	ETresEnemy_e_ex054_BattleStyle_Thundercloud = 2,
	ETresEnemy_e_ex054_BattleStyle_Berserk = 3,
	ETresEnemy_e_ex054_BattleStyle_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx071DeckKind : uint8
{
	DeckA = 0,
	DeckB = 1,
	DeckC = 2,
	MAX = 3 UMETA(Hidden),
	ETresEnemyEx071DeckKind_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx082_SnowEffectLocationType : uint8
{
	TRES_ENEMY_EX082_SNOWEFFECTLOCATIONTYPE_RIGHT = 0,
	TRES_ENEMY_EX082_SNOWEFFECTLOCATIONTYPE_LEFT = 1,
	TRES_ENEMY_EX082_SNOWEFFECTLOCATIONTYPE_MAX = 2
};

UENUM(BlueprintType)
enum class ETresEnemyEx202ActionMode : uint8
{
	TRES_ENEMY_EX202_ACTIONMODE_SNAKE = 0,
	TRES_ENEMY_EX202_ACTIONMODE_FLOWER = 1,
	TRES_ENEMY_EX202_ACTIONMODE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx302WarpDirection : uint8
{
	Front = 0,
	Back = 1,
	Right = 2,
	Left = 3,
	Max = 4 UMETA(Hidden),
	ETresEnemyEx302WarpDirection_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx304HitEffectKind : uint8
{
	LaserHit = 0,
	SparkHit = 1,
	Max = 2 UMETA(Hidden),
	ETresEnemyEx304HitEffectKind_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx304BeamSaberPlace : uint8
{
	RightHand = 0,
	LeftHand = 1,
	BothHand = 2,
	Max = 3 UMETA(Hidden),
	ETresEnemyEx304BeamSaberPlace_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EVoiceType_e_ex306
{
	EVoiceType_e_ex306_Attach = 0,
	EVoiceType_e_ex306_Location = 1,
	EVoiceType_e_ex306_2D = 2,
	EVoiceType_e_ex306_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EVoice_e_ex306 : uint8
{
	EVoice_e_ex306_RevengeRoxas = 0,
	EVoice_e_ex306_RevengeLea = 1,
	EVoice_e_ex306_BlueBurst = 2,
	EVoice_e_ex306_BlueBurstLea = 3,
	EVoice_e_ex306_BlueBurstDash = 4,
	EVoice_e_ex306_Revenge = 5,
	EVoice_e_ex306_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EBodyType_e_ex306 : uint8
{
	EBodyType_e_ex306_Normal = 0,
	EBodyType_e_ex306_Berserk = 1,
	EBodyType_e_ex306_Blue = 2,
	EBodyType_e_ex306_Stun = 3,
	EBodyType_e_ex306_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx351TimeRushEvent : uint8
{
	TimeRushFinishMoveCenter = 0,
	TimeRushFinishInvincible = 1,
	Max = 2 UMETA(Hidden),
	ETresEnemyEx351TimeRushEvent_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx351WarpDirection : uint8
{
	Front = 0,
	Back = 1,
	Right = 2,
	Left = 3,
	TimeRush = 4,
	Max = 5 UMETA(Hidden),
	ETresEnemyEx351WarpDirection_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx353ThornWildDanceEvent : uint8
{
	SpawnThornWildDanceEffect = 0,
	EndThornWildDanceEvent = 1,
	Max = 2 UMETA(Hidden),
	ETresEnemyEx353ThornWildDanceEvent_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx353HitEffectKind : uint8
{
	LaserHit = 0,
	SparkHit = 1,
	Max = 2 UMETA(Hidden),
	ETresEnemyEx353HitEffectKind_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx353BeamSaberPlace : uint8
{
	RightHand = 0,
	LeftHand = 1,
	BothHand = 2,
	Max = 3 UMETA(Hidden),
	ETresEnemyEx353BeamSaberPlace_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEX354_RemoteEventID : uint8
{
	EEX354_RemoteEventID_StartArtema = 0,
	EEX354_RemoteEventID_EndArtema = 1,
	EEX354_RemoteEventID_EndArtemaShooting = 2,
	EEX354_RemoteEventID_QuickBattleSuccess = 3,
	EEX354_RemoteEventID_QuickBattleFailure = 4,
	EEX354_RemoteEventID_QuickBattleMognet = 5,
	EEX354_RemoteEventID_Max = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX354_FieldID
{
	EEX354_FieldID_Standard = 0,
	EEX354_FieldID_Narrow = 1,
	EEX354_FieldID_Doughnut = 2,
	EEX354_FieldID_Max = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX355_MoveVelocityType
{
	EEX355_MoveVelocityType_Constant = 0,
	EEX355_MoveVelocityType_EaseIn = 1,
	EEX355_MoveVelocityType_EaseOut = 2,
	EEX355_MoveVelocityType_EaseInOut = 3,
	EEX355_MoveVelocityType_Max = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEX355_RemoteEventID : uint8
{
	EEX355_RemoteEventID_StartBlue = 0,
	EEX355_RemoteEventID_EndBlue = 1,
	EEX355_RemoteEventID_Max = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEX355_EffectGroupID : uint8
{
	EEX355_EffectGroupID_WarpIn = 0,
	EEX355_EffectGroupID_WarpOut = 1,
	EEX355_EffectGroupID_BerserkAura = 2,
	EEX355_EffectGroupID_BlueAura = 3,
	EEX355_EffectGroupID_Disappear = 4,
	EEX355_EffectGroupID_Max = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EVoiceType_e_ex355
{
	EVoiceType_e_ex355_Attach = 0,
	EVoiceType_e_ex355_Location = 1,
	EVoiceType_e_ex355_2D = 2,
	EVoiceType_e_ex355_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EVoice_e_ex355 : uint8
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
	EVoice_e_ex355_MAX = 11 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EBodyType_e_ex355 : uint8
{
	EBodyType_e_ex355_Normal = 0,
	EBodyType_e_ex355_Berserk = 1,
	EBodyType_e_ex355_Blue = 2,
	EBodyType_e_ex355_Stun = 3,
	EBodyType_e_ex355_Charge = 4,
	EBodyType_e_ex355_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresTimeGauge_e_ex356 : uint8
{
	Player = 0,
	Luxord = 1,
	Max = 2,
	ETresTimeGauge_e_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresBigDealRemoteEvent_e_ex356 : uint8
{
	StartCinematicEnd = 0,
	EndCinematicEnd = 1,
	ETresBigDealRemoteEvent_e_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresDeathSentenceRemoteEventType_e_ex357 : uint8
{
	StartLongCinematicEnd = 0,
	StartShortCinematicEnd = 1,
	EndCinematicEnd = 2,
	CountVisible = 3,
	ETresDeathSentenceRemoteEventType_e_ex357_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEX359_SplineMoveVelocityType : uint8
{
	EEX359_SplineMoveVelocityType_Constant = 0,
	EEX359_SplineMoveVelocityType_EaseIn = 1,
	EEX359_SplineMoveVelocityType_EaseOut = 2,
	EEX359_SplineMoveVelocityType_EaseInOut = 3,
	EEX359_SplineMoveVelocityType_Max = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEX359_EffectGroupID : uint8
{
	EEX359_EffectGroupID_WarpDisappear = 0,
	EEX359_EffectGroupID_WarpAppear = 1,
	EEX359_EffectGroupID_FastMoveStart = 2,
	EEX359_EffectGroupID_FastMoveEnd = 3,
	EEX359_EffectGroupID_FastMove = 4,
	EEX359_EffectGroupID_LaserRainShot = 5,
	EEX359_EffectGroupID_FinalBrakeAura = 6,
	EEX359_EffectGroupID_Max = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEX359_RemoteEventID : uint8
{
	EEX359_RemoteEventID_ChangeSceneStart = 0,
	EEX359_RemoteEventID_ChangeSceneEnd = 1,
	EEX359_RemoteEventID_FinalBrakeStart = 2,
	EEX359_RemoteEventID_FinalBrakeEnd = 3,
	EEX359_RemoteEventID_BerserkStart = 4,
	EEX359_RemoteEventID_BerserkEnd = 5,
	EEX359_RemoteEventID_Max = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EVoiceType_e_ex359
{
	EVoiceType_e_ex359_Attach = 0,
	EVoiceType_e_ex359_Location = 1,
	EVoiceType_e_ex359_2D = 2,
	EVoiceType_e_ex359_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EVoice_e_ex359 : uint8
{
	EVoice_e_ex359_AccelLeft = 0,
	EVoice_e_ex359_AccelRight = 1,
	EVoice_e_ex359_FinalBrakeAccelLeft = 2,
	EVoice_e_ex359_FinalBrakeAccelRight = 3,
	EVoice_e_ex359_Revenge = 4,
	EVoice_e_ex359_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx701BodyCollisionType : uint8
{
	TRES_ENEMY_EX701_BODYCOLLISIONTYPE_DFAULT = 0,
	TRES_ENEMY_EX701_BODYCOLLISIONTYPE_RUSH = 1,
	TRES_ENEMY_EX701_BODYCOLLISIONTYPE_SHOT = 2,
	TRES_ENEMY_EX701_BODYCOLLISIONTYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx711_BodyCollision : uint8
{
	ETresEnemyEx711_BodyCollision_PlPushSphere = 0,
	ETresEnemyEx711_BodyCollision_PlPushTornado = 1,
	ETresEnemyEx711_BodyCollision_PlPushTornadoOverRun = 2,
	ETresEnemyEx711_BodyCollision_ShootingRide = 3,
	ETresEnemyEx711_BodyCollision_Max = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx711_Hatch : uint8
{
	ETresEnemyEx711_Hatch_LF = 0,
	ETresEnemyEx711_Hatch_LC = 1,
	ETresEnemyEx711_Hatch_LB = 2,
	ETresEnemyEx711_Hatch_RF = 3,
	ETresEnemyEx711_Hatch_RC = 4,
	ETresEnemyEx711_Hatch_RB = 5,
	ETresEnemyEx711_Hatch_Max = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx721WoodsJailPattern : uint8
{
	CAMERA_IN = 0,
	CAMERA_OUT = 1,
	TOWER = 2,
	MAX = 3 UMETA(Hidden),
	ETresEnemyEx721WoodsJailPattern_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx721HandID : uint8
{
	RIGHT_UP = 0,
	RIGHT_DOWN = 1,
	LEFT_UP = 2,
	LEFT_DOWN = 3,
	MAX = 4 UMETA(Hidden),
	ETresEnemyEx721HandID_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEx721Mode : uint8
{
	TRES_ENEMY_EX721_NORMAL_MODE = 0,
	TRES_ENEMY_EX721_TOWER_MODE = 1,
	TRES_ENEMY_EX721_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEx725DieKind : uint8
{
	NORMAL = 0,
	HOLE = 1,
	NONE = 2,
	ETresEx725DieKind_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresThornChainState : uint8
{
	APPEAR = 0,
	NORMAL = 1,
	AIMING = 2,
	CAPTURED = 3,
	AIMING_INTERVAL = 4,
	DRAG = 5,
	SWING = 6,
	DEAD = 7,
	ETresThornChainState_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETres_e_ex773_Direction : uint8
{
	None = 0,
	Front = 1,
	Right = 2,
	Left = 3,
	Back = 4,
	ETres_e_ex773_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EColorTypes_e_ex781Gigas
{
	TRES_ENEMY_EX781GIGAS_YELLOW = 0,
	TRES_ENEMY_EX781GIGAS_BLUE = 1,
	TRES_ENEMY_EX781GIGAS_RED = 2,
	TRES_ENEMY_EX781GIGAS_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETetraBitActionTypes_e_ex781 : uint8
{
	TRES_ENEMY_EX781_BITACTION_WAIT = 0,
	TRES_ENEMY_EX781_BITACTION_MOVE = 1,
	TRES_ENEMY_EX781_BITACTION_ATTACK = 2,
	TRES_ENEMY_EX781_BITACTION_FORMATION = 3,
	TRES_ENEMY_EX781_BITACTION_FINISH = 4,
	TRES_ENEMY_EX781_BITACTION_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEyeType_e_ex816 : uint8
{
	TRES_ENEMY_EYE_TYPE_E_EX816_LEFT = 0,
	TRES_ENEMY_EYE_TYPE_E_EX816_RIGHT = 1,
	TRES_ENEMY_EYE_TYPE_E_EX816_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
namespace ETresEnemyShip
{
	enum Type
	{
		FRONT,
		RIGHT,
		LEFT,
		BACK,
		ETresEnemyShip_MAX
	};
}

UENUM(BlueprintType)
enum class ETresEnemyShipSubType : uint8
{
	DEFAULT = 0,
	BLACK = 1,
	CRAB = 2,
	PHANTOM = 3,
	ETresEnemyShipSubType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
namespace ETresEnemyBigDealAction_e_ex356 {
	enum Type {
		None,
		Move,
		SideCardAttack,
		ETresEnemyBigDealAction_e_MAX UMETA(Hidden),
	};
}


UENUM(BlueprintType)
enum class ETresEnemy_e_ex356_CardDesign : uint8
{
	BackSide = 0,
	Luxord = 1,
	Not = 2,
	Plain = 3,
	Correct = 4,
	Explode = 5,
	ETresEnemy_e_ex356_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyFieldAttack_e_ex357 : uint8
{
	Penetrate = 0,
	Time = 1,
	Max = 2 UMETA(Hidden),
	ETresEnemyFieldAttack_e_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyFieldGenerateLocation_e_ex357 : uint8
{
	Target = 0,
	Map = 1,
	Max = 2 UMETA(Hidden),
	ETresEnemyFieldGenerateLocation_e_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyFieldSize_e_ex357 : uint8
{
	Small = 0,
	Medium = 1,
	Large = 2,
	ETresEnemyFieldSize_e_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyBitGenerateLocation_e_ex357
{
	Target = 0,
	Marluxia = 1,
	ETresEnemyBitGenerateLocation_e_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyAction_e_ex357 : uint8
{
	Normal = 0,
	Warp = 1,
	None = 2,
	ETresEnemyAction_e_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyAvatarAttackAppearLocation_e_ex358
{
	/*Target = 0,
	Center = 1,
	Custom = 2,*/
	ETresEnemyAvatarAttackAppearLocation_e_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyChangeManualLockonPriority_e_ex358
{
	/*Low = 0,
	Normal = 1,
	High = 2,
	Max = 3 UMETA(Hidden),*/
	ETresEnemyChangeManualLockonPriority_e_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemyWildDanceAppearLocation_e_ex358
{
	/*Target = 0,
	Center = 1,*/
	ETresEnemyWildDanceAppearLocation_e_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyWildDanceActionEnd_e_ex358 : uint8
{
	Normal = 0,
	Warp = 1,
	ThunderStep = 2,
	ETresEnemyWildDanceActionEnd_e_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyNaruikazuchi_e_ex358 : uint8
{
	Fast = 0,
	Slow = 1,
	ETresEnemyNaruikazuchi_e_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyJinraiPhaseType_e_ex358 : uint8
{
	TRES_ENEMY_JINRAI_PHASE_TYPE_E_EX358_FIRST = 0,
	TRES_ENEMY_JINRAI_PHASE_TYPE_E_EX358_SECOND = 1,
	TRES_ENEMY_JINRAI_PHASE_TYPE_E_EX358_THIRD = 2,
	TRES_ENEMY_JINRAI_PHASE_TYPE_E_EX358_NONE = 3,
	TRES_ENEMY_JINRAI_PHASE_TYPE_E_EX358_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyRunDirectionType_e_ex358 : uint8
{
	TRES_ENEMY_RUN_DIRECTION_TYPE_E_EX358_CAUTION_RIGHT = 0,
	TRES_ENEMY_RUN_DIRECTION_TYPE_E_EX358_CAUTION_LEFT = 1,
	TRES_ENEMY_RUN_DIRECTION_TYPE_E_EX358_CAUTION_VIEW_CENTER = 2,
	TRES_ENEMY_RUN_DIRECTION_TYPE_E_EX358_TARGET = 3,
	TRES_ENEMY_RUN_DIRECTION_TYPE_E_EX358_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyStepDirectionType_e_ex358 : uint8
{
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX358_RIGHT = 0,
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX358_LEFT = 1,
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX358_BACK = 2,
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX358_FRONT = 3,
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX358_AUTO = 4,
	TRES_ENEMY_STEP_DIRECTION_TYPE_E_EX358_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyActionType_e_ex358 : uint8
{
	TRES_ENEMY_ACTION_TYPE_E_EX358_MOVE = 0,
	TRES_ENEMY_ACTION_TYPE_E_EX358_WARP = 1,
	TRES_ENEMY_ACTION_TYPE_E_EX358_ACTION = 2,
	TRES_ENEMY_ACTION_TYPE_E_EX358_ATTACK = 3,
	TRES_ENEMY_ACTION_TYPE_E_EX358_NONE = 4,
	TRES_ENEMY_ACTION_TYPE_E_EX358_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresEnemy_e_ex761_BattleAreaB_Camera
{
	/*Normal = 0,
	NotZoom = 1,
	Max = 2 UMETA(Hidden),*/
	ETresEnemy_e_ex761_BattleAreaB_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex761_BattleAreaAttack : uint8
{
	TripleAttack = 0,
	WarpRushVanish = 1,
	WarpRushFinish = 2,
	RaiseCut = 3,
	RotationCut = 4,
	Shot = 5,
	ClusterShot = 6,
	Max = 7 UMETA(Hidden),
	ETresEnemy_e_ex761_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex761_BattleAreaAppearTiming : uint8
{
	BeginOverlap = 0,
	EndOverlap = 1,
	Max = 2 UMETA(Hidden),
	ETresEnemy_e_ex761_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex761_BattleAreaAppear : uint8
{
	A = 0,
	B = 1,
	C = 2,
	D = 3,
	Max = 4 UMETA(Hidden),
	ETresEnemy_e_ex761_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemy_e_ex761_Weapon : uint8
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
	Max = 12 UMETA(Hidden),
	ETresEnemy_e_ex761_MAX = 13 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyXIIIEPlayVoiceKind : uint8
{
	VoiceAttach = 0,
	Voice2D = 1,
	VoiceAtLocation = 2,
	Max = 3 UMETA(Hidden),
	ETresEnemyXIIIEPlayVoiceKind_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyXIIILELineTraceKind : uint8
{
	None = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	Max = 4 UMETA(Hidden),
	ETresEnemyXIIILELineTraceKind_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyXIIILEPlayVoiceKind : uint8
{
	VoiceAttach = 0,
	Voice2D = 1,
	VoiceAtLocation = 2,
	Max = 3 UMETA(Hidden),
	ETresEnemyXIIILEPlayVoiceKind_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyXIIIPhaseType : uint8
{
	PHASE1 = 0,
	PHASE2 = 1,
	PHASE3 = 2,
	PHASE4 = 3,
	PHASE_EX1 = 4,
	_MAX = 5 UMETA(Hidden),
	ETresEnemyXIIIPhaseType_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyXIIISettingPhase : uint8
{
	PHASE1 = 0,
	PHASE2 = 1,
	PHASE3 = 2,
	PHASE4 = 3,
	PHASE_EX1 = 4,
	_MAX = 5 UMETA(Hidden),
	ETresEnemyXIIISettingPhase_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEnvGeneratorOnRingRadiusMode : uint8
{
	ContextCenter = 0,
	ContextRadius = 1,
	QuerierAndContextRadius = 2,
	EEnvGeneratorOnRingRadiusMode_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemPathDirectionMode : uint8
{
	ItemRotation = 0,
	ContextToItem = 1,
	ItemToContext = 2,
	ItemToPathStart = 3,
	PathStartToItem = 4,
	ItemToPathRelativeDirection = 5,
	PathToItemRelativeDirection = 6,
	PathRotationAtStart = 7,
	PathRotationAtClosestPointOnPath = 8,
	ETresItemPathDirectionMode_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresContextPathDirectionMode : uint8
{
	ContextRotation = 0,
	ContextToItem = 1,
	ItemToContext = 2,
	ContextToPathStart = 3,
	PathStartToContext = 4,
	ContextToPathRelativeDirection = 5,
	PathToContextRelativeDirection = 6,
	PathRotationAtStart = 7,
	PathRotationAtClosestPointOnPath = 8,
	ETresContextPathDirectionMode_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnvQueryTestItemPropertySource : uint8
{
	BlackboardKey = 0,
	Property = 1,
	Function = 2,
	ETresEnvQueryTestItemPropertySource_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnvQueryTest_MercunaWallDistanceDir : uint8
{
	Side = 0,
	Bottom = 1,
	Ceiling = 2,
	ETresEnvQueryTest_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresAttributeHitEnd_e_ex357 : uint8
{
	AllLoopEnd = 0,
	ProjectileEndAfterLoopEnd = 1,
	AllDestroy = 2,
	ETresAttributeHitEnd_e_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFieldVoiceLip : uint8
{
	Default = 0,
	Joy = 1,
	Angly = 2,
	Sorrow = 3,
	ETresFieldVoiceLip_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresFieldVoiceExecuteMode
{
	Tick = 0,
	Begin = 1,
	End = 2,
	Auto = 3,
	ETresFieldVoiceExecuteMode_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresForceFeedbackKind : uint8
{
	TFFK_SMALL = 0,
	TFFK_MIDDLE = 1,
	LARGE = 2,
	TFFK_MAX = 3,
	ETresForceFeedbackKind_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFriendAreaID : uint8
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
	TRES_FR_AREA_ID_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EIceRaileCameraType : uint8
{
	IRCT_Use_Rail = 0,
	IRCT_Use_Jump = 1,
	IRCT_Use_Move = 2,
	IRCT_Use_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresStartMapType : uint8
{
	Normal = 0,
	RemindDLC = 1,
	Max = 2 UMETA(Hidden),
	ETresStartMapType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGameOverHintSpecialType : uint8
{
	None = 0,
	KilledByGimmick = 1,
	DieInUnderwater = 2,
	DieInSpecialRailSlide = 3,
	OutsideSetting = 4,
	RestrictWeapon = 5,
	DeathSentence = 6,
	Max = 7 UMETA(Hidden),
	ETresGameOverHintSpecialType_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ECardExplodeEffect_e_ex356 : uint8
{
	Normal = 0,
	HideAndSeek = 1,
	ECardExplodeEffect_e_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EHideAndSeekAnim_e_ex356 : uint8
{
	FallDown = 0,
	GetUp = 1,
	FallDownInverse = 2,
	Max = 3 UMETA(Hidden),
	EHideAndSeekAnim_e_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmick_e_ex711_PhysicsActorSizeKind : uint8
{
	SIZE_KIND_SMALL = 0,
	SIZE_KIND_MEDIUM = 1,
	SIZE_KIND_BIG = 2,
	SIZE_KIND_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmick_e_ex711_PhysicsActorGimmickKind : uint8
{
	GIMMICK_KIND_NONE = 0,
	GIMMICK_KIND_ATHLETIC_FLOW_ROOT = 1,
	GIMMICK_KIND_ATHLETIC_FLOW_LAST = 2,
	GIMMICK_KIND_ATHLETIC_FLOW = 3,
	GIMMICK_KIND_HOP = 4,
	GIMMICK_KIND_SCAFFOLD = 5,
	GIMMICK_KIND_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmickEx781GravitySphereGravityType : uint8
{
	NONE = 0,
	UP = 1,
	PULL = 2,
	PUSH = 3,
	ETresGimmickEx781GravitySphereGravityType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresBxPuddingType : uint8
{
	NONE = 0,
	NORMAL = 1,
	CANNIBAL = 2,
	AREA_JUMP = 3,
	ETresBxPuddingType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmickEwDirectionType : uint8
{
	Spline = 0,
	Custom = 1,
	Max = 2 UMETA(Hidden),
	ETresGimmickEwDirectionType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EFollowActorSplineMoveRotateStyle : uint8
{
	SNAP_ALL = 0,
	SNAP_YAW_ONLY = 1,
	SLERP_START_TO_END = 2,
	EFollowActorSplineMoveRotateStyle_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EFollowActorMoveStyle : uint8
{
	LINEAR = 0,
	EASE_INOUT_SINE = 1,
	EFollowActorMoveStyle_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EFollowActorState : uint8
{
	STATE_NONE = 0,
	STATE_WAIT = 1,
	STATE_FOLLOW = 2,
	STATE_TAKE_DISTANCE = 3,
	STATE_ESCAPE = 4,
	STATE_RETURN = 5,
	STATE_DESTINATION_MOVE = 6,
	STATE_SPLINE_MOVE = 7,
	STATE_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmickBxCarTyreType : uint8
{
	Basic = 0,
	Side = 1,
	Front = 2,
	ETresGimmickBxCarTyreType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGimmickBX_CarSplineBlinker : uint8
{
	EGimmickBX_CarSplineBlinker_None = 0,
	EGimmickBX_CarSplineBlinker_Left = 1,
	EGimmickBX_CarSplineBlinker_Right = 2,
	EGimmickBX_CarSplineBlinker_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmickBxFlashTracerCourse : uint8
{
	Course = 0,
	Course01 = 1,
	Course_Max = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmickBxSingoukiColorType : uint8
{
	Red = 0,
	RedWait = 1,
	Blue = 2,
	BlueWait = 3,
	NoSignal = 4,
	ETresGimmickBxSingoukiColorType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmickDitherFade_State : uint8
{
	FadeIn = 0,
	FadeOut = 1,
	ETresGimmickDitherFade_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmickDitherFade_Invoker : uint8
{
	Clip = 0,
	Gimmick = 1,
	Max = 2 UMETA(Hidden),
	ETresGimmickDitherFade_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmickHitCountComponentTeam : uint8
{
	Player = 0,
	Enemy = 1,
	Neutrality = 2,
	ETresGimmickHitCountComponentTeam_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmickHitCountComponentDamageProfile : uint8
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
	ETresGimmickHitCountComponentDamageProfile_MAX = 28 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmickHitCountComponentType : uint8
{
	HitCount = 0,
	Accumulation = 1,
	HitCheckOnly = 2,
	ETresGimmickHitCountComponentType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGimmickKG_UnionCrossEnemy_MoveMode : uint8
{
	Progress = 0,
	Direction = 1,
	Straight = 2,
	BlowUp = 3,
	EGimmickKG_UnionCrossEnemy_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGimmickKG_UnionCrossAnim : uint8
{
	EGimmickKG_UnionCrossAnim_Invalid = 0,
	EGimmickKG_UnionCrossAnim_Idle = 1,
	EGimmickKG_UnionCrossAnim_Attack = 2,
	EGimmickKG_UnionCrossAnim_Finish = 3,
	EGimmickKG_UnionCrossAnim_DamageStart = 4,
	EGimmickKG_UnionCrossAnim_DamageEnd = 5,
	EGimmickKG_UnionCrossAnim_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmickMI_02_LaserArmAttackState : uint8
{
	Idle = 0,
	Charging = 1,
	Fire = 2,
	ETresGimmickMI_02_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmickMI_02_LaserArmState : uint8
{
	Idle = 0,
	StartUp = 1,
	Attack = 2,
	Destroy = 3,
	ETresGimmickMI_02_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmickMI_02_LaserArmActionType : uint8
{
	BarricadeY = 0,
	BarricadeX = 1,
	Work = 2,
	Spline = 3,
	Player = 4,
	ETresGimmickMI_02_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresMI_04_DoorGeneratorMoveType : uint8
{
	Lv0 = 0,
	Lv1 = 1,
	Lv2 = 2,
	ETresMI_04_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EDanceDebugInfoType : uint8
{
	DEBUG_INFO_MOVE = 0,
	DEBUG_INFO_SPLINE = 1,
	DEBUG_INFO_TARGET = 2,
	DEBUG_INFO_CLAPSPOT = 3,
	DEBUG_INFO_BGM = 4,
	DEBUG_INFO_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EDanceResultType : uint8
{
	NORMAL = 0,
	GREAT = 1,
	BAD = 2,
	EDanceResultType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERaPuddingStateType : uint8
{
	DEFAULT = 0,
	DAMAGE = 1,
	ANGRY = 2,
	SHUTTER = 3,
	HAPPY = 4,
	ERaPuddingStateType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERaPuddingCommandType : uint8
{
	IDLE = 0,
	MOVEMENT = 1,
	ANIMATION = 2,
	ANGRY_VANISH = 3,
	HAPPY_VANISH = 4,
	FAIR_VANISH = 5,
	PANCAKE_DIVE = 6,
	PANCAKE_HIDE = 7,
	PANCAKE_EFFECT = 8,
	PANCAKE_APPEAR = 9,
	PANCAKE_VANISH = 10,
	TTR_ESCAPE = 11,
	TTR_START = 12,
	TTR_KEEP = 13,
	TTR_END = 14,
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
	MAX = 35,
	ERaPuddingCommandType_MAX = 36 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmickSimpleMovementAcclType : uint8
{
	Linear = 0,
	Accelerator = 1,
	Curve = 2,
	ETresGimmickSimpleMovementAcclType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmickSimpleMovementMoveType : uint8
{
	Straight = 0,
	Homing = 1,
	TargetDir = 2,
	TargetPoint = 3,
	Parabola = 4,
	ETresGimmickSimpleMovementMoveType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGimmickSimpleMovementStateType : uint8
{
	Idle = 0,
	Fire = 1,
	ETresGimmickSimpleMovementStateType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipAtkHitTestType : uint8
{
	HT_NONE = 0,
	HT_ENEMY_ONLY = 1,
	HT_PLAYER_ONLY = 2,
	HT_ALL = 3,
	HT_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipObjectSize : uint8
{
	SMALL_SIZE = 0,
	MIDDLE_SIZE = 1,
	BIG_SIZE = 2,
	SIZE_TYPE_MAX = 3,
	ETresGumiShipObjectSize_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipGameBGM_ID : uint8
{
	FIELD_BGM = 0,
	NORMAL_BATTLE_BGM = 1,
	BOSS_BATTLE_BGM = 2,
	BATTLE_RESULT_BGM = 3,
	E_GM623_BATTLE_BGM = 4,
	E_GM628_BATTLE_BGM = 5,
	ETresGumiShipGameBGM_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipDirectNotifyType : uint8
{
	DNT_FINISHED_BATTLE_MISSION = 0,
	DNT_ENCOUNT_BATTLE_START_CAMERA_SIGNAL = 1,
	DNT_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipCinematicModeEventFlag : uint8
{
	NOTIFY_RUN_MATINEE = 0,
	BOSS_ENEMY_APPEAR_EVENT = 1,
	ETresGumiShipCinematicModeEventFlag_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipClusterGeneratorShape : uint8
{
	BOX = 0,
	SPHERE = 1,
	CAPSULE = 2,
	MAX = 3,
	ETresGumiShipClusterGeneratorShape_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipCureValueType : uint8
{
	CVT_VALUE = 0,
	CVT_PERCENT = 1,
	CVT_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipAttackSubElemntType : uint8
{
	ASET_NONE = 0,
	ASET_SPECIAL = 1,
	ASET_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipAttackElementType : uint8
{
	AET_NONE = 0,
	AET_SHOT = 1,
	AET_LASER = 2,
	AET_STRIKE = 3,
	AET_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipLimitType : uint8
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
	LIMIT_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGUMISHIP_ENEMY622_STATUS : uint8
{
	E_GM622_SHIELD_MODE = 0,
	E_GM622_INVINCIBLE_MODE = 1,
	E_GM622_CORE_MODE = 2,
	E_GM622_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGUMISHIP_ENEMY625_STATUS : uint8
{
	E_GM625_LATENT = 0,
	E_GM625_EMERGENCE = 1,
	E_GM625_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGUMISHIP_ENEMY625_METEORO_TARGET : uint8
{
	E_GM625_TARGET_METEORO1 = 0,
	E_GM625_TARGET_METEORO2 = 1,
	E_GM625_TARGET_METEORO3 = 2,
	E_GM625_TARGET_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGUMISHIP_ENEMY625_METEORO_BONE : uint8
{
	BACK_GM625_BONE = 0,
	BOTTOM_GM625_BONE = 1,
	CENTER_GM625_BONE = 2,
	FRONT_GM625_BONE = 3,
	LEFT_GM625_BONE = 4,
	RIGHT_GM625_BONE = 5,
	TOP_GM625_BONE = 6,
	NEAR_GM625_BONE = 7,
	GUMISHIP_ENEMY625_METEORO_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGUMISHIP_ENEMY625_MOTIONS : uint8
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
	E_GM625_MOTION_MAX = 16 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGUMI_SHIP_ENEMY_GM626_CANNON : uint8
{
	_UPPER_CANNON_ = 0,
	_UNDER_CANNON_ = 1,
	_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGUMI_SHIP_ENEMY_GM626_EYEMUZZLE : uint8
{
	_NOMAL_LASER_ = 0,
	_ZOMBIE_LASER_ = 1,
	_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGUMI_SHIP_ENEMY_GM626_STATUS : uint8
{
	_UPPER_MODE_ = 0,
	_LOWER_MODE_ = 1,
	_UPPER_MODE2_ = 2,
	_CENTER_MODE_ = 3,
	_INVINCIBLE_ = 4,
	_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGUMI_SHIP_ENEMY_GM626_SHIELD : uint8
{
	_SHIELD_NON_ = 0,
	_SHIELD_UPPER_ = 1,
	_SHIELD_LOWER_ = 2,
	_SHIELD_ZOMBIE_ = 3,
	_SHIELD_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipEnemySpawnConditionType : uint8
{
	TRIGGER_COLLISION_OVERLAP = 0,
	OTHER_ENEMY_GROUPS_WIPE_OUT = 1,
	OTHER_ENEMY_GROUPS_DISAPPEAR = 2,
	OTHER_ENEMY_GROUPS_NON_EXISTS = 3,
	EXTERNAL_NOTIFICATION = 4,
	SPAWN_CONDITION_TYPE_MAX = 5 UMETA(Hidden),
	ETresGumiShipEnemySpawnConditionType_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipEnemyGroupDisappearType : uint8
{
	LIFE_TIME_OUT = 0,
	SPLINE_PATH_END_ARRIVED = 1,
	OTHER_ENEMY_GROUP_APPEAR = 2,
	NON_DISAPPEAR_TYPE = 3,
	DISAPPEAR_TYPE_MAX = 4 UMETA(Hidden),
	ETresGumiShipEnemyGroupDisappearType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipEnemyGroupMoveType : uint8
{
	FIXED_LOCATION = 0,
	STATIC_SPLINE_PATH_MOVE = 1,
	ATTACHED_SPLINE_PATH_MOVE = 2,
	UNIQUE_MOVE = 3,
	GROUP_MOVE_TYPE_MAX = 4 UMETA(Hidden),
	ETresGumiShipEnemyGroupMoveType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGUMI_SHIP_TREASURE_SE : uint8
{
	TREASURE_SE_CORE_LOOP_START = 0,
	TREASURE_SE_CORE_LOOP_ERROR = 1,
	TREASURE_SE_CORE_LOOP_END = 2,
	TREASURE_SE_LOOP_GEAR = 3,
	TREASURE_SE_GEAR_SUCCESS = 4,
	TREASURE_SE_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGUMI_SHIP_TREASURE_STATE : uint8
{
	TREASURE_STATE_IDLEING = 0,
	TREASURE_STATE_ST_EVENT = 1,
	TREASURE_STATE_ST_RAILSLID = 2,
	TREASURE_STATE_ST_SUCCESS = 3,
	TREASURE_STATE_ST_FAILURE = 4,
	TREASURE_STATE_CLOSE = 5,
	TREASURE_STATE_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGUMI_SHIP_GIMMICK_PLAYER_MODE : uint8
{
	_PLAYER_MODE_EVENT_ = 0,
	_PLAYER_MODE_NOMAL_ = 1,
	_PLAYER_MODE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGUMI_SHIP_GIMMICK_TREASURE_STATE : uint8
{
	_TREASURE_SUCCESS_ = 0,
	_TREASURE_FAILURE_ = 1,
	_TREASURE_NOW_ = 2,
	_TREASURE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGUMI_SHIP_GIMMICK_GM200_CORE : uint8
{
	_CORE_A_ = 0,
	_CORE_B_ = 1,
	_CORE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipHudMode : uint8
{
	HUD_MODE_QUEST = 0,
	HUD_MODE_BATTLE = 1,
	HUD_MODE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGUMI_SHIP_DROPITEM_RARITY : uint8
{
	RARITY_LOW = 0,
	RARITY_CENTER = 1,
	RARITY_HIGH = 2,
	RARITY_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGummiSpaceDef : uint8
{
	SPACE_NON = 0,
	SPACE1 = 1,
	SPACE2 = 2,
	SPACE3 = 3,
	SPACE4 = 4,
	SPACE_MAX = 5 UMETA(Hidden),
	ETresGummiSpaceDef_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipBattleMissionItemRankType : uint8
{
	BMIRT_A = 0,
	BMIRT_B = 1,
	BMIRT_C = 2,
	BMIRT_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipBattleMissionDefeatedBonusRankType : uint8
{
	BMDBRT_A = 0,
	BMDBRT_B = 1,
	BMDBRT_C = 2,
	BMDBRT_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipBattleMissionTimeBonusRankType : uint8
{
	BMTBRT_A = 0,
	BMTBRT_B = 1,
	BMTBRT_C = 2,
	BMTBRT_D = 3,
	BMTBRT_E = 4,
	BMTBRT_F = 5,
	BMTBRT_G = 6,
	BMTBRT_H = 7,
	BMTBRT_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipBattleMissionType : uint8
{
	BMT_DEFEAT_TARGET = 0,
	BMT_SPRINE_END = 1,
	BMT_TIME_ATTACK = 2,
	BMT_DEFEAT_COUNT = 3,
	BMT_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGUMISHIP_ENEMY703_PARTS_KIND : uint8
{
	E_GM703_PARTS_SHIELD = 0,
	E_GM703_PARTS_PETAL = 1,
	E_GM703_PARTS_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipSpWeaponType : uint8
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
	SPWT_MAX = 19 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipPlayerLockonState : uint8
{
	LOS_NONE_TYPE = 0,
	LOS_AUTO_LOCKON_TYPE = 1,
	LOS_MANUAL_LOCKON_TYPE = 2,
	LOS_TYPE_MAX = 3 UMETA(Hidden),
	LOS_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGUMI_SHIP_PRIZE_ITEM_KIND : uint8
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
	GM_MAX = 17 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipRaderEntityType : uint8
{
	ICON_TYPE_MARKER = 0,
	ICON_TYPE_WORLD = 1,
	ICON_TYPE_ARENA = 2,
	ICON_TYPE_TRAVEL = 3,
	ICON_TYPE_TREASUER = 4,
	ICON_TYPE_CRYSTAL = 5,
	ICON_TYPE_PRIZEBOX = 6,
	ICON_TYPE_NONE = 7,
	ICON_TYPE_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EFTresGumiShipRailSlideRailType : uint8
{
	RSR_ROAD_TYPE = 0,
	RSR_BOSS_TRACKING_TYPE = 1,
	RSR_NORMAL_TRACKING_TYPE = 2,
	RSR_TREASURE_TYPE = 3,
	RSR_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipRailSlideSpeedAdjustmentType : uint8
{
	RSSA_NONE = 0,
	RSSA_ENEMY = 1,
	RSSA_PLAYER = 2,
	RSSA_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipTinyShipFormation : uint8
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
	UNKNOWN = 21,
	ETresGumiShipTinyShipFormation_MAX = 22 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipMultiWeaponSetTargetType : uint8
{
	MWSTT_NORMAL = 0,
	MWSTT_MOST_NEAR_DIST = 1,
	MWSTT_MOST_LOW_HP = 2,
	MWSTT_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresShipCreateKind : uint8
{
	TYPE_SAVE = 0,
	TYPE_PLAN = 1,
	TYPE_SPECIAL = 2,
	TYPE_NEW = 3,
	TYPE_NON = 4,
	TYPE_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGummiKind : uint8
{
	GUMMI_KIND_NULL = 0,
	GUMMI_KIND_BASE = 1,
	GUMMI_KIND_DECO = 2,
	GUMMI_KIND_TYPE_MAX = 3 UMETA(Hidden),
	GUMMI_KIND_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresStickerType : uint8
{
	STICKER_TYPE_NULL = 0,
	STICKER_TYPE_NUMBER = 1,
	STICKER_TYPE_SYMBOL = 2,
	STICKER_TYPE_DESIGN = 3,
	STICKER_TYPE_CHARACTER = 4,
	STICKER_TYPE_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGummiType : uint8
{
	TYPE_NULL = 0,
	TYPE_EDGE = 1,
	TYPE_CURVE = 2,
	TYPE_PIPE = 3,
	TYPE_AERO = 4,
	TYPE_SHOOTING = 5,
	TYPE_LASER = 6,
	TYPE_STRIKE = 7,
	TYPE_ENGINE = 8,
	TYPE_WING = 9,
	TYPE_WHEEL = 10,
	TYPE_COCKPIT = 11,
	TYPE_SHIELD = 12,
	TYPE_OPTION = 13,
	TYPE_CHARACTER = 14,
	TYPE_MAX = 15 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGummiEditorState : uint8
{
	GummiEditorLoad = 0,
	GummiEditorPrepare = 1,
	GummiEditorTop = 2,
	GummiEditorPlanSelect = 3,
	GummiEditorMainEditSelect = 4,
	GummiEditorMaterialGummiCategorySelect = 5,
	GummiEditorMaterialGummiBlockSelect = 6,
	GummiEditorState_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGummiMissionReleaseCondition : uint8
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
	RARITY_MAX = 22 UMETA(Hidden),
	ETresGummiMissionReleaseCondition_MAX = 23 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGummiMissionRarity : uint8
{
	RARITY_NON = 0,
	RARITY_LOW = 1,
	RARITY_MIDDLE = 2,
	RARITY_HIGH = 3,
	RARITY_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipJumpPointID : uint8
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
	JUMP_POINT_MAX = 50 UMETA(Hidden),
	ETresGumiShipJumpPointID_MAX = 51 UMETA(Hidden)
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
	//Max = 9 UMETA(Hidden),
	ETresGumiShipConstellationCode_MAX = 10 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGumiShipGumiCrystalID : uint8
{
	E_GM01_GC_01,
	E_GM01_GC_02,
	E_GM01_GC_03,
	E_GM01_GC_04,
	E_GM01_GC_05,
	E_GM01_GC_06,
	E_GM01_GC_07,
	E_GM01_GC_08,
	E_GM01_GC_09,
	E_GM01_GC,
	E_GM01_GC01,
	E_GM01_GC02,
	E_GM01_GC03,
	E_GM01_GC04,
	E_GM01_GC05,
	E_GM01_GC06,
	E_GM01_GC07,
	E_GM01_GC08,
	E_GM01_GC09,
	E_GM01_GC10,
	E_GM02_GC_01,
	E_GM02_GC_02,
	E_GM02_GC_03,
	E_GM02_GC_04,
	E_GM02_GC_05,
	E_GM02_GC_06,
	E_GM02_GC_07,
	E_GM02_GC_08,
	E_GM02_GC_09,
	E_GM02_GC,
	E_GM02_GC01,
	E_GM02_GC02,
	E_GM02_GC03,
	E_GM02_GC04,
	E_GM02_GC05,
	E_GM02_GC06,
	E_GM02_GC07,
	E_GM02_GC08,
	E_GM02_GC09,
	E_GM02_GC10,
	E_GM03_GC_01,
	E_GM03_GC_02,
	E_GM03_GC_03,
	E_GM03_GC_04,
	E_GM03_GC_05,
	E_GM03_GC_06,
	E_GM03_GC_07,
	E_GM03_GC_08,
	E_GM03_GC_09,
	E_GM03_GC,
	E_GM03_GC01,
	E_GM03_GC02,
	E_GM03_GC03,
	E_GM03_GC04,
	E_GM03_GC05,
	E_GM03_GC06,
	E_GM03_GC07,
	E_GM03_GC08,
	E_GM03_GC09,
	E_GM03_GC10,
	E_GM04_GC_01,
	E_GM04_GC_02,
	E_GM04_GC_03,
	E_GM04_GC_04,
	E_GM04_GC_05,
	E_GM04_GC_06,
	E_GM04_GC_07,
	E_GM04_GC_08,
	E_GM04_GC_09,
	E_GM04_GC,
	GUMI_CRYSTAL_MAX UMETA(Hidden),
	ETresGumiShipGumiCrystalID_MAX
};

UENUM(BlueprintType)
enum class ETresGumiShipSpecialCrystalID : uint8
{
	E_GM01_SC_01,
	E_GM01_SC_02,
	E_GM01_SC_03,
	E_GM01_SC_04,
	E_GM01_SC_05,
	E_GM01_SC_06,
	E_GM01_SC_07,
	E_GM01_SC_08,
	E_GM01_SC_09,
	E_GM01_SC,
	E_GM01_SC01,
	E_GM01_SC02,
	E_GM01_SC03,
	E_GM01_SC04,
	E_GM01_SC05,
	E_GM02_SC_01,
	E_GM02_SC_02,
	E_GM02_SC_03,
	E_GM02_SC_04,
	E_GM02_SC_05,
	E_GM02_SC_06,
	E_GM02_SC_07,
	E_GM02_SC_08,
	E_GM02_SC_09,
	E_GM02_SC,
	E_GM02_SC01,
	E_GM02_SC02,
	E_GM02_SC03,
	E_GM02_SC04,
	E_GM02_SC05,
	E_GM03_SC_01,
	E_GM03_SC_02,
	E_GM03_SC_03,
	E_GM03_SC_04,
	E_GM03_SC_05,
	E_GM03_SC_06,
	E_GM03_SC_07,
	E_GM03_SC_08,
	E_GM03_SC_09,
	E_GM03_SC,
	E_GM03_SC01,
	E_GM03_SC02,
	E_GM03_SC03,
	E_GM03_SC04,
	E_GM03_SC05,
	E_GM04_SC_01,
	E_GM04_SC_02,
	E_GM04_SC_03,
	E_GM04_SC_04,
	E_GM04_SC_05,
	E_GM04_SC_06,
	E_GM04_SC_07,
	E_GM04_SC_08,
	E_GM04_SC_09,
	E_GM04_SC,
	E_GM04_SC01,
	E_GM04_SC02,
	E_GM04_SC03,
	E_GM04_SC04,
	E_GM04_SC05,
	SPECIAL_CRYSTAL_MAX UMETA(Hidden),
	ETresGumiShipSpecialCrystalID_MAX
};

UENUM(BlueprintType)
enum class ETresGumiShipTreasureSphereID : uint8
{
	E_GM01_TR_01,
	E_GM01_TR_02,
	E_GM01_TR_03,
	E_GM02_TR_01,
	E_GM02_TR_02,
	E_GM02_TR_03,
	E_GM03_TR_01,
	E_GM03_TR_02,
	E_GM03_TR_03,
	E_GM04_TR_01,
	E_GM04_TR_02,
	E_GM04_TR_03,
	TREASURE_SPHERE_MAX UMETA(Hidden),
	ETresGumiShipTreasureSphereID_MAX
};

UENUM(BlueprintType)
enum class ETresGumiShipTravelPointID : uint8
{
	E_GM01_TP_01,
	E_GM01_TP_02,
	E_GM01_TP_03,
	E_GM02_TP_01,
	E_GM02_TP_02,
	E_GM02_TP_03,
	E_GM03_TP_01,
	E_GM03_TP_02,
	E_GM03_TP_03,
	E_GM04_TP_01,
	E_GM04_TP_02,
	E_GM04_TP_03,
	TRAVEL_POINT_MAX UMETA(Hidden),
	ETresGumiShipTravelPointID_MAX
};

UENUM(BlueprintType)
enum class ETresGumiShipWorldSymbolID : uint8
{
	E_GM01_WS_HE,
	E_GM01_WS_TT,
	E_GM01_WS_TS,
	E_GM01_WS_RA,
	E_GM02_WS_FZ,
	E_GM02_WS_MI,
	E_GM02_WS_BX,
	E_GM02_WS_CA,
	E_GM03_WS_KG,
	E_GM03_WS_BT,
	E_GM03_WS_01,
	E_GM03_WS_02,
	E_GM04_WS_CS,
	E_GM04_WS_01,
	E_GM04_WS_02,
	WORLD_SYMBOL_MAX UMETA(Hidden),
	ETresGumiShipWorldSymbolID_MAX
};

UENUM(BlueprintType)
enum class ETresEnemyEx761_Location : uint8
{
	Home,
	Center,
	Max UMETA(Hidden),
	ETresEnemyEx761_MAX
};

UENUM(BlueprintType)
enum class ETresUIControllerButtonType : uint8
{
	Circle,
	Triangle,
	Square,
	Cross,
	Max UMETA(Hidden),
	ETresUIControllerButtonType_MAX
};

UENUM(BlueprintType)
enum class ETresInfluenceEmitterShape : uint8
{
	Box,
	Sphere,
	Cone,
	Ring,
	ETresInfluenceEmitterShape_MAX
};

UENUM(BlueprintType)
enum class ETresInfluenceMapLayer : uint8
{
	PlayerAndFriendNpc,
	Enemy,
	Wall,
	VectorField,
	Extra1,
	Extra2,
	Extra3,
	Extra4,
	LayerMax UMETA(Hidden),
	ETresInfluenceMapLayer_MAX
};

UENUM(BlueprintType)
enum ESQEX_Bonamik_ControlType
{
	ESQEX_Bonamik_ControlType_DoNothing = 0,
	ESQEX_Bonamik_ControlType_On = 1,
	ESQEX_Bonamik_ControlType_Off = 2,
	ESQEX_Bonamik_ControlType_MAX = 3 UMETA(Hidden)
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
	ETresEffectAttachTrack_AttachType_MAX = 7 UMETA(Hidden)
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
	ETresEffectTriggerTrack_TriggerType_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresFadeTrack_Color
{
	ETresFadeTrack_Color_Black = 0,
	ETresFadeTrack_Color_White = 1,
	ETresFadeTrack_Color_Custom = 2,
	ETresFadeTrack_Color_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresSubtitleTrack_OptionVoice : uint8
{
	ETresSubtitleTrack_OptionVoice_DoNotCare = 0,
	ETresSubtitleTrack_OptionVoice_Original = 1,
	ETresSubtitleTrack_OptionVoice_Changed = 2,
	ETresSubtitleTrack_OptionVoice_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFoodstuffDropperID : uint8
{
	NONE = 0,
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
	_MAX = 21 UMETA(Hidden),
	ETresFoodstuffDropperID_MAX = 22 UMETA(Hidden)
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
	_DROP_ITEM_ID_MAX = 144 UMETA(Hidden),
	ETresDropItemID_MAX = 145 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefGumiEtc : uint8
{
	NOTHING = 0,
	ITEM001 = 1,
	ITEM002 = 2,
	ITEM003 = 3,
	ITEM004 = 4,
	ITEM005 = 5,
	ITEM006 = 6,
	ITEM007 = 7,
	ITEM008 = 8,
	ITEM009 = 9,
	ITEM010 = 10,
	ITEM011 = 11,
	ITEM012 = 12,
	ITEM013 = 13,
	ITEM014 = 14,
	ITEM015 = 15,
	ITEM016 = 16,
	ITEM017 = 17,
	ITEM018 = 18,
	ITEM019 = 19,
	ITEM020 = 20,
	ITEM021 = 21,
	ITEM022 = 22,
	ITEM023 = 23,
	ITEM024 = 24,
	ITEM025 = 25,
	ITEM026 = 26,
	ITEM027 = 27,
	ITEM028 = 28,
	ITEM029 = 29,
	ITEM030 = 30,
	ITEM031 = 31,
	ITEM032 = 32,
	ITEM033 = 33,
	ITEM034 = 34,
	ITEM035 = 35,
	ITEM036 = 36,
	ITEM037 = 37,
	ITEM038 = 38,
	ITEM039 = 39,
	ITEM040 = 40,
	ITEM041 = 41,
	ITEM042 = 42,
	ITEM043 = 43,
	ITEM044 = 44,
	ITEM045 = 45,
	ITEM046 = 46,
	ITEM047 = 47,
	ITEM048 = 48,
	ITEM049 = 49,
	ITEM050 = 50,
	ITEM051 = 51,
	ITEM052 = 52,
	ITEM053 = 53,
	ITEM054 = 54,
	ITEM055 = 55,
	ITEM056 = 56,
	ITEM057 = 57,
	ITEM058 = 58,
	ITEM059 = 59,
	ITEM060 = 60,
	ITEM061 = 61,
	ITEM062 = 62,
	ITEM063 = 63,
	ITEM064 = 64,
	ITEM065 = 65,
	ITEM066 = 66,
	ITEM067 = 67,
	ITEM068 = 68,
	ITEM069 = 69,
	ITEM070 = 70,
	ITEM071 = 71,
	ITEM072 = 72,
	ITEM073 = 73,
	ITEM074 = 74,
	ITEM075 = 75,
	ITEM076 = 76,
	_MAX = 77 UMETA(Hidden),
	ETresItemDefGumiEtc_MAX = 78 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefGumiShipBP : uint8
{
	NOTHING = 0,
	ITEM001 = 1,
	ITEM002 = 2,
	ITEM003 = 3,
	ITEM004 = 4,
	ITEM005 = 5,
	ITEM006 = 6,
	ITEM007 = 7,
	ITEM008 = 8,
	ITEM009 = 9,
	ITEM010 = 10,
	ITEM011 = 11,
	ITEM012 = 12,
	ITEM013 = 13,
	ITEM014 = 14,
	ITEM015 = 15,
	ITEM016 = 16,
	ITEM017 = 17,
	ITEM018 = 18,
	ITEM019 = 19,
	ITEM020 = 20,
	ITEM021 = 21,
	ITEM022 = 22,
	ITEM023 = 23,
	ITEM024 = 24,
	ITEM025 = 25,
	ITEM026 = 26,
	ITEM027 = 27,
	ITEM028 = 28,
	ITEM029 = 29,
	ITEM030 = 30,
	ITEM031 = 31,
	ITEM032 = 32,
	ITEM033 = 33,
	ITEM034 = 34,
	ITEM035 = 35,
	ITEM036 = 36,
	ITEM037 = 37,
	ITEM038 = 38,
	ITEM039 = 39,
	ITEM040 = 40,
	ITEM041 = 41,
	ITEM042 = 42,
	ITEM043 = 43,
	ITEM044 = 44,
	ITEM045 = 45,
	ITEM046 = 46,
	ITEM047 = 47,
	ITEM048 = 48,
	ITEM049 = 49,
	ITEM050 = 50,
	ITEM051 = 51,
	ITEM052 = 52,
	ITEM053 = 53,
	ITEM054 = 54,
	ITEM055 = 55,
	ITEM056 = 56,
	ITEM057 = 57,
	ITEM058 = 58,
	ITEM059 = 59,
	ITEM060 = 60,
	ITEM061 = 61,
	ITEM062 = 62,
	ITEM063 = 63,
	ITEM064 = 64,
	ITEM065 = 65,
	ITEM066 = 66,
	ITEM067 = 67,
	ITEM068 = 68,
	ITEM069 = 69,
	ITEM070 = 70,
	ITEM071 = 71,
	ITEM072 = 72,
	ITEM073 = 73,
	ITEM074 = 74,
	ITEM075 = 75,
	ITEM076 = 76,
	ITEM077 = 77,
	ITEM078 = 78,
	ITEM079 = 79,
	ITEM080 = 80,
	ITEM081 = 81,
	ITEM082 = 82,
	ITEM083 = 83,
	ITEM084 = 84,
	ITEM085 = 85,
	ITEM086 = 86,
	ITEM087 = 87,
	ITEM088 = 88,
	ITEM089 = 89,
	ITEM090 = 90,
	ITEM091 = 91,
	ITEM092 = 92,
	ITEM093 = 93,
	ITEM094 = 94,
	ITEM095 = 95,
	ITEM096 = 96,
	ITEM097 = 97,
	ITEM098 = 98,
	ITEM099 = 99,
	ITEM100 = 100,
	ITEM101 = 101,
	ITEM102 = 102,
	ITEM103 = 103,
	ITEM104 = 104,
	ITEM105 = 105,
	ITEM106 = 106,
	ITEM107 = 107,
	ITEM108 = 108,
	ITEM109 = 109,
	ITEM110 = 110,
	ITEM111 = 111,
	ITEM112 = 112,
	ITEM113 = 113,
	ITEM114 = 114,
	ITEM115 = 115,
	ITEM116 = 116,
	ITEM117 = 117,
	ITEM118 = 118,
	ITEM119 = 119,
	ITEM120 = 120,
	ITEM121 = 121,
	ITEM122 = 122,
	ITEM123 = 123,
	ITEM124 = 124,
	ITEM125 = 125,
	ITEM126 = 126,
	ITEM127 = 127,
	ITEM128 = 128,
	ITEM129 = 129,
	ITEM130 = 130,
	ITEM131 = 131,
	ITEM132 = 132,
	ITEM133 = 133,
	ITEM134 = 134,
	ITEM135 = 135,
	ITEM136 = 136,
	ITEM137 = 137,
	ITEM138 = 138,
	ITEM139 = 139,
	ITEM140 = 140,
	ITEM141 = 141,
	ITEM142 = 142,
	ITEM143 = 143,
	ITEM144 = 144,
	ITEM145 = 145,
	ITEM146 = 146,
	ITEM147 = 147,
	ITEM148 = 148,
	ITEM149 = 149,
	ITEM150 = 150,
	ITEM151 = 151,
	ITEM152 = 152,
	ITEM153 = 153,
	ITEM154 = 154,
	ITEM155 = 155,
	ITEM156 = 156,
	ITEM157 = 157,
	ITEM158 = 158,
	ITEM159 = 159,
	ITEM160 = 160,
	ITEM161 = 161,
	ITEM162 = 162,
	ITEM163 = 163,
	ITEM164 = 164,
	ITEM165 = 165,
	ITEM166 = 166,
	ITEM167 = 167,
	ITEM168 = 168,
	ITEM169 = 169,
	ITEM170 = 170,
	ITEM171 = 171,
	ITEM172 = 172,
	ITEM173 = 173,
	ITEM174 = 174,
	ITEM175 = 175,
	ITEM176 = 176,
	ITEM177 = 177,
	ITEM178 = 178,
	ITEM179 = 179,
	ITEM180 = 180,
	ITEM181 = 181,
	ITEM182 = 182,
	ITEM183 = 183,
	ITEM184 = 184,
	ITEM185 = 185,
	ITEM186 = 186,
	ITEM187 = 187,
	ITEM188 = 188,
	ITEM189 = 189,
	ITEM190 = 190,
	ITEM191 = 191,
	ITEM192 = 192,
	ITEM193 = 193,
	ITEM194 = 194,
	ITEM195 = 195,
	_MAX = 196 UMETA(Hidden),
	ETresItemDefGumiShipBP_MAX = 197 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefGumiSticker : uint8
{
	NOTHING = 0,
	ITEM001 = 1,
	ITEM002 = 2,
	ITEM003 = 3,
	ITEM004 = 4,
	ITEM005 = 5,
	ITEM006 = 6,
	ITEM007 = 7,
	ITEM008 = 8,
	ITEM009 = 9,
	ITEM010 = 10,
	ITEM011 = 11,
	ITEM012 = 12,
	ITEM013 = 13,
	ITEM014 = 14,
	ITEM015 = 15,
	ITEM016 = 16,
	ITEM017 = 17,
	ITEM018 = 18,
	ITEM019 = 19,
	ITEM020 = 20,
	ITEM021 = 21,
	ITEM022 = 22,
	ITEM023 = 23,
	ITEM024 = 24,
	ITEM025 = 25,
	ITEM026 = 26,
	ITEM027 = 27,
	ITEM028 = 28,
	ITEM029 = 29,
	ITEM030 = 30,
	ITEM031 = 31,
	ITEM032 = 32,
	ITEM033 = 33,
	ITEM034 = 34,
	ITEM035 = 35,
	ITEM036 = 36,
	ITEM037 = 37,
	ITEM038 = 38,
	ITEM039 = 39,
	ITEM040 = 40,
	ITEM041 = 41,
	ITEM042 = 42,
	ITEM043 = 43,
	ITEM044 = 44,
	ITEM045 = 45,
	ITEM046 = 46,
	ITEM047 = 47,
	ITEM048 = 48,
	ITEM049 = 49,
	ITEM050 = 50,
	ITEM051 = 51,
	ITEM052 = 52,
	ITEM053 = 53,
	ITEM054 = 54,
	ITEM055 = 55,
	ITEM056 = 56,
	ITEM057 = 57,
	ITEM058 = 58,
	ITEM059 = 59,
	ITEM060 = 60,
	ITEM061 = 61,
	ITEM062 = 62,
	ITEM063 = 63,
	ITEM064 = 64,
	ITEM065 = 65,
	ITEM066 = 66,
	ITEM067 = 67,
	ITEM068 = 68,
	ITEM069 = 69,
	ITEM070 = 70,
	ITEM071 = 71,
	ITEM072 = 72,
	ITEM073 = 73,
	ITEM074 = 74,
	ITEM075 = 75,
	ITEM076 = 76,
	ITEM077 = 77,
	ITEM078 = 78,
	ITEM079 = 79,
	ITEM080 = 80,
	ITEM081 = 81,
	ITEM082 = 82,
	ITEM083 = 83,
	ITEM084 = 84,
	ITEM085 = 85,
	_MAX = 86 UMETA(Hidden),
	ETresItemDefGumiSticker_MAX = 87 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefGumiPattern : uint8
{
	NOTHING = 0,
	ITEM001 = 1,
	ITEM002 = 2,
	ITEM003 = 3,
	ITEM004 = 4,
	ITEM005 = 5,
	ITEM006 = 6,
	ITEM007 = 7,
	ITEM008 = 8,
	ITEM009 = 9,
	ITEM010 = 10,
	ITEM011 = 11,
	ITEM012 = 12,
	ITEM013 = 13,
	ITEM014 = 14,
	ITEM015 = 15,
	ITEM016 = 16,
	ITEM017 = 17,
	ITEM018 = 18,
	ITEM019 = 19,
	ITEM020 = 20,
	ITEM021 = 21,
	ITEM022 = 22,
	ITEM023 = 23,
	ITEM024 = 24,
	ITEM025 = 25,
	ITEM026 = 26,
	ITEM027 = 27,
	ITEM028 = 28,
	ITEM029 = 29,
	ITEM030 = 30,
	ITEM031 = 31,
	ITEM032 = 32,
	ITEM033 = 33,
	ITEM034 = 34,
	ITEM035 = 35,
	ITEM036 = 36,
	ITEM037 = 37,
	ITEM038 = 38,
	ITEM039 = 39,
	ITEM040 = 40,
	ITEM041 = 41,
	ITEM042 = 42,
	ITEM043 = 43,
	ITEM044 = 44,
	ITEM045 = 45,
	ITEM046 = 46,
	ITEM047 = 47,
	ITEM048 = 48,
	ITEM049 = 49,
	ITEM050 = 50,
	ITEM051 = 51,
	ITEM052 = 52,
	ITEM053 = 53,
	ITEM054 = 54,
	ITEM055 = 55,
	ITEM056 = 56,
	ITEM057 = 57,
	ITEM058 = 58,
	ITEM059 = 59,
	ITEM060 = 60,
	ITEM061 = 61,
	ITEM062 = 62,
	ITEM063 = 63,
	ITEM064 = 64,
	ITEM065 = 65,
	ITEM066 = 66,
	ITEM067 = 67,
	ITEM068 = 68,
	ITEM069 = 69,
	ITEM070 = 70,
	ITEM071 = 71,
	ITEM072 = 72,
	ITEM073 = 73,
	ITEM074 = 74,
	ITEM075 = 75,
	ITEM076 = 76,
	ITEM077 = 77,
	ITEM078 = 78,
	ITEM079 = 79,
	ITEM080 = 80,
	ITEM081 = 81,
	ITEM082 = 82,
	ITEM083 = 83,
	ITEM084 = 84,
	ITEM085 = 85,
	ITEM086 = 86,
	ITEM087 = 87,
	ITEM088 = 88,
	ITEM089 = 89,
	ITEM090 = 90,
	ITEM091 = 91,
	ITEM092 = 92,
	ITEM093 = 93,
	ITEM094 = 94,
	ITEM095 = 95,
	ITEM096 = 96,
	ITEM097 = 97,
	ITEM098 = 98,
	ITEM099 = 99,
	ITEM100 = 100,
	ITEM101 = 101,
	ITEM102 = 102,
	ITEM103 = 103,
	ITEM104 = 104,
	ITEM105 = 105,
	ITEM106 = 106,
	ITEM107 = 107,
	_MAX = 108 UMETA(Hidden),
	ETresItemDefGumiPattern_MAX = 109 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefGumiMaterial : uint8
{
	NOTHING = 0,
	ITEM001 = 1,
	ITEM002 = 2,
	ITEM003 = 3,
	ITEM004 = 4,
	ITEM005 = 5,
	ITEM006 = 6,
	ITEM007 = 7,
	ITEM008 = 8,
	ITEM009 = 9,
	ITEM010 = 10,
	ITEM011 = 11,
	ITEM012 = 12,
	ITEM013 = 13,
	ITEM014 = 14,
	ITEM015 = 15,
	ITEM016 = 16,
	ITEM017 = 17,
	ITEM018 = 18,
	ITEM019 = 19,
	ITEM020 = 20,
	ITEM021 = 21,
	ITEM022 = 22,
	ITEM023 = 23,
	ITEM024 = 24,
	ITEM025 = 25,
	ITEM026 = 26,
	ITEM027 = 27,
	ITEM028 = 28,
	ITEM029 = 29,
	ITEM030 = 30,
	ITEM031 = 31,
	ITEM032 = 32,
	ITEM033 = 33,
	ITEM034 = 34,
	ITEM035 = 35,
	ITEM036 = 36,
	ITEM037 = 37,
	ITEM038 = 38,
	ITEM039 = 39,
	ITEM040 = 40,
	ITEM041 = 41,
	ITEM042 = 42,
	ITEM043 = 43,
	ITEM044 = 44,
	ITEM045 = 45,
	ITEM046 = 46,
	ITEM047 = 47,
	ITEM048 = 48,
	ITEM049 = 49,
	ITEM050 = 50,
	ITEM051 = 51,
	ITEM052 = 52,
	ITEM053 = 53,
	ITEM054 = 54,
	ITEM055 = 55,
	ITEM056 = 56,
	ITEM057 = 57,
	ITEM058 = 58,
	ITEM059 = 59,
	ITEM060 = 60,
	ITEM061 = 61,
	ITEM062 = 62,
	ITEM063 = 63,
	ITEM064 = 64,
	ITEM065 = 65,
	ITEM066 = 66,
	ITEM067 = 67,
	ITEM068 = 68,
	_MAX = 69 UMETA(Hidden),
	ETresItemDefGumiMaterial_MAX = 70 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefGumiParts : uint8
{
	NOTHING = 0,
	ITEM001 = 1,
	ITEM002 = 2,
	ITEM003 = 3,
	ITEM004 = 4,
	ITEM005 = 5,
	ITEM006 = 6,
	ITEM007 = 7,
	ITEM008 = 8,
	ITEM009 = 9,
	ITEM010 = 10,
	ITEM011 = 11,
	ITEM012 = 12,
	ITEM013 = 13,
	ITEM014 = 14,
	ITEM015 = 15,
	ITEM016 = 16,
	ITEM017 = 17,
	ITEM018 = 18,
	ITEM019 = 19,
	ITEM020 = 20,
	ITEM021 = 21,
	ITEM022 = 22,
	ITEM023 = 23,
	ITEM024 = 24,
	ITEM025 = 25,
	ITEM026 = 26,
	ITEM027 = 27,
	ITEM028 = 28,
	ITEM029 = 29,
	ITEM030 = 30,
	ITEM031 = 31,
	ITEM032 = 32,
	ITEM033 = 33,
	ITEM034 = 34,
	ITEM035 = 35,
	ITEM036 = 36,
	ITEM037 = 37,
	ITEM038 = 38,
	ITEM039 = 39,
	ITEM040 = 40,
	ITEM041 = 41,
	ITEM042 = 42,
	ITEM043 = 43,
	ITEM044 = 44,
	ITEM045 = 45,
	ITEM046 = 46,
	ITEM047 = 47,
	ITEM048 = 48,
	ITEM049 = 49,
	ITEM050 = 50,
	ITEM051 = 51,
	ITEM052 = 52,
	ITEM053 = 53,
	ITEM054 = 54,
	ITEM055 = 55,
	ITEM056 = 56,
	ITEM057 = 57,
	ITEM058 = 58,
	ITEM059 = 59,
	ITEM060 = 60,
	ITEM061 = 61,
	ITEM062 = 62,
	ITEM063 = 63,
	ITEM064 = 64,
	ITEM065 = 65,
	ITEM066 = 66,
	ITEM067 = 67,
	ITEM068 = 68,
	ITEM069 = 69,
	ITEM070 = 70,
	ITEM071 = 71,
	ITEM072 = 72,
	ITEM073 = 73,
	ITEM074 = 74,
	ITEM075 = 75,
	ITEM076 = 76,
	ITEM077 = 77,
	ITEM078 = 78,
	ITEM079 = 79,
	ITEM080 = 80,
	ITEM081 = 81,
	ITEM082 = 82,
	ITEM083 = 83,
	ITEM084 = 84,
	ITEM085 = 85,
	ITEM086 = 86,
	ITEM087 = 87,
	ITEM088 = 88,
	ITEM089 = 89,
	ITEM090 = 90,
	ITEM091 = 91,
	ITEM092 = 92,
	ITEM093 = 93,
	ITEM094 = 94,
	ITEM095 = 95,
	ITEM096 = 96,
	ITEM097 = 97,
	ITEM098 = 98,
	ITEM099 = 99,
	ITEM100 = 100,
	ITEM101 = 101,
	ITEM102 = 102,
	ITEM103 = 103,
	ITEM104 = 104,
	ITEM105 = 105,
	ITEM106 = 106,
	ITEM107 = 107,
	ITEM108 = 108,
	ITEM109 = 109,
	ITEM110 = 110,
	ITEM111 = 111,
	ITEM112 = 112,
	ITEM113 = 113,
	ITEM114 = 114,
	ITEM115 = 115,
	ITEM116 = 116,
	ITEM117 = 117,
	ITEM118 = 118,
	ITEM119 = 119,
	ITEM120 = 120,
	ITEM121 = 121,
	ITEM122 = 122,
	ITEM123 = 123,
	ITEM124 = 124,
	ITEM125 = 125,
	ITEM126 = 126,
	ITEM127 = 127,
	ITEM128 = 128,
	ITEM129 = 129,
	ITEM130 = 130,
	ITEM131 = 131,
	ITEM132 = 132,
	ITEM133 = 133,
	ITEM134 = 134,
	ITEM135 = 135,
	ITEM136 = 136,
	ITEM137 = 137,
	ITEM138 = 138,
	ITEM139 = 139,
	ITEM140 = 140,
	ITEM141 = 141,
	ITEM142 = 142,
	ITEM143 = 143,
	ITEM144 = 144,
	ITEM145 = 145,
	ITEM146 = 146,
	ITEM147 = 147,
	ITEM148 = 148,
	ITEM149 = 149,
	ITEM150 = 150,
	ITEM151 = 151,
	ITEM152 = 152,
	ITEM153 = 153,
	ITEM154 = 154,
	ITEM155 = 155,
	ITEM156 = 156,
	ITEM157 = 157,
	ITEM158 = 158,
	ITEM159 = 159,
	ITEM160 = 160,
	ITEM161 = 161,
	ITEM162 = 162,
	ITEM163 = 163,
	ITEM164 = 164,
	ITEM165 = 165,
	ITEM166 = 166,
	ITEM167 = 167,
	ITEM168 = 168,
	ITEM169 = 169,
	ITEM170 = 170,
	ITEM171 = 171,
	ITEM172 = 172,
	ITEM173 = 173,
	ITEM174 = 174,
	ITEM175 = 175,
	ITEM176 = 176,
	ITEM177 = 177,
	ITEM178 = 178,
	ITEM179 = 179,
	ITEM180 = 180,
	ITEM181 = 181,
	ITEM182 = 182,
	_MAX = 183 UMETA(Hidden),
	ETresItemDefGumiParts_MAX = 184 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefReport : uint8
{
	NOTHING = 0,
	ITEM01 = 1,
	ITEM02 = 2,
	ITEM03 = 3,
	ITEM04 = 4,
	ITEM05 = 5,
	ITEM06 = 6,
	ITEM07 = 7,
	ITEM08 = 8,
	ITEM09 = 9,
	ITEM10 = 10,
	ITEM11 = 11,
	ITEM12 = 12,
	ITEM13 = 13,
	ITEM14 = 14,
	_MAX = 15 UMETA(Hidden),
	ETresItemDefReport_MAX = 16 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefNavimap : uint8
{
	NM_WCID_DW01 = 0,
	NM_WCID_DW02 = 1,
	NM_WCID_DW03 = 2,
	NM_WCID_DW04 = 3,
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
	NM_WCID_CA05 = 52,
	_MAX = 53 UMETA(Hidden),
	ETresItemDefNavimap_MAX = 54 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefLSIGameItem : uint8
{
	NOTHING = 0,
	ITEM01 = 1,
	ITEM02 = 2,
	ITEM03 = 3,
	ITEM04 = 4,
	ITEM05 = 5,
	ITEM06 = 6,
	ITEM07 = 7,
	ITEM08 = 8,
	ITEM09 = 9,
	ITEM10 = 10,
	ITEM11 = 11,
	ITEM12 = 12,
	ITEM13 = 13,
	ITEM14 = 14,
	ITEM15 = 15,
	ITEM16 = 16,
	ITEM17 = 17,
	ITEM18 = 18,
	ITEM19 = 19,
	ITEM20 = 20,
	ITEM21 = 21,
	ITEM22 = 22,
	ITEM23 = 23,
	_MAX = 24 UMETA(Hidden),
	ETresItemDefLSIGameItem_MAX = 25 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefMognetItem : uint8
{
	NOTHING = 0,
	ITEM01 = 1,
	_MAX = 2 UMETA(Hidden),
	ETresItemDefMognetItem_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefKeyItem : uint8
{
	NOTHING = 0,
	ITEM01 = 1,
	ITEM02 = 2,
	ITEM03 = 3,
	ITEM04 = 4,
	ITEM05 = 5,
	ITEM06 = 6,
	ITEM07 = 7,
	ITEM08 = 8,
	ITEM09 = 9,
	ITEM10 = 10,
	ITEM11 = 11,
	ITEM12 = 12,
	ITEM13 = 13,
	_MAX = 14 UMETA(Hidden),
	ETresItemDefKeyItem_MAX = 15 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefFoodstuff : uint8
{
	NOTHING = 0,
	ITEM01 = 1,
	ITEM02 = 2,
	ITEM03 = 3,
	ITEM04 = 4,
	ITEM05 = 5,
	ITEM06 = 6,
	ITEM07 = 7,
	ITEM08 = 8,
	ITEM09 = 9,
	ITEM10 = 10,
	ITEM11 = 11,
	ITEM12 = 12,
	ITEM13 = 13,
	ITEM14 = 14,
	ITEM15 = 15,
	ITEM16 = 16,
	ITEM17 = 17,
	ITEM18 = 18,
	ITEM19 = 19,
	ITEM20 = 20,
	ITEM21 = 21,
	ITEM22 = 22,
	ITEM23 = 23,
	ITEM24 = 24,
	ITEM25 = 25,
	ITEM26 = 26,
	ITEM27 = 27,
	ITEM28 = 28,
	ITEM29 = 29,
	ITEM30 = 30,
	ITEM31 = 31,
	ITEM32 = 32,
	ITEM33 = 33,
	ITEM34 = 34,
	ITEM35 = 35,
	ITEM36 = 36,
	ITEM37 = 37,
	ITEM38 = 38,
	ITEM39 = 39,
	ITEM40 = 40,
	ITEM41 = 41,
	ITEM42 = 42,
	ITEM43 = 43,
	ITEM44 = 44,
	ITEM45 = 45,
	ITEM46 = 46,
	ITEM47 = 47,
	ITEM48 = 48,
	ITEM49 = 49,
	ITEM50 = 50,
	ITEM51 = 51,
	ITEM52 = 52,
	ITEM53 = 53,
	ITEM54 = 54,
	ITEM55 = 55,
	ITEM56 = 56,
	ITEM57 = 57,
	ITEM58 = 58,
	ITEM59 = 59,
	_MAX = 60 UMETA(Hidden),
	ETresItemDefFoodstuff_MAX = 61 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefMaterial : uint8
{
	NOTHING = 0,
	ITEM01 = 1,
	ITEM02 = 2,
	ITEM03 = 3,
	ITEM04 = 4,
	ITEM05 = 5,
	ITEM06 = 6,
	ITEM07 = 7,
	ITEM08 = 8,
	ITEM09 = 9,
	ITEM10 = 10,
	ITEM11 = 11,
	ITEM12 = 12,
	ITEM13 = 13,
	ITEM14 = 14,
	ITEM15 = 15,
	ITEM16 = 16,
	ITEM17 = 17,
	ITEM18 = 18,
	ITEM19 = 19,
	ITEM20 = 20,
	ITEM21 = 21,
	ITEM22 = 22,
	ITEM23 = 23,
	ITEM24 = 24,
	ITEM25 = 25,
	ITEM26 = 26,
	ITEM27 = 27,
	ITEM28 = 28,
	ITEM29 = 29,
	ITEM30 = 30,
	ITEM31 = 31,
	ITEM32 = 32,
	ITEM33 = 33,
	ITEM34 = 34,
	ITEM35 = 35,
	ITEM36 = 36,
	ITEM37 = 37,
	ITEM38 = 38,
	ITEM39 = 39,
	ITEM40 = 40,
	ITEM41 = 41,
	ITEM42 = 42,
	ITEM43 = 43,
	ITEM44 = 44,
	ITEM45 = 45,
	ITEM46 = 46,
	ITEM47 = 47,
	ITEM48 = 48,
	ITEM49 = 49,
	ITEM50 = 50,
	ITEM51 = 51,
	ITEM52 = 52,
	ITEM53 = 53,
	ITEM54 = 54,
	ITEM55 = 55,
	ITEM56 = 56,
	ITEM57 = 57,
	ITEM58 = 58,
	ITEM59 = 59,
	ITEM60 = 60,
	_MAX = 61 UMETA(Hidden),
	ETresItemDefMaterial_MAX = 62 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemRank : uint8
{
	NOTHING = 0,
	RANK00 = 1,
	RANK01 = 2,
	RANK02 = 3,
	RANK03 = 4,
	_MAX = 5 UMETA(Hidden),
	ETresItemRank_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefFood : uint8
{
	NOTHING = 0,
	SOUP01 = 1,
	SOUP02 = 2,
	SOUP03 = 3,
	SOUP04 = 4,
	SOUP05 = 5,
	APPETIZER01 = 6,
	APPETIZER02 = 7,
	APPETIZER03 = 8,
	APPETIZER04 = 9,
	APPETIZER05 = 10,
	FISHDISH01 = 11,
	FISHDISH02 = 12,
	FISHDISH03 = 13,
	FISHDISH04 = 14,
	FISHDISH05 = 15,
	FISHDISH06 = 16,
	MEETDISH01 = 17,
	MEETDISH02 = 18,
	MEETDISH03 = 19,
	MEETDISH04 = 20,
	MEETDISH05 = 21,
	DESSERT01 = 22,
	DESSERT02 = 23,
	DESSERT03 = 24,
	DESSERT04 = 25,
	DESSERT05 = 26,
	DESSERT06 = 27,
	DESSERT07 = 28,
	SOUP01P = 29,
	SOUP02P = 30,
	SOUP03P = 31,
	SOUP04P = 32,
	SOUP05P = 33,
	APPETIZER01P = 34,
	APPETIZER02P = 35,
	APPETIZER03P = 36,
	APPETIZER04P = 37,
	APPETIZER05P = 38,
	FISHDISH01P = 39,
	FISHDISH02P = 40,
	FISHDISH03P = 41,
	FISHDISH04P = 42,
	FISHDISH05P = 43,
	FISHDISH06P = 44,
	MEETDISH01P = 45,
	MEETDISH02P = 46,
	MEETDISH03P = 47,
	MEETDISH04P = 48,
	MEETDISH05P = 49,
	DESSERT01P = 50,
	DESSERT02P = 51,
	DESSERT03P = 52,
	DESSERT04P = 53,
	DESSERT05P = 54,
	DESSERT06P = 55,
	DESSERT07P = 56,
	_MAX = 57 UMETA(Hidden),
	ETresItemDefFood_MAX = 58 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefAccessory : uint8
{
	NOTHING = 0,
	ITEM01 = 1,
	ITEM02 = 2,
	ITEM03 = 3,
	ITEM04 = 4,
	ITEM05 = 5,
	ITEM06 = 6,
	ITEM07 = 7,
	ITEM08 = 8,
	ITEM09 = 9,
	ITEM10 = 10,
	ITEM11 = 11,
	ITEM12 = 12,
	ITEM13 = 13,
	ITEM14 = 14,
	ITEM15 = 15,
	ITEM16 = 16,
	ITEM17 = 17,
	ITEM18 = 18,
	ITEM19 = 19,
	ITEM20 = 20,
	ITEM21 = 21,
	ITEM22 = 22,
	ITEM23 = 23,
	ITEM24 = 24,
	ITEM25 = 25,
	ITEM26 = 26,
	ITEM27 = 27,
	ITEM28 = 28,
	ITEM29 = 29,
	ITEM30 = 30,
	ITEM31 = 31,
	ITEM32 = 32,
	ITEM33 = 33,
	ITEM34 = 34,
	ITEM35 = 35,
	ITEM36 = 36,
	ITEM37 = 37,
	ITEM38 = 38,
	ITEM39 = 39,
	ITEM40 = 40,
	ITEM41 = 41,
	ITEM42 = 42,
	ITEM43 = 43,
	ITEM44 = 44,
	ITEM45 = 45,
	ITEM46 = 46,
	ITEM47 = 47,
	ITEM48 = 48,
	ITEM49 = 49,
	ITEM50 = 50,
	ITEM51 = 51,
	ITEM52 = 52,
	ITEM53 = 53,
	ITEM54 = 54,
	ITEM55 = 55,
	ITEM56 = 56,
	ITEM57 = 57,
	ITEM58 = 58,
	ITEM59 = 59,
	ITEM60 = 60,
	ITEM61 = 61,
	ITEM62 = 62,
	ITEM63 = 63,
	ITEM64 = 64,
	ITEM65 = 65,
	ITEM66 = 66,
	ITEM67 = 67,
	ITEM68 = 68,
	ITEM69 = 69,
	ITEM70 = 70,
	ITEM71 = 71,
	ITEM72 = 72,
	ITEM73 = 73,
	ITEM74 = 74,
	ITEM75 = 75,
	ITEM76 = 76,
	ITEM77 = 77,
	ITEM78 = 78,
	ITEM79 = 79,
	ITEM80 = 80,
	ITEM81 = 81,
	ITEM82 = 82,
	ITEM83 = 83,
	ITEM84 = 84,
	ITEM85 = 85,
	ITEM86 = 86,
	ITEM87 = 87,
	ITEM88 = 88,
	ITEM89 = 89,
	ITEM90 = 90,
	ITEM91 = 91,
	ITEM92 = 92,
	ITEM93 = 93,
	ITEM94 = 94,
	ITEM95 = 95,
	ITEM96 = 96,
	ITEM97 = 97,
	ITEM98 = 98,
	ITEM99 = 99,
	ITEM100 = 100,
	ITEM101 = 101,
	ITEM102 = 102,
	ITEM103 = 103,
	ITEM104 = 104,
	ITEM105 = 105,
	ITEM106 = 106,
	ITEM107 = 107,
	ITEM108 = 108,
	ITEM109 = 109,
	ITEM110 = 110,
	ITEM111 = 111,
	ITEM112 = 112,
	_MAX = 113 UMETA(Hidden),
	ETresItemDefAccessory_MAX = 114 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefProtector : uint8
{
	NOTHING = 0,
	ITEM01 = 1,
	ITEM02 = 2,
	ITEM03 = 3,
	ITEM04 = 4,
	ITEM05 = 5,
	ITEM06 = 6,
	ITEM07 = 7,
	ITEM08 = 8,
	ITEM09 = 9,
	ITEM10 = 10,
	ITEM11 = 11,
	ITEM12 = 12,
	ITEM13 = 13,
	ITEM14 = 14,
	ITEM15 = 15,
	ITEM16 = 16,
	ITEM17 = 17,
	ITEM18 = 18,
	ITEM19 = 19,
	ITEM20 = 20,
	ITEM21 = 21,
	ITEM22 = 22,
	ITEM23 = 23,
	ITEM24 = 24,
	ITEM25 = 25,
	ITEM26 = 26,
	ITEM27 = 27,
	ITEM28 = 28,
	ITEM29 = 29,
	ITEM30 = 30,
	ITEM31 = 31,
	ITEM32 = 32,
	ITEM33 = 33,
	ITEM34 = 34,
	ITEM35 = 35,
	ITEM36 = 36,
	ITEM37 = 37,
	ITEM38 = 38,
	ITEM39 = 39,
	ITEM40 = 40,
	ITEM41 = 41,
	ITEM42 = 42,
	ITEM43 = 43,
	ITEM44 = 44,
	ITEM45 = 45,
	ITEM46 = 46,
	ITEM47 = 47,
	ITEM48 = 48,
	ITEM49 = 49,
	ITEM50 = 50,
	ITEM51 = 51,
	ITEM52 = 52,
	_MAX = 53 UMETA(Hidden),
	ETresItemDefProtector_MAX = 54 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefCampItem : uint8
{
	NOTHING = 0,
	TENT = 1,
	POWERUP = 2,
	MAGICUP = 3,
	GUARDUP = 4,
	APUP = 5,
	_MAX = 6 UMETA(Hidden),
	ETresItemDefCampItem_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemDefBattleItem : uint8
{
	NOTHING = 0,
	BI_POTION = 1,
	BI_HIGHPOTION = 2,
	BI_MEGAPOTION = 3,
	BI_ETHER = 4,
	BI_MEGAETHER = 5,
	BI_ELIXIR = 6,
	BI_LASTELIXIR = 7,
	BI_FOCUSSUPPLY = 8,
	BI_HIGHFOCUSSUPPLY = 9,
	BI_ALLCURE = 10,
	BI_HIGHETHER = 11,
	_MAX = 12 UMETA(Hidden),
	ETresItemDefBattleItem_MAX = 13 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemSubCategoryKeyItem : uint8
{
	NONE = 0,
	EVENT = 1,
	SYNTHESIS_RECIPE = 2,
	_MAX = 3 UMETA(Hidden),
	ETresItemSubCategoryKeyItem_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemSubCategoryFoodStuff : uint8
{
	SEAFOOD = 0,
	VEGETABLE = 1,
	MUSHROOM = 2,
	HERB = 3,
	FRUIT = 4,
	SEVENPUDDING = 5,
	MEAT = 6,
	_MAX = 7 UMETA(Hidden),
	ETresItemSubCategoryFoodStuff_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemSubCategoryFood : uint8
{
	SOUP = 0,
	APPETIZER = 1,
	FISHDISH = 2,
	MEETDISH = 3,
	DESSERT = 4,
	_MAX = 5 UMETA(Hidden),
	ETresItemSubCategoryFood_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemCategoryIcon : uint8
{
	NONE = 0,
	WEAPON = 1,
	WEAPON_D = 2,
	WEAPON_G = 3,
	WEAPON_F = 4,
	BATTLEITEM = 5,
	CAMPITEM = 6,
	PROTECTOR = 7,
	ACCESSORY = 8,
	FOODSTUFF = 9,
	KEYITEM = 10,
	MATERIAL = 11,
	MOGNET = 12,
	FOOD = 13,
	GUMI_BASE = 14,
	GUMI_DECO = 15,
	GUMI_MATERIAL = 16,
	GUMI_PATTERN = 17,
	GUMI_STICKER = 18,
	GUMI_SHIP_BP = 19,
	GUMI_SHIP_BP_PIECE = 20,
	GUMI_WEAPON_SP = 21,
	GUMI_TREASURE_MAP = 22,
	MAX = 23 UMETA(Hidden),
	ETresItemCategoryIcon_MAX = 24 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemCategory : uint8
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
enum class ETresItemCollectRewardKind : uint8
{
	TICR_GET_ITEM = 0,
	TICR_ENABLE_SYNTHESIS = 1,
	TICR_ENABLE_BUY = 2,
	TICR_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemCollectCondition : uint8
{
	TICC_MAT_KIND_NUM = 0,
	TICC_MAT_TOTAL_NUM = 1,
	TICC_MAT_KIND_ALL = 2,
	TICC_MAT_SPKIND_NUM = 3,
	TICC_MAT_GET_RANK = 4,
	TICC_MAT_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresItemSynthesisCondition : uint8
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
enum class ETresLevelEntityRestartSequence : uint8
{
	RESTART_ENTER_SEQUENCE = 0,
	RESTART_EXIT_SEQUENCE = 1,
	RESTART_BOTH_SEQUENCE = 2,
	RESTART_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresLevelEntitySequenceConditionDistanceSelector : uint8
{
	ETresLevelEntitySequenceConditionDistanceSelector_Nearest = 0,
	ETresLevelEntitySequenceConditionDistanceSelector_Farthest = 1,
	ETresLevelEntitySequenceConditionDistanceSelector_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresLevelEntitySequenceConditionDistanceCompare : uint8
{
	ETresLevelEntitySequenceConditionDistanceCompare_GraeterEqual = 0,
	ETresLevelEntitySequenceConditionDistanceCompare_LessEqual = 1,
	ETresLevelEntitySequenceConditionDistanceCompare_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresLevelEntitySequenceConditionBinOp : uint8
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
enum class ETresLevelLoadAndVisible : uint8
{
	None = 0,
	LoadAndVisible = 1,
	LoadAndHidden = 2,
	Unload = 3,
	ETresLevelLoadAndVisible_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresLevelVisibility : uint8
{
	Default = 0,
	Hidden = 1,
	Hidden_Tick = 2,
	None = 3,
	ETresLevelVisibility_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresLinkActorEx202Size : uint8
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
enum class ETresLSIBarnyardSportsMode : uint8
{
	the100m = 0,
	hurdle = 1,
	triplejump = 2,
	multisports = 3,
	ETresLSIBarnyardSportsMode_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresLSIHowtoPlayBaseballMode : uint8
{
	the1Inning = 0,
	the3Inning = 1,
	the6Inning = 2,
	the9Inning = 3,
	ETresLSIHowtoPlayBaseballMode_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresLSIHowtoPlayGolfMode : uint8
{
	the3HOLE = 0,
	the9HOLE = 1,
	the18HOLE = 2,
	ETresLSIHowtoPlayGolfMode_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresLSIMusicFarmerMode : uint8
{
	GAME_A = 0,
	GAME_B = 1,
	GAME_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresMapSetObjType
{
	LevelPath = 0,
	StreamingVolume = 1,
	ETresMapSetObjType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresMBCurveTrack : uint8
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
	ETresMBCRVT_Max = 11 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresMBCurveInterp
{
	ETresMBCI_Constant = 0,
	ETresMBCI_Linear = 1,
	ETresMBCI_Cubic = 2,
	ETresMBCI_Max = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresMiRxHolySealType : uint8
{
	HOLY_SEAL_TYPE_NONE = 0,
	HOLY_SEAL_TYPE_SINGLE = 1,
	HOLY_SEAL_TYPE_FULL_FIRE = 2,
	HOLY_SEAL_TYPE_MAX = 3 UMETA(Hidden)
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
	STATE_KIND_MAX = 16 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGoalType_e_ex042_Hook : uint8
{
	Destination = 0,
	Target = 1,
	ETresGoalType_e_ex042_Hook_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EEX731_DashEffectType : uint8
{
	EEX731_DashEffectType_Loop = 0,
	EEX731_DashEffectType_End = 1,
	EEX731_DashEffectType_Max = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFNpcAIAttackFlowWaitPhase : uint8
{
	FNPC_AI_ATK_FLOW_WAIT_PHASE = 0,
	FNPC_AI_ATK_FLOW_WAIT_PHASE01 = 1,
	FNPC_AI_ATK_FLOW_WAIT_PHASE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFNPC_AI_LeadFinish : uint8
{
	TRES_FNPC_AI_LEAD_FINISH_ALL_UP = 0,
	TRES_FNPC_AI_LEAD_FINISH_GOAL = 1,
	TRES_FNPC_AI_LEAD_FINISH_GOAL_TURN = 2,
	TRES_FNPC_AI_LEAD_FINISH_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFNPC_AI_LeadGoalWaitRelease : uint8
{
	TRES_FNPC_AI_LEAD_GOAL_WAIT_R_DIST = 0,
	TRES_FNPC_AI_LEAD_GOAL_WAIT_R_TIME = 1,
	TRES_FNPC_AI_LEAD_GOAL_WAIT_R_MANUAL = 2,
	TRES_FNPC_AI_LEAD_GOAL_WAIT_R_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFNPC_AI_LeadGoalAction : uint8
{
	TRES_FNPC_AI_LEAD_GOAL_WAIT = 0,
	TRES_FNPC_AI_LEAD_GOAL_TALK = 1,
	TRES_FNPC_AI_LEAD_GOAL_FREE_WALK = 2,
	TRES_FNPC_AI_LEAD_GOAL_FREE_WALK_TALK = 3,
	TRES_FNPC_AI_LEAD_GOAL_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFNPC_AI_LeadMoveType : uint8
{
	TRES_FNPC_AI_LEAD_MOVE_RUN = 0,
	TRES_FNPC_AI_LEAD_MOVE_WALK = 1,
	TRES_FNPC_AI_LEAD_MOVE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFNPC_AI_LeadMode : uint8
{
	TRES_FNPC_AI_LEAD_MODE_LEAD = 0,
	TRES_FNPC_AI_LEAD_MODE_LEAD_POINT = 1,
	TRES_FNPC_AI_LEAD_MODE_ROUTE = 2,
	TRES_FNPC_AI_LEAD_MODE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFNpcAINpcMode : uint8
{
	TRES_FNPC_AI_NPC_MODE_NONE = 0,
	TRES_FNPC_AI_NPC_MODE_WAIT = 1,
	TRES_FNPC_AI_NPC_MODE_TALK = 2,
	TRES_FNPC_AI_NPC_MODE_FREE_WALK = 3,
	TRES_FNPC_AI_NPC_MODE_FREE_WALK_TALK = 4,
	TRES_FNPC_AI_NPC_MODE_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresNpcGimmickTargetKind : uint8
{
	TRES_NPC_GTK_RAND = 0,
	TRES_NPC_GTK_NEAR = 1,
	TRES_NPC_GTK_PLAYER_NEAR = 2,
	TRES_NPC_GTK_TIME = 3,
	TRES_NPC_GTK_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFNpcAICombiRole : uint8
{
	COMBI_ROLE_NONE = 0,
	COMBI_ROLE_MAIN = 1,
	COMBI_ROLE_PARTNER = 2,
	COMBI_ROLE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFNpcAICombiState : uint8
{
	STATE_COMBI_DISABLE = 0,
	STATE_COMBI_ENABLE = 1,
	STATE_COMBI_STANDBY = 2,
	STATE_COMBI_EXECUTE = 3,
	STATE_COMBI_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFNpcAICombiID : uint8
{
	TRES_FNPC_AI_COMBI_NONE = 0,
	TRES_FNPC_AI_COMBI_MI201_EX001 = 1,
	TRES_FNPC_AI_COMBI_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFNPCMat : uint8
{
	TRES_FNPC_MAT_NORMAL = 0,
	TRES_FNPC_MAT_SCRIBBLE = 1,
	TRES_FNPC_MAT_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresNpcUseItemType : uint8
{
	TRES_NPC_USE_ITEM_NONE = 0,
	TRES_NPC_USE_ITEM_HP = 1,
	TRES_NPC_USE_ITEM_MP = 2,
	TRES_NPC_USE_ITEM_MAX = 3 UMETA(Hidden)
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
	TRES_NPC_AOT_MAX = 13 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresNpcSmartphoneCameraState : uint8
{
	TRES_NPC_SMARTPHONE_CAM_STATE_STANDBY = 0,
	TRES_NPC_SMARTPHONE_CAM_STATE_READY = 1,
	TRES_NPC_SMARTPHONE_CAM_STATE_EXECUT = 2,
	TRES_NPC_SMARTPHONE_CAM_STATE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EHologramWorldInitParamValueType : uint8
{
	Float = 0,
	Vector = 1,
	Color = 2,
	Max = 3 UMETA(Hidden),
	EHologramWorldInitParamValueType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EHologramActorCategory : uint8
{
	SORA = 0,
	SORA_KH2 = 1,
	LIGHT = 2,
	DARK = 3,
	FRIEND = 4,
	ENEMY = 5,
	OBJ_SPIRIT = 6,
	OBJ_GUMIENEMY = 7,
	OBJ_GUMIPARTS = 8,
	OBJ_EFFECT = 9,
	OBJ_OTHERS = 10,
	PHOTOGRAPH_ASSIST = 11,
	PHOTOGRAPH_ASSIST_LIGHT = 12,
	EFF_CAMATTACH = 13,
	EFF_FILTER = 14,
	MAX = 15 UMETA(Hidden),
	EHologramActorCategory_MAX = 16 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresSevenPrincessType : uint8
{
	EX_Donald = 0,
	EX_Goofy = 1,
	HE_Hercules = 2,
	TS_Woody = 3,
	TS_Buzz = 4,
	RA_Rapunzel = 5,
	RA_Flynn = 6,
	FZ_Marshmallow = 7,
	MI_Sulley = 8,
	MI_Mike = 9,
	CA_Jack = 10,
	BX_Baymax = 11,
	MAX = 12 UMETA(Hidden),
	ETresSevenPrincessType_MAX = 13 UMETA(Hidden)
};

UENUM(BlueprintType)
namespace ETresDetectCollShape2D
{
	enum Type
	{
		CIRCLE,
		RECTANGLE,
		POINT,
		MAX UMETA(Hidden),
		ETresDetectCollShape2D_MAX
	};
}

UENUM(BlueprintType)
enum class ETresOneActionType : uint8
{
	DEFAULT = 0,
	SPECIAL_PERFORM = 1,
	IMPRESSION_BIRD = 2,
	MAX = 3 UMETA(Hidden),
	ETresOneActionType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EPRIZE_KIND
{
	PRIZE_KIND_HpPrizeS = 0,
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
	PRIZE_KIND_MAX = 17 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresClaymoreState_e_ex306 : uint8
{
	ETresClaymoreState_e_ex306_Appear = 0,
	ETresClaymoreState_e_ex306_Idle = 1,
	ETresClaymoreState_e_ex306_SwingDown = 2,
	ETresClaymoreState_e_ex306_Free = 3,
	ETresClaymoreState_e_ex306_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETres_e_ex352_DarkMineKind : uint8
{
	DarkMineKind_Release = 0,
	DarkMineKind_Surround = 1,
	DarkMineKind_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETres_e_ex352_LightBulbKind : uint8
{
	LightBulbKind_Homing = 0,
	LightBulbKind_Rotation = 1,
	LightBulbKind_Scattering = 2,
	LightBulbKind_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresClaymoreState_e_ex355 : uint8
{
	ETresClaymoreState_e_ex355_Appear = 0,
	ETresClaymoreState_e_ex355_Idle = 1,
	ETresClaymoreState_e_ex355_SwingDown = 2,
	ETresClaymoreState_e_ex355_Free = 3,
	ETresClaymoreState_e_ex355_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX355_ClaymoreRoamCenterType
{
	EEX355_ClaymoreRoamCenterType_Owner = 0,
	EEX355_ClaymoreRoamCenterType_Target = 1,
	EEX355_ClaymoreRoamCenterType_Map = 2,
	EEX355_ClaymoreRoamCenterType_Max = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX359_SpawnDirType
{
	EEX359_SpawnDirType_Self = 0,
	EEX359_SpawnDirType_Target = 1,
	EEX359_SpawnDirType_ToTarget = 2,
	EEX359_SpawnDirType_Camera = 3,
	EEX359_SpawnDirType_ProjToTarget = 4,
	EEX359_SpawnDirType_Max = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EEX359_SpawnLocType
{
	EEX359_SpawnLocType_Self = 0,
	EEX359_SpawnLocType_Target = 1,
	EEX359_SpawnLocType_Owner = 2,
	EEX359_SpawnLocType_Max = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEEX771_FLARE_SHOT_SPAWN_TYPE : uint8
{
	SPAWN_TYPE_LR = 0,
	SPAWN_TYPE_L = 1,
	SPAWN_TYPE_R = 2,
	SPAWN_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemyEEX773_FLARE_SHOT_SPAWN_TYPE : uint8
{
	SPAWN_TYPE_LR = 0,
	SPAWN_TYPE_L = 1,
	SPAWN_TYPE_R = 2,
	SPAWN_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresPuddingResultRank : uint8
{
	RANK_A = 0,
	RANK_B = 1,
	RANK_C = 2,
	RANK_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresPuddingTaskType : uint8
{
	NONE = 0,
	HE = 1,
	BX = 2,
	CA = 3,
	TS = 4,
	MI = 5,
	FZ = 6,
	RA = 7,
	ETresPuddingTaskType_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ECuttingMainState : uint8
{
	None = 0,
	Prepare = 1,
	Sloping = 2,
	SubSloping = 3,
	Calculate = 4,
	PrepareReload = 5,
	CommandReload = 6,
	StickOnlyReload = 7,
	WaitReload = 8,
	ResultWait = 9,
	CuttingMainState_MAX = 10 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ECuttingReloadType : uint8
{
	Command = 0,
	StickOnly = 1,
	CuttingReloadType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EggCrackingV2MainState : uint8
{
	None = 0,
	CrackPrepare = 1,
	CrackSloping = 2,
	PullPrepare = 3,
	PullSloping = 4,
	Finished = 5,
	EggCrackingV2MainState_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EggCrackingV2AnimationType : uint8
{
	TypeA = 0,
	TypeB = 1,
	EggCrackingV2AnimationType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EggCrackingV2MaterialAmountIncreaseType : uint8
{
	TypeA = 0,
	TypeB = 1,
	TypeC = 2,
	TypeD = 3,
	EggCrackingV2MaterialAmountIncreaseType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESprinklePepperMainState : uint8
{
	None = 0,
	Prepare = 1,
	Sloping = 2,
	Calculate = 3,
	Finish = 4,
	SprinklePepperMainState_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESprinklePepperV2InputJudgementType : uint8
{
	TypeA = 0,
	TypeB = 1,
	TypeC = 2,
	SprinklePepperV2InputJudgementType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESprinklePepperV2InputType : uint8
{
	InputTypeNone = 0,
	InputTypeA = 1,
	InputTypeB = 2,
	InputTypeC = 3,
	InputTypeD = 4,
	SprinklePepperV2InputType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESprinklePepperV2InputTimingEvalution : uint8
{
	InputTimingEvalutionNone = 0,
	InputTimingEvalutionTooFast = 1,
	InputTimingEvalutionSuccess = 2,
	InputTimingEvalutionGreatSuccess = 3,
	InputTimingEvalutionTooSlow = 4,
	SprinklePepperV2InputTimingEvalution_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESprinklePepperV2MainState : uint8
{
	None = 0,
	TypeABPrepare = 1,
	TypeABSloping = 2,
	TypeABCalculate = 3,
	TypeCDPrepare = 4,
	TypeCDSloping = 5,
	TypeCDCalculate = 6,
	WaitThrowAnimation = 7,
	WaitAnimation = 8,
	TypeABWaitStickNeutral = 9,
	TypeCDWaitStickNeutral = 10,
	GameEndWaitThrowAnimation = 11,
	GameEnd = 12,
	SprinklePepperV2MainState_MAX = 13 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemyFPSMode : uint8
{
	FPS_Config = 0,
	FPS = 1,
	FPS01 = 2,
	FPS_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemyDishLevel : uint8
{
	RemyDishLevel1 = 0,
	RemyDishLevel2 = 1,
	RemyDishLevel3 = 2,
	RemyDishLevel4 = 3,
	RemyDishLevel5 = 4,
	RemyDishLevel_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemyKitchenGrade : uint8
{
	RemyKitchenGrade1 = 0,
	RemyKitchenGrade2 = 1,
	RemyKitchenGrade3 = 2,
	RemyKitchenGrade4 = 3,
	RemyKitchenGrade_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemyMilestone : uint8
{
	RemyMilestone0 = 0,
	RemyMilestone1 = 1,
	RemyMilestone2 = 2,
	RemyMilestone3 = 3,
	RemyMilestone_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemyRestaurantRank : uint8
{
	RemyRestaurantRank0 = 0,
	RemyRestaurantRank1 = 1,
	RemyRestaurantRank2 = 2,
	RemyRestaurantRank3 = 3,
	RemyRestaurantRank4 = 4,
	RemyRestaurantRank5 = 5,
	RemyRestaurantRank_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemyShowFinishOperationUITiming : uint8
{
	None = 0,
	HaveMaterial = 1,
	OnSuccess = 2,
	RemyShowFinishOperationUITiming_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemyStickControlType : uint8
{
	SoraViewpoint = 0,
	UserViewpoint = 1,
	RemyStickControlType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemyCookingCommand : uint8
{
	Up = 0,
	Down = 1,
	Left = 2,
	Right = 3,
	RemyCookingCommand_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemySprinklePepperContentsType : uint8
{
	RemySprinklePepperContentsA = 0,
	RemySprinklePepperContentsB = 1,
	RemySprinklePepperContentsC = 2,
	RemySprinklePepperContentsD = 3,
	RemySprinklePepperContentsE = 4,
	RemySprinklePepperContentsF = 5,
	RemySprinklePepperContentsG = 6,
	RemySprinklePepperContentsType_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemySprinklePepperEquipmentType : uint8
{
	RemySprinklePepperNone = 0,
	RemySprinklePepperSaucepan = 1,
	RemySprinklePepperPan = 2,
	RemySprinklePepperBowl = 3,
	RemySprinklePepperEquipmentType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemyCuttingFoodType : uint8
{
	RemyCuttingOnion = 0,
	RemyCuttingZucchini = 1,
	RemyCuttingMushroom = 2,
	RemyCuttingApple = 3,
	RemyCuttingTomato = 4,
	RemyCuttingPear = 5,
	RemyCuttingFoodType_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemyFlambeFoodType : uint8
{
	RemyFlambeCrab = 0,
	RemyFlambeScallops = 1,
	RemyFlambeEel = 2,
	RemyFlambeSweetbread = 3,
	RemyFlambeCrepe = 4,
	RemyFlambeSeaperch = 5,
	RemyFlambeFilletMeat = 6,
	RemyFlambeFoodType_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemyCameraWorkTiming : uint8
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
	RemyCameraWorkTiming_MAX = 54 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemyResultAnimationType : uint8
{
	RemyResultAnimSuccess = 0,
	RemyResultAnimSuccessLoop = 1,
	RemyResultAnimGreatSuccess = 2,
	RemyResultAnimGreatSuccessLoop = 3,
	RemyResultAnimFail = 4,
	RemyResultAnimFailLoop = 5,
	RemyResultAnimationType_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemyAnimationType : uint8
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
	RemyAnimationType_MAX = 44 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemyCookingEvaluationResult : uint8
{
	RemyCookingResultNothing = 0,
	RemyCookingResultTooLittle = 1,
	RemyCookingResultSuccess = 2,
	RemyCookingResultGreatSuccess = 3,
	RemyCookingResultTooMany = 4,
	RemyCookingResultTimeOut = 5,
	RemyCookingResultTooFast = 6,
	RemyCookingResultTooSlow = 7,
	RemyCookingEvaluationResult_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemyCookingEvalution : uint8
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
enum class ERemyCookingGameState : uint8
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
enum class ERemyGameState : uint8
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
enum class ERemyCookingGameType : uint8
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
enum class ERemyRecipeType : uint8
{
	NOTHING = 0,
	Recipe01 = 1,
	Recipe02 = 2,
	Recipe03 = 3,
	Recipe04 = 4,
	Recipe05 = 5,
	Recipe06 = 6,
	Recipe07 = 7,
	Recipe08 = 8,
	Recipe09 = 9,
	Recipe10 = 10,
	Recipe11 = 11,
	Recipe12 = 12,
	Recipe13 = 13,
	Recipe14 = 14,
	Recipe15 = 15,
	Recipe16 = 16,
	Recipe17 = 17,
	Recipe18 = 18,
	Recipe19 = 19,
	Recipe20 = 20,
	Recipe21 = 21,
	Recipe22 = 22,
	Recipe23 = 23,
	Recipe24 = 24,
	Recipe25 = 25,
	Recipe26 = 26,
	Recipe27 = 27,
	Recipe28 = 28,
	MAX = 29,
	RemyRecipeType_MAX = 30 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemyMenuType : uint8
{
	Normal = 0,
	Special = 1,
	RemyMenuType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemyDishCategory : uint8
{
	Appetizer = 0,
	Soup = 1,
	Fish = 2,
	Meat = 3,
	Dessert = 4,
	RemyDishCategoryNum = 5,
	RemyDishCategory_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ERemyAccessMethod : uint8
{
	None = 0,
	FromEntrance = 1,
	FromSaveMenu = 2,
	FromWorldMap = 3,
	RemyAccessMethod_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresShopChrID : uint8
{
	MOOGLE = 0,
	HUEY = 1,
	DEWEY = 2,
	LOUIE = 3,
	_MAX = 4 UMETA(Hidden),
	ETresShopChrID_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresShopID : uint8
{
	NOTHING = 0,
	COMMON = 1,
	BT_MOOGLE1 = 2,
	DB_MOOGLE1 = 3,
	DW_MOOGLE1 = 4,
	HE_MOOGLE1 = 5,
	TS_MOOGLE1 = 6,
	CS_MOOGLE1 = 7,
	RA_MOOGLE1 = 8,
	FZ_MOOGLE1 = 9,
	CA_MOOGLE1 = 10,
	PO_MOOGLE1 = 11,
	MI_MOOGLE1 = 12,
	TT_MOOGLE1 = 13,
	YT_MOOGLE1 = 14,
	KB_MOOGLE1 = 15,
	FW_MOOGLE1 = 16,
	DC_MOOGLE1 = 17,
	WI_MOOGLE1 = 18,
	IN_MOOGLE1 = 19,
	BX_MOOGLE1 = 20,
	SR_MOOGLE1 = 21,
	CO_MOOGLE1 = 22,
	EW_MOOGLE1 = 23,
	DI_MOOGLE1 = 24,
	RG_MOOGLE1 = 25,
	DP_MOOGLE1 = 26,
	SF_MOOGLE1 = 27,
	GM_MOOGLE1 = 28,
	WM_MOOGLE1 = 29,
	GUMI_SHOP_L1 = 30,
	GUMI_SHOP_L2 = 31,
	GUMI_SHOP_L3 = 32,
	GUMI_SHOP_L4 = 33,
	GUMI_SHOP_L5 = 34,
	GUMI_SHOP_L6 = 35,
	_MAX = 36,
	ETresShopID_MAX = 37
};

UENUM(BlueprintType)
enum class ETresSkeletalFootStampDir : uint8
{
	Normal = 0,
	LR_Reverse = 1,
	FB_Reverse = 2,
	LRFB_Reverse = 3,
	ETresSkeletalFootStampDir_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresSoundAliasLabel_Projectile : uint8
{
	NOTHING = 0,
	HIT1 = 1,
	HIT2 = 2,
	_MAX = 3 UMETA(Hidden),
	ETresSoundAliasLabel_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
namespace ETresSoundAliasLabel_WeaponSwing
{
	enum Type
	{
		NOTHING,
		SWING1,
		SWING2,
		SWING3,
		SWING4,
		SWING5,
		SWING6,
		SWING7,
		SWING8,
		SWING9,
		SWING10,
		SWING11,
		SWING12,
		SWING13,
		_MAX UMETA(Hidden),
		ETresSoundAliasLabel_MAX
	};
}

UENUM(BlueprintType)
namespace ETresSoundAliasLabel_WeaponHit
{
	enum Type
	{
		NOTHING,
		HIT1,
		HIT2,
		HIT3,
		HIT4,
		HIT5,
		HIT6,
		HIT7,
		HIT8,
		HIT9,
		HIT10,
		HIT11,
		_MAX UMETA(Hidden),
		ETresSoundAliasLabel_MAX
	};
}

UENUM(BlueprintType)
namespace ETresSoundAliasUnit
{
	enum Type
	{
		NOTHING,
		RH_WEAPON,
		LH_WEAPON,
		RL_WEAPON,
		LL_WEAPON,
		_MAX UMETA(Hidden),
		ETresSoundAliasUnit_MAX
	};
}

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
enum class ETresCategoryVolumeLayers : uint8
{
	GAME = 0,
	MATINEE = 1,
	ETresCategoryVolumeLayers_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresWorldStaticBGMTypes : uint8
{
	FIELD = 0,
	BATTLE = 1,
	BOSS_BATTLE = 2,
	EVENT_01 = 3,
	ETresWorldStaticBGMTypes_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresSoundModes : uint8
{
	BLACKOUT = 0,
	PAUSE = 1,
	SLOW = 2,
	PLAYER_DEAD = 3,
	BOSS_DEAD = 4,
	THANKYOU_FOR_PLAYING = 5,
	EVENT_SKIP_FADING = 6,
	MOVIE = 7,
	ETresSoundModes_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresSpawnPointSize : uint8
{
	Small = 0,
	Big = 1,
	ETresSpawnPointSize_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresSpawnPointBuildMethod : uint8
{
	Simple = 0,
	PathFinding = 1,
	ETresSpawnPointBuildMethod_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresSpawnPointHeightFilterType : uint8
{
	ETresSpawnPointHeightFilterType_DoNotCare = 0,
	ETresSpawnPointHeightFilterType_LessThan = 1,
	ETresSpawnPointHeightFilterType_LessEqual = 2,
	ETresSpawnPointHeightFilterType_Equal = 3,
	ETresSpawnPointHeightFilterType_GraterEqual = 4,
	ETresSpawnPointHeightFilterType_GraterThan = 5,
	ETresSpawnPointHeightFilterType_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresSpawnPointRadiusFilterType : uint8
{
	ETresSpawnPointRadiusFilterType_DoNotCare = 0,
	ETresSpawnPointRadiusFilterType_LessThan = 1,
	ETresSpawnPointRadiusFilterType_LessEqual = 2,
	ETresSpawnPointRadiusFilterType_Equal = 3,
	ETresSpawnPointRadiusFilterType_GraterEqual = 4,
	ETresSpawnPointRadiusFilterType_GraterThan = 5,
	ETresSpawnPointRadiusFilterType_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresSplineMoverMove : uint8
{
	Location = 0,
	LocationAndRotation = 1,
	MI_02_BeltConveyor = 2,
	TS_02_UFO = 3,
	TT_Train = 4,
	ETresSplineMoverMove_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresSplineLast : uint8
{
	None = 0,
	End = 1,
	Loop = 2,
	ETresSplineLast_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresStaticSE : uint8
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
	_se00000_MAX = 43 UMETA(Hidden),
	ETresStaticSE_MAX = 44 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresNavLinkSegment_e_ex035
{
	NavLinkSegmentLeft = 0,
	NavLinkSegmentRight = 1,
	ETresNavLinkSegment_e_ex035_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresNotifyFriendNpc
{
	MoveToActionPointStart = 0,
	MoveToActionPointEnd = 1,
	ETresNotifyFriendNpc_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresDetectMarkerType : uint8
{
	Default = 0,
	LuckyMark = 1,
	GumiConstellation = 2,
	RaPudding = 3,
	NpcSmartphoneReaction = 4,
	PhotoMission = 5,
	ETresDetectMarkerType_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresPropertyTrackTermnation : uint8
{
	RestoreValue = 0,
	SetEndValue = 1,
	KeepValue = 2,
	ETresPropertyTrackTermnation_MAX = 3 UMETA(Hidden)
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
enum class ETresCampPawnAnimTypeID : uint8
{
	TCPAID_NORMAL = 0 UMETA(DisplayName = "Normal"),
	TCPAID_IDLE = 1 UMETA(DisplayName = "Idle"),
	TCPAID_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresDlcChallengeRank : uint8
{
	RANK_NONE = 0 UMETA(DisplayName = "None"),
	RANK = 1 UMETA(DisplayName = "Rank"),
	RANK01 = 2 UMETA(DisplayName = "Rank 1"),
	RANK02 = 3 UMETA(DisplayName = "Rank 2"),
	RANK03 = 4 UMETA(DisplayName = "Rank 3"),
	RANK04 = 5 UMETA(DisplayName = "Rank 4"),
	RANK05 = 6 UMETA(DisplayName = "Rank 5"),
	RANK06 = 7 UMETA(DisplayName = "Rank 6"),
	RANK07 = 8 UMETA(DisplayName = "Rank 7"),
	RANK08 = 9 UMETA(DisplayName = "Rank 8"),
	RANK09 = 10 UMETA(DisplayName = "Rank 9"),
	RANK10 = 11 UMETA(DisplayName = "Rank 10"),
	RANK11 = 12 UMETA(DisplayName = "Rank 11"),
	RANK12 = 13 UMETA(DisplayName = "Rank 12"),
	_Max = 14 UMETA(Hidden),
	ETresDlcChallengeRank_MAX = 15 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresDlcChallengeScoreID : uint8
{
	ID01 = 0,
	ID02 = 1,
	ID03 = 2,
	ID04 = 3,
	ID05 = 4,
	ID06 = 5,
	ID07 = 6,
	ID08 = 7,
	ID09 = 8,
	ID10 = 9,
	ID11 = 10,
	ID12 = 11,
	ID13 = 12,
	ID14 = 13,
	ID15 = 14,
	ID16 = 15,
	ID17 = 16,
	ID18 = 17,
	ID19 = 18,
	ID20 = 19,
	ID21 = 20,
	ID22 = 21,
	ID23 = 22,
	ID24 = 23,
	ID25 = 24,
	ID26 = 25,
	ID27 = 26,
	ID28 = 27,
	ID29 = 28,
	ID30 = 29,
	ID31 = 30,
	ID32 = 31,
	ID33 = 32,
	ID34 = 33,
	_Max = 34 UMETA(Hidden),
	ETresDlcChallengeScoreID_MAX = 35 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresDlcChallengeRecordID : uint8
{
	REC0101 = 0,
	REC0201 = 1,
	REC0202 = 2,
	REC0301 = 3,
	REC0401 = 4,
	REC0501 = 5,
	REC0601 = 6,
	REC0701 = 7,
	REC0801 = 8,
	REC0901 = 9,
	REC1001 = 10,
	REC1101 = 11,
	REC1201 = 12,
	REC1301 = 13,
	REC1401 = 14,
	REC1402 = 15,
	REC1501 = 16,
	REC1502 = 17,
	REC1601 = 18,
	REC1602 = 19,
	REC1603 = 20,
	REC1701 = 21,
	REC1801 = 22,
	REC1802 = 23,
	REC1803 = 24,
	REC1901 = 25,
	REC1902 = 26,
	REC2001 = 27,
	REC2002 = 28,
	REC2101 = 29,
	REC2201 = 30,
	REC2301 = 31,
	REC2401 = 32,
	REC2501 = 33,
	REC2601 = 34,
	REC2701 = 35,
	REC2801 = 36,
	REC2901 = 37,
	REC3001 = 38,
	REC3101 = 39,
	REC3201 = 40,
	REC3301 = 41,
	REC3401 = 42,
	ScoreCheckMax = 43,
	_Max = 44 UMETA(Hidden),
	ETresDlcChallengeRecordID_MAX = 45 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresDlcChallengeCode : uint8
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
	_Max = 14 UMETA(Hidden),
	ETresDlcChallengeCode_MAX = 15 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresDlcCheatAchievementID : uint8
{
	RiskeyChallenge = 0,
	GlideChallenge = 1,
	GumiSGeistChallenge = 2,
	AerialChallenge = 3,
	GigasChallenge = 4,
	BowlingChallenge = 5,
	FreezeChallenge = 6,
	RageChallenge = 7,
	LinkChallenge = 8,
	_AllClearCheck = 9,
	_Max = 10 UMETA(Hidden),
	ETresDlcCheatAchievementID_MAX = 11 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresDlcCheatCode : uint8
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
	_CodeMax = 15,
	_Max = 16 UMETA(Hidden),
	ETresDlcCheatCode_MAX = 17 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFadeTrack_TheaterMode : uint8
{
	ETresFadeTrack_TheaterMode_Disable = 0,
	ETresFadeTrack_TheaterMode_Only = 1,
	ETresFadeTrack_TheaterMode_Regardless = 2,
	ETresFadeTrack_TheaterMode_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresPauseMenuType : uint8
{
	ETresPauseMenuType_Normal = 0,
	ETresPauseMenuType_EventSkip = 1,
	ETresPauseMenuType_EventSkipButDisallow = 2,
	ETresPauseMenuType_MiniGame = 3,
	ETresPauseMenuType_NoRetryMiniGame = 4,
	ETresPauseMenuType_Tutorial = 5,
	ETresPauseMenuType_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGameHelpCategory : uint8
{
	None = 0,
	GameSystem = 1,
	PlayerAction = 2,
	Battle = 3,
	World = 4,
	LSI = 5,
	GumiHelp = 6,
	GumiEditHelp = 7,
	ReMind = 8,
	Max = 9 UMETA(Hidden),
	ETresGameHelpCategory_MAX = 10 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresLevelentityGroup_Selector : uint8
{
	ETresLevelentityGroup_Selector_None = 0 UMETA(DisplayName = "None"),
	ETresLevelentityGroup_Selector_MAX = 1 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresLevelEntityDisappearMode : uint8
{
	ETresLevelEntityDisappearMode_Immediate = 0,
	ETresLevelEntityDisappearMode_Perform1 = 1,
	ETresLevelEntityDisappearMode_Perform2 = 2,
	ETresLevelEntityDisappearMode_Perform3 = 3,
	ETresLevelEntityDisappearMode_RunAway = 4,
	ETresLevelEntityDisappearMode_Force = 5,
	ETresLevelEntityDisappearMode_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresLevelEntityAppearMode
{
	ETresLevelEntityAppearMode_Immediate = 0,
	ETresLevelEntityAppearMode_Perform1 = 1,
	ETresLevelEntityAppearMode_Perform2 = 2,
	ETresLevelEntityAppearMode_Perform3 = 3,
	ETresLevelEntityAppearMode_Perform4 = 4,
	ETresLevelEntityAppearMode_Special1 = 5,
	ETresLevelEntityAppearMode_Special2 = 6,
	ETresLevelEntityAppearMode_Special3 = 7,
	ETresLevelEntityAppearMode_IdleWait = 8,
	ETresLevelEntityAppearMode_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemySetVanishMode : uint8
{
	ETresEnemySetVanishMode_Immediate = 0,
	ETresEnemySetVanishMode_Perform1 = 1,
	ETresEnemySetVanishMode_Perform2 = 2,
	ETresEnemySetVanishMode_Perform3 = 3,
	ETresEnemySetVanishMode_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresEnemySetAppearMode : uint8
{
	ETresEnemySetAppearMode_Immediate = 0,
	ETresEnemySetAppearMode_Perform1 = 1,
	ETresEnemySetAppearMode_Perform2 = 2,
	ETresEnemySetAppearMode_Perform3 = 3,
	ETresEnemySetAppearMode_Perform4 = 4,
	ETresEnemySetAppearMode_Special1 = 5,
	ETresEnemySetAppearMode_Special2 = 6,
	ETresEnemySetAppearMode_Special3 = 7,
	ETresEnemySetAppearMode_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFNpcAIAttackDefType : uint8
{
	TRES_FNPC_AI_ATK_DEF_NONE = 0,
	TRES_FNPC_AI_ATK_DEF_NORMAL_ATTACK = 1,
	TRES_FNPC_AI_ATK_DEF_ABILITY_ATTACK = 2,
	TRES_FNPC_AI_ATK_DEF_ABILITY_CURE = 3,
	TRES_FNPC_AI_ATK_DEF_ABILITY_SUPPORT = 4,
	TRES_FNPC_AI_ATK_DEF_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFNpcAIModeLevelSetting : uint8
{
	TRES_FNPC_AI_MODE_LV_SET_FOLLOW = 0,
	TRES_FNPC_AI_MODE_LV_SET_NPC_WAIT = 1,
	TRES_FNPC_AI_MODE_LV_SET_NPC_TALK = 2,
	TRES_FNPC_AI_MODE_LV_SET_NPC_FREE_WALK = 3,
	TRES_FNPC_AI_MODE_LV_SET_NPC_FREE_WALK_TALK = 4,
	TRES_FNPC_AI_MODE_LV_SET_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFNpcAIStyle_Cure : uint8
{
	TRES_FNPC_AI_STYLE_CURE_OFTEN = 0,
	TRES_FNPC_AI_STYLE_CURE_PINCH = 1,
	TRES_FNPC_AI_STYLE_CURE_ALWAYS = 2,
	TRES_FNPC_AI_STYLE_CURE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFNpcAIStyle_Ability : uint8
{
	TRES_FNPC_AI_STYLE_ABILITY_FREE = 0,
	TRES_FNPC_AI_STYLE_ABILITY_BALANCE = 1,
	TRES_FNPC_AI_STYLE_ABILITY_LESS = 2,
	TRES_FNPC_AI_STYLE_ABILITY_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresFNpcAIStyle_Battle : uint8
{
	TRES_FNPC_AI_STYLE_BATTLE_TOGETHER = 0,
	TRES_FNPC_AI_STYLE_BATTLE_FREE = 1,
	TRES_FNPC_AI_STYLE_BATTLE_SUPPORT = 2,
	TRES_FNPC_AI_STYLE_BATTLE_FOCUS = 3,
	TRES_FNPC_AI_STYLE_BATTLE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresCmnCureEffectGrpID : uint8
{
	TRES_CURE_GRP_NONE = 0 UMETA(DisplayName = "None"),
	TRES_CURE_GRP_SAVEPOINT = 1 UMETA(DisplayName = "Save Point"),
	TRES_CURE_GRP_PRIZE = 2 UMETA(DisplayName = "Prize"),
	TRES_CURE_GRP_POTION = 3 UMETA(DisplayName = "Potion"),
	TRES_CURE_GRP_HIGHPOTION = 4 UMETA(DisplayName = "High Potion"),
	TRES_CURE_GRP_ETHER = 5 UMETA(DisplayName = "Ether"),
	TRES_CURE_GRP_ELIXIR = 6 UMETA(DisplayName = "Elixir"),
	TRES_CURE_GRP_CURE = 7 UMETA(DisplayName = "Cure"),
	TRES_CURE_GRP_CURA = 8 UMETA(DisplayName = "Cura"),
	TRES_CURE_GRP_CURAGA = 9 UMETA(DisplayName = "Curaga"),
	TRES_CURE_GRP_BONUS_CURE = 10 UMETA(DisplayName = "Bonus Cure"),
	TRES_CURE_GRP_BONUS_CURA = 11 UMETA(DisplayName = "Bonus Cura"),
	TRES_CURE_GRP_BONUS_CURAGA = 12 UMETA(DisplayName = "Bonus Curaga"),
	TRES_CURE_GRP_DRAIN = 13 UMETA(DisplayName = "Drain"),
	D_CURE = 14 UMETA(DisplayName = "D Cure"),
	BONUS_D_CURE = 15 UMETA(DisplayName = "Bonus D Cure"),
	CURE_SPRAY = 16 UMETA(DisplayName = "Cure Spray"),
	BONUS_CURE_SPRAY = 17 UMETA(DisplayName = "Bonus Cure Spray"),
	TRES_CURE_GRP_HIGHETHER = 18 UMETA(DisplayName = "High Ether"),
	TRES_CURE_GRP_FOCUSSUPPLY = 19 UMETA(DisplayName = "Focus Supply"),
	TRES_CURE_GRP_HIGHFOCUSSUPPLY = 20 UMETA(DisplayName = "High Focus Supply"),
	TRES_CURE_GRP_ALLCURE = 21 UMETA(DisplayName = "All Cure"),
	TRES_CURE_GRP_FOCUSASPIR = 22 UMETA(DisplayName = "Focus Aspir"),
	TRES_CURE_GRP_MAX = 23 UMETA(Hidden),
	ETresCmnCureEffectGrpID_MAX = 24 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresPawnCmnChargeEffectCategory : uint8
{
	TRES_CMN_CEC_WEAPON = 0 UMETA(DisplayName = "Weapon"),
	TRES_CMN_CEC_STYLECHANGE = 1 UMETA(DisplayName = "Style Change"),
	TRES_CMN_CEC_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresPawnCmnEffectID : uint8
{
	TRES_PAWN_CMN_EFFECT_FREEFLOW = 0 UMETA(DisplayName = "Free Flow"),
	TRES_PAWN_CMN_EFFECT_MAGIC_CAST = 1 UMETA(DisplayName = "Magic Cast"),
	TRES_PAWN_CMN_EFFECT_BAD_STATES = 2 UMETA(DisplayName = "Bad States"),
	TRES_PAWN_CMN_EFFECT_APPEAR = 3 UMETA(DisplayName = "Appear"),
	TRES_PAWN_CMN_EFFECT_CURE = 4 UMETA(DisplayName = "Cure"),
	TRES_PAWN_CMN_EFFECT_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresCharInputType
{
	TRES_CHAR_INPUT_AI = 0 UMETA(DisplayName = "AI"),
	TRES_CHAR_INPUT_PAD = 1 UMETA(DisplayName = "Pad"),
	TRES_CHAR_INPUT_DEBUG_PAD = 2 UMETA(DisplayName = "Debug Pad"),
	TRES_CHAR_INPUT_DONOTING = 3 UMETA(DisplayName = "Do Noting"),
	TRES_CHAR_INPUT_OTHER = 4 UMETA(DisplayName = "Other"),
	TRES_CHAR_INPUT_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresCinematicPlayerStyleType : uint8
{
	NONE = 0 UMETA(DisplayName = "None"),
	WEAR_L0_WEAPON_L1 = 1 UMETA(DisplayName = "Wear L0 Weapon L1"),
	WEAR_L1_WEAPON_L0 = 2 UMETA(DisplayName = "Wear L1 Weapon L0"),
	WEAR_L1_WEAPON_L1 = 3 UMETA(DisplayName = "Wear L1 Weapon L1"),
	WEAR_L2_WEAPON_L0 = 4 UMETA(DisplayName = "Wear L2 Weapon L0"),
	WEAR_L2_WEAPON_L1 = 5 UMETA(DisplayName = "Wear L2 Weapon L1"),
	_MAX = 6 UMETA(Hidden),
	ETresCinematicPlayerStyleType_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresCinematicPlayerStateType : uint8
{
	TCPST_NONE = 0 UMETA(DisplayName = "None"),
	TCPST_TPVIEW = 1 UMETA(DisplayName = "TP View"),
	TCPST_CLEAR = 2 UMETA(DisplayName = "Clear"),
	TCPST_FORCE_CLEAR = 3 UMETA(DisplayName = "Force Clear"),
	_TCPST_MAX = 4 UMETA(Hidden),
	ETresCinematicPlayerStateType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresCinematicLayerChannel : uint8
{
	TCLC_EVENT1 = 0,
	TCLC_EVENT2 = 1,
	TCLC_EVENT3 = 2,
	TCLC_EVENT4 = 3,
	TCLC_LEVEL1 = 4,
	TCLC_LEVEL2 = 5,
	TCLC_LEVEL3 = 6,
	TCLC_LEVEL4 = 7,
	_TCLC_MAX = 8 UMETA(Hidden),
	ETresCinematicLayerChannel_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresObjTypeProcChannel : uint8
{
	CH_COMMON = 0 UMETA(DisplayName = "Common"),
	CH_PLAYER = 1 UMETA(DisplayName = "Player"),
	CH_EVENT = 2 UMETA(DisplayName = "Event"),
	CH_MENU = 3 UMETA(DisplayName = "Menu"),
	CH_ENEMY = 4 UMETA(DisplayName = "Enemy"),
	CH_ENEMYBOSS = 5 UMETA(DisplayName = "Enemy Boss"),
	_CH_RESERVE06 = 6 UMETA(DisplayName = "Reserve 6"),
	_CH_RESERVE07 = 7 UMETA(DisplayName = "Reserve 7"),
	CH_SYSTEM1 = 8 UMETA(DisplayName = "System 1"),
	_CH_RESERVE09 = 9 UMETA(DisplayName = "Reserve 9"),
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
enum class ETresBadStatCloudWeatherType : uint8
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
	TRES_ATK_RR_DEFAULT = 0 UMETA(DisplayName = "RR Default"),
	TRES_ATK_RR_STAGGER = 1 UMETA(DisplayName = "RR Stagger"),
	TRES_ATK_RS_GUARD = 2 UMETA(DisplayName = "RS Guard"),
	TRES_ATK_RR_NOREACTION = 3 UMETA(DisplayName = "RR No Reaction"),
	_TRES_ATK_RR_MAX = 4 UMETA(Hidden),
	ETresAtkCollReflectReaction_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresAtkCollMapHitType : uint8
{
	NOHIT = 0,
	PHYSOBJ_NOHIT = 1,
	HITMAP = 2,
	IGNORE_GROUND = 3,
	_MAX = 4 UMETA(Hidden),
	ETresAtkCollMapHitType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresAtkCollLocationAttachType : uint8
{
	NORMAL = 0,
	OWNER_ATTACHED_MESH = 1,
	WORLD = 2,
	ETresAtkCollLocationAttachType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
namespace ETresCollision
{
	enum Type
	{
		SPHERE,
		CAPSULE1,
		CAPSULE2,
		CAPSULE_RING,
		BOX,
		BOX_RING,
		CONVEX,
		LASER1,
		DCONVEX,
		MAX UMETA(Hidden),
		ETresCollision_MAX
	};
}

UENUM(BlueprintType)
enum class ETresLockonPriority : uint8
{
	LOW = 0,
	HIGH = 1,
	ETresLockonPriority_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresReactorCommandID : uint8
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
	_TRES_RCID_MAX = 31 UMETA(Hidden),
	ETresReactorCommandID_MAX = 32 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresAttackerPosition : uint8
{
	Front = 0,
	Back = 1,
	Right = 2,
	Left = 3,
	Max = 4 UMETA(Hidden),
	ETresAttackerPosition_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGrass
{
	RADIAL = 0,
	CLOCKWISE = 1,
	CCLOCKWISE = 2,
	//MAX = 3 UMETA(Hidden),
	ETresGrass_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresScalabilityType : uint8
{
	SCALABILITY_TYPE_ENGINE = 0,
	SCALABILITY_TYPE_GAME = 1,
	SCALABILITY_TYPE_CUT_SCENE = 2,
	SCALABILITY_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresBoneSpacesType : uint8
{
	TBST_WorldSpace = 0,
	TBST_LocalSpace = 1,
	TBST_ComponentSpace = 2,
	TBST_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresSaveLevel : uint8
{
	Visible = 0,
	Load = 1,
	Max = 2 UMETA(Hidden),
	ETresSaveLevel_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresClimbingAnimPose : uint8
{
	TRES_CLIMBINGANIMPOSE_NONE = 0,
	TRES_CLIMBINGANIMPOSE_LOW = 1,
	TRES_CLIMBINGANIMPOSE_MIDDLE = 2,
	TRES_CLIMBINGANIMPOSE_HIGH = 3,
	TRES_CLIMBINGANIMPOSE_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresLandAnimPose
{
	TRES_LANDANIMPOSE_NONE = 0,
	TRES_LANDANIMPOSE_LAND = 1,
	TRES_LANDANIMPOSE_LIGHT = 2,
	TRES_LANDANIMPOSE_LIGHT_R = 3,
	TRES_LANDANIMPOSE_LIGHT_L = 4,
	TRES_LANDANIMPOSE_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresLastAnimPose
{
	TRES_LASTANIMPOSE_NORMAL = 0,
	TRES_LASTANIMPOSE_BATTLE = 1,
	TRES_LASTANIMPOSE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresCharRestrictActionID : uint8
{
	ATTACK = 0,
	MAGIC = 1,
	ITEM = 2,
	LINK = 3,
	FRIENDLINK = 4,
	ATTRACTIONFLOW = 5,
	STYLE = 6,
	SITUATION = 7,
	GUARD = 8,
	JUMP = 9,
	SHOOTLOCK = 10,
	RUN = 11,
	DIVEFALL = 12,
	DEEPDIVING = 13,
	CANCELSITUATION = 14,
	ALWAYS_USESPAWNPOINT = 15,
	PHOTO_MODE = 16,
	_MAX = 17 UMETA(Hidden),
	ETresCharRestrictActionID_MAX = 18 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresCoverIdlingDirID : uint8
{
	TRES_CID_ID_NONE = 0,
	TRES_CID_ID_LEFT = 1,
	TRES_CID_ID_RIGHT = 2,
	_TRES_CID_ID_MAX = 3 UMETA(Hidden),
	ETresCoverIdlingDirID_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresdirectionType : uint8
{
	TRES_DIR_FRONT = 0,
	TRES_DIR_BACK = 1,
	TRES_DIR_RIGHT = 2,
	TRES_DIR_LEFT = 3,
	TRES_DIR_UP = 4,
	TRES_DIR_DOWN = 5,
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
	TRDT_MAX = 5 UMETA(Hidden)
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
	THIM_MAX = 11 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresPlayerHoukouModes : uint8
{
	TPH_FRONT = 0,
	TPH_BACK = 1,
	TPH_RIGHT = 2,
	TPH_LEFT = 3,
	TPH_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresCharEquipPart : uint8
{
	UNKNOWN = 0,
	RIGHT_HAND = 1,
	LEFT_HAND = 2,
	BOTH_HAND = 3,
	RIGHT_LEG = 4,
	LEFT_LEG = 5,
	BOTH_LEG = 6,
	ALL = 7,
	_MAX = 8 UMETA(Hidden),
	ETresCharEquipPart_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresWeaponGrowLvl : uint8
{
	TRES_WEAPON_GROW_LVL01 = 0,
	TRES_WEAPON_GROW_LVL02 = 1,
	TRES_WEAPON_GROW_LVL03 = 2,
	TRES_WEAPON_GROW_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresWeaponForm : uint8
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
	TRES_WEAPON_FORM_MAX = 25 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresDamageLeaveOneType : uint8
{
	NORMAL = 0,
	ANYONE = 1,
	PLAYER_ONLY = 2,
	PLAYERTEAM_ONLY = 3,
	ENEMY_ONLY = 4,
	_MAX = 5 UMETA(Hidden),
	ETresDamageLeaveOneType_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresDamageCalcType : uint8
{
	NORMAL = 0,
	RATE_MAXHP = 1,
	RATE_HP = 2,
	NO_OXYGEN = 3,
	_MAX = 4 UMETA(Hidden),
	ETresDamageCalcType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresMapJumpFadeKind
{
	MAPJUMP_FADE_KIND_NONE = 0,
	MAPJUMP_FADE_KIND_FADEOUT = 1,
	MAPJUMP_FADE_KIND_WHITEOUT = 2,
	MAPJUMP_FADE_KIND_WIPEOUT = 3,
	MAPJUMP_FADE_KIND_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresWorldAreaCode
{
	TRES_WAID_AREA_00 = 0,
	TRES_WAID_AREA_01 = 1,
	TRES_WAID_AREA_02 = 2,
	TRES_WAID_AREA_03 = 3,
	TRES_WAID_AREA_04 = 4,
	TRES_WAID_AREA_05 = 5,
	TRES_WAID_AREA_06 = 6,
	TRES_WAID_AREA_07 = 7,
	TRES_WAID_AREA_08 = 8,
	TRES_WAID_AREA_09 = 9,
	TRES_WAID_AREA = 10,
	TRES_WAID_AREA01 = 11,
	TRES_WAID_AREA02 = 12,
	TRES_WAID_AREA03 = 13,
	TRES_WAID_AREA04 = 14,
	TRES_WAID_AREA05 = 15,
	TRES_WAID_AREA_MAX = 16 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresWorldCode
{
	TRES_WCID_EX = 0,
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
	TRES_WCID_ZZ = 31,
	TRES_WCID_MAX = 32 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGameOverMenuType : uint8
{
	NORMAL = 0,
	BOSSBATTLE = 1,
	MISSION_FAILED = 2,
	ETresGameOverMenuType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGameMiniGameType : uint8
{
	NORMAL = 0,
	TS_GIGAS_BATTLE = 1,
	TS_GIGAS_GAME = 2,
	RA_FESTIVAL_DANCE = 3,
	FZ_SNOWCURLING = 4,
	BX_FLASHTRACER = 5,
	BX_DARKBAYMAX_RAIL = 6,
	BX_DARKBAYMAX_NEAR = 7,
	CA_BP_TUTORIAL = 8,
	CA_BOARD_ENEMYSHIP = 9,
	CA_LUXORD_COMPE = 10,
	CA_FD_MAELSTROM = 11,
	HE_PUDDING = 12,
	TS_PUDDING = 13,
	RA_PUDDING = 14,
	MI_PUDDING = 15,
	FZ_PUDDING = 16,
	BX_PUDDING = 17,
	CA_PUDDING = 18,
	ETresGameMiniGameType_MAX = 19 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresGameOverKind : uint8
{
	GAMEOVER_KIND_NORMAL = 0,
	GAMEOVER_KIND_MISSION_FAILED = 1,
	GAMEOVER_KIND_GUMISHIP = 2,
	GAMEOVER_KIND_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresPlayerAbilityGrowthType : uint8
{
	TYPE_A = 0,
	TYPE_B = 1,
	TYPE_C = 2,
	_MAX = 3 UMETA(Hidden),
	ETresPlayerAbilityGrowthType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresPlayerGrowthType : uint8
{
	POWER = 0,
	MAGIC = 1,
	DEFENSE = 2,
	_MAX = 3 UMETA(Hidden),
	ETresPlayerGrowthType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ETresGameLevelID
{
	TRES_GAME_LVID_BEGINNER = 0,
	TRES_GAME_LVID_STANDARD = 1,
	TRES_GAME_LVID_PROUD = 2,
	TRES_GAME_LVID_CRITICAL = 3,
	TRES_GAME_LVID_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIMainCommandTitleKind : uint8
{
	None = 0,
	Logo = 1,
	Button = 2,
	ShootLock = 3,
	Operation = 4,
	ETresUIMainCommandTitleKind_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUICheatCategory : uint8
{
	None = 0,
	Battle = 1,
	Support = 2,
	Max = 3 UMETA(Hidden),
	ETresUICheatCategory_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUISlideShowDataType : uint8
{
	Simple = 0,
	Gorgeous = 1,
	Max = 2 UMETA(Hidden),
	ETresUISlideShowDataType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EActionCommandSearchMethod : uint8
{
	Latest = 0,
	Oldest = 1,
	EActionCommandSearchMethod_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EHudCommandActionCommandType : uint8
{
	ACTION_COMMAND_TYPE_HATENA = 0,
	ACTION_COMMAND_TYPE_WEP = 1,
	ACTION_COMMAND_TYPE_ATF = 2,
	ACTION_COMMAND_TYPE_DMAGIC = 3,
	ACTION_COMMAND_TYPE_FRIEND = 4,
	ACTION_COMMAND_TYPE_LINK = 5,
	ACTION_COMMAND_TYPE_MAX = 6 UMETA(Hidden),
	ACTION_COMMAND_TYPE_STYLE_POINT_GAUGE = 7
};

UENUM(BlueprintType)
enum class ETresCockpitActionSelectCategory : uint8
{
	TCASC_NONE = 0,
	TCASC_COMMAND = 1,
	TCASC_MISSION = 2,
	TCASC_STYLE_POINT_GAUGE = 3,
	TCASC_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresCockpitCmdCategory : uint8
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
enum class ETresUIMessageBGColor : uint8
{
	MESSAGE_BG_COLOR_BLACK = 0,
	MESSAGE_BG_COLOR_RED = 1,
	MESSAGE_BG_COLOR_BLUE = 2,
	MESSAGE_BG_COLOR_DEBUG = 3,
	MESSAGE_BG_COLOR_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIMessageTitleType : uint8
{
	MESSAGE_TITLE_TYPE_NONE = 0,
	MESSAGE_TITLE_TYPE_INFORMATION = 1,
	MESSAGE_TITLE_TYPE_QUESTION = 2,
	MESSAGE_TITLE_TYPE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUICommonAction : uint8
{
	TUCA_Open = 0,
	TUCA_Close = 1,
	TUCA_Decide = 2,
	TUCA_DecideClose = 3,
	TUCA_Open2 = 4,
	TUCA_DecideClose2 = 5,
	TUCA_MAX = 6 UMETA(Hidden)
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
	TUPBT_MAX = 38 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIFaceUniqueID : uint8
{
	TRES_FACE_UID_UNKNOWN = 0,
	TRES_FACE_UID_LEON = 1,
	TRES_FACE_UID_AERITH = 2,
	TRES_FACE_UID_YUFFIE = 3,
	TRES_FACE_UID_CID = 4,
	TRES_FACE_UID_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIDataVersion : uint8
{
	None = 0,
	DLC = 1,
	Max = 2 UMETA(Hidden),
	ETresUIDataVersion_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIDialogColor : uint8
{
	World = 0,
	DH = 1,
	ETresUIDialogColor_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIGameDataInstallMessageType : uint8
{
	Block = 0,
	Wait = 1,
	ETresUIGameDataInstallMessageType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIDictionaryEnemyCategory : uint8
{
	Heartless = 0,
	Nobody = 1,
	Unversed = 2,
	Other = 3,
	Max = 4 UMETA(Hidden),
	ETresUIDictionaryEnemyCategory_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIValueCompareType : uint8
{
	GreaterEq = 0,
	Grater = 1,
	LessEq = 2,
	Less = 3,
	Equal = 4,
	NotEqual = 5,
	None = 6,
	ETresUIValueCompareType_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUICharaID : uint8
{
	SORA = 0 UMETA(DisplayName = "Sora"),
	RIKU = 1 UMETA(DisplayName = "Riku"),
	KAIRI = 2 UMETA(DisplayName = "Kairi"),
	MICKEY = 3 UMETA(DisplayName = "Mickey"),
	DONALD = 4 UMETA(DisplayName = "Donald"),
	GOOFY = 5 UMETA(DisplayName = "Goofy"),
	TERRA = 6 UMETA(DisplayName = "Terra"),
	VENTUS = 7 UMETA(DisplayName = "Ventus"),
	AQUA = 8 UMETA(DisplayName = "Aqua"),
	ROXAS = 9 UMETA(DisplayName = "Roxas"),
	LEA = 10 UMETA(DisplayName = "Lea"),
	XION = 11 UMETA(DisplayName = "Xion"),
	JACK_SPARROW = 12 UMETA(DisplayName = "Jack Sparrow"),
	WOODY = 13 UMETA(DisplayName = "Woody"),
	BUZZ = 14 UMETA(DisplayName = "Buzz"),
	HERCULES = 15 UMETA(DisplayName = "Hercules"),
	RAPUNZEL = 16 UMETA(DisplayName = "Rapunzel"),
	FLYNN = 17 UMETA(DisplayName = "Flynn"),
	SULLEY = 18 UMETA(DisplayName = "Sulley"),
	MIKE = 19 UMETA(DisplayName = "Mike"),
	BOO = 20 UMETA(DisplayName = "Boo"),
	MARSHMALLOW = 21 UMETA(DisplayName = "Marshmallow"),
	BAYMAX = 22 UMETA(DisplayName = "Baymax"),
	IENZO = 23 UMETA(DisplayName = "Ienzo"),
	PENCE = 24 UMETA(DisplayName = "Pence"),
	UNKNOWN = 25 UMETA(DisplayName = "Unknown"),
	ETresUICharaID_MAX = 26 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUILSIScoreType : uint8
{
	Score = 0,
	Stage = 1,
	Win = 2,
	BarnyardSports = 3,
	TheMusicalFarmer = 4,
	HowToPlayGolf = 5,
	HowToPlayBaseball = 6,
	ETresUILSIScoreType_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIShopType : uint8
{
	Normal = 0,
	Gummi_Huey = 1,
	Gummi_Dewey = 2,
	Gummi_Louie = 3,
	Max = 4 UMETA(Hidden),
	ETresUIShopType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIActorAnimType : uint8
{
	None = 0,
	Idle = 1,
	IdleBreak1 = 2,
	IdleBreak2 = 3,
	Max = 4 UMETA(Hidden),
	ETresUIActorAnimType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIGradeTextValue : uint8
{
	TOOFAST = 0,
	GOOD = 1,
	EXCELLENT = 2,
	TOOSLOW = 3,
	SUCCESSFUL = 4,
	Max = 5,
	None = 6,
	ETresUIGradeTextValue_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUICinematicCockpitID : uint8
{
	None = 0,
	HudOlaf = 1,
	HudLeft = 2,
	ETresUICinematicCockpitID_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIHudPuddingCountDown : uint8
{
	Three = 0,
	Two = 1,
	One = 2,
	Start = 3,
	Finish = 4,
	MAX = 5 UMETA(Hidden),
	ETresUIHudPuddingCountDown_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIHudBaymaxHero : uint8
{
	Lemon = 0,
	Tomago = 1,
	Wasabi = 2,
	Fred = 3,
	MAX = 4 UMETA(Hidden),
	ETresUIHudBaymaxHero_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIHudBaymaxResult : uint8
{
	RankA = 0 UMETA(DisplayName = "Rank A"),
	RankB = 1 UMETA(DisplayName = "Rank B"),
	RankC = 2 UMETA(DisplayName = "Rank C"),
	RankD = 3 UMETA(DisplayName = "Rank D"),
	MAX = 4 UMETA(Hidden),
	ETresUIHudBaymaxResult_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIHudBaymaxCountDown : uint8
{
	Ready = 0,
	Three = 1,
	Two = 2,
	One = 3,
	Go = 4,
	Finish = 5,
	Finish_End = 6,
	MAX = 7 UMETA(Hidden),
	ETresUIHudBaymaxCountDown_MAX = 8 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIHudBaymaxKind : uint8
{
	None = 0,
	FlashTracer = 1,
	FlashTracer_MiniGame = 2,
	HeroRescue = 3,
	DarkCube = 4,
	MAX = 5 UMETA(Hidden),
	ETresUIHudBaymaxKind_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUINauticalChartPoint : uint8
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
	MAX = 13 UMETA(Hidden),
	ETresUINauticalChartPoint_MAX = 14 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIHudBlackPearlAlert : uint8
{
	Normal = 0,
	Blink1 = 1,
	Blink2 = 2,
	MAX = 3 UMETA(Hidden),
	ETresUIHudBlackPearlAlert_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIHudBlackPearlMarker : uint8
{
	Player = 0,
	BlackPearl = 1,
	MAX = 2 UMETA(Hidden),
	ETresUIHudBlackPearlMarker_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIHudSpecialShipMarker : uint8
{
	Player = 0,
	Enemy = 1,
	MAX = 2 UMETA(Hidden),
	ETresUIHudSpecialShipMarker_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIHudSpecialShip : uint8
{
	Normal = 0,
	Marker = 1,
	MAX = 2 UMETA(Hidden),
	ETresUIHudSpecialShip_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIHudScoreMode : uint8
{
	None = 0,
	Default = 1,
	Pudding = 2,
	MAX = 3 UMETA(Hidden),
	ETresUIHudScoreMode_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIHudCommonIcon : uint8
{
	Attraction = 0,
	Ralph = 1,
	Ariel = 2,
	RaDance = 3,
	SnowSlide = 4,
	Pudding_Cherry = 5,
	Pudding_Strawberry = 6,
	Pudding_Orange = 7,
	Pudding_Banana = 8,
	Pudding_Grape = 9,
	Pudding_Melon = 10,
	Pudding_Watermelon = 11,
	MAX = 12 UMETA(Hidden),
	ETresUIHudCommonIcon_MAX = 13 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIHudCommonKind : uint8
{
	None = 0,
	Score = 1,
	Score_Chain = 2,
	Score5 = 3,
	Score5_Chain = 4,
	Score6 = 5,
	Score6_Chain = 6,
	Height = 7,
	HitCount = 8,
	MAX = 9 UMETA(Hidden),
	ETresUIHudCommonKind_MAX = 10 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIHudCommandExKind : uint8
{
	None = 0,
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
	MAX = 21 UMETA(Hidden),
	ETresUIHudCommandExKind_MAX = 22 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUISnowSlideRank : uint8
{
	A = 0,
	B = 1,
	C = 2,
	D = 3,
	Max = 4 UMETA(Hidden),
	ETresUISnowSlideRank_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUISnowSlideCountDownType : uint8
{
	Three = 0,
	Two = 1,
	One = 2,
	Start = 3,
	Finish = 4,
	Max = 5 UMETA(Hidden),
	ETresUISnowSlideCountDownType_MAX = 6 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIOlafPartsType : uint8
{
	Head = 0,
	Body = 1,
	Leg = 2,
	Max = 3 UMETA(Hidden),
	ETresUIOlafPartsType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIGigasGameResultRank : uint8
{
	A = 0,
	B = 1,
	C = 2,
	D = 3,
	Max = 4 UMETA(Hidden),
	ETresUIGigasGameResultRank_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIGigasGameStartSignalType : uint8
{
	Ready = 0,
	Start = 1,
	ETresUIGigasGameStartSignalType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIGigasGameGimmickType : uint8
{
	SparkTrap = 0,
	HeatBlast = 1,
	CrystalSmash = 2,
	ETresUIGigasGameGimmickType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUITimerType : uint8
{
	CountDown = 0,
	CountUp = 1,
	ETresUITimerType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUITimerColor : uint8
{
	Common = 0,
	Red1 = 1,
	Red2 = 2,
	ETresUITimerColor_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUISubtitleUsage : uint8
{
	Cutscene = 0,
	FieldVoice = 1,
	Talk = 2,
	ETresUISubtitleUsage_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIMissionGageIconType : uint8
{
	ComicalBattle1 = 0,
	ComicalBattle2 = 1,
	ComicalBattle3 = 2,
	Max = 3 UMETA(Hidden),
	ETresUIMissionGageIconType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUILoadingScreenType : uint8
{
	NORMAL = 0,
	EXTRA = 1,
	Max = 2,
	ETresUILoadingScreenType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUILoadingScreenBGColor : uint8
{
	BLACK = 0,
	WHITE = 1,
	Max = 2 UMETA(Hidden),
	ETresUILoadingScreenBGColor_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGameOverHintType : uint8
{
	CommonHint = 0,
	SpecialHint = 1,
	TopPriority = 2,
	FixedHit = 3,
	EGameOverHintType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIFullscreenVideoCallbackType : uint8
{
	PlayTimeOut = 0,
	PlayFinish = 1,
	Prepared = 2,
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
enum class ETresUICutsceneTextHideMethod : uint8
{
	None = 0,
	Fade = 1,
	ETresUICutsceneTextHideMethod_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUICutsceneTextShowMethod : uint8
{
	None = 0,
	Fade = 1,
	LineFade = 2,
	ETresUICutsceneTextShowMethod_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUITextAlignV : uint8
{
	Top = 0,
	Center = 1,
	Bottom = 2,
	ETresUITextAlignV_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUITextAlignH : uint8
{
	Left = 0 UMETA(DisplayName = "Left"),
	Center = 1 UMETA(DisplayName = "Center"),
	Right = 2 UMETA(DisplayName = "Right"),
	ETresUITextAlignH_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIMissionGageColorType : uint8
{
	Yellow = 0 UMETA(DisplayName = "Yellow"),
	Red = 1 UMETA(DisplayName = "Red"),
	Green = 2 UMETA(DisplayName = "Green"),
	Max = 3 UMETA(Hidden),
	ETresUIMissionGageColorType_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresUIMapMarkerType : uint8
{
	SavePoint = 0 UMETA(DisplayName = "Save Point"),
	Shop = 1 UMETA(DisplayName = "Shop"),
	MapLine = 2 UMETA(DisplayName = "Map Line"),
	EnemyGigas = 3 UMETA(DisplayName = "Enemy Gigas"),
	EnemyGigasAce = 4 UMETA(DisplayName = "Enemy Gigas Ace"),
	Gigas = 5 UMETA(DisplayName = "Gigas"),
	EnemySea = 6 UMETA(DisplayName = "Enemy Sea"),
	EnemySeaLuxord = 7 UMETA(DisplayName = "Enemy Sea Luxord"),
	Max = 8 UMETA(Hidden),
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
	TYPE_MAX = 32 UMETA(Hidden),
	ETresVictoryBonusKind_MAX = 33 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleStopElapsedTimeTiming : uint8
{
	WhenShoot = 0,
	PlayerUnitsMoved = 1,
	WinniePuzzleStopElapsedTimeTiming_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleSlopeActionRemoveFindingTarget : uint8
{
	DontRemove = 0,
	SlopeDirection = 1,
	Around = 2,
	All = 3,
	WinniePuzzleSlopeActionRemoveFindingTarget_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleUnitAppearColumnDependencyDirection : uint8
{
	FrontToBack = 0,
	BackToFront = 1,
	WinniePuzzleUnitAppearColumnDependencyDirection_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleUnitAppearDelayType : uint8
{
	None = 0,
	ColumnDependency = 1,
	Random = 2,
	WinniePuzzleUnitAppearDelayType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleVoicePriority : uint8
{
	Low = 0,
	Medium = 1,
	High = 2,
	WinniePuzzleVoicePriority_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleVoice : uint8
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
	None = 30,
	WinniePuzzleVoice_MAX = 31 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleSoundEffect : uint8
{
	Countdown = 0,
	GameStart = 1,
	GameClear = 2,
	GameOver = 3,
	Match1st = 4,
	Match2nd = 5,
	Match3rd = 6,
	Aiming = 7,
	SwitchUnit = 8,
	FillBuckets = 9,
	DecreaseBucket = 10,
	PowerGauge = 11,
	UnitVibration = 12,
	AdditionalBonus = 13,
	ResultScore = 14,
	ResultNewRecord = 15,
	ResultEvalution = 16,
	WinniePuzzleSoundEffect_MAX = 17 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleTotalScoreEvalution : uint8
{
	None = 0,
	LowerGood = 1,
	Good = 2,
	Cool = 3,
	Fantastic = 4,
	WinniePuzzleTotalScoreEvalution_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleRuleGameOverCondition : uint8
{
	None = 0,
	Increase = 1,
	TimeLimit = 2,
	WinniePuzzleRuleGameOverCondition_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleRuleGameClearCondition : uint8
{
	None = 0,
	EarnUnitsNum = 1,
	Decrease = 2,
	TimeLimit = 3,
	EarnHoneypotsNum = 4,
	WinniePuzzleRuleGameClearCondition_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzlePowerGaugeLevel : uint8
{
	Level1 = 0,
	Level2 = 1,
	Level3 = 2,
	Level4 = 3,
	Level5 = 4,
	Level6 = 5,
	Level7 = 6,
	Level8 = 7,
	Level9 = 8,
	Level10 = 9,
	Level11 = 10,
	Level12 = 11,
	Num = 12,
	WinniePuzzlePowerGaugeLevel_MAX = 13 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleWallVolumeType : uint8
{
	Bound = 0,
	Snap = 1,
	None = 2,
	WinniePuzzleWallVolumeType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleBucketFillMoveType : uint8
{
	InOrder = 0,
	Random = 1,
	WinniePuzzleBucketFillMoveType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleBucketType : uint8
{
	Normal = 0,
	Special = 1,
	WinniePuzzleBucketType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleUnitFillType : uint8
{
	RollOver = 0,
	Growing = 1,
	WinniePuzzleUnitFillType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleUnitAnimationType : uint8
{
	Idle = 0,
	Roll = 1,
	RollEnd = 2,
	Grow = 3,
	GrowWait = 4,
	WinniePuzzleUnitAnimationType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleUnitState : uint8
{
	Unit_State_Idle = 0,
	Unit_State_Roll = 1,
	Unit_State_Roll_End = 2,
	Unit_State_Grow = 3,
	Unit_State_Pool = 4,
	Unit_State_Particle_Destroyed = 5,
	Unit_State_None = 6,
	Unit_State_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleUnitType : uint8
{
	Carrot = 0,
	Eggplant = 1,
	Garlic = 2,
	Pumpkin = 3,
	Tomato = 4,
	Zucchini = 5,
	VegetableBoss = 6,
	VegetableBossCollision = 7,
	Apple = 8,
	Blackberry = 9,
	GreenApple = 10,
	Lemon = 11,
	Orange = 12,
	Pear = 13,
	Anemone = 14,
	Daffodil = 15,
	Dahlia = 16,
	Gerbera = 17,
	OrangePixie = 18,
	RoofFlower = 19,
	Honeypot = 20,
	None = 21,
	WinniePuzzleUnitType_MAX = 22 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleBoundStartMoveDirection : uint8
{
	UpLeft = 0 UMETA(DisplayName = "Up Left"),
	UpRight = 1 UMETA(DisplayName = "Up Right"),
	WinniePuzzleBoundStartMoveDirection_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleCharacterBonusGaugeType : uint8
{
	Single = 0 UMETA(DisplayName = "Single"),
	Dual = 1 UMETA(DisplayName = "Dual"),
	None = 2 UMETA(DisplayName = "None"),
	WinniePuzzleCharacterBonusGaugeType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleCharacterBonusType : uint8
{
	Tigger_Bound = 0,
	Lumpy_Decrease = 1,
	Gopher_Bomb = 2,
	WinniePuzzleCharacterBonusType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinnieCharacterState : uint8
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
	State_None = 36,
	WinnieCharacterState_MAX = 37 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinnieCharacterAnimationType : uint8
{
	Idle = 0,
	Walk = 1,
	JumpStart = 2,
	JumpLoop = 3,
	RabbitSeePlayer = 4,
	RabbitSeeUnit = 5,
	RabbitHappy = 6,
	RabbitHappyLanding = 7,
	RabbitWell = 8,
	RabbitHarvest = 9,
	RabbitHarvestEnd = 10,
	RabbitLanding = 11,
	RabbitFailureStart = 12,
	RabbitFailureLoop = 13,
	SuperJumpStart = 14,
	SuperJumpLoop = 15,
	SuperJumpBoundL = 16,
	SuperJumpBoundR = 17,
	TiggerLanding = 18,
	TiggerJumpStart = 19,
	LumpyIdle = 20,
	LumpyRunL = 21,
	LumpyRunR = 22,
	LumpyRunLoopL = 23,
	LumpyRunLoopR = 24,
	LumpyEntry = 25,
	LumpyStop = 26,
	LumpyRunStart = 27,
	LumpyRunLoop = 28,
	GopherEntry = 29,
	GopherOut = 30,
	GopherWait = 31,
	GopherLookAround = 32,
	GopherDive = 33,
	GopherJump = 34,
	PoohEntry = 35,
	PoohIdle = 36,
	PoohHungry = 37,
	PoohHappy = 38,
	PoohHappyOnce = 39,
	PoohHappyEnd = 40,
	PoohEatHoneyStart = 41,
	PoohEatingHoney = 42,
	PoohEatHoneyEnd = 43,
	PoohDownStart = 44,
	PoohDownLoop = 45,
	WinnieCharacterAnimationType_MAX = 46 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinnieWalkingControlType : uint8
{
	WalkingWithStick = 0 UMETA(DisplayName = "Walking with Stick"),
	WalkingWithDPad = 1 UMETA(DisplayName = "Walking with DPad"),
	WinnieWalkingControlType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzlePlayerState : uint8
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
	Player_State_MAX = 13 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleResult : uint8
{
	PuzzleResultSuccess = 0,
	PuzzleResultFailure = 1,
	PuzzleResultFinish = 2,
	PuzzleResultNone = 3,
	WinniePuzzleResult_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleState : uint8
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
	WinniePuzzleState_MAX = 21 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleManagerState : uint8
{
	PuzzleManagerMain = 0,
	PuzzleManagerRetry = 1,
	PuzzleManagerFinalize = 2,
	WinniePuzzleManagerState_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePlayerSituation : uint8
{
	None = 0,
	Normal = 1,
	Weapon = 2,
	Battle = 3,
	Fixed = 4,
	WinniePlayerSituation_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePlayerAnimationType : uint8
{
	IdleN = 0,
	IdleB = 1,
	IdleBreakN = 2,
	IdleBreakW = 3,
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
	Turn = 25,
	ShotPrepare = 26,
	Shot = 27,
	Strike = 28,
	RollLoop = 29,
	RollEnd = 30,
	Greeting = 31,
	HarvestStart = 32,
	HarvestLoop = 33,
	HarvestEnd = 34,
	Entry = 35,
	SuccessStart = 36,
	SuccessLoop = 37,
	FailureStart = 38,
	FailureLoop = 39,
	WinniePlayerAnimationType_MAX = 40 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleVagetableUnitRoot : uint8
{
	UnitRootNorth = 0,
	UnitRootSouth = 1,
	UnitRootWest = 2,
	UnitRootEast = 3,
	WinniePuzzleVagetableUnitRoot_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleVagetableSlopeDirection : uint8
{
	SlopeNorth = 0,
	SlopeSouth = 1,
	SlopeWest = 2,
	SlopeEast = 3,
	WinniePuzzleVagetableSlopeDirection_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePlayerStayDirection : uint8
{
	StayNorth = 0,
	StaySouth = 1,
	StayWest = 2,
	StayEast = 3,
	WinniePlayerStayDirection_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleShootType : uint8
{
	Pressed = 0 UMETA(DisplayName = "Pressed"),
	Released = 1 UMETA(DisplayName = "Released"),
	WinniePuzzleShootType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EWinniePuzzleType : uint8
{
	Vegetable = 0 UMETA(DisplayName = "Vegetable"),
	Fruit = 1 UMETA(DisplayName = "Fruit"),
	Flower = 2 UMETA(DisplayName = "Flower"),
	Num = 3 UMETA(DisplayName = "Num"),
	None = 4 UMETA(DisplayName = "None"),
	WinniePuzzleType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresWoldMapObjID : uint8
{
	WM_OBJ_ID00 = 0,
	WM_OBJ_SPACE_CENTER = 1 UMETA(DisplayName = "Space Center"),
	WM_OBJ_BG = 2 UMETA(DisplayName = "BG"),
	WM_OBJ_WORLD_SYMBOL = 3 UMETA(DisplayName = "World Symbol"),
	WM_OBJ_ID_TRAVEL = 4 UMETA(DisplayName = "ID Travel"),
	WM_OBJ_ID_TREASURE = 5 UMETA(DisplayName = "ID Treasure"),
	WM_OBJ_ID_TERRITORY = 6 UMETA(DisplayName = "ID Territory"),
	WM_OBJ_WORLD_SYMBOL_DUMMY = 7 UMETA(DisplayName = "World Symbol Dummy"),
	WM_OBJ_WORLD_SYMBOL_PREVIEW = 8 UMETA(DisplayName = "World Symbol Preview"),
	WM_OBJ_ID_JUMP_POINT = 9 UMETA(DisplayName = "ID Jump Point"),
	WM_OBJ_KG_MIST = 10 UMETA(DisplayName = "KG Mist"),
	WM_OBJ_TYPE_MAX = 11 UMETA(Hidden),
	WM_OBJ_MAX = 12 UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ETresWoldPlaceID : uint8
{
	WM_PLACE_ID00 = 0,
	WM_PLACE_ID01 = 1,
	WM_PLACE_ID02 = 2,
	WM_PLACE_ID03 = 3,
	WM_PLACE_ID04 = 4,
	WM_PLACE_MAX = 5 UMETA(Hidden)
};

//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------
USTRUCT(BlueprintType)
struct FTresFNpcAIAttackDefInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "FTresFNpcAIAttackDefInfo")
	FName m_AttackParamKey;
	
	UPROPERTY(EditDefaultsOnly, Category = "FTresFNpcAIAttackDefInfo")
	ETresFNpcAIAttackDefType m_AttackDefType;
	
	UPROPERTY(EditDefaultsOnly, Category = "FTresFNpcAIAttackDefInfo")
	ETresAbilityKind m_AttackAbilityKind;
};

USTRUCT(BlueprintType)
struct FAITestTractionParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FAITestTractionParam")
	bool m_bTractionXY;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FAITestTractionParam")
	bool m_bTractionZUp;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FAITestTractionParam")
	bool m_bTractionZDown;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FAITestTractionParam")
	bool m_bTractionNear;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FAITestTractionParam")
	bool m_bTractionFar;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FAITestTractionParam")
	float m_TractionDisMin;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FAITestTractionParam")
	float m_TractionDisMax;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FAITestTractionParam")
	float m_TractionMaxSpeed;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FAITestTractionParam")
	float m_TractionAcc;
};

USTRUCT(BlueprintType)
struct FTresDamageInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	FName m_AttackDataIDName;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	TEnumAsByte<ETresCommandKind> m_CommandKind;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	TEnumAsByte<ETresShootFlowKind> m_ShootFlowKind;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	TEnumAsByte<ETresDamageKind> m_DamageKind;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	ETresDamageAttribute m_DamageAttribute;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	float m_AttackSrcPower;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	float m_DamagePowerScale;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	float m_DamageParabolaAngle;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	float m_DamageMoveLength;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	float m_DamageBrakeParam;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	float m_DamageEffectTime;
	
	UPROPERTY(EditDefaultsOnly, Category = "FTresDamageInfo")
	ETresAtkHitKnockbackType m_KnockbackType;
	
	UPROPERTY(EditDefaultsOnly, Category = "FTresDamageInfo")
	FVector m_KnockbackDir;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	ETresBadStatusType m_BadStatusKind;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	float m_BadStatusEffectTime;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	float m_BadStatusEffectParam;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	int m_ReactionPower;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	int m_ArmorAttackPower;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	int m_FormPoint;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	bool m_bIsMagicAttack;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	bool m_bIsFinishAttack;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	bool m_bIsKillerAttack;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	bool m_bIsIgnoreGuard;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	bool m_bIsRapidFireAttack;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	bool m_bIsCriticalHit;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	bool m_bIsArmorDamage;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	bool m_bIsAerialAttack;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	bool m_bIsAttractionDamage;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	bool m_bIsCounterAttack;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	bool m_bIsJustGuardAttack;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	bool m_bIsEnableWeakGuardAttack;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	bool m_bIsEnableFullMpBurst;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	bool m_bIsEnableMagicDraw;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	bool m_bIsEnableNoReactBodyCorrection;
	
	UPROPERTY(BlueprintReadOnly, Category = "FTresDamageInfo")
	ETresPhysDamageForceLevel m_PhysForceLv;
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
struct FRevengeAttacks
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "FRevengeAttacks")
	class UClass* RevengeAttackDefinition;
	
	UPROPERTY(EditDefaultsOnly, Category = "FRevengeAttacks")
	bool bAir;
};

USTRUCT(BlueprintType)
struct FTresEnemyRetryVoiceData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "FTresEnemyRetryVoiceData")
	FName FaceAnimName;
	
	UPROPERTY(EditDefaultsOnly, Category = "FTresEnemyRetryVoiceData")
	class USoundBase* VOICE;
};

USTRUCT(BlueprintType)
struct FTresProjectileSpawnData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "FTresProjectileSpawnData")
	class UClass* m_GenerateClass;
	
	UPROPERTY(EditDefaultsOnly, Category = "FTresProjectileSpawnData")
	ETresProjectileRespawnType m_CheckType;
	
	UPROPERTY(EditDefaultsOnly, Category = "FTresProjectileSpawnData")
	ETresProjectileRespawnRotType m_RotInheritType;
	
	UPROPERTY(EditDefaultsOnly, Category = "FTresProjectileSpawnData")
	float m_CheckRange;
	
	UPROPERTY(EditDefaultsOnly, Category = "FTresProjectileSpawnData")
	bool m_bOnGroundOnly;
	
	UPROPERTY(EditDefaultsOnly, Category = "FTresProjectileSpawnData")
	bool m_bBlockByWaterSurface;
	
	UPROPERTY(EditDefaultsOnly, Category = "FTresProjectileSpawnData")
	bool m_bTakeOverAtkTarget;
	
	UPROPERTY(EditDefaultsOnly, Category = "FTresProjectileSpawnData")
	bool m_bTakeOverAtkCollHitList;
	
	UPROPERTY(EditDefaultsOnly, Category = "FTresProjectileSpawnData")
	bool m_bTakeOverAtkCollFinishFlag;
	
	UPROPERTY(EditDefaultsOnly, Category = "FTresProjectileSpawnData")
	bool m_bIgnoreSendShutdownMsgToOwner;
	
	UPROPERTY(EditDefaultsOnly, Category = "FTresProjectileSpawnData")
	bool m_bTakeOverEffectColorParam;
	
	UPROPERTY(EditDefaultsOnly, Category = "FTresProjectileSpawnData")
	bool m_bTakeOverEffectAlphaParam;
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
struct FTresNavLinkSet_Common
{
	GENERATED_BODY()
public:
	class ANavLinkProxy* NavLinkProxy;
	TEnumAsByte<ETresNavLinkSegment_Common> NavLinkSegment;
};

USTRUCT(BlueprintType)
struct FTres_LocomotionDefinition_SnowChaseParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_LocomotionDefinition_SnowChaseParam")
	float m_DashDistance;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_LocomotionDefinition_SnowChaseParam")
	float m_DashMaxSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_LocomotionDefinition_SnowChaseParam")
	float m_DashAcceleration;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_LocomotionDefinition_SnowChaseParam")
	float m_SlowTargetDistance;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_LocomotionDefinition_SnowChaseParam")
	float m_SlowMaxSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_LocomotionDefinition_SnowChaseParam")
	float m_SuperSlowTargetDistance;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_LocomotionDefinition_SnowChaseParam")
	float m_SuperSlowMaxSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_LocomotionDefinition_SnowChaseParam")
	float m_SlowAcceleration;
};

USTRUCT(BlueprintType)
struct FTres_InterfaceDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_InterfaceDecorator")
	class UClass* m_pActor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_InterfaceDecorator")
	float m_valueA;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_InterfaceDecorator")
	float m_valueB;
};

USTRUCT(BlueprintType)
struct FTres_EQS_ParamName
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_EQS_ParamName")
	EQS_PARAM_NAME_Enum m_Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_EQS_ParamName")
	float m_Value;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_EQS_ParamName")
	float m_RandomValue;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_EQS_ParamName")
	EQS_PARAM_VALUE_Enum m_EnumValue;
};

USTRUCT(BlueprintType)
struct FTresSequentialExecDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSequentialExecDataTable")
	FName m_OutlineComment;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSequentialExecDataTable")
	TArray<struct FTres_InterfaceDecorator> m_DecoratorArray;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSequentialExecDataTable")
	ESEQUENTIAL_EXEC_TASK_MODE m_taskMode;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSequentialExecDataTable")
	bool m_skipSequence;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSequentialExecDataTable")
	class UEnvQuery* m_QueryInstance;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSequentialExecDataTable")
	bool m_bQueryFirstRun;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSequentialExecDataTable")
	float m_TimeLimit;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSequentialExecDataTable")
	TEnumAsByte<EEnvQueryRunMode::Type> m_RunMode;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSequentialExecDataTable")
	float m_UpdateTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSequentialExecDataTable")
	float m_UpdateTimeRandomDeviation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSequentialExecDataTable")
	TArray<struct FTres_EQS_ParamName> m_ParamName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSequentialExecDataTable")
	class UClass* m_LocomotionDefinition;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSequentialExecDataTable")
	float m_AcceptanceRadius;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSequentialExecDataTable")
	float m_AvoidanceWeight;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSequentialExecDataTable")
	bool m_bPreciseArrival;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSequentialExecDataTable")
	bool m_bFastAbort;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSequentialExecDataTable")
	bool m_bFailOnDamageReaction;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSequentialExecDataTable")
	FString m_Memo;
};

USTRUCT(BlueprintType)
struct FTresE_dw405ChainActionParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ChainActionParam")
	class UClass* ActionDefinition;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ChainActionParam")
	int ActionIdx;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ChainActionParam")
	float MoveAngle;
};

USTRUCT(BlueprintType)
struct FTresE_dw405ChainActionParams
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ChainActionParams")
	TArray<struct FTresE_dw405ChainActionParam> Params;
};

USTRUCT(BlueprintType)
struct FStoleTrapWorkData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FStoleTrapWorkData")
	class UParticleSystemComponent* m_PointEffectComp;
};

USTRUCT(BlueprintType)
struct FTresSpawnHandParam_e_ex702
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSpawnHandParam_e_ex702")
	class UClass* ProjectileClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSpawnHandParam_e_ex702")
	int Num;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSpawnHandParam_e_ex702")
	float MinRadius;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSpawnHandParam_e_ex702")
	float MaxRadius;
};

USTRUCT(BlueprintType)
struct FTresNpcTractionParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresNpcTractionParam")
	bool m_bTractionXY;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresNpcTractionParam")
	bool m_bTractionZUp;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresNpcTractionParam")
	bool m_bTractionZDown;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresNpcTractionParam")
	bool m_bTractionNear;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresNpcTractionParam")
	bool m_bTractionFar;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresNpcTractionParam")
	float m_TractionDisMin;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresNpcTractionParam")
	float m_TractionDisMax;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresNpcTractionParam")
	float m_TractionMaxSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresNpcTractionParam")
	float m_TractionAcc;
};

USTRUCT(BlueprintType)
struct FTresE_dw405AvatarActionParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405AvatarActionParam")
	float AppearDelayTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405AvatarActionParam")
	float AppearOffsetAngle;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405AvatarActionParam")
	class UAnimSequenceBase* AnimData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405AvatarActionParam")
	class USoundBase* SoundData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405AvatarActionParam")
	float AppearDistance;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405AvatarActionParam")
	float AppearHeight;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405AvatarActionParam")
	bool bAnimPlayFallEnd;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405AvatarActionParam")
	float MoveSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405AvatarActionParam")
	bool bEnableVigilanceMove;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405AvatarActionParam")
	TArray<float> MoveAngles;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405AvatarActionParam")
	TEnumAsByte<ETresE_dw405VigilanceMoveVec> VigilanceMoveVec;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405AvatarActionParam")
	bool bEnableSettingDisappearTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405AvatarActionParam")
	float DisappearTime;
};

USTRUCT(BlueprintType)
struct FTresE_dw405RespawnParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405RespawnParam")
	bool bEnableRespawn;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405RespawnParam")
	float AppearMaxAngle;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405RespawnParam")
	struct FTresE_dw405AvatarActionParam ActionParam;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405RespawnParam")
	float DisappearRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405RespawnParam")
	float DisappearDelayTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405RespawnParam")
	float MoveHomingAngle;
};

USTRUCT(BlueprintType)
struct FTresE_dw405SoundData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405SoundData")
	class USoundBase* Sound;
};

USTRUCT(BlueprintType)
struct FTresE_dw405SoundInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405SoundInfo")
	TArray<struct FTresE_dw405SoundData> SoundDatas;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405SoundInfo")
	float PlaySoundReamingTimeAtLastSound;
};

USTRUCT(BlueprintType)
struct FTresE_dw405CounterAttackParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405CounterAttackParam")
	class UClass* AttackDefinitionClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405CounterAttackParam")
	int ActionIndex;
};

USTRUCT(BlueprintType)
struct FTresE_dw405ActionParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	FName Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	float AutoLockOnRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	bool bEnableInvincible;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	float GameLevelLimitTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	float LimitOverDisappearRandomTIme;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	bool bEnableAppear;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	float EndActionOffsetTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	class UAnimationAsset* StartAnimData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	class UAnimSequenceBase* AnimData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	class USoundBase* SoundData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	float AppearDistance;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	bool bEnableFixingAppearAngle;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	float FixingAppearAngle;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	float AppearMaxAngle;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	float AppearHeight;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	bool bAnimPlayFallEnd;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	float MoveSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	bool bEnableVigilanceMove;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	TArray<float> MoveAngles;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	float MoveHomingAngle;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	TEnumAsByte<ETresE_dw405VigilanceMoveVec> VigilanceMoveVec;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	bool bEnableSettingDisappearTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	float DisappearTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	bool bEnableSettingDisappearRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	float DisappearRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	float DisappearDelayTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	bool bEnableSettingAvatarDisappearRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	float AvatarDisappearRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	TArray<struct FTresE_dw405AvatarActionParam> AvatarAppearParam;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	float TurnToTargetAngle;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	float TurnToTargetHeight;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	float TurnToTargetDistance;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	struct FTresE_dw405RespawnParam RespawnParam;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	float SoundPlayStartTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	struct FTresE_dw405SoundInfo SoundInfo;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	TArray<struct FTresE_dw405CounterAttackParam> CounterAttackParam;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresE_dw405ActionParam")
	float CounterRate;
};

USTRUCT(BlueprintType)
struct FWolfSpawnInfo_e_ex731
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FWolfSpawnInfo_e_ex731")
	int m_NotifyParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FWolfSpawnInfo_e_ex731")
	FName m_BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FWolfSpawnInfo_e_ex731")
	FRotator m_SpawnRot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FWolfSpawnInfo_e_ex731")
	bool m_bSpawnOnBoneRot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FWolfSpawnInfo_e_ex731")
	float m_fAppearMoveVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FWolfSpawnInfo_e_ex731")
	float m_fAppearMoveDistance;
};

USTRUCT(BlueprintType)
struct FWolfSpawnInfo_e_ex734
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FWolfSpawnInfo_e_ex734")
	float m_fAppearMoveVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FWolfSpawnInfo_e_ex734")
	float m_fAppearRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FWolfSpawnInfo_e_ex734")
	float m_fAppearMoveGoalHeight_Min;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FWolfSpawnInfo_e_ex734")
	float m_fAppearMoveGoalHeight_Max;
};

USTRUCT(BlueprintType)
struct FActionCancelParam_e_ex043
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FActionCancelParam_e_ex043")
	int CancelChance_Phase1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FActionCancelParam_e_ex043")
	int CancelChance_Phase2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FActionCancelParam_e_ex043")
	int CancelChance_Phase3;
};

USTRUCT(BlueprintType)
struct FTresEnemyCardWallParam_e_ex356
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyCardWallParam_e_ex356")
	float RotationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyCardWallParam_e_ex356")
	float RotationRadius;

	float RotationStopTimeList[0x5];
};

USTRUCT(BlueprintType)
struct FTresBitGenerateParam_e_ex357
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBitGenerateParam_e_ex357")
	int Num;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBitGenerateParam_e_ex357")
	int MaxNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBitGenerateParam_e_ex357")
	int AddNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBitGenerateParam_e_ex357")
	TEnumAsByte<ETresEnemyBitGenerateLocation_e_ex357> AppearLocationType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBitGenerateParam_e_ex357")
	float AppearDistance;

	struct FFloatInterval AppearHeightRange;
};

USTRUCT(BlueprintType)
struct FTresBitMoveParam_e_ex357
{
	GENERATED_BODY()
public:
	struct FFloatInterval RadiusRange;
	struct FFloatInterval HeightRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBitMoveParam_e_ex357")
	float AppearEndTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBitMoveParam_e_ex357")
	float MoveStartIntervalTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBitMoveParam_e_ex357")
	float MoveSpeed;
};

USTRUCT(BlueprintType)
struct FTresBitAttackParam_e_ex357
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBitAttackParam_e_ex357")
	float AttackIntervalTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBitAttackParam_e_ex357")
	int DisableAttackShotNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBitAttackParam_e_ex357")
	float DisableAttackTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBitAttackParam_e_ex357")
	float AttackToAllAttackIntervalTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBitAttackParam_e_ex357")
	float AllAttackIntervalTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBitAttackParam_e_ex357")
	float AllAttackShotIntervalTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBitAttackParam_e_ex357")
	float AllAttackMoveStartDelayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBitAttackParam_e_ex357")
	float AllAttackMoveTime;

	UPROPERTY(EditDefaultsOnly, Category = "FTresBitAttackParam_e_ex357")
	struct FFloatInterval AllAttackTargetRadiusRange;

	UPROPERTY(EditDefaultsOnly, Category = "FTresBitAttackParam_e_ex357")
	struct FFloatInterval AllAttackTargetHeightRange;

	TRESGAME_API FTresBitAttackParam_e_ex357();
};

USTRUCT(BlueprintType)
struct FBX901_RailSlideProjectileInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "FBX901_RailSlideProjectileInfo")
	bool m_bRailSlide;
    
	UPROPERTY(EditDefaultsOnly, Category = "FBX901_RailSlideProjectileInfo")
	float m_fWaitTime;
    
	UPROPERTY(EditDefaultsOnly, Category = "FBX901_RailSlideProjectileInfo")
	float m_fVelocity;
    
	UPROPERTY(EditDefaultsOnly, Category = "FBX901_RailSlideProjectileInfo")
	bool m_bRelativeVelocityToOwner;
    
	UPROPERTY(EditDefaultsOnly, Category = "FBX901_RailSlideProjectileInfo")
	FVector m_vInitOffset;
    
	UPROPERTY(EditDefaultsOnly, Category = "FBX901_RailSlideProjectileInfo")
	bool m_bOwnerAsInitOffsetAxis;
    
	UPROPERTY(EditDefaultsOnly, Category = "FBX901_RailSlideProjectileInfo")
	bool m_bHoming;
    
	UPROPERTY(EditDefaultsOnly, Category = "FBX901_RailSlideProjectileInfo")
	FVector m_vHomingOffset;
    
	UPROPERTY(EditDefaultsOnly, Category = "FBX901_RailSlideProjectileInfo")
	bool m_bTargetAsHomingAxis;
    
	UPROPERTY(EditDefaultsOnly, Category = "FBX901_RailSlideProjectileInfo")
	float m_fMinHomingDistance;
    
	UPROPERTY(EditDefaultsOnly, Category = "FBX901_RailSlideProjectileInfo")
	float m_fHomingAccel;
    
	UPROPERTY(EditDefaultsOnly, Category = "FBX901_RailSlideProjectileInfo")
	float m_fMaxHomingVelocity;
    
	UPROPERTY(EditDefaultsOnly, Category = "FBX901_RailSlideProjectileInfo")
	float m_fMinHomingDistance_Reflect;
    
	UPROPERTY(EditDefaultsOnly, Category = "FBX901_RailSlideProjectileInfo")
	float m_fHomingAccel_Reflect;
    
	UPROPERTY(EditDefaultsOnly, Category = "FBX901_RailSlideProjectileInfo")
	float m_fMaxHomingVelocity_Reflect;
    
	UPROPERTY(EditDefaultsOnly, Category = "FBX901_RailSlideProjectileInfo")
	TArray<FName> m_ReflectAttackIDArray;
    
	UPROPERTY(AdvancedDisplay, EditDefaultsOnly, Category = "FBX901_RailSlideProjectileInfo")
	uint32 m_bBoolArray[10];
    
	TRESGAME_API FBX901_RailSlideProjectileInfo();
};

USTRUCT(BlueprintType)
struct FBX901_DarkCubeMineInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly)
	FVector m_vLocationOffset;
    
	UPROPERTY(EditDefaultsOnly)
	FRotator m_rRotationOffset;
    
	UPROPERTY(EditDefaultsOnly)
	bool m_bMoveOnFinish;
    
	TRESGAME_API FBX901_DarkCubeMineInfo();
};

USTRUCT(BlueprintType)
struct FBX901_DarkCubeMineProjInfo
{
	GENERATED_BODY()
public:
	UPROPERTY()
	bool m_bNormal;
    
	UPROPERTY(EditDefaultsOnly)
	FBX901_RailSlideProjectileInfo m_RailSlideProjInfo;
    
	UPROPERTY(EditDefaultsOnly)
	FBX901_DarkCubeMineInfo m_ProjInfo;
    
	UPROPERTY(EditDefaultsOnly)
	float m_fSpawnDelayTime;
    
	TRESGAME_API FBX901_DarkCubeMineProjInfo();
};

USTRUCT(BlueprintType)
struct FBX901_DarkCubeMineSpawnInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBX901_DarkCubeMineSpawnInfo")
	class UClass* m_Projectile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBX901_DarkCubeMineSpawnInfo")
	TArray<struct FBX901_DarkCubeMineProjInfo> m_ProjeInfoArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBX901_DarkCubeMineSpawnInfo")
	class UClass* m_JointActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBX901_DarkCubeMineSpawnInfo")
	FString m_JointInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBX901_DarkCubeMineSpawnInfo")
	int m_iMaxDestroyComboNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBX901_DarkCubeMineSpawnInfo")
	float m_fDestroyComboTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBX901_DarkCubeMineSpawnInfo")
	class ATresCharPawnBase* m_Owner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBX901_DarkCubeMineSpawnInfo")
	class AActor* m_Target;
};

USTRUCT(BlueprintType)
struct FBX901_DarkCubeMineGroupSpawnInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBX901_DarkCubeMineGroupSpawnInfo")
	struct FBX901_DarkCubeMineSpawnInfo m_ProjSpawnInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBX901_DarkCubeMineGroupSpawnInfo")
	float m_fWaitTimeAfterFinish;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBX901_DarkCubeMineGroupSpawnInfo")
	class ATresCharPawnBase* m_Owner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBX901_DarkCubeMineGroupSpawnInfo")
	class AActor* m_Target;
};

USTRUCT(BlueprintType)
struct FTresEnemyBigDealCardSpawnParam_e_ex356
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealCardSpawnParam_e_ex356")
	float CardRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealCardSpawnParam_e_ex356")
	float CardHeightDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealCardSpawnParam_e_ex356")
	int OneStepCardNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealCardSpawnParam_e_ex356")
	int StepNum;
};

USTRUCT(BlueprintType)
struct FTresEnemyBigDealMoveParam_e_ex356
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealMoveParam_e_ex356")
	float CardRevolveAcceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealMoveParam_e_ex356")
	float CardRevolveDeceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealMoveParam_e_ex356")
	float CardRotationAcceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealMoveParam_e_ex356")
	float CardRotationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealMoveParam_e_ex356")
	float CardRotationDeceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealMoveParam_e_ex356")
	float AllCardRotationDelayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealMoveParam_e_ex356")
	float EndCardRevolveAcceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealMoveParam_e_ex356")
	float EndCardRevolveAccelerationTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealMoveParam_e_ex356")
	float EndCardRevolveMaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealMoveParam_e_ex356")
	float CardLocationInterpTime;
};

USTRUCT(BlueprintType)
struct FTresEnemyBigDealAttackParam_e_ex356
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealAttackParam_e_ex356")
	float TargetFollowSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealAttackParam_e_ex356")
	float StartDelayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealAttackParam_e_ex356")
	float LuxordSideCardAttackSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealAttackParam_e_ex356")
	float LuxordSideCardAttackTurnSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealAttackParam_e_ex356")
	float LuxordSideCardAttackScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealAttackParam_e_ex356")
	float LuxordSideCardAttackScaleUpTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealAttackParam_e_ex356")
	float LuxordSideCardAttackRotationEndDelayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealAttackParam_e_ex356")
	float LuxordSideCardAttackMoveStartDelayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealAttackParam_e_ex356")
	FName LuxordSideCardAttackCollisionGroupName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealAttackParam_e_ex356")
	FName LuxordSideCardAttackAttackDtataIDName;
};

USTRUCT(BlueprintType)
struct FTresEnemyBigDealContractionSpeedParam_e_ex356
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealContractionSpeedParam_e_ex356")
	float Distance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealContractionSpeedParam_e_ex356")
	float Speed;
};

USTRUCT(BlueprintType)
struct FTresEnemyBigDealCardRotationEndParam_e_ex356
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealCardRotationEndParam_e_ex356")
	int NotCardDesignNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealCardRotationEndParam_e_ex356")
	int PlainCardDesignNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEnemyBigDealCardRotationEndParam_e_ex356")
	int LuxordCardDesignNum;
};

USTRUCT(BlueprintType)
struct FTresEnemyBigDealOneStepParam_e_ex356
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly)
	int32 NotCardDesignNum;
    
	UPROPERTY(EditDefaultsOnly)
	TArray<FTresEnemyBigDealContractionSpeedParam_e_ex356> ContractionSpeedParamList;
    
	UPROPERTY(EditDefaultsOnly)
	float CardRevolveSpeed;
    
	UPROPERTY(EditDefaultsOnly)
	float PlainCardDamageAfterCardRevolveStopTime;
    
	UPROPERTY(EditDefaultsOnly)
	float CardRotationEndIntervalTime;
    
	UPROPERTY(EditDefaultsOnly)
	TArray<FTresEnemyBigDealCardRotationEndParam_e_ex356> CardRotationEndParamList;
    
	UPROPERTY(EditDefaultsOnly)
	TArray<float> AttackStartTimeList;
    
	UPROPERTY(EditDefaultsOnly)
	float CardShuffleTime;
    
	TRESGAME_API FTresEnemyBigDealOneStepParam_e_ex356();
};

USTRUCT(BlueprintType)
struct FTresEnemyBigDealActionParam_e_ex356
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly)
	TEnumAsByte<ETresEnemyBigDealAction_e_ex356::Type> ActionType;
    
	UPROPERTY(EditDefaultsOnly)
	float ActionTime;
    
	UPROPERTY(EditDefaultsOnly)
	USoundBase* VoiceData;
    
	TRESGAME_API FTresEnemyBigDealActionParam_e_ex356();
};

USTRUCT(BlueprintType)
struct FTresEnemyBigDealParamEx_e_ex356
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly)
	FName FailedDamageAttackDataIDName;
    
	UPROPERTY(EditDefaultsOnly)
	float EndRadius;
    
	UPROPERTY(EditDefaultsOnly)
	float CenterLocationCheckPlayerRadius;
    
	UPROPERTY(EditDefaultsOnly)
	float FirstScondEndExplodeIntervalTime;
    
	UPROPERTY(EditDefaultsOnly)
	FTresEnemyBigDealMoveParam_e_ex356 MoveParam;
    
	UPROPERTY(EditDefaultsOnly)
	FTresEnemyBigDealAttackParam_e_ex356 AttackParam;
    
	UPROPERTY(EditDefaultsOnly)
	FTresEnemyBigDealOneStepParam_e_ex356 FirstOneStepParam;
    
	UPROPERTY(EditDefaultsOnly)
	FTresEnemyBigDealOneStepParam_e_ex356 SecondOneStepParam;
    
	UPROPERTY(EditDefaultsOnly)
	FTresEnemyBigDealOneStepParam_e_ex356 LastOneStepParam;
    
	UPROPERTY(EditDefaultsOnly)
	float LastContractionStartDelayTime;
    
	UPROPERTY(EditDefaultsOnly)
	TArray<FTresEnemyBigDealActionParam_e_ex356> LastActionParamList;
    
	TRESGAME_API FTresEnemyBigDealParamEx_e_ex356();
};

USTRUCT(BlueprintType)
struct FTresDeathSentenceParam_e_ex357
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly)
	float StartCount;
    
	UPROPERTY(EditDefaultsOnly)
	float CountSpeed;
    
	UPROPERTY(EditDefaultsOnly)
	uint8 bEnableDispelArmorHP: 1;
    
	UPROPERTY(EditDefaultsOnly)
	uint8 bEnableDispelDamage: 1;
    
	UPROPERTY(EditDefaultsOnly)
	int32 DispelDamageNum;
    
	UPROPERTY(EditDefaultsOnly)
	float DispelTotalAttackSrcPower;
    
	UPROPERTY(EditDefaultsOnly)
	float DamageCountDisableTime;
    
	UPROPERTY(EditDefaultsOnly)
	int32 DispelBitDieNum;
    
	UPROPERTY(EditDefaultsOnly)
	float BloomShieldTime;
    
	UPROPERTY(EditDefaultsOnly)
	uint8 bIsEndNotDieMode: 1;
    
	UPROPERTY(EditDefaultsOnly)
	uint8 bEnableRevengeChain: 1;
    
	UPROPERTY(EditDefaultsOnly)
	uint8 bEnableInformation: 1;
    
	UPROPERTY(EditDefaultsOnly)
	uint8 bEnableSpecialGameoverHint: 1;
    
	TRESGAME_API FTresDeathSentenceParam_e_ex357();
};

USTRUCT(BlueprintType)
struct FLastPlayedInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(Transient)
	class UAnimationAsset* m_pAsset;
};

struct FTresMovementComponentPostPhysicsTickFunction : public FTickFunction
{
};

USTRUCT(BlueprintType)
struct FTresRailSlideWork
{
	GENERATED_BODY()
public:
	UPROPERTY()
	AActor* m_LeadActor;


	/*To fix in custom engine*/
	/*UPROPERTY()
	ASQEX_SplineActor* m_RailSlideActor;
    
	UPROPERTY(Export)
	USQEX_SplineComponent* m_RailSlideComponent;
    
	UPROPERTY(Transient)
	ASQEX_SplineActor* m_LastRailSlideActor;
    
	UPROPERTY(Export, Transient)
	USQEX_SplineComponent* m_LastRailSlideComponent;
    
	UPROPERTY()
	ASQEX_SplineActor* m_PauseCheckActor;
    
	UPROPERTY(Export)
	USQEX_SplineComponent* m_PauseCheckComponent;*/
    
	TRESGAME_API FTresRailSlideWork();
};

USTRUCT(BlueprintType)
struct FTresGameplayTagDebugColor
{
	GENERATED_BODY()
public:
	struct FGameplayTag GameplayTag;
	struct FLinearColor Color;
};

USTRUCT(BlueprintType)
struct FTresTeamDebugColor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "FTresTeamDebugColor")
	TEnumAsByte<ETresTeam> TeamID;

	UPROPERTY(EditDefaultsOnly, Category = "FTresTeamDebugColor")
	FLinearColor Color;
};

USTRUCT(BlueprintType)
struct FTresPhotoLoadWork
{
	GENERATED_BODY()
public:
	UPROPERTY()
	class UTexture2D* m_pTexture;
};

USTRUCT(BlueprintType)
struct FTresRandomVoice
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "FTresRandomVoice")
	class USoundBase* VOICE;

	UPROPERTY(EditDefaultsOnly, Category = "FTresRandomVoice")
	int RandomWeights;
};

USTRUCT(BlueprintType)
struct FTresRandomVoiceForTable
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "FTresRandomVoiceForTable")
	class USoundBase* m_pVoice;

	UPROPERTY(EditDefaultsOnly, Category = "FTresRandomVoiceForTable")
	int m_dRandomWeights;

	UPROPERTY(EditDefaultsOnly, Category = "FTresRandomVoiceForTable")
	FName m_MouthMotionName;
};

USTRUCT(BlueprintType)
struct FRandomTableParameter
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRandomTableParameter")
	FName m_GroupName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRandomTableParameter")
	TArray<struct FTresRandomVoiceForTable> m_RandomVoiceAssets;
};

USTRUCT(BlueprintType)
struct FTresUInt8_Range
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "FTresUInt8_Range")
	uint8 m_uMinValue;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "FTresUInt8_Range")
	uint8 m_uMaxValue;
};

USTRUCT(BlueprintType)
struct FTresFloat32_RangeDegree
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "FTresFloat32_RangeDegree")
	float m_fMinAngle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "FTresFloat32_RangeDegree")
	float m_fMaxAngle;
};

USTRUCT(BlueprintType)
struct FTresPoppingHolyProjectileOverrideParameters
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float m_fRisingThresholdHeight;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float m_fGravityScaleWhenFalling;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FVector m_vBrakingVelocityScaleWhenFallingStarted;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float m_fAcceleration;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float m_fInitialSpeed;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float m_fMaxSpeed;
    
	TRESGAME_API FTresPoppingHolyProjectileOverrideParameters();
};

USTRUCT(BlueprintType)
struct FTresPoppingHolyBulletShootParameter
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FTresUInt8_Range m_HolyBulletShootNum;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FTresFloat32_RangeDegree m_HolyBulletSpreadRangeAngle;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float m_fHolyBulletShootYawAngleRandomOffset;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	bool m_bIsIgnoreKeyBladePitch;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FTresFloat32_RangeDegree m_HolyBulletShootRandomPitchRange;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	bool m_bIsOverrideHolyProjectileParameter;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TArray<FTresPoppingHolyProjectileOverrideParameters> m_HolyProjectileOverrideParameterList;
    
	TRESGAME_API FTresPoppingHolyBulletShootParameter();
};

USTRUCT(BlueprintType)
struct FTresChangeMeshMaterialParamData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "FTresChangeMeshMaterialParamData")
	FName m_MaterialParamName;

	UPROPERTY(EditDefaultsOnly, Category = "FTresChangeMeshMaterialParamData")
	TArray<FName> m_MaterialInstanceList;

	/*To fix in custom engine*/
//	ESqEX_BonePoseToMaterialSetParamType m_MaterialParamSetType;

	UPROPERTY(EditDefaultsOnly, Category = "FTresChangeMeshMaterialParamData")
	float m_StartScalarParam;

	UPROPERTY(EditDefaultsOnly, Category = "FTresChangeMeshMaterialParamData")
	float m_EndScalarParam;

	UPROPERTY(EditDefaultsOnly, Category = "FTresChangeMeshMaterialParamData")
	FVector m_StartVectorParam;

	UPROPERTY(EditDefaultsOnly, Category = "FTresChangeMeshMaterialParamData")
	FVector m_EndVectorParam;
};

USTRUCT(BlueprintType)
struct FSQEX_EffectCurveData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_EffectCurveData")
	TEnumAsByte<EFSQEX_EFFCT_CURVE_DATA_AXIS> ParamAxis;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_EffectCurveData")
	FName ParameterName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_EffectCurveData")
	class UCurveFloat* CurveData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_EffectCurveData")
	bool bUseCurveAsset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_EffectCurveData")
	FName XCurveName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_EffectCurveData")
	bool bUseParameterX;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_EffectCurveData")
	FName YCurveName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_EffectCurveData")
	bool bUseParameterY;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_EffectCurveData")
	FName ZCurveName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_EffectCurveData")
	bool bUseParameterZ;
};

USTRUCT(BlueprintType)
struct FTresAnimAssetUnit
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "FTresAnimAssetUnit")
	FName AnimName;

	UPROPERTY(EditDefaultsOnly, Category = "FTresAnimAssetUnit")
	class UAnimationAsset* AnimData;
};

USTRUCT(BlueprintType)
struct FTresAtkCollShapeAssetUnit
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	FName m_GrpName;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	FName m_DefaultAttackDataIDName;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	TEnumAsByte<ETresCollision::Type> m_ShapeType;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	class UStaticMesh* m_Mesh;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	struct FCollisionProfileName m_CollisionProfileName;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	ETresAtkCollLocationAttachType m_AttachType1;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	FName m_SocketName1;

	UPROPERTY()
	bool m_bSocketName1UseParentSkeleton_DEPRECATED;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	FVector m_RelativeLocation1;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	bool m_bAbsoluteOffset1;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	bool m_bDisableLocation1Attach;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	ETresAtkCollLocationAttachType m_AttachType2;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	FName m_SocketName2;

	UPROPERTY()
	bool m_bSocketName2UseParentSkeleton_DEPRECATED;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	FVector m_RelativeLocation2;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	bool m_bAbsoluteOffset2;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	bool m_bDisableLocation2Attach;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	FVector m_Size;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	FVector m_IncSize;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	FVector m_IncMaxSize;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	class UCurveVector* m_SizeVectorCurve;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	bool m_bSizeVectorCurveLoop;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	FRotator m_RelativeRocation;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	ETresAtkCollRotAttachType m_RotAttachType;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	FVector m_Scale;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	FVector m_IncScale;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	FVector m_IncMaxScale;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	class UCurveVector* m_ScaleVectorCurve;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	bool m_bScaleVectorCurveLoop;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	bool m_bDisableSweep;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	bool m_bEnablePawnRootCollision;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	bool m_bIsPhysAttackCollision;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	ETresAtkCollMapHitType m_MapHitType;

	UPROPERTY()
	bool m_bEnableMapHit_DEPRECATED;

	UPROPERTY()
	bool m_bDisableGround_DEPRECATED;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	bool m_bDisableTakeDamage;

	UPROPERTY()
	bool m_bDisableTeamCheck_DEPRECATED;

	UPROPERTY()
	bool m_bZeroDamageIfSameTeam_DEPRECATED;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	bool m_bDisableCharHit;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	bool m_bIgnoreParentScale;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	FName m_EffectGrpName;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	class USoundBase* m_HitSEAsset;

	UPROPERTY(EditAnywhere, Category = "FTresAnimAssetUnit")
	TEnumAsByte<ETresSoundAliasLabel> m_HitSEID;
};

USTRUCT(BlueprintType)
struct FTresAtkCollHitEffUnit
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	UParticleSystem* m_PawnHitEffect;
    
	UPROPERTY(EditAnywhere)
	USoundBase* m_PawnHitSEAsset;
    
	UPROPERTY(EditAnywhere)
	UParticleSystem* m_PawnHitEffectPerAttr[8];
    
	UPROPERTY(EditAnywhere)
	USoundBase* m_PawnHitSEAssetPerAttr[8];
    
	UPROPERTY(EditAnywhere)
	UParticleSystem* m_DirectHitEffect;
    
	UPROPERTY(EditAnywhere)
	uint8 m_bChangeMapHit: 1;
    
	UPROPERTY(EditAnywhere)
	UParticleSystem* m_MapHitEffect;
    
	UPROPERTY(EditAnywhere)
	uint8 m_bChangeSEMapHit: 1;
    
	UPROPERTY(EditAnywhere)
	USoundBase* m_MapHitSEAsset;
    
	UPROPERTY(EditAnywhere)
	uint8 m_bEnableDecal: 1;
    
	UPROPERTY(EditAnywhere, Export, NoClear)
	FTresDecalData m_DecalData;
    
	TRESGAME_API FTresAtkCollHitEffUnit();
};

USTRUCT(BlueprintType)
struct FTresAtkColHitEffect
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	FName m_GrpName;
    
	UPROPERTY(EditAnywhere)
	UParticleSystem* m_PawnHitEffect;
    
	UPROPERTY(EditAnywhere)
	USoundBase* m_PawnHitSEAsset;
    
	UPROPERTY(EditAnywhere)
	UParticleSystem* m_PawnHitEffectPerAttr[8];
    
	UPROPERTY(EditAnywhere)
	USoundBase* m_PawnHitSEAssetPerAttr[8];
    
	UPROPERTY(EditAnywhere)
	UParticleSystem* m_DirectHitEffect;
    
	UPROPERTY(EditAnywhere)
	uint8 m_bChangeMapHit: 1;
    
	UPROPERTY(EditAnywhere)
	UParticleSystem* m_MapHitEffect;
    
	UPROPERTY(EditAnywhere)
	uint8 m_bChangeSEMapHit: 1;
    
	UPROPERTY(EditAnywhere)
	USoundBase* m_MapHitSEAsset;
    
	UPROPERTY(EditAnywhere)
	uint8 m_bEnableDecal: 1;
    
	UPROPERTY(EditAnywhere, Export, NoClear)
	FTresDecalData m_DecalData;
    
	UPROPERTY(EditAnywhere)
	TArray<FTresAtkCollHitEffUnit> m_HitEffSet;
    
	TRESGAME_API FTresAtkColHitEffect();
};

USTRUCT(BlueprintType)
struct FTresAtkCollAutoActivate
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	FName m_GrpName;
    
	UPROPERTY(EditAnywhere)
	FName m_AttackDataIDName;
    
	UPROPERTY(EditAnywhere)
	float m_AttackInterval;
    
	TRESGAME_API FTresAtkCollAutoActivate();
};

USTRUCT(BlueprintType)
struct FTresE_dw405AttackParam
{
	GENERATED_BODY()
public:
	class UClass* AttackDefinition;
	bool bEnableOverrideAppearOffsetAngle;
	float AppearOffsetAngle;
};

USTRUCT(BlueprintType)
struct FTresE_dw405ComboParam
{
	GENERATED_BODY()
public:
	TArray<struct FTresE_dw405AttackParam> AttackParams;
};

USTRUCT(BlueprintType)
struct FTresBladeTornadoInfo_e_ex301a
{
	GENERATED_BODY()
public:
	float Interval;
	float SpawnDistance;
	float SpawnHeight;
	float AppearExcludeAngle;
	float AppearAngle;
	float SpawnExcludeAngleYaw;
	float SpawnAngleYaw;
	float SpawnAngleMaxPitch;
	float SpawnAngleMinPitch;
	int AimNum;
	float MinMissDistance;
	float MaxMissDistance;
};

USTRUCT(BlueprintType)
struct FTresChaosFiragaShotInterval_e_ex352
{
	GENERATED_BODY()
public:
	float m_Interval;
	bool m_bHomingEnabled;
};

USTRUCT(BlueprintType)
struct FTresChaosFiragaParams_e_ex352
{
	GENERATED_BODY()
public:
	bool m_bSingleShot;
	float m_DisengageRange;
	float m_fProjectileFiringRadius;
	float m_ShotSpeed;
	float m_AimOffsetHeight;
	float m_fProjectileSpreadRadius;
	float m_fMinAngle;
	float m_fMaxAngle;
	float m_fProjectileSpreadMargin;
	TArray<float> m_AttackIntervals;
	TArray<struct FTresChaosFiragaShotInterval_e_ex352> m_ShotIntervalArray;
	bool m_bShot3D;
};

USTRUCT(BlueprintType)
struct FTresVoice_e_ex352
{
	GENERATED_BODY()
public:
	int m_Param;
	class USoundBase* m_Voice;
	bool m_bSound3D;
};

USTRUCT(BlueprintType)
struct FMeleeRootMotionScaleParam_e_ex761
{
	GENERATED_BODY()
public:
	float Distance;
	float RootMotionScale;
};

USTRUCT(BlueprintType)
struct FTresNpc_n_ex023_TractionData
{
	GENERATED_BODY()
public:
	FString m_Comment;
	float m_fMaxVerticalTractionDistance;
	float m_fMaxHorizontalTractionDistance;
	float m_fVerticalOffsetFromTarget;
	float m_fHorizontalOffsetFromTarget;
};

USTRUCT(BlueprintType)
struct FTresDarkHomingProjectileNum_e_dw407
{
	GENERATED_BODY()
public:
	uint32 m_ForwardProjectileNum;
	uint32 m_BackwardProjectileNum;
};

USTRUCT(BlueprintType)
struct FTresDarkHomingProjectileNumParams_e_dw407
{
	GENERATED_BODY()
public:
	TArray<struct FTresDarkHomingProjectileNum_e_dw407> m_SpawnProjectileNumParams;
	bool m_bIsUseIntervalGameLevelParam;
	bool m_bIsUseSpeedGameLevelParam;
};

USTRUCT(BlueprintType)
struct FTresDarkHomingProjectileParam_e_dw407
{
	GENERATED_BODY()
public:
	float m_StartHomingTime;
	float m_HomingSpeedXY;
	float m_HomingAccelSpeedXY;
	float m_HomingMaxSpeedXY;
	float m_HomingSpeedZ;
	float m_HomingAccelSpeedZ;
	float m_HomingMaxSpeedZ;
	bool m_bDistance3D;
	float m_HomigMinDist;
};

USTRUCT(BlueprintType)
struct FTresDarkHomingAttackParam_e_dw407
{
	GENERATED_BODY()
public:
	float m_TimeUntilSpawnProjectile;
	TArray<struct FTresDarkHomingProjectileNumParams_e_dw407> m_SpawnProjectileParams;
	float m_Pitch;
	float m_SpawnProjectileInterval;
	float m_GameLevelMinSpawnProjectileInterval[0x4];
	float m_GameLevelMaxSpawnProjectileInterval[0x4];
	float m_TimeUntilReStart;
	float m_EnableBackwardParam;
	float m_ProjectileSpeed;
	float m_GameLevelMinProjectileSpeed[0x4];
	float m_GameLevelMaxProjectileSpeed[0x4];
	struct FTresDarkHomingProjectileParam_e_dw407 m_ForwardProjectileParams;
	struct FTresDarkHomingProjectileParam_e_dw407 m_BackwardProjectileParams;
	float m_HomingMaxAngle;
};

USTRUCT(BlueprintType)
struct FTresRoarSpawnProjectileParam_e_dw407b
{
	GENERATED_BODY()
public:
	int m_SpawnProjectileSameTimeNum;
	float m_SpawnProjectileRadius;
	float m_AimTargetDirectionMinDistance;
	float m_AimTargetDirectionMaxDistance;
	float m_AimTargetDirectionAngle;
};

USTRUCT(BlueprintType)
struct FTresFeatherShotProjectileParam_e_ex081
{
	GENERATED_BODY()
public:
	float m_ProjectileInterval;
	float m_ShootPitchAngle;
};

USTRUCT(BlueprintType)
struct FTresDashAnims_e_ex107
{
	GENERATED_BODY()
public:
	class UAnimSequenceBase* StartAnimData;
	class UAnimSequenceBase* DashAnimData;
};

USTRUCT(BlueprintType)
struct FTresDashParams_e_ex107
{
	GENERATED_BODY()
public:
	float MaxMoveSpeed;
	float Acceleration;
	float Decelaration;
	float MinMoveSpeed;
	float HomingAngleXY;
	float HomingAngleZ;
	bool bDashLimit;
	float LimitDistance;
	float LimitTime;
};

USTRUCT(BlueprintType)
struct FKunai_Setup
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly)
	FName m_BoneName;
    
	UPROPERTY(EditDefaultsOnly)
	FName m_IgnoreAtkCollGroupName;
    
	TRESGAME_API FKunai_Setup();
};

USTRUCT(BlueprintType)
struct FKunai_Details
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly)
	TEnumAsByte<EKunaiType> m_KunaiType;
    
	UPROPERTY(EditDefaultsOnly)
	float m_Timing;
    
	UPROPERTY(EditDefaultsOnly)
	float m_Angle;
    
	UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
	float m_Velocity;
    
	TRESGAME_API FKunai_Details();
};

USTRUCT(BlueprintType)
struct FTresEnemyEx304RootMotionScaleInfo
{
	GENERATED_BODY()
public:
	class UCurveFloat* RootMotionScaleCurveData;
	bool bOverRunTarget;
};

USTRUCT(BlueprintType)
struct FTresHomingDarkLaserSpawnParams_e_ex316
{
	GENERATED_BODY()
public:
	float m_SpawnMinRadius;
	float m_SpawnMaxRadius;
	float m_SpawnMinHieght;
	float m_SpawnMaxHeight;
};

USTRUCT(BlueprintType)
struct FProjectileParam_e_ex322a
{
	GENERATED_BODY()
public:
	float AppearAngle;
	float AppearDistance;
	float AppearHeight;
	float AppearOffsetTime;
	float ShotOffsetTime;
	bool bEnableSettingShotYaw;
	float ShotYaw;
	bool bEnableSettingShotPitch;
	float ShotPitch;
	float OverrideRange;
	bool bOverrideEnableSettingShotYaw;
	float OverrideShotYaw;
	bool bOverrideEnableSettingShotPitch;
	float OverrideShotPitch;
	bool bOverrideEnableHoming;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx351RootMotionScaleParam
{
	GENERATED_BODY()
public:
	float Distance;
	float RootMotionScale;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx351RootScale
{
	GENERATED_BODY()
public:
	float TractionMaxScale;
	float TractionMinScale;
	bool bMovedCorrection;
};

USTRUCT(BlueprintType)
struct FTresDarkLaserSpawnParams_e_ex352
{
	GENERATED_BODY()
public:
	float m_BeginLaserIrradiationTime;
	float m_LaserShiftMinTime;
	float m_LaserShiftMaxTime;
	float m_LaserIrradiationSignTime;
	float m_LaserIrradiationLoopTime;
	float m_LaserExtendSpeed;
	float m_SignStartRequiredTime;
	float m_SignEndRequiredTime;
};

USTRUCT(BlueprintType)
struct FTresHomingDarkLaserSpawnParams_e_ex352 : public FTresDarkLaserSpawnParams_e_ex352
{
	GENERATED_BODY()
public:
	int m_SpawnNum;
	int m_SpawnSameTimeNum;
	float m_SpawnMinRadius;
	float m_SpawnMaxRadius;
	float m_SpawnMinHieght;
	float m_SpawnMaxHeight;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx353RootMotionScaleParam
{
	GENERATED_BODY()
public:
	float Distance;
	float RootMotionScale;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx353RootMotionScaleInfo
{
	GENERATED_BODY()
public:
	ETresEnemyEx353RootMotionCorrectionKind RootMotionCorrectionKind;
	class UCurveFloat* RootMotionScaleCurveData;
	struct FTresEnemyEx353RootMotionScaleParam MinRootMotionScaleParam;
	struct FTresEnemyEx353RootMotionScaleParam MaxRootMotionScaleParam;
	float ChangeCorrectionKindDistance;
	float MaxRootMotionScale;
	float AimTargetBackDistance;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx353HomingParam
{
	GENERATED_BODY()
public:
	float HomingSpeedYaw;
	float HomingSpeedPitch;
	float HomingMinDist;
	float HomingAbsTime;
};

USTRUCT(BlueprintType)
struct FEX355_ComboTractionInfo
{
	GENERATED_BODY()
public:
	int iNotifyID;
	FString Comment;
	FVector vTractionOffset;
	float fMaxTractionDistance;
	float fMinTractionDistance;
};

USTRUCT(BlueprintType)
struct FTresWarpCutMotionParam_e_ex358
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresEnemyWarpCutMotionType_e_ex357> MotionType;
	float AnimStartTime;
};

USTRUCT(BlueprintType)
struct FRootMotionScaleParam_e_ex358
{
	GENERATED_BODY()
public:
	float Distance;
	float RootMotionScale;
};

USTRUCT(BlueprintType)
struct FJinraiRootMotionScaleParam_e_ex358
{
	GENERATED_BODY()
public:
	float Distance;
	float RootMotionScale;
};

USTRUCT(BlueprintType)
struct FEX359_ComboTractionInfo
{
	GENERATED_BODY()
public:
	int iNotifyID;
	FString Comment;
	FVector vTractionOffset;
	float fMaxTractionDistance;
	float fMinTractionDistance;
};

USTRUCT(BlueprintType)
struct FEX359_BeamWaitMoveInfo
{
	GENERATED_BODY()
public:
	bool m_bNotEndOnTime;
	float m_fMaxWaitTime;
	bool m_bUpdateMoveDir;
};

USTRUCT(BlueprintType)
struct FEX359_BeamSpinMoveInfo
{
	GENERATED_BODY()
public:
	float m_fMaxSpinTime;
	bool m_bSpinInversed;
	float m_fInitSpinVelocity;
	bool m_bSpinAccel;
	float m_fSpinAccel;
	float m_fMaxSpinVelocity;
	class ATresProjectileBase* m_Projectile;
};

USTRUCT(BlueprintType)
struct FEX359_BeamHomingMoveInfo
{
	GENERATED_BODY()
public:
	float m_fInitVelocity;
	bool m_bResetInitVelocity;
	bool m_bAccel;
	float m_fAccel;
	float m_fMaxVelocity;
	float m_fMaxMoveDistance;
	bool m_bMaxMoveDistance;
	bool m_bHoming;
	float m_fHomingAccel;
	float m_fHomingMaxVelocity;
	float m_fHomingMaxAngle;
	float m_fHomingMinDistance;
	float m_fHomingIgnoreMaxAngleTime;
	class ATresProjectileBase* m_Projectile;
	class AActor* m_Target;
};

USTRUCT(BlueprintType)
struct FEX359_BeamMoveInfoSet
{
	GENERATED_BODY()
public:
	struct FEX359_BeamWaitMoveInfo m_WaitMoveInfo;
	bool m_bMoveWait;
	struct FEX359_BeamSpinMoveInfo m_SpinMoveInfo;
	bool m_bSpinMove;
	struct FEX359_BeamHomingMoveInfo m_HomingMoveInfo;
};

USTRUCT(BlueprintType)
struct FEX359_BeamInfo
{
	GENERATED_BODY()
public:
	int m_iNotify;
	class UClass* m_pProjClass;
	class UClass* m_pProjClass_FinalBrake;
	FVector m_vSpawnLocOffset;
	bool m_bPolarSpawnLocOffset;
	float m_fSpawnLocPolarYawOffset;
	TEnumAsByte<EEX359_SpawnLocType> m_SpawnLocType;
	TEnumAsByte<EEX359_SpawnDirType> m_SpawnDirType;
	float m_fSpawnDirYawOffset;
	float m_fLifeTime;
	bool m_bLifeTime;
	bool m_bIgnoreSameIndexHit;
	struct FEX359_BeamMoveInfoSet m_MoveInfoSet;
};

USTRUCT(BlueprintType)
struct FEX359_BeamInfoSet
{
	GENERATED_BODY()
public:
	TArray<struct FEX359_BeamInfo> m_BeamInfoArray;
};

USTRUCT(BlueprintType)
struct FEX359_ComboAttackIDModifySet
{
	GENERATED_BODY()
public:
	FName m_OldAttackID;
	FName m_NewAttackID;
};

USTRUCT(BlueprintType)
struct FTresShotParam_e_ex701_DarkCloud
{
	GENERATED_BODY()
public:
	float Height;
	float SideOffset;
	float FrontOffset;
};

USTRUCT(BlueprintType)
struct FTresShockWaveRushParam_e_ex352
{
	GENERATED_BODY()
public:
	float m_RushSpeed;
	float m_Acceleration;
	float m_NextTargetDistance;
};

USTRUCT(BlueprintType)
struct FTresKBRCloneBurstParam
{
	GENERATED_BODY()
public:
	float m_ShotTime;
	float m_ShotDirYaw;
	float m_ShotDirPitch;
	float m_ShadowMoveDirYaw;
	TEnumAsByte<EKBRCloneBurstTypes_e_ex360> m_AttackType;
	float m_IntervalTime;
	FVector m_ShotDist;
};

USTRUCT(BlueprintType)
struct FTresTarHandParam_e_ex701
{
	GENERATED_BODY()
public:
	class UClass* TarHandActionClass;
	bool bEnablelifeTimeOverride;
	float OverrideLifeTime;
};

USTRUCT(BlueprintType)
struct FRootMotionScaleParam_e_ex781
{
	GENERATED_BODY()
public:
	float Distance;
	float RootMotionScale;
};

USTRUCT(BlueprintType)
struct FRootMotionScaleDataParam_e_ex781
{
	GENERATED_BODY()
public:
	int ID;
	bool bEnableAttackHitResetRootMotionScale;
	struct FRootMotionScaleParam_e_ex781 MinRootMotionScaleParam;
	struct FRootMotionScaleParam_e_ex781 MaxRootMotionScaleParam;
};

USTRUCT(BlueprintType)
struct FBX901_NeedleRainInfo
{
	GENERATED_BODY()
public:
	class UClass* m_Projectile_Needle_Up;
	class UClass* m_Projectile_Needle_Fall;
	float m_fUpDistance;
	float m_fFallHeight;
	float m_fFallRangeRadius;
	class UParticleSystem* m_EffectClass;
	float m_fEffectHeight;
	TWeakObjectPtr<class AActor> m_Target;
};

USTRUCT(BlueprintType)
struct FBX901_NeedleSpawnerInfo
{
	GENERATED_BODY()
public:
	class UClass* m_NeedleSpawnerClass;
};

USTRUCT(BlueprintType)
struct FEX354_ArtemaRunShotSequenceInfo
{
	GENERATED_BODY()
public:
	float m_fYaw;
	float m_fHeightOffset;
};

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotProjInfo
{
	GENERATED_BODY()
public:
	float m_fShotWaitTime;
	float m_fTargetPastDestroyDistance;
	float m_fCenterPastDestroyDistance;
};

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotGrid
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotGridSet
{
	GENERATED_BODY()
public:
	int m_iGridNumX;
	int m_iGridNumY;
	float m_AvoidOverrapScale;
	TArray<struct FEX354_ArtemaWarpShotGrid> m_GridArray;
};

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotInfo
{
	GENERATED_BODY()
public:
	float m_fMaxShotTime;
	float m_fShotInterval;
	float m_fWaitTime;
	struct FEX354_ArtemaWarpShotProjInfo m_ProjInfo;
	bool m_bSpawnInRectangle;
	float m_fSpawnLocDeviationXY;
	float m_fSpawnLocDeviationX;
	float m_fSpawnLocDeviationY;
	float m_fSpawnLocDeviationZ;
	bool m_bAimInRectangle;
	float m_fAimLocDeviationRadius;
	float m_fAimLocDeviationX;
	float m_fAimLocDeviationY;
	struct FEX354_ArtemaWarpShotGridSet m_GridSet;
	bool m_bUseGrid;
	FRotator m_rAimLocOffsetRot;
	float m_fAimLocMaxTargetVelocity;
	float m_fAimLocTargetVelocityRate;
	bool m_bAimLocTargetVelocity2D;
	bool m_bAimLocEachShot;
	int m_EqsIndex;
	bool m_bRefreshEQS;
};

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotSet
{
	GENERATED_BODY()
public:
	TArray<struct FEX354_ArtemaWarpShotInfo> m_ArtemaWarpShotInfoArray;
	bool m_bSendEventOnEnd;
	bool m_bIgnoreTargetModify;
	class ATresCharPawnBase* m_Owner;
	class AActor* m_Target;
};

USTRUCT(BlueprintType)
struct FTresMagnaStormTractionInfo_e_ex355
{
	GENERATED_BODY()
public:
	int iNotifyID;
	FString Comment;
	FVector vTractionOffset;
	float fMaxTractionDistance;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx771_AttractParam
{
	GENERATED_BODY()
public:
	class ATresActor_e_ex771_Attract* m_pAttract;
	class AActor* m_pTarget;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx773_AttractParam
{
	GENERATED_BODY()
public:
	class ATresActor_e_ex773_Attract* m_pAttract;
	class AActor* m_pTarget;
};

USTRUCT(BlueprintType)
struct FDeviationShotInfo_e_ex355
{
	GENERATED_BODY()
public:
	float fDeviationRate;
	float fMaxDeviationTargetVelocity;
	bool bNoVerticalDiviation;
};

USTRUCT(BlueprintType)
struct FEX355_ThrowRoamMoveInfo
{
	GENERATED_BODY()
public:
	bool m_bRoamMove;
	float m_fRoamMoveTime;
	float m_fRoamMoveVelocity;
	float m_fRoamRotateYawVelocity;
	float m_fRoamRotatePitchVelocity;
	TEnumAsByte<EEX355_ClaymoreRoamCenterType> m_RoamCenterType;
	float m_fRoamRadius;
	float m_fRoamHeight;
	FRotator m_rInitRotOffset_Roam;
	bool m_bEnableAttackCollision;
};

USTRUCT(BlueprintType)
struct FEX355_ThrowFirstMoveInfo
{
	GENERATED_BODY()
public:
	bool m_bFirstMove;
	float m_fFirstMoveTime;
	float m_fInitVelocity_First;
	float m_fMaxVelocity_First;
	float m_fAccel_First;
	bool m_bInitRotOffset_First;
	FRotator m_rInitRotOffset_First;
	bool m_bInitRotOffset_Roam_NoOwnerRot;
	float m_fMinHomingDistance_Fisrt;
	float m_fMaxHomingAngle_First;
	float m_fInitHomingRotateVelocity_First;
	float m_fMaxHomingRotateVelocity_First;
	float m_fMaxHomingRotateAccel_First;
	float m_fMaxHomingAngleIgnoreTime_First;
};

USTRUCT(BlueprintType)
struct FEX355_ThrowHomingInfo
{
	GENERATED_BODY()
public:
	float m_fInitVelocity;
	float m_fMaxVelocity;
	float m_fAccel;
	float m_fMinHomingDistance;
	float m_fMaxHomingAngle;
	float m_fInitHomingRotateVelocity;
	float m_fMaxHomingRotateVelocity;
	float m_fHomingRotateAccel;
	float m_fMaxHomingAngleIgnoreTime;
	bool m_bEnableGrabityOnDisablingHomingToLandTarget;
	float m_fGravityScale;
	bool m_bSpawnNextProjectileOnHomingEnd;
	FVector m_vSpawnNextProjLocationOffset;
	int m_iMaxRespawnCount;
	float m_fNextRespawnWaitTime;
	class UClass* m_ProjectileClass;
};

USTRUCT(BlueprintType)
struct FEX355_ThrowInfoSet
{
	GENERATED_BODY()
public:
	struct FEX355_ThrowRoamMoveInfo m_RoamMoveInfo;
	struct FEX355_ThrowFirstMoveInfo m_FirstMoveInfo;
	struct FEX355_ThrowHomingInfo m_HomingInfo;
};

USTRUCT(BlueprintType)
struct FEX355_ThrowBB_Info
{
	GENERATED_BODY()
public:
	FRotator m_rShotRot;
	FVector m_vShotLoc;
	struct FEX355_ThrowInfoSet m_ThrowInfoSet;
};

USTRUCT(BlueprintType)
struct FEX355_ThrowBB_Pattern
{
	GENERATED_BODY()
public:
	TArray<struct FEX355_ThrowBB_Info> m_ThrowInfoArray;
};

USTRUCT(BlueprintType)
struct FTresex301AscensionPillarPatternParam
{
	GENERATED_BODY()
public:
	bool m_IsShotRotationToTarget;
	int m_ShotRotation;
	bool m_IsShotLocationTarget;
	float m_OffsetRenge;
	float m_OffsetRot;
	bool m_IsCalcOffsetRotation;
	int m_BulletID;
};

USTRUCT(BlueprintType)
struct FTresBlackSphereSpawnParams_e_ex352
{
	GENERATED_BODY()
public:
	class UClass* m_SpawnBlackSphere;
	TArray<float> m_AttackTimes;
	FRotator m_FiringAngle;
};

USTRUCT(BlueprintType)
struct FTresBlackSphere_e_ex352
{
	GENERATED_BODY()
public:
	TArray<struct FTresBlackSphereSpawnParams_e_ex352> m_BlackSphereSpawnParams;
};

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotSequence_ProjectileInfo
{
	GENERATED_BODY()
public:
	struct FEX354_ArtemaWarpShotSet m_ShotSet;
	FVector m_vSpawnLocOffset;
	class ATresProjectileBase* m_Spawner;
};

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotSequenceInfo
{
	GENERATED_BODY()
public:
	TArray<struct FEX354_ArtemaWarpShotSequence_ProjectileInfo> m_ProjectileInfoArray;
	float m_fShotWaitTime;
	FVector m_vSpawnLoc;
	class UCurveVector* m_SpawnLocCurve;
	FVector m_vAimLoc;
	class UCurveVector* m_AimLocCurve;
	class ATresCharPawnBase* m_Owner;
	class AActor* m_Target;
};

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotSequenceInfoSet
{
	GENERATED_BODY()
public:
	TArray<struct FEX354_ArtemaWarpShotSequenceInfo> m_SequenceInfoArray;
};

USTRUCT(BlueprintType)
struct FEX355_CutUpTractionInfo
{
	GENERATED_BODY()
public:
	int iNotifyID;
	FString Comment;
	FVector vTractionOffset;
	float fMaxTractionDistance;
	TEnumAsByte<EEX355_MoveVelocityType> m_HorizontalVelocityType;
	float m_fHorizontalVelocityExp;
	TEnumAsByte<EEX355_MoveVelocityType> m_VerticalVelocityType;
	float m_fVerticalVelocityExp;
};

USTRUCT(BlueprintType)
struct FTresex367AscensionPillarPatternParam
{
	GENERATED_BODY()
public:
	bool m_IsShotRotationToTarget;
	int m_ShotRotation;
	bool m_IsShotLocationTarget;
	float m_OffsetRenge;
	float m_OffsetRot;
	bool m_IsCalcOffsetRotation;
	int m_BulletID;
};

USTRUCT(BlueprintType)
struct FTresDarkBarrageParam_e_ex352
{
	GENERATED_BODY()
public:
	bool bAimTarget;
	class UClass* m_DarkBarrageProjectileClass;
	TArray<float> AttackIntervals;
	float StartAttackAngle;
	float EndAttackAngle;
	float InitialSpeed;
	float Acceleration;
	float MaxSpeed;
};

USTRUCT(BlueprintType)
struct FRootMotionScaleParam_e_ex367
{
	GENERATED_BODY()
public:
	float Distance;
	float RootMotionScale;
};

USTRUCT(BlueprintType)
struct FRootMotionScaleDataParam_e_ex367
{
	GENERATED_BODY()
public:
	int ID;
	bool bEnableAttackHitResetRootMotionScale;
	struct FRootMotionScaleParam_e_ex367 MinRootMotionScaleParam;
	struct FRootMotionScaleParam_e_ex367 MaxRootMotionScaleParam;
	float TargetDistOffset;
};

USTRUCT(BlueprintType)
struct FTres_e_bx903Rush_Trigger
{
	GENERATED_BODY()
public:
	float m_triggerTimeStamp;
	FName m_attachBoneName;
};

USTRUCT(BlueprintType)
struct FTresMotion_e_ex011_WheeliePress
{
	GENERATED_BODY()
public:
	class UAnimSequenceBase* StartAnimData;
	class UAnimSequenceBase* LoopAnimData;
	class UAnimSequenceBase* EndAnimData;
};

USTRUCT(BlueprintType)
struct FRockShotProjInfo_e_ex059
{
	GENERATED_BODY()
public:
	class UClass* m_Projectile;
	float m_fMaxShotPitch;
	float m_fMinShotPitch;
};

USTRUCT(BlueprintType)
struct FTresFollowParams_e_ex203
{
	GENERATED_BODY()
public:
	float FollowSpeed;
	float TurnSpeed;
	bool bDisableAttenuation;
	bool bDisableTurnAngleCheck;
	bool bEnableLessTurnSpeed;
	float MaxRate;
	float MinRate;
};

USTRUCT(BlueprintType)
struct FTresAttackParam_e_ex322a
{
	GENERATED_BODY()
public:
	class UAnimSequenceBase* AnimData;
	float ActionStartDelayTime;
	float SpeedAutoCorrectionRate;
	float AppearDistance;
	float AppearMaxAngle;
	float LandAppearOffsetHeight;
	float AirAppearOffsetHeight;
	float AppearHomingMaxAngle;
	float HomingAngle;
	float Acceleration;
	float Speed;
	float Deceleration;
	bool bEnableGravity;
	bool bIsAerial;
	float AppearLocationCorrectionRate;
};

USTRUCT(BlueprintType)
struct FEX354_CreateArmWarpInfo
{
	GENERATED_BODY()
public:
	ETresEnemy_e_ex354_ArmWarpType m_ArmWarpType;
	ETresEnemy_e_ex354_ArmWarpPos m_PosType;
	EEX354_ArmSpawnDirType m_DirType;
	float m_fDistance;
	float m_fPitch;
	float m_fYaw;
	bool m_bPitchAdjustToCamera;
	float m_fPitchAdjustToCamera_MaxPitchDiff;
	bool m_bReverseCameraPitch;
	float m_fPitchAdjustToCamera_MaxPitch;
	float m_fPitchAdjustToCamera_MinPitch;
	bool m_bPitchAdjustToCamera_DebugDisp;
	EEX354_ArmSpawnPosAdjustType m_SpawnPosAdjustType;
	float m_SpawnPosAdjustMaxAngle;
	float m_fTargetVelocityAdjust_MaxVelocity;
	float m_fTargetVelocityAdjustRate;
	bool m_bTargetVelocityAdjustDirectional;
	float m_fTargetVelocityAdjustDirectionalYaw;
	float m_fTargetVelocityAdjustDirectionalYawWidth;
	float m_fTargetVelocityAdjustDirectionalScale;
	float m_fMinHeight;
	EEX354_ArmAimDirType m_AimDirType;
	float m_fTargetVelocityRotAdjust_MaxVelocity;
	float m_fTargetVelocityRotAdjustRate;
	float m_fTargetVelocityRotAdjust_MaxPitch;
	float m_fTargetVelocityRotAdjust_MaxYaw;
};

USTRUCT(BlueprintType)
struct FEX354_CreateArmWarpInfoSet
{
	GENERATED_BODY()
public:
	struct FEX354_CreateArmWarpInfo m_ArmWarpInfoArray[0x2];
};

USTRUCT(BlueprintType)
struct FEX355_RushTractionInfo
{
	GENERATED_BODY()
public:
	int iNotifyID;
	FString Comment;
	FVector vTractionOffset;
	float fMaxTractionDistance;
};

USTRUCT(BlueprintType)
struct FEX355_RushAwayTurnInfo
{
	GENERATED_BODY()
public:
	int iNotifyID;
	FString Comment;
	float fTurnVelocity;
	TEnumAsByte<EEX355_RushAwayTurnType> m_TurnType;
	TEnumAsByte<EEX355_RushAwayTurnDir> m_TurnDir;
	float m_fTurnOffset;
	float m_fTurnDirDivideAngle;
};

USTRUCT(BlueprintType)
struct FEX355_RushAwayTractionInfo
{
	GENERATED_BODY()
public:
	int iNotifyID;
	FString Comment;
	float m_fFinalVelocity;
	bool m_bUsePawnDir;
};

USTRUCT(BlueprintType)
struct FTresEnemyCardThrowCardMoveParam_e_ex356
{
	GENERATED_BODY()
public:
	float ThrowAngleYaw;
	float ThrowAnglePitch;
	float InitialSpeed;
	float Accel;
	float MaxSpeed;
	float AccelStartDelayTime;
	bool EnableHomingPitch;
};

USTRUCT(BlueprintType)
struct FTornadoCutWindParam_e_ex357
{
	GENERATED_BODY()
public:
	float Distance;
	float WindForce;
};

USTRUCT(BlueprintType)
struct FEX359_BeamOnTimeInfo
{
	GENERATED_BODY()
public:
	float m_fNotifyTime;
	int m_iNotify;
	bool m_bSetToTimeOnHit;
};

USTRUCT(BlueprintType)
struct FEX359_BeamOnTimeInfoSet
{
	GENERATED_BODY()
public:
	TArray<struct FEX359_BeamOnTimeInfo> m_BeamOnTimeInfoArray;
	struct FEX359_BeamInfoSet m_BeamInfoSet;
	class ATresCharPawnBase* m_Owner;
	class AActor* m_Target;
	class AActor* m_SpawnActor;
};

USTRUCT(BlueprintType)
struct FEX359_ThrowEffectInfo
{
	GENERATED_BODY()
public:
	float m_fNotifyTime;
	bool m_bSetToTimeOnHit;
};

USTRUCT(BlueprintType)
struct FEX359_ThrowEffectInfoSet
{
	GENERATED_BODY()
public:
	TArray<struct FEX359_ThrowEffectInfo> m_ThrowEffectInfoArray;
	class UParticleSystem* m_ParticleClass;
	bool m_bAttach;
	class ATresProjectileBase* m_OwnerProj;
};

USTRUCT(BlueprintType)
struct FEX359_ThrowInfo
{
	GENERATED_BODY()
public:
	float m_fStopTime;
	bool m_bStopTime;
	float m_fLifeTime;
	bool m_bLifeTime;
	bool m_iNoStopOnHit;
	bool m_iNoDestroyOnHit;
	float m_fLifeTimeAfterHit;
};

USTRUCT(BlueprintType)
struct FTresShotParam_e_ex701
{
	GENERATED_BODY()
public:
	int Num;
	float Angle;
	float HomingStartTime;
	float HomingTargetRange;
};

USTRUCT(BlueprintType)
struct FTresParamProjectileComboHitSoloParam
{
	GENERATED_BODY()
public:
	float Interval;
};

USTRUCT(BlueprintType)
struct FTresParamProjectileComboHit
{
	GENERATED_BODY()
public:
	class UClass* GeneratedClass;
	TArray<struct FTresParamProjectileComboHitSoloParam> SpawnParam;
	FVector SpawnOffset;
	FName BaseAtkId;
	FName LastAtkId;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx771_AttractBT04Param
{
	GENERATED_BODY()
public:
	class ATresActor_e_ex771_Attract* m_pAttract;
	class AActor* m_pTarget;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx773_AttractBT04Param
{
	GENERATED_BODY()
public:
	class ATresActor_e_ex773_Attract* m_pAttract;
	class AActor* m_pTarget;
};

USTRUCT(BlueprintType)
struct FBX901_ComboInfo
{
	GENERATED_BODY()
public:
	float m_fDesiredTargetDistance;
	float m_fMaxTractionDistance;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_dw401_DevilTornadoParam
{
	GENERATED_BODY()
public:
	float m_pro_InitMoveSpped;
	float m_pro_MaxMoveSpped;
	float m_pro_AddMoveSpped;
	float m_pro_TurnSpped;
	float m_pro_RushTime;
	float m_pro_SubMoveSpped;
	float m_pro_NextRushTime;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_dw401_CycloneEffectParam
{
	GENERATED_BODY()
public:
	float m_ScaleMin;
	float m_ScaleMax;
	float m_ScaleChangeTime;
	float m_MoveRate;
	float m_MaxRotSpeed;
	float m_CreateDelay;
};

USTRUCT(BlueprintType)
struct FPoleFireGroundStabEffectParam_e_ex043
{
	GENERATED_BODY()
public:
	int m_iNotifyParam;
	class UParticleSystem* m_GroundStabEffectParticleSystem;
	float m_fWorldGroundHeight;
	float m_fGroundStabEffectSpawnHeight;
	FVector m_GroundStabEffectLocationOffset;
	FRotator m_GroundStabEffectRotationOffset;
	bool m_bGroundStabEffectLoopSpawn;
	float m_fGroundStabEffectSpawnInterval;
	class ATresCharPawnBase* MyCharPawn;
};

USTRUCT(BlueprintType)
struct FTresFollowParams_e_ex107
{
	GENERATED_BODY()
public:
	float FollowSpeed;
	float FollowAngle;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx304ProjectileSpawnInfo
{
	GENERATED_BODY()
public:
	float SpawnAngleYaw;
	float SpawnAnglePitch;
};

USTRUCT(BlueprintType)
struct FWaveInfo_e_ex310
{
	GENERATED_BODY()
public:
	int iNotifyParam;
	FVector vOffset;
	bool bPolarOffset;
	float fLength;
	float fVelocity;
	float fYaw;
	float fAttackInterval;
};

USTRUCT(BlueprintType)
struct FWaveSet_e_ex310
{
	GENERATED_BODY()
public:
	class UClass* pWaveSpawner;
	class UClass* pOneCollision;
	TArray<struct FWaveInfo_e_ex310> WaveInfoArray;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx353ProjectileSpawnInfo
{
	GENERATED_BODY()
public:
	float SpawnAngleYaw;
	float SpawnAnglePitch;
	float LifeTime;
};

USTRUCT(BlueprintType)
struct FEX354_ClusterShotInfo
{
	GENERATED_BODY()
public:
	int m_iMaxHitNum;
	bool m_bMaxHitNum;
	int m_iMaxGuardNum;
	bool m_bMaxGuardNum;
	bool m_bStartMoveAll;
	float m_fMinMoveWaitTime;
	float m_fMaxMoveWaitTime;
	float m_fMoveWaitTimeSingle;
	float m_fSpreadAngle;
	float m_fMaxMoveAngle;
	bool m_fMoveStraightOnTargetOut;
	bool m_bDebugDisp;
	class AActor* m_TargetActor;
};

USTRUCT(BlueprintType)
struct FEX355_SwingTractionInfo
{
	GENERATED_BODY()
public:
	int iNotifyID;
	FString Comment;
	TEnumAsByte<EEX355_SwingTractionHorizontalDir> TractionDir;
	FVector vTractionOffset;
	bool bPawnRotAsDir;
	float fMaxHorizontalTractionDistance;
	TEnumAsByte<EEX355_MoveVelocityType> TractionVelocityType;
	float fTractionInterpExp;
	bool bNoTractionOnLand;
	float fHeightFromLand;
};

USTRUCT(BlueprintType)
struct FEX355_SwingTractionVerticalInfo
{
	GENERATED_BODY()
public:
	int iNotifyID;
	FString Comment;
	TEnumAsByte<EEX355_SwingTractionDir> TractionDir;
	FVector vTractionOffset;
	float fMaxVerticalTractionDistance;
	TEnumAsByte<EEX355_MoveVelocityType> TractionVelocityType;
	float fTractionInterpExp;
	bool bNoTractionOnLand;
	float fHeightFromLand;
};

USTRUCT(BlueprintType)
struct FWaveInfo_e_ex359
{
	GENERATED_BODY()
public:
	int iNotifyParam;
	FVector vOffset;
	bool bPolarOffset;
	float fLength;
	float fVelocity;
	float fYaw;
	float fAttackInterval;
	float fHeightAdjustVelocity_Up;
	float fHeightAdjustVelocity_Down;
	float fHeightAdjustOffset;
};

USTRUCT(BlueprintType)
struct FWaveSet_e_ex359
{
	GENERATED_BODY()
public:
	class UClass* pWaveSpawner;
	class UClass* pOneCollision;
	TArray<struct FWaveInfo_e_ex359> WaveInfoArray;
};

USTRUCT(BlueprintType)
struct FEX355_SwingThrowExplodeInfo
{
	GENERATED_BODY()
public:
	bool bExplodeOnHeight;
	float fExplodeHeightOffset;
	bool bExplodeOnHorizontalDistance;
	float fExplodeHorizontalDistance;
	bool bExplodeOnTime;
	float fExplodeTime;
	float fExplodeMinTime;
	bool bExplodeMinTime;
	float fExplodeMinDistance;
	bool bExplodeMinDistance;
};

USTRUCT(BlueprintType)
struct FEX355_SwingThrowDirection
{
	GENERATED_BODY()
public:
	bool bAimTarget;
	FVector vAimTargetOffset;
	float fMaxPitch;
	float fMinPitch;
	FRotator rAimRot;
	struct FEX355_SwingThrowExplodeInfo SwingThrowExplodeLandInfo;
};

USTRUCT(BlueprintType)
struct FEX355_SwingWeaponGroundHitEffectInfo
{
	GENERATED_BODY()
public:
	int m_iNotifyID;
	class UParticleSystem* m_WeaponGroundHitEffectClass;
	FVector m_vSpawnLocOffset;
	bool m_bSpawnOnLandOnly;
	float fHeightFromLand;
};

USTRUCT(BlueprintType)
struct FTresPhantomBlitzHomingParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly)
	float HomingSpeedYaw;
    
	UPROPERTY(EditDefaultsOnly)
	float HomingSpeedPitch;
    
	UPROPERTY(EditDefaultsOnly)
	float HomingLimitAnglePitch;
    
	UPROPERTY(EditDefaultsOnly)
	float HomingEndDistance;
    
	UPROPERTY(EditDefaultsOnly)
	float AimLocationOffsetDistance;
    
	UPROPERTY(EditDefaultsOnly)
	float AimLocationAfterTime;
    
	TRESGAME_API FTresPhantomBlitzHomingParam();
};

USTRUCT(BlueprintType)
struct FTresPhantomBlitzQuickTurnaroundExecuteParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly)
	TArray<int32> QuickTurnaroundExecuteNumList;
    
	TRESGAME_API FTresPhantomBlitzQuickTurnaroundExecuteParam();
};

USTRUCT(BlueprintType)
struct FEX359_DashTractionInfo
{
	GENERATED_BODY()
public:
	int iNotifyID;
	FString Comment;
	float fDashGoalToTargetDistance;
	float fMaxTractionDistance;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx361DarkMineInfo
{
	GENERATED_BODY()
public:
	ETresEnemyEx361SettingKind SettingKind;
	int DarkMineNum;
	float BetweenDarkMineDist;
	float DarkMineDist;
	bool bConsiderHeight;
	float DarkMineHeight;
	float DarkMineOffset;
};

USTRUCT(BlueprintType)
struct FTresE_EX367_DarkShootingPatternParam
{
	GENERATED_BODY()
public:
	float m_ShotWaitTime;
	FVector m_Offset;
};

USTRUCT(BlueprintType)
struct FTresE_EX781MarkerShotParam
{
	GENERATED_BODY()
public:
	float m_MarkerWaitTime;
	float m_ShotStartTime;
	int m_ShotNum;
	float m_ShotIntervalTime;
	FVector m_Offset;
};

USTRUCT(BlueprintType)
struct FDebrisDetails_e_he903_DebrisLand
{
	GENERATED_BODY()
public:
	class UClass* m_Projectile;
	FRotator m_rShotAngleOffset;
	bool m_bHoming;
};

USTRUCT(BlueprintType)
struct FTripleBreakRootMotionScaleParam_e_ex043
{
	GENERATED_BODY()
public:
	float Distance;
	float RootMotionScale;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx302ProjectileSpawnInfo
{
	GENERATED_BODY()
public:
	float SpawnAngle;
};

USTRUCT(BlueprintType)
struct FOneCollInfo_e_ex310
{
	GENERATED_BODY()
public:
	int iNotifyParam;
	class UClass* pOneCollision;
};

USTRUCT(BlueprintType)
struct FWaveOneCollInfo_e_ex310
{
	GENERATED_BODY()
public:
	TArray<struct FOneCollInfo_e_ex310> OneCollInfoArray;
};

USTRUCT(BlueprintType)
struct FTresEnemyex351ProjectileSpawnInfo
{
	GENERATED_BODY()
public:
	float SpawnAngle;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx351ProjectileInfoL
{
	GENERATED_BODY()
public:
	FRotator SpawnAngle;
	float SpawnDistance;
	FRotator FireAngle;
	float FireDelay;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx351SpawnInfoL
{
	GENERATED_BODY()
public:
	class UClass* FreezeShotProjectileClass;
	bool bIsBaseTarget;
	TArray<struct FTresEnemyEx351ProjectileInfoL> ProjectileInfoL;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx351FreezeShotSpawnWorker
{
	GENERATED_BODY()
public:
	struct FTresEnemyEx351SpawnInfoL SpawnInfo;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx351FreezeShotInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FOneCollInfo_e_ex359
{
	GENERATED_BODY()
public:
	int iNotifyParam;
	class UClass* pOneCollision;
};

USTRUCT(BlueprintType)
struct FWaveOneCollInfo_e_ex359
{
	GENERATED_BODY()
public:
	TArray<struct FOneCollInfo_e_ex359> OneCollInfoArray;
};

USTRUCT(BlueprintType)
struct FTresPairCardParam_e_ex356
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "FTresPairCardParam_e_ex356")
	float IntervalTime;

	UPROPERTY(EditDefaultsOnly, Category = "FTresPairCardParam_e_ex356")
	float PressStartTargetDistance;

	UPROPERTY(EditDefaultsOnly, Category = "FTresPairCardParam_e_ex356")
	float AttackStartDelayTime;

	UPROPERTY(EditDefaultsOnly, Category = "FTresPairCardParam_e_ex356")
	TEnumAsByte<ETresEnemyPressCardAttribute_e_ex356::Type> AttributeType;
};

USTRUCT(BlueprintType)
struct FTresNaruikazuchiProjectileGenerateParam
{
	GENERATED_BODY()
public:
	float Range;
	float IntervalDistance;
	float IntervalTime;
	float HomingAngle;
};

USTRUCT(BlueprintType)
struct FDebrisDetails_e_he903_DebrisAir
{
	GENERATED_BODY()
public:
	class UClass* m_Projectile;
	FRotator m_rShotAngleOffset;
	bool m_bHoming;
};

USTRUCT(BlueprintType)
struct FTresMotion_e_ex011_Bombardment
{
	GENERATED_BODY()
public:
	class UAnimSequenceBase* StartAnimData;
	class UAnimSequenceBase* LoopAnimData;
	class UAnimSequenceBase* EndAnimData;
};

USTRUCT(BlueprintType)
struct FDeviationShotInfo_e_ex306
{
	GENERATED_BODY()
public:
	float fDeviationRate;
	float fMaxDeviationTargetVelocity;
	bool bNoVerticalDiviation;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx351AvaterParam
{
	GENERATED_BODY()
public:
	float AppearAngle;
	float AvaterDistance;
	ETresEnemyEx351WarpDirection Direction;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx351TimeRushComboDefine
{
	GENERATED_BODY()
public:
	bool bNoInOrderData;
	FString Comment;
	int JoinNum;
};

USTRUCT(BlueprintType)
struct FTresEx353EveryDirectionShotParam
{
	GENERATED_BODY()
public:
	float LoopPauseTime;
	float PauseTime;
	float NextIntervalTime;
	float NextMissIntervalTime;
	bool bInfluencedMissPauseTime;
	int NextEraseNum;
	int NextMissEraseNum;
};

USTRUCT(BlueprintType)
struct FTresAvatarAttackLocationTypeParam_e_ex358
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresEnemyAvatarAttackAppearLocation_e_ex358> LocationType;
	float OffsetAngle;
	float Distance;
};

USTRUCT(BlueprintType)
struct FTresAvatarAttackAppearParam_e_ex358
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresEnemyAvatarAttackAppearLocation_e_ex358> LocationType;
	struct FTresAvatarAttackLocationTypeParam_e_ex358 CustomLocationTypeParam;
	bool bEnableSyncTargetHeight;
	float OffsetHeight;
	float OffsetAngle;
	float Distance;
	bool bEnableFixedLookAtAngle;
	float FixedLookAtOffsetAngle;
	float LookAtOffsetAngle;
	float DelayTime;
	bool bCalcAppearLocationDelayAfter;
};

USTRUCT(BlueprintType)
struct FTresAvatarAttackParam_e_ex358
{
	GENERATED_BODY()
public:
	class UWildDanceActionParamBase_e_ex358* ActionData;
	TArray<struct FTresAvatarAttackAppearParam_e_ex358> AppearParamList;
};

USTRUCT(BlueprintType)
struct FTresWildDanceAppearParam_e_ex358
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresEnemyWildDanceAppearLocation_e_ex358> LocationType;
	float OffsetAngle;
	float Distance;
	float DelayTime;
	bool bCalcAppearLocationDelayAfter;
	TEnumAsByte<ETresEnemyChangeManualLockonPriority_e_ex358> ChangeManualLockonPriority;
};

USTRUCT(BlueprintType)
struct FTresWildDanceOneActionParam_e_ex358
{
	GENERATED_BODY()
public:
	class UWildDanceActionParamBase_e_ex358* ActionData;
	class UWildDanceActionParamBase_e_ex358* AirActionData;
	float AirActionExecuteTargetHeight;
};

USTRUCT(BlueprintType)
struct FTresWildDanceAllActionParam_e_ex358
{
	GENERATED_BODY()
public:
	struct FTresWildDanceAppearParam_e_ex358 AppearParam;
	TArray<struct FTresWildDanceOneActionParam_e_ex358> ActionList;
};

USTRUCT(BlueprintType)
struct FTresWildDanceParam_e_ex358
{
	GENERATED_BODY()
public:
	TArray<struct FTresWildDanceAllActionParam_e_ex358> ActionParamList;
};

USTRUCT(BlueprintType)
struct FMeleeRootMotionScaleParam_e_ex358
{
	GENERATED_BODY()
public:
	float Distance;
	float RootMotionScale;
};

USTRUCT(BlueprintType)
struct FRaiseCutRootMotionScaleParam_e_ex761
{
	GENERATED_BODY()
public:
	float Distance;
	float RootMotionScale;
};

USTRUCT(BlueprintType)
struct FProjectileSpawnInfo
{
	GENERATED_BODY()
public:
	FName m_SocketName;
	int m_iMaxShotCount;
	float m_fProjectileVariance;
	float m_fMinProjectileDiameter;
	float m_fMaxProjectileDiameter;
};

USTRUCT(BlueprintType)
struct FTornadoBlowSet
{
	GENERATED_BODY()
public:
	float fMaxStartDistance;
	float fEndDistance;
	float fBlowTime;
	float fEndHeight;
	bool bForceEndHeight;
	bool bSetFloatingMode;
	bool bBlowToDebrisOwnerDir;
};

USTRUCT(BlueprintType)
struct FTresE_dw405_AvatarStyleFinishVelocityParam
{
	GENERATED_BODY()
public:
	float StartTime;
	bool bEnableSettingAcceleration;
	float Acceleration;
	float InterpolationTime;
	float TargetSpeed;
};

USTRUCT(BlueprintType)
struct FMeleeRootMotionScaleParam_e_ex043
{
	GENERATED_BODY()
public:
	float Distance;
	float RootMotionScale;
};

USTRUCT(BlueprintType)
struct FEX355_DashRoamDir
{
	GENERATED_BODY()
public:
	TEnumAsByte<EEX355_DashRoamDir> m_DashRoamDir;
	TEnumAsByte<EEX355_DashRoamDir> m_DashAttackDir;
	TEnumAsByte<EEX355_DashMiddleAction> m_DashMiddleAction;
	float m_fDashMiddleActionTime;
};

USTRUCT(BlueprintType)
struct FEX355_ThrowAirSet
{
	GENERATED_BODY()
public:
	class UClass* m_ProjectileClass;
	class ATresCharPawnBase* m_Owner;
	class AActor* m_Target;
};

USTRUCT(BlueprintType)
struct FEX355_DashThrowTimingInfo
{
	GENERATED_BODY()
public:
	int m_iIndex;
	int m_iRoamCount;
	int m_iAttackCount;
	float m_fRoamTime;
	bool m_bAttack;
};

USTRUCT(BlueprintType)
struct FEX355_DashClaymoreInfo
{
	GENERATED_BODY()
public:
	float m_fRevolveRadius;
	class UCurveFloat* m_RevolveRadiusCurve;
	float m_fRevolveSpeed;
	class UCurveFloat* m_RevolvePhaseCurve;
	float m_fRevolveHeight;
	class UCurveFloat* m_RevolveHeightCurve;
	class UCurveVector* m_RotationCurve;
	struct FWaveOneCollInfo_e_ex359 m_OneCollInfo;
	FVector m_WaveSpawnLocOffset;
	float m_fWaveWaitTime;
	class UParticleSystem* m_GroundHitEffectClass;
};

USTRUCT(BlueprintType)
struct FEX355_DashClaymoreSet
{
	GENERATED_BODY()
public:
	class ATresProjectile_e_ex355_Claymore_Idle* m_Claymore;
	class ATresCharPawnBase* m_Owner;
};

USTRUCT(BlueprintType)
struct FEX355_DashClaymoreMap
{
	GENERATED_BODY()
public:
	class ATresProjectileBase* m_pLastProj;
};

USTRUCT(BlueprintType)
struct FEX355_DashClaymoreSpawnWaitSet
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_Gigas_BulletParam
{
	GENERATED_BODY()
public:
	float m_HomingInterval;
	float m_HomingEndDist;
};

USTRUCT(BlueprintType)
struct FBX901_DarkCubeMine_DarkWingInfo
{
	GENERATED_BODY()
public:
	float m_fMaxMoveDistance;
	float m_fMinMoveDistance;
};

USTRUCT(BlueprintType)
struct FTresE_dw405NormalComboAttackParam
{
	GENERATED_BODY()
public:
	class UClass* AttackDefinition;
	FName OverrideAttackDataIDName;
	bool bEnableBeforeEndAttackStart;
	float AttackStartOffsetTime;
	float AppearOffsetAngle;
	float AppearOffsetDistance;
};

USTRUCT(BlueprintType)
struct FTresE_dw405NormalComboAttackParamType
{
	GENERATED_BODY()
public:
	struct FTresE_dw405NormalComboAttackParam Type[0x2];
};

USTRUCT(BlueprintType)
struct FTresE_dw405NormalComboParam
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresEnemyDw405AttackPossibleKind> AttackPossibleKind;
	bool bDisableLastAttackNotifyDisappear;
	float LastAttackPostWaitTime;
	bool bEnableFixedAngle;
	float AppearAngle;
	TArray<struct FTresE_dw405CounterAttackParam> CounterAttackParam;
	float CounterRate;
	TArray<struct FTresE_dw405NormalComboAttackParamType> AttackParams;
};

USTRUCT(BlueprintType)
struct FTresSurroundDarkMineSpawnParams_e_ex352
{
	GENERATED_BODY()
public:
	int m_DMNum;
	float m_DMBootRange;
	float m_DMTimeToExplodeAfterBoot;
	float m_DMRadius;
	float m_DMSpreadStartTime;
	float m_DMSpreadSpeed;
	float m_DMSpreadTime;
};

USTRUCT(BlueprintType)
struct FEX355_CutDownClaymoreInfo
{
	GENERATED_BODY()
public:
	FVector m_AimLocOffset;
};

USTRUCT(BlueprintType)
struct FEX355_CutDownTractionInfo
{
	GENERATED_BODY()
public:
	int iNotifyID;
	FString Comment;
	FVector vTractionOffset;
	float fMaxHorizontalTractionDistance;
	float fMaxVerticalTractionDistance;
	bool bMaxVerticalTractionDistance;
};

USTRUCT(BlueprintType)
struct FEX359_LaserOnTimeInfo
{
	GENERATED_BODY()
public:
	float m_fNotifyTime;
	float m_fModifySpawnTFTime;
	bool m_bModifySpawnTF;
	int m_iNotify;
};

USTRUCT(BlueprintType)
struct FEX359_LaserInfo
{
	GENERATED_BODY()
public:
	int m_iNotify;
	class UClass* m_pProjClass;
	FVector m_vSpawnLocOffset;
	bool m_bPolarSpawnLocOffset;
	TEnumAsByte<EEX359_SpawnLocType> m_SpawnLocType;
	TEnumAsByte<EEX359_SpawnDirType> m_SpawnDirType;
	float m_fSpawnDirYawOffset;
	float m_fLifeTime;
	bool m_bLifeTime;
	bool m_bIgnoreSameIndexHit;
};

USTRUCT(BlueprintType)
struct FEX359_LaserInfoSet
{
	GENERATED_BODY()
public:
	TArray<struct FEX359_LaserInfo> m_LaserInfoArray;
};

USTRUCT(BlueprintType)
struct FEX359_LaserOnTimeInfoSet
{
	GENERATED_BODY()
public:
	TArray<struct FEX359_LaserOnTimeInfo> m_LaserOnTimeInfoArray;
	struct FEX359_LaserInfoSet m_LaserInfoSet;
	class ATresCharPawnBase* m_Owner;
	class AActor* m_Target;
	class AActor* m_SpawnActor;
};

USTRUCT(BlueprintType)
struct FEX359_LaserRainShotEffectTimeSet
{
	GENERATED_BODY()
public:
	float m_fTime;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx361ProjectileSpawnInfo
{
	GENERATED_BODY()
public:
	float ShockWaveRotYaw;
};

USTRUCT(BlueprintType)
struct FBigTornadoProjPosBoneInfo
{
	GENERATED_BODY()
public:
	FName m_BoneName;
};

USTRUCT(BlueprintType)
struct FBigTornadoProjInfo
{
	GENERATED_BODY()
public:
	TEnumAsByte<EBigTornadoProjPos> m_ProjPos;
	float m_fProjPosRadiusDeviation;
	float m_fProjAngleDeviation;
	TArray<class UClass*> m_ProjectileClassArray;
	int m_iMaxShotCount;
};

USTRUCT(BlueprintType)
struct FBigTornadoHomingProjInfo : public FBigTornadoProjInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FDiveAttackPosition_e_he903
{
	GENERATED_BODY()
public:
	FVector m_vDiveAttackStartOffset;
	FRotator m_vDiveAttackStartRot;
	bool bDiveAttackStartOffset;
	bool bDiveAttackStartRot;
	FVector m_vDiveAttackEndOffset;
	bool bDiveAttackEndOffset;
};

USTRUCT(BlueprintType)
struct FTresE_dw405LineComboAttackParam
{
	GENERATED_BODY()
public:
	class UClass* AttackDefinition;
	bool bEnableBeforeEndAttackStart;
	float AttackStartOffsetTime;
	float AppearOffsetDistance;
	float AppearDistance;
};

USTRUCT(BlueprintType)
struct FTresE_dw405LineComboParam
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresEnemyDw405AttackPossibleKind> AttackPossibleKind;
	bool bDisableLastAttackNotifyDisappear;
	float LastAttackPostWaitTime;
	bool bEnableFixedAngle;
	float AppearAngle;
	float AppearMaxAngle;
	float AppearLocationCorrectionRate;
	TArray<struct FTresE_dw405LineComboAttackParam> AttackParams;
};

USTRUCT(BlueprintType)
struct FWarpSet_e_ex306
{
	GENERATED_BODY()
public:
	FName m_GoalBBKeyName;
	float m_WarpTime;
	class ATresCharPawnBase* m_pOwner;
};

USTRUCT(BlueprintType)
struct FTresE_dw405IllusionBlizzagaProjectileParam
{
	GENERATED_BODY()
public:
	float AppearAngle;
	float AppearDistance;
	float AppearHeight;
	float AppearOffsetTime;
	float ShotOffsetTime;
	bool bEnableSettingShotYaw;
	float ShotYaw;
	bool bEnableSettingShotPitch;
	float ShotPitch;
	float OverrideRange;
	bool bOverrideEnableSettingShotYaw;
	float OverrideShotYaw;
	bool bOverrideEnableSettingShotPitch;
	float OverrideShotPitch;
	bool bOverrideEnableHoming;
};

USTRUCT(BlueprintType)
struct FTres_e_ex352_DarkShotSpawnParam
{
	GENERATED_BODY()
public:
	FVector Offset;
};

USTRUCT(BlueprintType)
struct FEX354_RunShotTimeInfo
{
	GENERATED_BODY()
public:
	float m_fShotTime;
	bool m_bRight;
};

USTRUCT(BlueprintType)
struct FEX359_CutDownTractionInfo
{
	GENERATED_BODY()
public:
	float m_fTargetDistance;
	float m_fMaxTractionDistance;
	float m_fYaw;
	TEnumAsByte<EEX359_CutDownYawType> m_YawType;
	struct FEX359_BeamInfoSet m_BeamInfoSet;
	struct FEX359_LaserInfoSet m_LaserInfoSet;
};

USTRUCT(BlueprintType)
struct FEX359_LaserWaveInfo
{
	GENERATED_BODY()
public:
	struct FEX359_LaserInfo m_LaserInfo;
	float m_fProjSpawnStartWaitTime;
	int m_iMaxProjNum;
	float m_fProjSpawnInterval;
	float m_fProjSpawnDistance;
	class ATresCharPawnBase* m_Owner;
	class AActor* m_Target;
	class AActor* m_SpawnActor;
};

USTRUCT(BlueprintType)
struct FEX359_LaserWaveInfoSet
{
	GENERATED_BODY()
public:
	TArray<struct FEX359_LaserWaveInfo> m_LaserWaveInfoArray;
};

USTRUCT(BlueprintType)
struct FEX359_LaserRainTriangleGuardInfo
{
	GENERATED_BODY()
public:
	class ATresProjectileBase* m_Proj;
};

USTRUCT(BlueprintType)
struct FEX359_LaserRainTriangleGuardInfoSet
{
	GENERATED_BODY()
public:
	TArray<struct FEX359_LaserRainTriangleGuardInfo> m_InfoArray;
};

USTRUCT(BlueprintType)
struct FEX359_GuardBeamInfoSet
{
	GENERATED_BODY()
public:
	struct FEX359_BeamInfo m_BeamInfo;
	float m_fSpawnWaitTime;
	int m_iBeamSpawnNum;
	float m_fHomingAccel;
	float m_fHomingMaxVelocity;
	float m_fRotateAccel;
	float m_fRotateMaxVelocity;
	float m_fSpreadWaitTime;
	float m_fSpreadTime;
	float m_fSpreadRadius;
	float m_fOpenWaitTime;
	float m_fOpenTime;
	float m_fOpenRadius;
	TEnumAsByte<EEX359_SpawnDirType> m_OpenDirType;
	float m_fOpenDirOffset;
	float m_fOpenDirDetermineTime;
	bool m_bDetermineOpenDirByTime;
	int m_iOpenBeamNum;
	float m_fShotWaitTime;
	class ATresCharPawnBase* m_Owner;
	class AActor* m_Target;
	class AActor* m_SpawnActor;
	TArray<class ATresProjectileBase*> m_ProjArray;
	struct FEX359_LaserRainTriangleGuardInfoSet m_GuardInfoSet;
};

USTRUCT(BlueprintType)
struct FTresE_EX362DarkVolleyParam
{
	GENERATED_BODY()
public:
	FVector m_Offset;
	FVector m_Rot;
};

USTRUCT(BlueprintType)
struct FTresShotParam_e_ex701_Attack9
{
	GENERATED_BODY()
public:
	float EndRadius;
	float EndDistance;
	float MaxDistance;
	float HomingStartTime;
	float HomingTargetRange;
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
struct FTresTeaCupPuddingData
{
	GENERATED_BODY()
public:
	//class ATresEnemyPawn_e_ex050* m_pPuddingPawn;
};

USTRUCT(BlueprintType)
struct FTresAutoNavLinkExclusiveVolumeInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAutoNavLinkExclusiveVolumeInfo")
	class UClass* AreaClass;

	struct FNavAgentSelector SupportedAgents;
};

USTRUCT(BlueprintType)
struct FTresGenerateNavLinkArgs
{
	GENERATED_BODY()
public:
	struct FFloatInterval Height;
	struct FFloatInterval Length;
	float SamplingDistance;
	float DefaultSearchAngle;
	float CornerSearchAngle;
	float SamplingAngle;
	float MinPathLengthReductionPercentage;
};

USTRUCT(BlueprintType)
struct FTresE_EX367AvaterSlashParam
{
	GENERATED_BODY()
public:
	float m_IntervalTime;
	TEnumAsByte<EMoveSlashTypes_e_ex367> m_MoveSlashType;
	float m_MoveRot;
	FVector m_PopOffset;
	bool m_UseOwnerLocation;
};

USTRUCT(BlueprintType)
struct FTresBattleAreaCameraData_e_ex761
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresEnemy_e_ex761_BattleAreaB_Camera> CameraTypeAtBattleAreaB;
};

USTRUCT(BlueprintType)
struct FTresBattleLevelAutoData
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresWorldCode> WorldCode;
	TEnumAsByte<ETresWorldAreaCode> AreaCode;
	FName LabelStart;
	FName LabelEnd;
	int BattleLevel;
	int BattleLevelDLC;
};

USTRUCT(BlueprintType)
struct FTresEmotionPoint
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEmotionPoint")
	float m_Hope;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEmotionPoint")
	float m_Fear;
};

USTRUCT(BlueprintType)
struct FTresTakeDamageLogInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresStartAttackLogInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresStateLogInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresRecoveryHpMpFpLogInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresAttackHitInvincibleCharLogInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresSelfieCameraActionDef
{
	GENERATED_BODY()
public:
	int RewardIndex;
	int BattlePortalClearCount;
	int8 LoopActionFlag;
	int8 DefaultActionFlag;
	FName MotionName_In;
	FName MotionName_Loop;
	FName MotionName_Out;
	FName MotionNameUnderwater_In;
	FName MotionNameUnderwater_Loop;
	FName MotionNameUnderwater_Out;
	FString RewardStr;
};

USTRUCT(BlueprintType)
struct FTresOverlapInfo
{
	GENERATED_BODY()
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
struct FTres_ValidateAction_Param
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_ValidateAction_Param")
	class UClass* ActionDefinitionOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_ValidateAction_Param")
	FBlackboardKeySelector Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_ValidateAction_Param")
	bool bValidateLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_ValidateAction_Param")
	bool bValidateOrientation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_ValidateAction_Param")
	bool bValidateExecution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_ValidateAction_Param")
	float offsetLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_ValidateAction_Param")
	float offsetRatio;
};

USTRUCT(BlueprintType)
struct FTresBlackboardBoolValueModifierInOutParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardBoolValueModifierInOutParam")
	bool bEnableCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardBoolValueModifierInOutParam")
	FBlackboardKeySelector CheckBlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardBoolValueModifierInOutParam")
	FBlackboardKeySelector BlackboardKeyValueA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardBoolValueModifierInOutParam")
	bool bUseBlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardBoolValueModifierInOutParam")
	bool bValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardBoolValueModifierInOutParam")
	FBlackboardKeySelector BlackboardKeyValueB;
};

USTRUCT(BlueprintType)
struct FTresBlackboardClassValueModifierInOutParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardClassValueModifierInOutParam")
	FBlackboardKeySelector BlackboardKeyValueA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardClassValueModifierInOutParam")
	bool bUseBlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardClassValueModifierInOutParam")
	class UClass* Class;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardClassValueModifierInOutParam")
	FBlackboardKeySelector BlackboardKeyValueB;
};

USTRUCT(BlueprintType)
struct FTresBlackboardFloatValueModifierInOutParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardFloatValueModifierInOutParam")
	bool bEnableCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardFloatValueModifierInOutParam")
	FBlackboardKeySelector CheckBlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardFloatValueModifierInOutParam")
	FBlackboardKeySelector BlackboardKeyValueA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardFloatValueModifierInOutParam")
	bool bUseBlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardFloatValueModifierInOutParam")
	TEnumAsByte<ETresBlackboardValueModifierInOutMethod::Type> MethodType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardFloatValueModifierInOutParam")
	float Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardFloatValueModifierInOutParam")
	FBlackboardKeySelector BlackboardKeyValueB;
};

USTRUCT(BlueprintType)
struct FTresBlackboardIntValueModifierInOutParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardIntValueModifierInOutParam")
	bool bEnableCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardIntValueModifierInOutParam")
	FBlackboardKeySelector CheckBlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardIntValueModifierInOutParam")
	FBlackboardKeySelector BlackboardKeyValueA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardIntValueModifierInOutParam")
	bool bUseBlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardIntValueModifierInOutParam")
	TEnumAsByte<ETresBlackboardValueModifierInOutMethod::Type> MethodType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardIntValueModifierInOutParam")
	int Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardIntValueModifierInOutParam")
	FBlackboardKeySelector BlackboardKeyValueB;
};

USTRUCT(BlueprintType)
struct FTresBlackboardObjectValueModifierInOutParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardObjectValueModifierInOutParam")
	FBlackboardKeySelector BlackboardKeyValueA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardObjectValueModifierInOutParam")
	bool bUseBlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardObjectValueModifierInOutParam")
	class UObject* Object;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardObjectValueModifierInOutParam")
	FBlackboardKeySelector BlackboardKeyValueB;
};

USTRUCT(BlueprintType)
struct FTresBlackboardRotatorValueModifierInOutParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardRotatorValueModifierInOutParam")
	FBlackboardKeySelector BlackboardKeyValueA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardRotatorValueModifierInOutParam")
	bool bUseBlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardRotatorValueModifierInOutParam")
	FRotator Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardRotatorValueModifierInOutParam")
	FBlackboardKeySelector BlackboardKeyValueB;
};

USTRUCT(BlueprintType)
struct FTresBlackboardVectorValueModifierInOutParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardVectorValueModifierInOutParam")
	FBlackboardKeySelector BlackboardKeyValueA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardVectorValueModifierInOutParam")
	bool bUseBlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardVectorValueModifierInOutParam")
	TEnumAsByte<ETresBlackboardValueModifierInOutMethod::Type> MethodType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardVectorValueModifierInOutParam")
	FVector Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardVectorValueModifierInOutParam")
	FBlackboardKeySelector BlackboardKeyValueB;
};

USTRUCT(BlueprintType)
struct FTresBlackboardFloatValueModifier
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardFloatValueModifier")
	TEnumAsByte<ETresValueModifierMethod::Type> ValueModifierType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardFloatValueModifier")
	FBlackboardKeySelector BBKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresBlackboardFloatValueModifier")
	float Value;
};

USTRUCT(BlueprintType)
struct FTresActionTaskParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresActionTaskParam")
	FName ParamName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresActionTaskParam")
	float ParamValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresActionTaskParam")
	ETresActionTaskParamType ParamType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresActionTaskParam")
	bool m_bValueEditable;
};

USTRUCT(BlueprintType)
struct FTres_GenerateRandomNumber_Param
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_GenerateRandomNumber_Param")
	FBlackboardKeySelector m_BlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_GenerateRandomNumber_Param")
	bool m_bUseRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_GenerateRandomNumber_Param")
	float m_MinValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTres_GenerateRandomNumber_Param")
	float m_MaxValue;
};

USTRUCT(BlueprintType)
struct FTresCameraTargetInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	FVector m_TargetOffset;
    
	UPROPERTY(EditAnywhere)
	FVector m_TargetLocalOffset;
    
	UPROPERTY(Transient)
	AActor* m_TargetActor;
    
	UPROPERTY(Export, Transient)
	UTresLockonTargetComponent* m_TargetComp;
    
	TRESGAME_API FTresCameraTargetInfo();
};

USTRUCT(BlueprintType)
struct FHoldCameraParam
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector m_CameraLocalOffset;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FRotator m_CameraLocalRotation;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float m_LimitPitchMax;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float m_LimitPitchMin;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float m_FovDefault;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float m_ZoomFovMax;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float m_ZoomFovMin;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float m_ZoomTotalTime;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float m_CameraFStopMax;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float m_CameraFStopMin;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float m_CameraFStopDefault;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float m_HeightOffsetMax;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float m_HeightOffsetMin;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float m_RollMax;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float m_RollMin;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	uint8 m_bCalcDOF: 1;
    
	TRESGAME_API FHoldCameraParam();
};

USTRUCT(BlueprintType)
struct FDetectMarkerCheckArea
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Left;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Right;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Top;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Buttom;
    
	TRESGAME_API FDetectMarkerCheckArea();
};

USTRUCT(BlueprintType)
struct FHoldCameraVoice
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTresFieldVoice* FieldVoiceAsset;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 Rate;
    
	TRESGAME_API FHoldCameraVoice();
};

USTRUCT(BlueprintType)
struct FTCPATH_SPLINEGROUP
{
	GENERATED_BODY()
public:
	TArray<class ATresCameraPathSplineActor*> AryActor;
};

USTRUCT(BlueprintType)
struct FTresUICampCharacterParam
{
	GENERATED_BODY()
public:
	UPROPERTY(Transient)
	ATresUIActor* UIActor;
    
	UPROPERTY(Transient)
	UTresUIDataAssetStatus* UIStatusData;
    
	TRESGAME_API FTresUICampCharacterParam();
};

USTRUCT(BlueprintType)
struct FTresShipDamageParam
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName m_AttackName;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool m_bForce;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool m_bActionCancel;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float m_SpeedRate;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float m_PitchRollPower;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float m_YawPower;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float m_MovePower;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float m_WaitTimer;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float m_SpeedRateTime;
    
	TRESGAME_API FTresShipDamageParam();
};

USTRUCT(BlueprintType)
struct FSmokeTrigger
{
	GENERATED_BODY()
public:
	float m_triggerHpPer;
	FName m_attachSocketName;
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

	UPROPERTY(EditDefaultsOnly)
	uint8 m_InitProtectorSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrInitEquip")
	TArray<ETresItemDefProtector> m_Protectors;

	UPROPERTY(EditDefaultsOnly)
	uint8 m_InitAccessorySlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresChrInitEquip")
	TArray<ETresItemDefAccessory> m_Accessorys;

	UPROPERTY(EditDefaultsOnly)
	uint8 m_InitItemSlot;

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
struct FTresCollShapeAssetUnit
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCollShapeAssetUnit")
	FName m_GrpName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCollShapeAssetUnit")
	TEnumAsByte<ETresCollision::Type> ShapeType;

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

USTRUCT(BlueprintType)
struct FTresClaymoreIdleInfo_e_ex306
{
	GENERATED_BODY()
public:
	float m_fRotationSpeed;
	float m_fRevolveSpeed;
	float m_fRevolveRadius;
	float m_fRevolveHeight;
};

USTRUCT(BlueprintType)
struct FTresClaymoreSwingDownInfo_e_ex306
{
	GENERATED_BODY()
public:
	float m_fRevolveRadius;
	float m_fRevolveHeight;
};

USTRUCT(BlueprintType)
struct FTresClaymoreIdleInfo_e_ex355
{
	GENERATED_BODY()
public:
	float m_fRotationSpeed;
	float m_fRevolveSpeed;
	float m_fRevolveRadius;
	float m_fRevolveHeight;
};

USTRUCT(BlueprintType)
struct FTresClaymoreSwingDownInfo_e_ex355
{
	GENERATED_BODY()
public:
	float m_fRevolveRadius;
	float m_fRevolveHeight;
};

USTRUCT(BlueprintType)
struct FTresClipData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	bool bExclusionMode;
    
	UPROPERTY(EditAnywhere)
	float ClipLength;
    
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AActor>> ClassArray;
    
	UPROPERTY(EditAnywhere)
	FName ClippingGroupName;
    
	UPROPERTY(EditAnywhere)
	bool bUseClippingEvent;
    
	UPROPERTY(EditAnywhere)
	bool bDisableTick;
    
	UPROPERTY(EditAnywhere)
	bool bDisableDitherFade;
    
	TRESGAME_API FTresClipData();
};

USTRUCT(BlueprintType)
struct FTresUIPreloadInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(Transient)
	uint32 Handle;
    
	UPROPERTY(Transient)
	FString PackageName;
    
	UPROPERTY(Transient)
	FString Name;
    
	UPROPERTY(Transient)
	TArray<FString> PreloadQueue;
    
	UPROPERTY(Transient)
	TArray<UObject*> LoadedObjectsHolder;
    
	TRESGAME_API FTresUIPreloadInfo();
};

USTRUCT(BlueprintType)
struct FTresCollisionDistanceData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	bool bExclusionMode;
    
	UPROPERTY(EditAnywhere)
	float Length;
    
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AActor>> ClassArray;
    
	TRESGAME_API FTresCollisionDistanceData();
};

struct FTresCollMgrSubTickFunction : public FTickFunction
{
};

struct FTresCollMgrDetectUpdateGrassBumpTickFunction : public FTresCollMgrSubTickFunction
{
};

struct FTresCollMgrDetectPhysMatTickFunction : public FTresCollMgrSubTickFunction
{
};

struct FTresCollMgrFootStepEffectGenTickFunction : public FTresCollMgrSubTickFunction
{
};

struct FTresCollMgrDetectBodyCollTickFunction : public FTresCollMgrSubTickFunction
{
};

USTRUCT(BlueprintType)
struct FTresAssetReferences
{
	GENERATED_BODY()
public:
	FName m_Tag;
	TArray<struct FStringAssetReference> m_Assets;
	TArray<class UObject*> m_Residents;
};

USTRUCT(BlueprintType)
struct FTresComNpcReaction
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	float m_fMinRange;
    
	UPROPERTY(EditAnywhere)
	float m_fMaxRange;
    
	UPROPERTY(EditAnywhere)
	float m_fLimitDir;
    
	UPROPERTY(EditAnywhere)
	float m_fInRange;
    
	UPROPERTY(EditAnywhere)
	float m_fInDir;
    
	UPROPERTY(EditAnywhere)
	float m_fCoolDownTime;
    
	UPROPERTY(EditAnywhere)
	TArray<FVector> m_IgnorePoints;
    
	TRESGAME_API FTresComNpcReaction();
};

USTRUCT(BlueprintType)
struct FTresComNpcActorInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly)
	FName m_ActorType;
    
	UPROPERTY(EditDefaultsOnly)
	int32 m_BodyType;
    
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> m_ActorClass;
    
	UPROPERTY(EditDefaultsOnly)
	int32 m_MaxActorNum;
    
	TRESGAME_API FTresComNpcActorInfo();
};

USTRUCT(BlueprintType)
struct FTresComNpcLookInfo
{
	GENERATED_BODY()
public:
	TArray<FName> m_AnimTypes;
	TArray<FName> m_LookAtAnims;
};

USTRUCT(BlueprintType)
struct FTresComNpcPrizeInfo
{
	GENERATED_BODY()
public:
	int m_Num;
	class UTresGimmickDropPrizeSet* m_pPrizeDataAsset;
};

USTRUCT(BlueprintType)
struct FTresComNpcActMotion
{
	GENERATED_BODY()
public:
	FName m_AnimName;
	float m_fBlendInTime;
	bool m_bLoop;
	bool m_bEnableRootMotion;
	bool m_bWaitMotion;
	bool m_bWaitTurn;
	bool m_bSetIdle;
};

USTRUCT(BlueprintType)
struct FTresComNpcActTarget
{
	GENERATED_BODY()
public:
	FName m_TargetName;
	float m_fMinLength;
	float m_fMaxLength;
	float m_fLimitDir;
	int m_RequiredNum;
	float m_fPriorty;
};

USTRUCT(BlueprintType)
struct FTresComNpcActMoveNormal
{
	GENERATED_BODY()
public:
	FName m_TargetName;
	float m_fLimitTimer;
	int m_nWalkMode;
	bool m_bNextMove;
	bool m_bDisableAvoid;
	bool m_bLoopMode;
	float m_fPriorty;
};

USTRUCT(BlueprintType)
struct FTresComNpcActRandomValue
{
	GENERATED_BODY()
public:
	float m_fBase;
	int m_Random;
	float m_fScale;
};

USTRUCT(BlueprintType)
struct FTresComNpcActSelectBranch
{
	GENERATED_BODY()
public:
	int m_Id;
	int m_SeqIndex;
};

USTRUCT(BlueprintType)
struct FTresComNpcActLookTarget
{
	GENERATED_BODY()
public:
	FName m_TargetName;
	float m_fPriorty;
	float m_fLookAtBlendTime;
	float m_fMinDegree;
};

USTRUCT(BlueprintType)
struct FTresComNpcFaceMotion
{
	GENERATED_BODY()
public:
	FName m_EyeAnimName;
	float m_fEyeBlendInTime;
};

USTRUCT(BlueprintType)
struct FTresComNpcActGreet
{
	GENERATED_BODY()
public:
	FName m_AnimName;
	FName m_ActionName;
	int m_Rate;
};

USTRUCT(BlueprintType)
struct FTresComNpcActionSeqDatas
{
	GENERATED_BODY()
public:
	FName m_SeqName;
	int m_LinkActorMax;
	int m_LookAtMax;
	TArray<uint32_t> m_Commands;
	TArray<struct FTresComNpcActMotion> m_Motions;
	TArray<struct FTresComNpcActTarget> m_Targets;
	TArray<struct FTresComNpcActMoveNormal> m_MoveNormals;
	TArray<struct FTresComNpcActRandomValue> m_RandomValues;
	TArray<struct FTresComNpcActSelectBranch> m_Branchs;
	TArray<struct FTresComNpcActLookTarget> m_LookTargets;
	TArray<struct FTresComNpcFaceMotion> m_FaceMotions;
	TArray<struct FTresComNpcActGreet> m_GreetActions;
};

USTRUCT(BlueprintType)
struct FTresComNpcActionSetValue
{
	GENERATED_BODY()
public:
	int m_Value;
	FName m_ScriptName;
};

USTRUCT(BlueprintType)
struct FTresComNpcActionSetDatas
{
	GENERATED_BODY()
public:
	FName m_DataName;
	bool m_bDropItem;
	bool m_bTargetTurn;
	TArray<struct FTresComNpcActionSetValue> m_Values;
};

USTRUCT(BlueprintType)
struct FTresComNpcEntitySetData
{
	GENERATED_BODY()
public:
	FVector m_Location;
	FRotator m_Rotation;
	FName m_RecordName;
	FName m_IdleAnimName;
	FName m_ActionSeqName;
	FName m_MasterPoseSeqName;
	int16_t m_PoseGroupType;
	int16_t m_ReactionType;
	int16_t m_BodyColType;
	int16_t m_ScaleType;
	FName m_AnimActorType;
	FName m_MeshActorType;
	FName m_EntityName;
	FName m_FaceAnimName;
	bool m_bDisableLookAt;
};

USTRUCT(BlueprintType)
struct FTresComNpcEntityMoveData
{
	GENERATED_BODY()
public:
	FName m_EntityName;
	TArray<FName> m_ReplaceMovePoints;
	TArray<FVector> m_MovePoints;
};

USTRUCT(BlueprintType)
struct FTresComNpcEntityLinkData
{
	GENERATED_BODY()
public:
	FName m_EntityName;
	TArray<FName> m_LinkActors;
};

USTRUCT(BlueprintType)
struct FTresComNpcBodySetupData
{
	GENERATED_BODY()
public:
	int m_BodyType;
	FName m_attachBoneName;
	FVector m_BodySize;
	FVector m_BodyLocation;
	FRotator m_BodyRotation;
	bool m_bEnableDamage;
	bool m_bEnablePush;
	bool m_bEnableCamera;
};

USTRUCT(BlueprintType)
struct FTresComNpcScaleData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresComNpcScaleData")
	float m_fWidthBase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresComNpcScaleData")
	float m_fWidthMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresComNpcScaleData")
	float m_fPriortyRangeScale;
};

USTRUCT(BlueprintType)
struct FTresComNpcEntityVoiceData
{
	GENERATED_BODY()
public:
	FName m_EntityName;
	float m_fVoiceRange;
	TArray<FName> m_VoiceLists;
};

USTRUCT(BlueprintType)
struct FTresComNpcReplaceMeshData
{
	GENERATED_BODY()
public:
	class USkeletalMesh* m_MeshData;
	class UMaterialInterface* m_MatData;
	int m_VoiceType;
};

USTRUCT(BlueprintType)
struct FTresComNpcMeshSetDatas
{
	GENERATED_BODY()
public:
	FName m_MeshName;
	TArray<struct FTresComNpcReplaceMeshData> m_MeshLists;
};

USTRUCT(BlueprintType)
struct FTresComNpcAttachMesh
{
	GENERATED_BODY()
public:
	FName m_MeshName;
	FName m_SoketName;
	bool m_bChangeMesh;
};

USTRUCT(BlueprintType)
struct FTresComNpcVoiceSetDatas
{
	GENERATED_BODY()
public:
	FName m_VoiceName;
	FName m_ActionName;
	TArray<class UTresFieldVoice*> m_VoiceLists;
};

USTRUCT(BlueprintType)
struct FTresComNpcRandomVoiceDatas
{
	GENERATED_BODY()
public:
	int m_VoiceType;
	TArray<class USoundBase*> m_VoiceLists;
};

USTRUCT(BlueprintType)
struct FTresComNpcRandomFieldVoiceDatas
{
	GENERATED_BODY()
public:
	int m_VoiceType;
	TArray<class UTresFieldVoice*> m_VoiceLists;
};

USTRUCT(BlueprintType)
struct FTresControlledRandom
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FTresControlledRandom")
	TEnumAsByte<ETresRandomDistributionType::Type> Distribution;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FTresControlledRandom")
	float Period;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FTresControlledRandom")
	TArray<float> Weights;
};

USTRUCT(BlueprintType)
struct FTresCoopDefinitionParamBP
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresCoopSimultaneousRushInfo
{
	GENERATED_BODY()
public:
	float m_Distance;
	float m_Yaw;
	float m_Pitch;
	ETresCoopColorSmokeKind m_ColorKind;
};

USTRUCT(BlueprintType)
struct FCameraEventParam_e_ex761
{
	GENERATED_BODY()
public:
	float CenterEffectSpawnDelayTime;
	float VisualChangeStartDelayTime;
	float LightningStartDelayTime;
};

USTRUCT(BlueprintType)
struct FAttackAppearParam_e_ex761
{
	GENERATED_BODY()
public:
	float IntervalTime;
	float Angle;
	float Distance;
	float Height;
	float OffsetYaw;
	float OffsetPitch;
};

USTRUCT(BlueprintType)
struct FAttackSendParam_e_ex761
{
	GENERATED_BODY()
public:
	float StartDistance;
	float StartHeight;
	float StartAccel;
	float StartMaxSpeed;
	float StartOffsetAngle;
	float HomingMoveRate;
	float LoopTime;
	float InitSpeed;
	float Acceleration;
	float MaxSpeed;
	float HomingSpeedXY;
	float HomingSpeedZ;
	float HomingTargetOffsetRadius;
	float HomingEndDistance;
};

USTRUCT(BlueprintType)
struct FAttackParam_e_ex761
{
	GENERATED_BODY()
public:
	struct FAttackAppearParam_e_ex761 AppearParam;
	struct FAttackSendParam_e_ex761 SendParam;
};

USTRUCT(BlueprintType)
struct FTresAccelAttackInfo_e_ex310
{
	GENERATED_BODY()
public:
	bool bValid;
	float A;
	float B;
	float x_min;
	float x_max;
};

USTRUCT(BlueprintType)
struct FEX355_AccelTractionInfo
{
	GENERATED_BODY()
public:
	int iNotifyID;
	FString Comment;
	float fVerticalTractionOffset;
	float fMaxVerticalTractionDistance;
};

USTRUCT(BlueprintType)
struct FEX355_AccelDirectionInfo
{
	GENERATED_BODY()
public:
	float Distance;
	TEnumAsByte<EEX355_AccelDir> Direction;
};

USTRUCT(BlueprintType)
struct FEX355_AccelWaveTimingInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FEX359_AccelWaveTimingInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresGummiShipHeader
{
	GENERATED_BODY()
public:
	FName m_VerName;
	FString m_Name;
	ETresItemDefGumiShipBP m_ItemID;
	uint16 m_nTotalBaseGummiNum;
	uint16 m_nTotalDecoGummiNum;
};

USTRUCT(BlueprintType)
struct FTresGummiShipAbility
{
	GENERATED_BODY()
public:
	int8 m_nAbilityID01;
	int8 m_nAbilityID02;
	int8 m_nAbilityID03;
	int8 m_nAbilityID04;
	int8 m_nAbilityID05;
	int8 m_nAbilityID06;
	int8 m_nAbilityID07;
	int8 m_nAbilityID08;
	int8 m_nAbilityID09;
	int8 m_nAbilityID10;
	int8 m_nAbilityID11;
	int8 m_nAbilityID12;
	int8 m_nAbilityID13;
	int8 m_nAbilityID14;
	int8 m_nAbilityID15;
	int8 m_nAbilityID16;
	int8 m_nAbilityID17;
	int8 m_nAbilityID18;
	int8 m_nAbilityID19;
	int8 m_nAbilityID20;
	int8 m_nAbilityID21;
	int8 m_nAbilityID22;
};

USTRUCT(BlueprintType)
struct FTresGummiShipSticker
{
	GENERATED_BODY()
public:
	ETresStickerType m_nStickerType;
	int8 m_nStickerID;
	int8 m_posX;
	int8 m_posY;
	int8 m_posZ;
	float m_roll;
	float m_Pitch;
	float m_Yaw;
	float m_Scale;
	int8 m_flip;
};

USTRUCT(BlueprintType)
struct FTresGummiShipPartsStruct
{
	GENERATED_BODY()
public:
	int8 m_indexX;
	int8 m_indexY;
	int8 m_indexZ;
	ETresGummiType m_gummiKind;
	int8 m_gummiID;
	int8 m_sizeX;
	int8 m_sizeY;
	int8 m_sizeZ;
	float m_rotX;
	float m_rotY;
	float m_rotZ;
	int8 m_pointX;
	int8 m_pointY;
	int8 m_pointZ;
	int8 m_materialID;
	int8 m_patternID;
	int8 m_baseColor;
	int8 m_materilColor;
	int8 m_flipX;
	int8 m_flipY;
	int8 m_flipZ;
	int8 m_Offset;
};

USTRUCT(BlueprintType)
struct FTresGummiBaseParam
{
	GENERATED_BODY()
public:
	int m_nCost;
	int m_nHP;
	int m_nSpeed;
	int m_nPower;
	int m_nRoll;
	int m_nAttack;
	int m_nTurn;
	class UTexture2D* m_CT1_PaletteTexture;
	float m_CT2_PaletteNum;
	class UTexture2D* m_CT3_MaskTexture_Base;
	class UTexture2D* m_CT3_MaskTexture_Deco;
	float m_CT4_MaskTexUVIndex;
	float m_CT5_MaskTexUVTiling;
	struct FLinearColor m_CT_CustomColor;
	float m_CT_PaletteUse;
	bool m_isFlip;
	bool m_isMaterial;
	bool m_isPattern;
	bool m_isSticker;
	bool m_isColorChange;
	bool m_isAnim;
	bool m_isUVAnim;
	float m_fPreviewScale;
};

USTRUCT(BlueprintType)
struct FTresRealGummiShipStruct
{
	GENERATED_BODY()
public:
	class USkeletalMesh* m_pSkeltalMesh;
	class USkeletalMeshComponent* m_pSkeletalMeshComponent;
	class USceneComponent* m_pSceneComponent;
	int64_t m_nUniqueID;
	int8_t m_nMterialID;
	int8_t m_nPattern;
	struct FTresGummiBaseParam m_nPartsParam;
	struct FTresGummiBaseParam m_nMaterialParam;
	class UTexture2D* m_NormalTexture;
	float m_NormalTexUVIndex;
	class UTexture2D* m_AOTexture;
	float m_AOTexUVIndex;
	int8_t m_nPartsColorIndex;
	int8_t m_nMaterialColorIndex;
	float m_RotateAxisX;
	float m_RotateAxisY;
	float m_RotateAxisZ;
	float m_RotateSpeed;
	float m_UVScrollSpeedU;
	float m_UVScrollSpeedV;
	struct FTresGummiShipPartsStruct planData;
};

USTRUCT(BlueprintType)
struct FTresEffectAttachParts
{
	GENERATED_BODY()
public:
	class USkeletalMeshComponent* m_pSkeletalMeshComponent;
};

USTRUCT(BlueprintType)
struct FTresTornadoDebrisTransformInfo
{
	GENERATED_BODY()
public:
	float DebrisLocation_R;
	float DebrisLocation_P;
	float DebrisLocation_H;
	float DebrisLocation_TargetHeightRate;
	float RevolveSpeed;
	FRotator RotateSpeed;
	float Amplitude;
	float Frequency;
	float StateMoveVelocity;
	bool bDestinationEffect;
};

USTRUCT(BlueprintType)
struct FTresTornadoDebrisUnit
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresTornadoDebrisStateName> StateName;
	TArray<struct FTresTornadoDebrisTransformInfo> DebrisArray;
};

USTRUCT(BlueprintType)
struct FTresTornadoDebrisDestinationEffectInfo
{
	GENERATED_BODY()
public:
	float fDisableDistance;
	float fScale;
	bool bDetachOnDisappear;
};

USTRUCT(BlueprintType)
struct FTresDebugMenuImageResource
{
	GENERATED_BODY()
public:
	int m_TextureIndex;
	float m_U;
	float m_V;
	float m_UL;
	float m_VL;
	bool m_UseScaleGrid;
	float m_ScaleGridLeft;
	float m_ScaleGridRight;
	float m_ScaleGridTop;
	float m_ScaleGridBottom;
	float m_ScaleGridWidth;
	float m_ScaleGridHeight;
};

USTRUCT(BlueprintType)
struct FDrawTextFilterParam
{
	GENERATED_BODY()
public:
	TEnumAsByte<EDrawTextFilterType> m_FilterType;
	float m_BlurX;
	float m_BlurY;
	float m_Strength;
	struct FColor m_Color;
	float m_Angle;
	float m_Distance;
};

USTRUCT(BlueprintType)
struct FTresDebugMenuTextResource
{
	GENERATED_BODY()
public:
	FString m_FontFace;
	float m_FontSize;
	struct FColor m_Color;
	float m_Width;
	float m_Height;
	TEnumAsByte<ETresDebugMenuTextAlignment> m_Alignment;
	TEnumAsByte<ETresDebugMenuTextVAlignment> m_VAlignment;
	TArray<struct FDrawTextFilterParam> m_Filters;
	FString m_TextString;
};

USTRUCT(BlueprintType)
struct FTresDebugMenuFrameLabel
{
	GENERATED_BODY()
public:
	FName m_LabelName;
	int m_LabelFrame;
};

USTRUCT(BlueprintType)
struct FTresDebugMenuIntPair
{
	GENERATED_BODY()
public:
	int m_FirstInt;
	int m_SecondInt;
};

USTRUCT(BlueprintType)
struct FTresDebugMenuTween
{
	GENERATED_BODY()
public:
	int m_StartFrame;
	int m_EndFrame;
	TEnumAsByte<ETresDebugMenuTweenType> m_TweenType;
	float m_Acceleration;
	struct FTresDebugMenuIntPair m_ElementPair;
};

USTRUCT(BlueprintType)
struct FTresDebugMenuFrame
{
	GENERATED_BODY()
public:
	int m_Start;
	int m_End;
	int m_TweenIndex;
	FName m_Script;
	TArray<int> m_Elements;
};

USTRUCT(BlueprintType)
struct FTresDebugMenuLayer
{
	GENERATED_BODY()
public:
	TArray<struct FTresDebugMenuFrame> m_Frames;
};

USTRUCT(BlueprintType)
struct FTresDebugMenuTimeline
{
	GENERATED_BODY()
public:
	TArray<struct FTresDebugMenuLayer> m_Layers;
};

USTRUCT(BlueprintType)
struct FTresDebugMenuMovieClipResource
{
	GENERATED_BODY()
public:
	float m_FrameRate;
	int m_Duration;
	TArray<struct FTresDebugMenuFrameLabel> m_Labels;
	TArray<struct FTresDebugMenuTween> m_Tween;
	TArray<struct FTresDebugMenuTimeline> m_Timelines;
};

USTRUCT(BlueprintType)
struct FTresDebugMenuElement
{
	GENERATED_BODY()
public:
	FName m_ElementName;
	float m_X;
	float m_Y;
	float m_Width;
	float m_Height;
	TEnumAsByte<ETresDebugMenuBlendMode> m_BlendMode;
	struct FLinearColor m_ColorMultiplier;
	struct FLinearColor m_ColorOffset;
	TEnumAsByte<ETresDebugMenuResourceType> m_ResourceType;
	int m_ResourceIndex;
	FVector2D m_LayoutFactor;
};

USTRUCT(BlueprintType)
struct FTresDebugMenuCustomPart
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresDebugMenuResourceType> m_ResourceType;
	int m_ResourceIndex;
	class UClass* CustomClass;
};

USTRUCT(BlueprintType)
struct FTresDebugMenuMotionObjectKeyFrame
{
	GENERATED_BODY()
public:
	FVector2D m_Anchor;
	FVector2D m_Next;
	FVector2D m_Previous;
	float m_Time;
};

USTRUCT(BlueprintType)
struct FTresDebugMenuMotionObjectProperty
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresDebugMenuMotionObjectPropertyType> m_PropertyType;
	TArray<struct FTresDebugMenuMotionObjectKeyFrame> m_KeyFrames;
};

USTRUCT(BlueprintType)
struct FTresDebugMenuMotionObject
{
	GENERATED_BODY()
public:
	float m_X;
	float m_Y;
	float m_Width;
	float m_Height;
	TArray<int> m_Properties;
};

USTRUCT(BlueprintType)
struct FTresInputStruct
{
	GENERATED_BODY()
public:
	float m_FirstRepeatTime;
	float m_RepeatTime;
};


USTRUCT(BlueprintType)
struct FTresDecoPartsUnit
{
	GENERATED_BODY()
public:
	FName m_attachSocketName;
	class UClass* m_Asset;
	FName m_ColorChangeMaterialName;
	class UTexture2D* m_ColorChangePointTexture;
	struct FLinearColor m_ChangePatternColor1;
	struct FLinearColor m_ChangePatternColor2;
	float m_GradePow;
	struct FLinearColor m_3Color_Top;
	float m_3ColorModeMode;
	float m_halfUVTil_VMove;
	float m_halfUVTilingMode;
	float m_LeatherMode;
	float m_MeshTypeModeChange;
	float m_MoveMeshArea;
	float m_MoveNoMeshVisMaskArea;
};

USTRUCT(BlueprintType)
struct FSQEX_CommonEffectData
{
	GENERATED_BODY()
public:
	FName CommonKey;
	int GroupID;
	class UParticleSystem* CommonEffect;
};

USTRUCT(BlueprintType)
struct FSQEX_DesignatedAttachData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_DesignatedAttachData")
	FName Key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_DesignatedAttachData")
	class USQEX_ParticleAttachDataAsset* DesignatedAttachData;
};

USTRUCT(BlueprintType)
struct FTresEncountVolumeEntry
{
	GENERATED_BODY()
public:
	TArray<FName> m_GroupNames;
	FVector m_StartOffset;
	FVector m_EndOffset;
	bool m_WorldOffsetZ;
	int m_TryCount;
	float m_EscapeDistance;
	int m_LotteryWeight;
	bool m_bSkipNextTime;
	class UClass* m_Troops;
	FName m_InternalGroupName;
};

USTRUCT(BlueprintType)
struct FEX901_ActionKey
{
	GENERATED_BODY()
public:
	TArray<FName> m_ActionKeyArray;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx353ThornBeamProjectileInfo
{
	GENERATED_BODY()
public:
	float FireDelayTime;
	float InitialSpeed;
	float AccelSpeed;
	float MaxSpeed;
	float HomingStartTime;
	float HomingAbsTime;
	float HomingSpeedXY;
	float HomingAccelSpeedXY;
	float HomingMaxSpeedXY;
	float HomingSpeedZ;
	float HomingAccelSpeedZ;
	float HomingMaxSpeedZ;
	float HomingMinDist;
	FRotator ShotDirection;
	float MissMinDist;
	float MissMaxDist;
	float MissMinHeight;
	float MissMaxHeight;
	bool bIsSetAngle;
	float MissMinAngle;
	float MissMaxAngle;
	bool bIsDecelSpeed;
	float DecelStartTime;
	float DecelSpeed;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx353ThornBeamBeforeHitInfo
{
	GENERATED_BODY()
public:
	FString Comment;
	bool bIsSpawnThornSpaceEffect;
	bool bIsBaseCamera;
	bool bIsKeepDistance;
	float LifeTime;
	float BaseCameraRotateYaw;
	float TargetDistXY;
	float TargetDistZ;
	bool bIsAttach;
	FName AttachBoneName;
	FVector Offset;
	TArray<struct FTresEnemyEx353ThornBeamProjectileInfo> ThornBeamProjectileInfo;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx353ThornBeamAfterHitInfo
{
	GENERATED_BODY()
public:
	FString Comment;
	ETresEnemyEx353CatchAfterSituation CatchAfterSituation;
	bool bIsMoveShield;
	float CanMoveShieldMinDist;
	float CanMoveShieldMaxDist;
	float AimShieldSpeed;
	float MinMoveDist;
	float EndMoveTime;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx353ThornBeamIndex
{
	GENERATED_BODY()
public:
	FString Comment;
	TArray<int> ThornBeamIndex;
};

USTRUCT(BlueprintType)
struct FTresCardActionParam_e_ex307
{
	GENERATED_BODY()
public:
	float MoveScale;
};

USTRUCT(BlueprintType)
struct FTresCardAction_e_ex307
{
	GENERATED_BODY()
public:
	int8 ActionType;
	struct FTresCardActionParam_e_ex307 ActionParam[0x4];
};

USTRUCT(BlueprintType)
struct FTresCardSpawnInfo_e_ex307
{
	GENERATED_BODY()
public:
	float HitPointRate;
	int Num[0x3];
	TEnumAsByte<ETresEnemy_e_ex307_DummyCardSpawn> DummyCardsSpawnType;
	struct FTresCardAction_e_ex307 CardAction[0x3];
};

USTRUCT(BlueprintType)
struct FTresEnemyDarkSidePawnBase_LockOnParam
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresEnemydw407Region> Region;
	FName BoneName;
	float BoneOffset;
};

USTRUCT(BlueprintType)
struct FTresEnemyPawn_e_ca901_JointParam
{
	GENERATED_BODY()
public:
	FName m_JointName;
	int m_OppositeAttachIndex;
	ETresEnemyEx071DeckKind m_Kind;
};

USTRUCT(BlueprintType)
struct FEnemyShipCoreData
{
	GENERATED_BODY()
public:
	class UParticleSystemComponent* m_CoreParticleComponent;
	class UParticleSystemComponent* m_CoreThonParticleComponent;
	class UTresLockonTargetComponent* m_CoreLockOnComponent;
	class UTresBodyCollPrimitive* m_CoreBodyCollPrim;
};

USTRUCT(BlueprintType)
struct FEnemyShipDustEffectData
{
	GENERATED_BODY()
public:
	class UParticleSystemComponent* m_Particle;
};

USTRUCT(BlueprintType)
struct FTresEnemyShipCoreSpawnData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "FTresEnemyShipCoreSpawnData")
	FName m_SocketName;

	UPROPERTY(EditAnywhere, Category = "FTresEnemyShipCoreSpawnData")
	TEnumAsByte<ETresEnemyShip::Type> m_LocType;
};

USTRUCT(BlueprintType)
struct FTresEnemyShipFadeParameter
{
	GENERATED_BODY()
public:
	FName m_FadeAllName;
	FName m_DriverFadeName;
	float m_FadeTimeAppear;
	float m_FadeTimeAppearOnSpawn;
	float m_FadeTimeDisappear;
	float m_SwitchAtkCollValue;
	float m_SwitchBodyCollValue;
	float m_SwitchDamageSmokeValue;
	float m_StartFadeTimeAfterEffect;
	FName m_MastFadeName0;
	FName m_MastFadeName1;
	FName m_MastFadeName2;
	FName m_MastFadeName3;
	float m_MastFadeApplyHPRate0;
	float m_MastFadeApplyHPRate1;
	float m_MastFadeApplyHPRate2;
	float m_MastFadeTime0;
	float m_MastFadeTime1;
	float m_MastFadeTime2;
	float m_MastFadeTime3;
	float m_MastFadeDelayTime2;
	float m_MastFadeOnDieDelayTime;
};

USTRUCT(BlueprintType)
struct FBX901_IdleFlyInfo
{
	GENERATED_BODY()
public:
	FVector m_vOffsetMin;
	FVector m_vOffsetMax;
	FVector m_vOffsetPeriod;
};

USTRUCT(BlueprintType)
struct FBX901_EffectGroupID
{
	GENERATED_BODY()
public:
	int ID;
};

USTRUCT(BlueprintType)
struct FSQEX_SplineMoverExecutor
{
	GENERATED_BODY()
public:
	bool m_IsReverse;
	bool m_IsLoop;
	bool m_IsStraightSpline;
	class ASQEX_SplineActor* m_pCurrentSplineActor;
	class ASQEX_SplineActor* m_pSplineActorFirst;
	class ASQEX_SplineActor* m_pSplineActorLast;
	class USplineComponent* m_pUnrealSplineComponent;
	float m_Speed;
};

USTRUCT(BlueprintType)
struct Fca404aParam
{
	GENERATED_BODY()
public:
	float m_DefaultSpeed;
	float m_MaxYawSpeed;
	float m_MaxYawSpeedForOwnerRot;
	float m_YawSpeedAccelForOwnerRot;
	struct FFloatInterval m_YawSpeedRange;
	float m_Acceleration;
	float m_FrictionAcceleration;
	float m_Brake;
	float m_StartDashTime;
	float m_StartDashAccel;
	float m_SlowDownTime;
	float m_SlowDownSpeed;
	float m_DownSpeedPerDamage;
	float m_MinSpeedByDamage;
	float m_TakeDamageWaitTime;
	struct FFloatInterval m_DownSpeedRecoveryTime;
	float m_DamegeOscPitchRoll;
	float m_DamegeOscTime;
	float m_OscRecoverySpeed;
	float m_OscMaxLaneOffset;
	float m_OscYawSpeedPerTorqu;
	float m_OscYawMaxSpeed;
	float m_OscYawMaxAngle;
	float m_OscYawSpeedBrake;
	float m_OscYawMinTime;
};

USTRUCT(BlueprintType)
struct Fca404aSplineParam
{
	GENERATED_BODY()
public:
	float m_DefaultOffsetDistance;
	float m_MaxApproachAngle;
	float m_MaxApproachDistance;
	float m_OffsetCorrectionAddRateOnForward;
	float m_OffsetCorrectionMaxDist;
	float m_OffsetCorrectionMaxSpeed;
};

USTRUCT(BlueprintType)
struct Fca405MovementParam
{
	GENERATED_BODY()
public:
	FVector m_Param_MaelstromBaseCenter;
	float m_AngularAccel;
	float m_AngularBrake;
	float m_AngularFriction;
	struct FFloatInterval m_AngularSpeedRange;
};

USTRUCT(BlueprintType)
struct Fca405MaelstromSpawnParameter
{
	GENERATED_BODY()
public:
	struct FFloatInterval m_YawRange;
	struct FFloatInterval m_YawLimitRange;
	struct FFloatInterval m_RadiusRange;
	struct FFloatInterval m_DepthRange;
	FRotator m_RotationOffset;
	float m_RotationSpeed;
	TArray<struct FTresEnemyShipCoreSpawnData> m_CoreParamArray;
	struct FInt32Interval m_SpawnCoreNumRange;
	int m_SelectWeight;
	int m_DamageAmount;
};

USTRUCT(BlueprintType)
struct FRevengeAttacks_e_dw405
{
	GENERATED_BODY()
public:
	struct FRevengeAttacks RevengeAttacks;
	int ComboIndex;
};

USTRUCT(BlueprintType)
struct FTresSpawnEnemyParam_e_ex001a
{
	GENERATED_BODY()
public:
	float HpRate;
	class UClass* SpawnEnemyClass;
	int SpawnNum;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex003Effect
{
	GENERATED_BODY()
public:
	class UParticleSystem* m_EffData;
	FName m_EffAttachName;
};

USTRUCT(BlueprintType)
struct FTresEnemyPawn_e_ca010_CoopInfo
{
	GENERATED_BODY()
public:
	FName m_attachBoneName;
	FVector m_OffsetLoc;
	FRotator m_OffsetRot;
};

USTRUCT(BlueprintType)
struct FTresBoneNames_e_ex011
{
	GENERATED_BODY()
public:
	FName ParentConnectBoneName;
	FName ChildConnectBoneName;
};

USTRUCT(BlueprintType)
struct FTresWheelRotationWork_e_ex011
{
	GENERATED_BODY()
public:
	FName BoneName;
};

USTRUCT(BlueprintType)
struct FTresE_ex011ConnectEffectParam
{
	GENERATED_BODY()
public:
	class UParticleSystem* ConnectParticleSystem;
	class UParticleSystem* AppearParticleSystem;
	class UParticleSystem* GlowParticleSystem;
	float RespawnDistance;
	float FadeInTime;
	float FadeOutTime;
	float OffsetDistance;
};

USTRUCT(BlueprintType)
struct FTresDieParam_e_ex020
{
	GENERATED_BODY()
public:
	float InitSpeedXY;
	float InitSpeedZ;
	float GravityStartSpeedXY;
	float Brake;
	float Time;
};

USTRUCT(BlueprintType)
struct FTressEnemyEx021BlurParamater
{
	GENERATED_BODY()
public:
	FName m_ParamName;
	float m_NormalParam;
	float m_AccelParam;
};

USTRUCT(BlueprintType)
struct FTresCoopColorSmokeInfo
{
	GENERATED_BODY()
public:
	ETresCoopColorSmokeKind m_Color;
	class UParticleSystem* m_pSmokeEffect;
};

USTRUCT(BlueprintType)
struct FRegionParam_e_ex046
{
	GENERATED_BODY()
public:
	FName BreakEffectSpawnBoneName;
	FName BreakMaterialParamName;
	FName BodyCollGroupName;
	FName BaseDataTableIDName;
	FName LockOnTargetTagName;
};

USTRUCT(BlueprintType)
struct FSaveInfo_e_ex046
{
	GENERATED_BODY()
public:
	int RegionHitPoint[0x3];
	bool bInheritParam;
	bool bIsModeChangeRegionBreak;
	FVector ModeChangePawnSpawnLocation;
	FRotator ModeChangePawnSpawnRotation;
	int ModeChangePawnAppearMode;
};

USTRUCT(BlueprintType)
struct FTresEx048BladeEffectMan
{
	GENERATED_BODY()
public:
	class UParticleSystemComponent* m_BladeEffectCmp[0x2];
};

USTRUCT(BlueprintType)
struct FTresEx050SpawnInfo
{
	GENERATED_BODY()
public:
	TWeakObjectPtr<class AActor> wpSpawn;
};

USTRUCT(BlueprintType)
struct FTresEx050PuddingNum
{
	GENERATED_BODY()
public:
	int All;
	int Pile;
	int NotPile;
};

USTRUCT(BlueprintType)
struct FTresEx050EffectInfo
{
	GENERATED_BODY()
public:
	class UParticleSystem* pEffect;
	FName AttachName;
	FVector Location;
	FRotator Rotation;
};

USTRUCT(BlueprintType)
struct FSpawnEx052Actors
{
	GENERATED_BODY()
public:
	TArray<TWeakObjectPtr<class AActor>> wpActors;
};

USTRUCT(BlueprintType)
struct FEx053SpawnData
{
	GENERATED_BODY()
public:
	TWeakObjectPtr<class ATresEnemyPawn_e_ex053> wpActor;
	TWeakObjectPtr<class AActor> wpSpawn;
	float Wait;
};

USTRUCT(BlueprintType)
struct FEx053SpawnGroup
{
	GENERATED_BODY()
public:
	TArray<int> SpawnDataIndexArray;
	bool bCluster;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex054_VolcanoCraterAtkCollInfo
{
	GENERATED_BODY()
public:
	class UParticleSystemComponent* m_BurnOmenEff;
};

USTRUCT(BlueprintType)
struct FTresEx056EffectInfo
{
	GENERATED_BODY()
public:
	class UParticleSystem* pEffect;
	FName AttachName;
	FVector Location;
	FRotator Rotation;
};

USTRUCT(BlueprintType)
struct Fex064ShipBodyParameter
{
	GENERATED_BODY()
public:
	int m_ShipBodyHP;
	float m_DamageWeightFromPlayer;
	float m_DamageWeightFromEnemy;
};

USTRUCT(BlueprintType)
struct Fe_ex064_AnimParam
{
	GENERATED_BODY()
public:
	FName m_AnimName;
	struct FInt32Interval m_NumRange;
};

USTRUCT(BlueprintType)
struct Fex064WallPartsLayoutData
{
	GENERATED_BODY()
public:
	int m_SelectWeight;
	FVector m_RandLocationRange;
	FName m_AnimIdle0;
	struct Fe_ex064_AnimParam m_AnimIdleOptional1;
	struct Fe_ex064_AnimParam m_AnimIdleOptional2;
	TArray<int> m_SpawnList;
};

USTRUCT(BlueprintType)
struct Fex064WallPartsParameter
{
	GENERATED_BODY()
public:
	int m_NumWallParts;
	FVector m_BaseRelativeLocation;
	float m_RandYawRange;
	float m_BeginSpawnHPRate;
	class UClass* m_SpawnClass;
	TArray<struct Fex064WallPartsLayoutData> m_LayoutList;
};

USTRUCT(BlueprintType)
struct Fex064Parameter
{
	GENERATED_BODY()
public:
	float m_AnimDamageWaitTime;
	struct FFloatInterval m_WallPartsSpawnTimeRange;
};

USTRUCT(BlueprintType)
struct Fe_ex064_WallParam
{
	GENERATED_BODY()
public:
	FName m_ChangeMatName0;
	float m_ChangeMatValue0;
	FName m_AnimNameDamage;
	FName m_AnimNameAppear;
	FName m_AnimNameDisappear;
	struct FFloatInterval m_AnimIdleRandomRange;
	struct FFloatInterval m_AnimAppearRandomWait;
	struct FFloatInterval m_AnimDisappearRandomWait;
	FName m_ForceDeathAtkName;
	int m_BodyHP;
};

USTRUCT(BlueprintType)
struct FMissionIntervalParamTimeStamp_e_ex082
{
	GENERATED_BODY()
public:
	float ElapsedTime;
	float IntervalTime;
};

USTRUCT(BlueprintType)
struct FMissionIntervalParam_e_ex082
{
	GENERATED_BODY()
public:
	bool bEnableTimeStampInterval;
	float StartIntervalTime;
	float IntervalReduceTime;
	float MinIntervalTime;
	TArray<struct FMissionIntervalParamTimeStamp_e_ex082> TimeStampIntervalArray;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx082_SnowEffectParam
{
	GENERATED_BODY()
public:
	class UParticleSystem* Effect;
	FName BoneName;
};

USTRUCT(BlueprintType)
struct FSaveInfo_e_ex082
{
	GENERATED_BODY()
public:
	bool bInheritParam;
	bool bIsModeChangeRegionBreak;
	FVector ModeChangePawnSpawnLocation;
	FRotator ModeChangePawnSpawnRotation;
	int ModeChangePawnAppearMode;
};

USTRUCT(BlueprintType)
struct FTresEnemyXIIIPlayerKilledVoiceData
{
	GENERATED_BODY()
public:
	ETresPlayerUniqueID PlayerUniqueID;
	class USoundBase* VOICE;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx302AfterImageEffect
{
	GENERATED_BODY()
public:
	class UParticleSystem* WarpEffectData;
	class UParticleSystem* VisibleEffectData;
};

USTRUCT(BlueprintType)
struct FTresAfterImageVisibleWorker
{
	GENERATED_BODY()
public:
	class UParticleSystemComponent* m_VisibleEffectCmp;
};

USTRUCT(BlueprintType)
struct FTresEx304HitEffectInfo
{
	GENERATED_BODY()
public:
	class UParticleSystem* m_EffectAsset;
	TArray<FName> m_AtkGrpNames;
};

USTRUCT(BlueprintType)
struct FTresEx304HitEffectManager
{
	GENERATED_BODY()
public:
	class UParticleSystemComponent* m_LaserEffectCmp;
	class UParticleSystemComponent* m_SparkEffectCmp;
};

USTRUCT(BlueprintType)
struct FEffectSpawnParam_e_ex304a
{
	GENERATED_BODY()
public:
	bool bStartSpawned;
	float SpawnTimeRate;
	class UParticleSystem* SpawnParticleSystem;
};

USTRUCT(BlueprintType)
struct FEffectControlParameterVector_e_ex304a
{
	GENERATED_BODY()
public:
	FName EffectParameterName;
	float InterpTime;
	FVector StartParam;
	FVector EndParam;
};

USTRUCT(BlueprintType)
struct FEffectControlParameterFloat_e_ex304a
{
	GENERATED_BODY()
public:
	FName EffectParameterName;
	float InterpTime;
	float StartParam;
	float EndParam;
};

USTRUCT(BlueprintType)
struct FEffectControlParam_e_ex304a
{
	GENERATED_BODY()
public:
	float ChangeStartTimeRate;
	TArray<struct FEffectControlParameterVector_e_ex304a> VectorParamList;
	TArray<struct FEffectControlParameterFloat_e_ex304a> FloatParamList;
};

USTRUCT(BlueprintType)
struct FVoiceSet_e_ex306
{
	GENERATED_BODY()
public:
	TArray<class USoundBase*> VoiceDataArray;
	TEnumAsByte<EVoiceType_e_ex306> VoiceType;
};

USTRUCT(BlueprintType)
struct FTresDarkRushCircleParam
{
	GENERATED_BODY()
public:
	float m_IntervalRange;
	int m_m_InitAngle;
	int m_m_IntervalAngle;
	float m_IntervalTime;
	float m_EndRange;
	float m_MoveSpeed;
	bool m_IsMoveReverse;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx351AfterImageEffect
{
	GENERATED_BODY()
public:
	class UParticleSystem* WarpEffectData;
	class UParticleSystem* VisibleEffectData;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx351AfterImageVisibleWorker
{
	GENERATED_BODY()
public:
	class UParticleSystemComponent* m_VisibleEffectCmp;
	class UParticleSystemComponent* m_WarpEffectCmp;
};

USTRUCT(BlueprintType)
struct FTresEx353HitEffectInfo
{
	GENERATED_BODY()
public:
	class UParticleSystem* m_EffectAsset;
	TArray<FName> m_AtkGrpNames;
};

USTRUCT(BlueprintType)
struct FTresEx353HitEffectManager
{
	GENERATED_BODY()
public:
	class UParticleSystemComponent* m_LaserEffectCmp;
	class UParticleSystemComponent* m_SparkEffectCmp;
};

USTRUCT(BlueprintType)
struct FTresEx353EveryDirectionShotReserveWorker
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FEX354_FieldChangeRemote
{
	GENERATED_BODY()
public:
	TEnumAsByte<EEX354_FieldID> FieldID;
	FName RemoteName;
	FName RemoteName_OneFrameChange;
	FName RemoteName_NoCinematic;
	FName XigbalMoveRemoteName;
	FName AIRestartRemoteName;
	FName XigbalMoveActorTagName;
};

USTRUCT(BlueprintType)
struct FEX354_RemoteEventID
{
	GENERATED_BODY()
public:
	FName m_RemoteEventName;
};

USTRUCT(BlueprintType)
struct FEX355_RemoteEventID
{
	GENERATED_BODY()
public:
	FName m_RemoteEventName;
};

USTRUCT(BlueprintType)
struct FVoiceSet_e_ex355
{
	GENERATED_BODY()
public:
	TArray<class USoundBase*> VoiceDataArray;
	TEnumAsByte<EVoiceType_e_ex355> VoiceType;
};

USTRUCT(BlueprintType)
struct FEX355_EffectGroupID
{
	GENERATED_BODY()
public:
	int ID;
};

USTRUCT(BlueprintType)
struct FTresTimeGaugeParam_e_ex356
{
	GENERATED_BODY()
public:
	float InitialValue;
	float SubValueIntervalTime;
	float SubValue;
};

USTRUCT(BlueprintType)
struct FTresDeathSentenceArmorRevengeParam_e_ex357
{
	GENERATED_BODY()
public:
	FName BaseParamID;
	int RevengeStartArmorDamage;
};

USTRUCT(BlueprintType)
struct FTresEnemyEnvQueryBindParamFloat_ex358
{
	GENERATED_BODY()
public:
	FName BindName;
	float Value;
};

USTRUCT(BlueprintType)
struct FEX359_EffectGroupID
{
	GENERATED_BODY()
public:
	int ID;
};

USTRUCT(BlueprintType)
struct FEX359_RemoteEventID
{
	GENERATED_BODY()
public:
	FName m_RemoteEventName;
};

USTRUCT(BlueprintType)
struct FVoiceSet_e_ex359
{
	GENERATED_BODY()
public:
	TArray<class USoundBase*> VoiceDataArray;
	TEnumAsByte<EVoiceType_e_ex359> VoiceType;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx361CounterAfterActionPeriodInfo
{
	GENERATED_BODY()
public:
	int HPPersentage;
	int Period;
};

USTRUCT(BlueprintType)
struct FTresE_EX363DarkRushCircleParam
{
	GENERATED_BODY()
public:
	float m_IntervalRange;
	int m_InitAngle;
	int m_IntervalAngle;
	float m_IntervalTime;
	float m_EndRange;
	float m_MoveSpeed;
	bool m_IsMoveReverse;
	int m_patternID;
	bool m_TargetCenter;
};

USTRUCT(BlueprintType)
struct FTresThornWavingDummyMeshAttachInfo
{
	GENERATED_BODY()
public:
	ETresEnemyEx721HandID m_HandID;
	FName m_AttachName;
};

USTRUCT(BlueprintType)
struct FTresThornChainEffectInfo
{
	GENERATED_BODY()
public:
	class UParticleSystem* m_EffectAsset;
	FName m_AttachName;
};

USTRUCT(BlueprintType)
struct FEX734_FallInfo
{
	GENERATED_BODY()
public:
	float m_fWorldGroundHeight;
	float m_fFallBeginRelativeHeight;
	float m_fFallEndRelativeHeight;
	float m_fFallTime;
};

USTRUCT(BlueprintType)
struct FDarkRainInfo_e_ex734
{
	GENERATED_BODY()
public:
	class UClass* m_Projectile;
	float m_fSpawnRate;
	int m_iAimTargetMinInterval;
	int m_iAimTargetMaxInterval;
	float m_fAimTargetForbiddenTime;
	float m_fSpawnRadius;
};

USTRUCT(BlueprintType)
struct FParticleSystemAttachData_e_ex761
{
	GENERATED_BODY()
public:
	class UParticleSystem* ParticleSystem;
	FName AttachSocketName;
};

USTRUCT(BlueprintType)
struct FEyeLookAtWork_e_ex816
{
	GENERATED_BODY()
public:
	FName BaseBoneName;
	FRotator MinLimitRot;
	FRotator MaxLimitRot;
	float RotationSpeed;
};

USTRUCT(BlueprintType)
struct FBonePhysicsBlendRateData_e_ex816
{
	GENERATED_BODY()
public:
	FName BoneName;
	float PhysicsBlendRate;
	float StartInterpTime;
	float EndInterpTime;
};

USTRUCT(BlueprintType)
struct FBonePhysicsBlendRateDataList_e_ex816
{
	GENERATED_BODY()
public:
	TArray<struct FBonePhysicsBlendRateData_e_ex816> List;
};

USTRUCT(BlueprintType)
struct FTresAnims_e_he001a
{
	GENERATED_BODY()
public:
	FName AttackName;
	FName ReactionName;
};

USTRUCT(BlueprintType)
struct FDebrisStatePattern_e_he903
{
	GENERATED_BODY()
public:
	float fValidHpPer;
	TArray<float> fStateChangeRateArray;
};

USTRUCT(BlueprintType)
struct FDebrisStatePatternSet_e_he903
{
	GENERATED_BODY()
public:
	TArray<struct FDebrisStatePattern_e_he903> m_DebrisStatePatternArray;
};

USTRUCT(BlueprintType)
struct FFieldGenerateMapParam_e_ex357
{
	GENERATED_BODY()
public:
	float DelayTime;
	float OffsetAngle;
	float Distance;
	float FirstAttackDelayTime;
};

USTRUCT(BlueprintType)
struct FTresEquipmentAssetUnit
{
	GENERATED_BODY()
public:
	FName UnitName;
	ETresCharEquipPart m_AttachPart;
	FName AttachBoneName;
	bool m_bApplyParentScale;
	class UClass* RsrcData;
};

USTRUCT(BlueprintType)
struct FTresEquipmentAccompanyPawnAssetUnit
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresCommandKind> m_Command;
	class UClass* m_AssetData;
};

USTRUCT(BlueprintType)
struct FTresEquipWeaponSlotWork
{
	GENERATED_BODY()
public:
	class UTresEquipDataBase* m_pAsset;
};

USTRUCT(BlueprintType)
struct FTresFieldAddProjectileParam_e_ex357
{
	GENERATED_BODY()
public:
	float OffsetAngle;
	float Distance;
};

USTRUCT(BlueprintType)
struct TRESGAME_API FTresFieldVoiceTextData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "FTresFieldVoiceTextData")
	FString m_NameSpaceAndKey;

	UPROPERTY(EditAnywhere, Category = "FTresFieldVoiceTextData")
	float m_Delay;

	UPROPERTY(EditAnywhere, Category = "FTresFieldVoiceTextData")
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
struct FTresFriendLinkPawnCallMeteorData
{
	GENERATED_BODY()
public:
	float m_fBaseYaw;
	float m_fStartLength;
	float m_fTargetLength;
	float m_fStartTimer;
	float m_fInitialSpeed;
};

USTRUCT(BlueprintType)
struct FTresFriendLinkPawnFlareForceData
{
	GENERATED_BODY()
public:
	float m_fAppearYaw;
	float m_fAppearTimer;
	float m_fFireTimer;
};

USTRUCT(BlueprintType)
struct FTresFRJackSpinBombParam
{
	GENERATED_BODY()
public:
	float m_fBombRotate;
	float m_fBombLength;
	float m_fBombHeight;
	float m_fStruckBombSpeed;
	float m_fStruckBombGravityScale;
	float m_fStruckBombHeight;
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
struct FTresWorldCodeLoadAssetName
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresWorldCodeLoadAssetName")
	TEnumAsByte<ETresWorldCode> m_WorldCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresWorldCodeLoadAssetName")
	struct FStringAssetReference m_AssetName;
};

USTRUCT(BlueprintType)
struct FTresLSIGameDriver
{
	GENERATED_BODY()
public:
	class UTresGameInstance* m_GameInstance;
	class AGameMode* m_LSIGameMode;
	class ATresLSIGameActor* m_LSIGameActor;
	class ACameraActor* m_LSIGameCamera;
	class UPlayerInput* m_LSIGamePlayerInput;
	class APostProcessVolume* m_LSIPostprocess;
	class APlayerController* m_OriginalPC;
	class AActor* m_OriginalViewTarget;
	TArray<class AActor*> m_OriginalHiddenActors;
};

USTRUCT(BlueprintType)
struct FTresGamePlayWorldSwitcher
{
	GENERATED_BODY()
public:
	class UTresGameInstance* m_GameInstance;
	ESQEX_Invoker m_Invoker;
	bool m_FromMenu;
	bool m_Paused;
	int m_BattleLevel;
	class AGameModeBase* m_GameMode;
	class APlayerController* m_PlayerController;
	class APawn* m_PlayerPawn;
	class AActor* m_ViewTarget;
	class APlayerStart* m_PlayerStartForTeleport;
	TArray<class ULevel*> m_Levels;
	TArray<FName> m_ActiveLevels;
	TArray<class UModelComponent*> m_ModelComponents;
	TArray<class AActor*> m_Actors;
	TArray<class APostProcessVolume*> m_PostProcessVolumes;
	TArray<class UTresGimmickComponentBase*> m_Gimmicks;
	class ATresKHShaderController* m_pKHSBackup;
	FName m_PrepareName;
	FName m_StartName;
};

struct FTresGameModeBaseLastCleanupTickFunction : public FTickFunction
{
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
struct FTresWorldAppendAnimSetUnit
{
	GENERATED_BODY()
public:
	TArray<class UTresAnimSet*> m_AnimSets;
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
struct FTresE_EX781_CallGigasPatternParam
{
	GENERATED_BODY()
public:
	TEnumAsByte<EColorTypes_e_ex781Gigas> m_GigasType;
	bool m_LandAfterAttack;
	float m_CraftWaitTime;
	bool m_IsTargetPos;
	bool m_IsWarldPos;
	FVector m_WarldPos;
	float m_TargetDist;
	FVector2D m_TargetDir;
	FVector m_Offset;
	int m_MoveDir;
	int m_PitchMoveDir;
	int m_ActionID;
};

USTRUCT(BlueprintType)
struct FTresE_EX781_GunShotMarkerPatternParam
{
	GENERATED_BODY()
public:
	float m_MarkerWaitTime;
	float m_ShotStartTime;
	int m_ShotNum;
	float m_ShotIntervalTime;
	FVector m_Offset;
	bool m_IsChaseTarget;
	bool m_IsTargetPos;
	float m_TargetDist;
	FVector2D m_TargetDir;
	bool m_UseEXMode;
};

USTRUCT(BlueprintType)
struct FTresSpawnRuleChildGenerator
{
	GENERATED_BODY()
public:
	class UClass* GeneratedClass;
	float Size;
	int Num;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx711_HopParam
{
	GENERATED_BODY()
public:
	class ATresGimmick_e_ex711_PhysicsActor* m_pActor;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx711_HopLevelParam
{
	GENERATED_BODY()
public:
	TArray<struct FTresEnemyEx711_HopParam> m_HopParamArray;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx711_AthleticFlowParam
{
	GENERATED_BODY()
public:
	class ATresGimmick_e_ex711_PhysicsActor* m_pActor;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx711_AthleticFlowLevelParam
{
	GENERATED_BODY()
public:
	TArray<struct FTresEnemyEx711_AthleticFlowParam> m_AthleticFlowParamArray;
	TArray<struct FTresEnemyEx711_AthleticFlowParam> m_AthleticFlowReverseParamArray;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx711_TornadoInvolveParam
{
	GENERATED_BODY()
public:
	class ATresGimmick_e_ex711_PhysicsActor* m_pActor;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx711_GimmickBouncyPetsParam
{
	GENERATED_BODY()
public:
	class ATresGimmickTsBouncyPet* m_pActor;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx711_GimmickBouncyPetsGroupParam
{
	GENERATED_BODY()
public:
	TArray<struct FTresEnemyEx711_GimmickBouncyPetsParam> m_GimmickBouncyPetsParamArray;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx711_OuterScaffoldParam
{
	GENERATED_BODY()
public:
	class ATresGimmick_e_ex711_PhysicsActor* m_pActor;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx711_OuterScaffoldGroupParam
{
	GENERATED_BODY()
public:
	TArray<struct FTresEnemyEx711_OuterScaffoldParam> m_OuterScaffoldParamArray;
};

USTRUCT(BlueprintType)
struct FTresEwOpacityData
{
	GENERATED_BODY()
public:
	int Num;
	float Opacity;
};

USTRUCT(BlueprintType)
struct FTresSpawnActorData
{
	GENERATED_BODY()
public:
	struct FTransform Transform;
	class UClass* GeneratedClass;
};

USTRUCT(BlueprintType)
struct FTresSnapData
{
	GENERATED_BODY()
public:
	bool Snap;
	float HeightOffset;
	float LayHeightStartOffset;
	float LayHeightEndOffset;
};

USTRUCT(BlueprintType)
struct FTresMI_02GeneratorRuleParam
{
	GENERATED_BODY()
public:
	class UClass* generateClass;
	float nextLength;
	int life;
};

USTRUCT(BlueprintType)
struct FTresMI_02GeneratorRuleParamArray
{
	GENERATED_BODY()
public:
	TArray<struct FTresMI_02GeneratorRuleParam> Params;
};

USTRUCT(BlueprintType)
struct FTresCarGenerateData
{
	GENERATED_BODY()
public:
	class UTresCarBodyWithColorDataAsset* CarBodyAsset;
	TArray<class UTresCarDriverDataAsset*> CarDriverAsset;
};

USTRUCT(BlueprintType)
struct FTresBxCarRouteControlGroupData
{
	GENERATED_BODY()
public:
	TArray<class ATresBxCarGenerator*> Generators;
};

USTRUCT(BlueprintType)
struct FCAJellyfishParam
{
	GENERATED_BODY()
public:
	float m_WaveUPDownTimeMulti;
	float m_WaveUPDownLength;
	struct FFloatInterval m_TickEnableRange;
	FName m_AttackName;
	float m_AttackInterval;
};

USTRUCT(BlueprintType)
struct FCAMovableBarrelParam
{
	GENERATED_BODY()
public:
	ETresDropItemID m_prizeKind;
	float m_directionChangeInterval;
	float m_turnRate;
	float m_turnRateOnHitWall;
	float m_turnRateTimeOnHitWall;
	float m_moveRange;
	float m_defaultVelocity;
	float m_maxDeltaAngle;
	int m_MaxHitPoint;
	int m_spawnPrizeNumForDead;
	int m_spawnPrizeNumForNormalAttack;
	int m_spawnPrizeNumPerDamageInAttraction;
	float m_prizeSpawnUpDirectionOffset;
	float m_naviMeshExtent;
	float m_bodyCollMargin;
	float m_minSpeedScaleOnAvoidPlayer;
	float m_declVelocityRate;
	float m_yawMaxSpeed;
	bool m_bRunningAwayMode;
	bool m_bUseNaviMesh;
	bool m_bStopMovement;
};

USTRUCT(BlueprintType)
struct FCAMovableBarrelPrizeParam
{
	GENERATED_BODY()
public:
	float m_InitSpeed;
	float m_InitSpeedRand;
	struct FFloatInterval m_PitchRange;
	float m_AirResistance;
	float m_PrizeLivingTime;
};

USTRUCT(BlueprintType)
struct FCAMovableBarrelRunAwayParam
{
	GENERATED_BODY()
public:
	float m_directionOfRunAwayChangeInterval;
	float m_MinDistance;
	float m_MaxDistance;
	float m_SleepWaitTime;
	float m_MaxRandomAngleForRunAway;
	float m_MaxRandomAngleForMiddle;
	float m_MaxRandomAngleForGetBack;
	float m_TurnRateForRunAway;
	float m_TurnRateForMiddle;
	float m_SpeedForRunAway;
	float m_SpeedForMiddle;
};

USTRUCT(BlueprintType)
struct FCAPrizeChimneyParam
{
	GENERATED_BODY()
public:
	int m_MaxHitPoint;
	int m_spawnPrizeNumForNormalAttack;
	int m_spawnPrizeNumForDead;
	ETresDropItemID m_prizeKind;
	float m_InitSpeed;
	float m_InitSpeedRand;
	struct FFloatInterval m_PitchRange;
	float m_AirResistance;
	float m_PrizeLivingTime;
};

USTRUCT(BlueprintType)
struct FRunAwayShipParam
{
	GENERATED_BODY()
public:
	float m_defaultVelocity;
	float m_MaxYawSpeed;
	float m_turnRate;
	float m_minSafeAreaYaw;
	float m_maxSafeAreaYaw;
	float m_minShotYaw;
	float m_maxShotYaw;
	float m_minShotDistance;
	float m_maxShotDistance;
	float m_shotRandamLength;
	float m_shotRandamDistanceFactor;
	float m_shotRandamMoveDirectionFactor;
	float m_shotInterval;
	float m_minShotPitchAngle;
	float m_maxShotPitchAngle;
	float m_maxShotPitchDistance;
	int m_numProjectilePerFrame;
	FVector m_offsetVector;
	bool m_bStopMovement;
};

USTRUCT(BlueprintType)
struct FTresSplineGeneratorActorParam
{
	GENERATED_BODY()
public:
	class UClass* ActorClass;
	float Span;
};

USTRUCT(BlueprintType)
struct FTresSplineGeneratorActorRule
{
	GENERATED_BODY()
public:
	int SpawnPower;
	TArray<struct FTresSplineGeneratorActorParam> ParamArray;
};

USTRUCT(BlueprintType)
struct FTresGimmickMI_02_LaserArmActionParam
{
	GENERATED_BODY()
public:
	float m_ArmRotateSpeed;
	float m_ArmUpDownSpeed;
	float m_ArmTargetSpeed;
	float m_ArmStartupTime;
	float m_ArmRotateMin;
	float m_ArmRotateMax;
	float m_LaserChargeTime;
};

USTRUCT(BlueprintType)
struct FTresGimmickMI_04Status
{
	GENERATED_BODY()
public:
	struct FSQEX_SplineMoverExecutor SplineMover;
};

USTRUCT(BlueprintType)
struct FTresGimmickMI_04_DoorDamageParam
{
	GENERATED_BODY()
public:
	float interpSpeed;
	float maxAngle;
	float timeRate;
	float initPower;
	float powerReturnRate;
	float stopPower;
};

USTRUCT(BlueprintType)
struct FTresGimmickMI_04_EventDoor
{
	GENERATED_BODY()
public:
	struct FSQEX_SplineMoverExecutor SplineMover;
};

USTRUCT(BlueprintType)
struct FPairChangeActionParam
{
	GENERATED_BODY()
public:
	FName spinMotion;
	FName stepMotion;
	float changeDirectionTime;
	FName pcSpinMotion;
	float pcSpinChangeTime;
	float pcSpinWaitTime;
	FName pcStepMotion;
	float pcStepChangeTime;
	float pcStepWaitTime;
	int effectGroupID;
};

USTRUCT(BlueprintType)
struct FTresDanceNpcActionSet
{
	GENERATED_BODY()
public:
	TArray<EDanceActorAction> ActionList;
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
struct FDancePlayerAction
{
	GENERATED_BODY()
public:
	FName NormalMotion;
	FName GreatMotion;
	FName BadMotion;
};

USTRUCT(BlueprintType)
struct FTresDanceEffectColorParam
{
	GENERATED_BODY()
public:
	FName Key;
	struct FLinearColor Color_PS4;
	struct FLinearColor Color_XB1;
};

USTRUCT(BlueprintType)
struct FTresRaFestivalReplaceMeshData
{
	GENERATED_BODY()
public:
	class USkeletalMesh* m_MeshData;
	class UMaterialInterface* m_MatData;
};

USTRUCT(BlueprintType)
struct FTresRaFestivalReplaceMesh
{
	GENERATED_BODY()
public:
	FName m_MeshName;
	TArray<struct FTresRaFestivalReplaceMeshData> m_MeshLists;
};

USTRUCT(BlueprintType)
struct FSpecialMoveMissionParam
{
	GENERATED_BODY()
public:
	EDancePerformType perform;
	EDanceActorType ActorType;
};

USTRUCT(BlueprintType)
struct FTresRapunzelDanceMission
{
	GENERATED_BODY()
public:
	TArray<EDancePerformType> ActionList;
};

USTRUCT(BlueprintType)
struct FTresRaDanceSplineMover
{
	GENERATED_BODY()
public:
	FVector m_Location;
	struct FQuat m_Rotation;
	bool m_bSelect;
	bool m_bMoveing;
	float m_fNowLength;
	float m_fSpeed;
	float m_fLineSpeed;
	float m_fCurrentDistance;
	bool m_bIsReverse;
};

USTRUCT(BlueprintType)
struct FTresRaDanceSplineGroup
{
	GENERATED_BODY()
public:
	FName m_GroupName;
	ETresRaDanceAreaType m_eAreaType;
	int m_MaxMove;
	TWeakObjectPtr<class ATresRaFestivalDanceSplineActor> m_pSpline;
	float m_fSpeed;
	float m_fSpeedRate;
	float m_fMaxSpeedScale;
	float m_fInAddLength;
	float m_fTotalLength;
	int m_GroupIndex;
	bool m_bIsReverse;
	TArray<struct FTresRaDanceSplineMover> m_SplineMovers;
};

USTRUCT(BlueprintType)
struct FTresRaDanceSplineOwner
{
	GENERATED_BODY()
public:
	TWeakObjectPtr<class ATresCharPawnBase> m_pOwner;
	TScriptInterface<class UTresRaDanceSplineInterface> m_pSplineInterface;
	int m_nPrevArea;
	int m_nAreaGroupIndex;
	float m_fMoveSpeed;
	float m_fTurnSpeed;
	bool m_bSelect;
};

USTRUCT(BlueprintType)
struct FTresRaGimmickBird
{
	GENERATED_BODY()
public:
	class UTresSkeletalMeshComponent* m_Mesh;
};

USTRUCT(BlueprintType)
struct FTresRaPuddingEffectRef
{
	GENERATED_BODY()
public:
	FName ID;
	class UParticleSystem* EffectRef;
};

USTRUCT(BlueprintType)
struct FTresRaPuddingPosition
{
	GENERATED_BODY()
public:
	FName ID;
	TWeakObjectPtr<class ATresRaPuddingSplineActor> TargetActor;
};

USTRUCT(BlueprintType)
struct FTresRaPuddingCommand
{
	GENERATED_BODY()
public:
	ERaPuddingCommandType CommandType;
	FName PositionID;
	FName ParamName;
	float StartTime;
	float LastTime;
};

USTRUCT(BlueprintType)
struct FTresRaPuddingSchedule
{
	GENERATED_BODY()
public:
	TWeakObjectPtr<class ATresCharPawnBase> TargetPawn;
	TArray<struct FTresRaPuddingCommand> CommandList;
	bool Flag_LoopOnEnd;
	TArray<struct FTresRaPuddingCommand> DamageList;
	TArray<struct FTresRaPuddingCommand> ShutterList;
	TArray<struct FTresRaPuddingCommand> AngryList;
	TArray<struct FTresRaPuddingCommand> HappyList;
};

USTRUCT(BlueprintType)
struct FTresGimmickTS_01_BedCollisionDMatParam
{
	GENERATED_BODY()
public:
	int m_DynamicMaterialIndex;
	class UMaterialInterface* m_DynamicMaterial;
};

USTRUCT(BlueprintType)
struct FTresGumiShipCollisionSizeParam
{
	GENERATED_BODY()
public:
	FVector m_vSize;
	FVector m_vMaxOfIncreaseSize;
	float m_fIncreaseTime;
};

USTRUCT(BlueprintType)
struct FTresGumiShipCollisionAttachParam
{
	GENERATED_BODY()
public:
	FName m_SocketNameBase;
	FVector m_vOffsetBase;
	FName m_SocketNameDest;
	FVector m_vOffsetDest;
	FRotator m_Rotate;
};

USTRUCT(BlueprintType)
struct FTresGumiShipCollisionParam
{
	GENERATED_BODY()
public:
	FName m_GroupName;
	ETresGumiShipCollisionShape m_eShapeType;
	FVector m_vScale;
	struct FTresGumiShipCollisionSizeParam m_SizeParam;
	struct FTresGumiShipCollisionAttachParam m_AttachParam;
};

USTRUCT(BlueprintType)
struct FTresGumiShipSkillParam
{
	GENERATED_BODY()
public:
	float m_fAttackPoint;
	ETresGumiShipAttackElementType m_eElementType;
	ETresGumiShipAttackSubElemntType m_eSubElementType;
	ETresGumiShipBadStateType m_eBadStateType;
	float m_fTimeOfBadStateEffective;
	float m_fPercentOfBadState;
	ETresGumiShipReactionType m_eReactionType;
	class UParticleSystem* m_pHitEffect;
};

USTRUCT(BlueprintType)
struct FTresGumiShipAtkCollisionParam
{
	GENERATED_BODY()
public:
	ETresGumiShipAtkHitTestType m_eHitTestType;
	bool m_bIsHitProjectile;
	bool m_bIsHitBackGround;
	FName m_AtkParamName;
	float m_fTimeOfRefreshIgnore;
	struct FTresGumiShipSkillParam m_SkillParam;
};

USTRUCT(BlueprintType)
struct FTresGumiShipMuzzleParam
{
	GENERATED_BODY()
public:
	FVector m_vOffset;
	FRotator m_Rotate;
};

USTRUCT(BlueprintType)
struct FTresGumiShipEnemyGroupWipeOutData
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresGumiShipAttackElementResistance
{
	GENERATED_BODY()
public:
	float m_fShot;
	float m_fLaser;
	float m_fStrike;
	float m_fSpecial;
};

USTRUCT(BlueprintType)
struct FTresGumiShipHitEffectInfo
{
	GENERATED_BODY()
public:
	class UParticleSystem* m_pHitEffect;
	bool m_bIsAttach;
};

USTRUCT(BlueprintType)
struct FTresGumiShipBodyCollisionParam
{
	GENERATED_BODY()
public:
	float m_fDamageScale;
	struct FTresGumiShipAttackElementResistance m_ElementResistance;
	struct FTresGumiShipHitEffectInfo m_EffectInfo;
	bool m_bDontUseGrazeCollision;
};

USTRUCT(BlueprintType)
struct FTresGumiShipDefCollisionParam
{
	GENERATED_BODY()
public:
	float m_fHitPoint;
	float m_fDefenseDegree;
	class UParticleSystem* m_pBarrierEffect;
	FVector m_vEffectScale;
};

USTRUCT(BlueprintType)
struct FTresGumiShipDirectParam
{
	GENERATED_BODY()
public:
	class UParticleSystem* m_pScudEffctType;
	FVector m_vEffectOffset;
	FName m_ParamName;
	class UClass* m_pShakeType;
	bool m_bRebuildWhenDirect;
};

USTRUCT(BlueprintType)
struct FTresGumiShipDirectEventBase
{
	GENERATED_BODY()
public:
	struct FTresGumiShipDirectParam m_DirectParam;
};

USTRUCT(BlueprintType)
struct FTresGumiShipTouchSpeedPointEvent : public FTresGumiShipDirectEventBase
{
	GENERATED_BODY()
public:
	float m_fSpeedPoint;
	bool m_bUpOnly;
};

USTRUCT(BlueprintType)
struct FTresGumiShipBetweenSpeedEvent : public FTresGumiShipDirectEventBase
{
	GENERATED_BODY()
public:
	float m_fBottomSpeed;
	float m_fTopSpeed;
};

USTRUCT(BlueprintType)
struct FTresGumiShipLimitAreaData
{
	GENERATED_BODY()
public:
	ETresGumiShipLimitType m_eType;
	float m_fValue;
};

USTRUCT(BlueprintType)
struct FTresGumiShipProjectileSequenceData
{
	GENERATED_BODY()
public:
	float m_fExecuteSec;
	float m_fHomingAngle;
	float m_fMovementSpeed;
	float m_fTargetDotCheckRotation;
	bool m_bTargetLocationPredictable;
	bool m_bTargetDotCheckable;
	bool m_bReleaseAttach;
};

USTRUCT(BlueprintType)
struct FTresGumiShipRailShootingRouteSplineDataGetter
{
	GENERATED_BODY()
public:
	float m_fSplineDistanceRate;
	bool m_bReverseSpline;
};

USTRUCT(BlueprintType)
struct FTresGumiShipRailShootingBattleSetData
{
	GENERATED_BODY()
public:
	class ATriggerBase* m_pEnemySpawnTrigger;
	TArray<class ATresGumiShipEnemyGenerator*> m_EnemyGeneratorList;
	struct FTresGumiShipRailShootingRouteSplineDataGetter m_TriggerPointAttachData;
};

USTRUCT(BlueprintType)
struct FTresGumiShipSplinePathMoveParameter
{
	GENERATED_BODY()
public:
	float m_fPathMoveSpeed;
	float m_fMaxPathMoveSpeed;
	float m_fPathMoveAcceleration;
	float m_fPathMoveDeceleration;
	float m_fStartDistanceRate;
	bool m_bReversePath;
	bool m_bLoopPath;
};

USTRUCT(BlueprintType)
struct FTresGumiShipSplineAdditionalData
{
	GENERATED_BODY()
public:
	ETresGumiShipSplineEventType m_eEventType;
	float m_fKeyDistanceRate;
};

USTRUCT(BlueprintType)
struct FTresGumiShipEnemyUsableAttackMethodData
{
	GENERATED_BODY()
public:
	ETresGumiShipEnemyStateID m_eAttackStateID;
};

USTRUCT(BlueprintType)
struct FTresGumiShipStateArgs
{
	GENERATED_BODY()
public:
	int m_dArg;
	float m_fArg;
	FVector m_vArg;
	FRotator m_RotArg;
	bool m_bArg;
};

USTRUCT(BlueprintType)
struct FTresGumiShipDropPrizeData
{
	GENERATED_BODY()
public:
	int m_ExpMinCount;
	int m_ExpMidCount;
	int m_ExpMaxCount;
	int m_HPMinCount;
	int m_HPMidCount;
	int m_HPMaxCount;
	int m_MunnyMinCount;
	int m_MunnyMidCount;
	int m_MunnyMaxCount;
	TArray<ETresItemDefGumiParts> m_GumiParts;
	TArray<ETresItemDefGumiMaterial> m_GumiMaterial;
	TArray<ETresItemDefGumiPattern> m_GumiPattern;
	TArray<ETresItemDefGumiSticker> m_GumiSticker;
	TArray<ETresItemDefGumiShipBP> m_GumiShipBP;
	TArray<ETresItemDefGumiEtc> m_GumiEtc;
	TArray<ETresItemDefMaterial> m_Material;
};

USTRUCT(BlueprintType)
struct FMashRotatorDataTable
{
	GENERATED_BODY()
public:
	FName _Name;
	FRotator _Rotater;
};

USTRUCT(BlueprintType)
struct FTresGumiShipBonusParameterDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresGumiShipBonusKind m_eBonusKind;
	float m_fBonusValue;
	float m_fTimeLimit;
	int m_dArgs1;
};

USTRUCT(BlueprintType)
struct FTresGMInputResult
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresGumiShipRailSwitchInfo
{
	GENERATED_BODY()
public:
	TWeakObjectPtr<class ATresRailSlideActor> m_pDefaultOnRail;
	TWeakObjectPtr<class ATresRailSlideActor> m_pDefaultOffRail;
};

USTRUCT(BlueprintType)
struct FTresGumiShipRailSwitchInfos
{
	GENERATED_BODY()
public:
	TArray<struct FTresGumiShipRailSwitchInfo> m_Infos;
	FName m_RailSwitchName;
};

USTRUCT(BlueprintType)
struct FLockAtChangeInfo
{
	GENERATED_BODY()
public:
	float m_fChangeDot;
	TEnumAsByte<EViewTargetBlendFunction> m_eInterpFunction;
	float m_fInterpSec;
	float m_fInterpExp;
};

USTRUCT(BlueprintType)
struct FCameraSensitivityInfo
{
	GENERATED_BODY()
public:
	float m_fMin;
	float m_fMax;
	float m_fSensitivity;
};

USTRUCT(BlueprintType)
struct FCameraSensitivityInfoSet
{
	GENERATED_BODY()
public:
	struct FCameraSensitivityInfo m_RotationSpeedPitch;
	struct FCameraSensitivityInfo m_RotationSpeedYaw;
};

USTRUCT(BlueprintType)
struct FTresGumiShipElementResistance
{
	GENERATED_BODY()
public:
	float m_fShot;
	float m_fLaser;
	float m_fStrike;
	float m_fSpecial;
};

USTRUCT(BlueprintType)
struct FHiddenMickeyBoundingAreaCircles
{
	GENERATED_BODY()
public:
	FVector2D Offset;
	float Size;
};

USTRUCT(BlueprintType)
struct FTresHitActor_e_he90x_Setup
{
	GENERATED_BODY()
public:
	float m_fRadius;
	float m_fHeight;
};

USTRUCT(BlueprintType)
struct FTresInfluenceMapLayer
{
	GENERATED_BODY()
public:
	bool bEnabled;
	float Decay;
	float Flow;
	bool bUpdate;
	float UpdateInterval;
};

USTRUCT(BlueprintType)
struct FTresInterpGroupInstUpdateSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresInterpGroupInstUpdateSettings")
	class USkeletalMeshComponent* m_SkeletalMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresInterpGroupInstUpdateSettings")
	TEnumAsByte<EMeshComponentUpdateFlag::Type> m_UpdateFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresInterpGroupInstUpdateSettings")
	bool m_UpdateRateOptimizations;
};

USTRUCT(BlueprintType)
struct FTresInterpTrackActorVoiceKey
{
	GENERATED_BODY()
public:
	float m_Time;
	class UTresActorVoice* m_ActorVoice;
};

USTRUCT(BlueprintType)
struct FTresTrackAttachKey
{
	GENERATED_BODY()
public:
	float m_Time;
	bool m_bAttach;
	class AActor* m_ParentActor;
	FName m_BoneSocketName;
	TEnumAsByte<EAttachLocation::Type> m_AttachLocationType;
	bool m_bWeldSimulatedBodies;
	bool m_bAbsoluteLocation;
	bool m_bAbsoluteRotation;
	bool m_bAbsoluteScale;
	bool m_bUseGroupName;
	FName m_AttachGroupName;
};

USTRUCT(BlueprintType)
struct FTresInterpTrackBonamikCharaWindKey
{
	GENERATED_BODY()
public:
	float m_Time;
};

USTRUCT(BlueprintType)
struct FTresInterpTrackBonamikControlKey
{
	GENERATED_BODY()
public:
	float m_Time;
	bool m_Reset;
	bool m_ResetPose;
	bool m_ReinitializeSimulationPose;
	bool m_RestoreDefaultParams;
	int m_PreRoll;
	int m_PreRollForAttachment;
	TArray<FString> m_Groups;
	TEnumAsByte<ESQEX_Bonamik_ControlType> m_SimulationOnOff;
	TEnumAsByte<ESQEX_Bonamik_ControlType> m_GroundOnOff;
	bool m_ChangeInnerCone;
	float m_InnerConeScale;
	bool m_ChangeOuterCone;
	float m_OuterConeScale;
	bool m_ChangeLocalForce;
	float m_LocalForceScale;
	bool m_ChangeWindScale;
	float m_GroupWindScale;
	bool m_ChangeHighFPSEvaluation;
	bool m_EnableHighFPSEvaluation;
};

USTRUCT(BlueprintType)
struct FTresInterpTrackBonamikTeleportKey
{
	GENERATED_BODY()
public:
	float m_Time;
	float m_Distance;
	int m_PreRoll;
};

USTRUCT(BlueprintType)
struct FTresInterpTrackBonamikWindControlKey
{
	GENERATED_BODY()
public:
	float m_Time;
};

USTRUCT(BlueprintType)
struct FTresInterpTrackBonamikWorldWindKey
{
	GENERATED_BODY()
public:
	float m_Time;
};

USTRUCT(BlueprintType)
struct FTresSlotAnimationTrackKey
{
	GENERATED_BODY()
public:
	float Time;
	class UAnimationAsset* AnimAsset;
	float BlendInTime;
	float BlendOutTime;
	float AnimStartOffset;
	float AnimEndOffset;
	float PlayRate;
	bool Loop;
	int EffectGroup;
	bool Reverse;
	bool RootTrans;
	bool RootRotate;
	bool DisableRootTransExtract;
	float RootMoveScaleXY;
	float RootMoveScaleZ;
	float MeshScale;
	bool BonamikReset;
	int BonamikPreRoll;
	int BonamikPreRollForAttachment;
	bool SimulateMotionBuilderClip;
	float MotionBuilderClipFirstLoop;
	float MotionBuilderClipStop;
	int ForcedLOD;
};

USTRUCT(BlueprintType)
struct FTresInterpTrackDrawMaterialKey
{
	GENERATED_BODY()
public:
	float m_Time;
	class UMaterialInterface* m_Material;
	FName m_ParameterName;
	float m_X;
	float m_Y;
	float m_W;
	float m_H;
};

USTRUCT(BlueprintType)
struct FTresEffectAttachTrackKey
{
	GENERATED_BODY()
public:
	float m_Time;
	TEnumAsByte<ETresEffectAttachTrack_AttachType> m_AttachType;
	TEnumAsByte<ESQEX_ATTACH_OBJECT_NAME> m_AttachObjectType;
	FName m_SocketName;
	int m_GroupID;
	bool m_RunEvenWhenSkippingKey;
};

USTRUCT(BlueprintType)
struct FSQEX_AttachEffectTrackDataToDataAsset
{
	GENERATED_BODY()
public:
	bool bUseCommonAttachData;
	TArray<class USQEX_ParticleAttachDataAsset*> AttachDatas;
};

USTRUCT(BlueprintType)
struct FTresEffectTriggerTrackKey
{
	GENERATED_BODY()
public:
	float m_Time;
	TEnumAsByte<ETresEffectTriggerTrack_TriggerType> m_TriggerType;
	float m_FadeTime;
	bool bChangeColor;
	FVector ParticleColor;
	float ParticleAlpha;
};

USTRUCT(BlueprintType)
struct FTresFaceAnimationTrackKey
{
	GENERATED_BODY()
public:
	float Time;
	FName AnimName;
	class UAnimationAsset* AnimAsset;
	float BlendInTime;
	bool Loop;
	float PlayRate;
	float AnimStartOffset;
	float AnimEndOffset;
	bool SimulateMotionBuilderClip;
	float MotionBuilderClipFirstLoop;
	float MotionBuilderClipStop;
};

USTRUCT(BlueprintType)
struct FTresInterpTrackFadeKey
{
	GENERATED_BODY()
public:
	float m_Time;
	TEnumAsByte<ETresFadeTrack_Color> m_Color;
};

USTRUCT(BlueprintType)
struct FTresFullBodyAnimationTrackKey
{
	GENERATED_BODY()
public:
	float Time;
	FName AnimName;
	class UAnimationAsset* AnimAsset;
	float BlendInTime;
	float BlendOutTime;
	float AnimStartOffset;
	float AnimEndOffset;
	float PlayRate;
	bool Loop;
	int EffectGroup;
	bool Reverse;
	bool RootTrans;
	bool RootRotate;
	bool DisableRootTransExtract;
	float RootMoveScaleXY;
	float RootMoveScaleZ;
	float MeshScale;
	bool BonamikReset;
	int BonamikPreRoll;
	int BonamikPreRollForAttachment;
	bool SimulateMotionBuilderClip;
	float MotionBuilderClipFirstLoop;
	float MotionBuilderClipStop;
	int ForcedLOD;
};

USTRUCT(BlueprintType)
struct FTresInterpTrackIndirectLightingCacheQualityControlKey
{
	GENERATED_BODY()
public:
	float m_Time;
	TEnumAsByte<EIndirectLightingCacheQuality> m_Quality;
};

USTRUCT(BlueprintType)
struct FTresInterpTrackLightPropertiesKey
{
	GENERATED_BODY()
public:
	float m_Time;
	float m_MinRoughness;
	float m_ShadowResolutionScale;
	float m_ShadowBias;
	float m_DynamicShadowDistanceMovableLight;
	float m_DynamicShadowDistanceStationaryLight;
	int m_DynamicShadowCascades;
	float m_CascadeDistributionExponent;
};

USTRUCT(BlueprintType)
struct FTresMBCameraDataTrackKey
{
	GENERATED_BODY()
public:
	float m_Time;
	class UTresMBCameraData* m_CameraData;
};

USTRUCT(BlueprintType)
struct FTresInterpTrackMorphControlElement
{
	GENERATED_BODY()
public:
	FName m_TargetName;
	struct FAlphaBlend m_AlphaBlend;
	float m_StartValue;
	float m_EndValue;
};

USTRUCT(BlueprintType)
struct FTresInterpTrackMorphControlKey
{
	GENERATED_BODY()
public:
	float m_Time;
	TArray<struct FTresInterpTrackMorphControlElement> m_Elements;
};

USTRUCT(BlueprintType)
struct FTresInterpTrackSceneCapture2DKey
{
	GENERATED_BODY()
public:
	float m_Time;
	FName m_TargetCamGroup;
	bool m_CaptureEveryFrame;
	float m_CaptureRange;
	float m_CaptureOffsetTime;
};

USTRUCT(BlueprintType)
struct FTresInterpTrackShadowQualityControlKey
{
	GENERATED_BODY()
public:
	float m_Time;
	TEnumAsByte<ESQEX_ShadowQuality> m_Quality;
};

USTRUCT(BlueprintType)
struct FTresTrackSnapToFloorKey
{
	GENERATED_BODY()
public:
	float m_Time;
	bool m_SnapToFloor;
};

USTRUCT(BlueprintType)
struct FTresSubtitleTrackKey
{
	GENERATED_BODY()
public:
	float m_Time;
	float m_Length;
	FString m_TextLabel;
};

USTRUCT(BlueprintType)
struct FTresWeaponControlTrackKey
{
	GENERATED_BODY()
public:
	float m_Time;
	bool m_Visible;
	bool m_AppearEffect;
	float m_AppearEffectPlayRate;
};

USTRUCT(BlueprintType)
struct FTresKeybladeFormAbilityData
{
	GENERATED_BODY()
public:
	TArray<ETresTextAbilityKind> m_TextAbilitys;
};

USTRUCT(BlueprintType)
struct FTresKeybladeAbilityData
{
	GENERATED_BODY()
public:
	TArray<ETresTextAbilityKind> m_ShootflowAbilitys;
	TArray<ETresCharWearForm> m_WearForms;
	TMap<ETresWeaponForm, struct FTresKeybladeFormAbilityData> m_FormAbilityMap;
};

USTRUCT(BlueprintType)
struct FTresEquipItemDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName m_KeyName;
	FString m_Comment;
	int m_AP;
	int m_AttackPlus;
	int m_MagicPlus;
	int m_DefensePlus;
	int m_AttrResistPhysical;
	int m_AttrResistFire;
	int m_AttrResistBlizzard;
	int m_AttrResistThunder;
	int m_AttrResistWater;
	int m_AttrResistAero;
	int m_AttrResistDark;
	int m_AttrResistNoType;
	TArray<ETresAbilityKind> m_AppendAbility;
	TAssetPtr<class UTresEquipDataBase> m_EquipSubclass;
};

USTRUCT(BlueprintType)
struct FMognetMedalPrizeWork
{
	GENERATED_BODY()
public:
	ETresDropItemID m_Type;
	int m_NumDropMin;
	int m_NumDropMax;
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
	class UObject* m_UserObject;

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
	TWeakObjectPtr<class AActor> m_Template;
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
struct FTresLevelEntityRestartTarget
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLevelEntityRestartTarget")
	class ATresLevelEntityControlVolume* m_SequenceOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresLevelEntityRestartTarget")
	ETresLevelEntityRestartSequence m_Sequence;
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
struct FTresNavLinkSet_e_ex035_
{
	GENERATED_BODY()
public:
	class ANavLinkProxy* NavLinkProxy;
	TEnumAsByte<ETresNavLinkSegment_e_ex035_> NavLinkSegment;
};

USTRUCT(BlueprintType)
struct FTresLSIScoreEntryScores
{
	GENERATED_BODY()
public:
	int scores;
};

USTRUCT(BlueprintType)
struct FTresLSIScoreEntryStages
{
	GENERATED_BODY()
public:
	int stages;
};

USTRUCT(BlueprintType)
struct FTresLSIScoreEntryMusicalFarmer
{
	GENERATED_BODY()
public:
	ETresLSIMusicFarmerMode mode;
	int Score;
};

USTRUCT(BlueprintType)
struct FTresLSIScoreEntryWins
{
	GENERATED_BODY()
public:
	int wins;
};

USTRUCT(BlueprintType)
struct FTresLSIScoreEntryHowtoPlayGolf
{
	GENERATED_BODY()
public:
	ETresLSIHowtoPlayGolfMode mode;
	int Score;
};

USTRUCT(BlueprintType)
struct FTresLSIScoreEntryHowtoPlayBaseball
{
	GENERATED_BODY()
public:
	ETresLSIHowtoPlayBaseballMode mode;
	int Score;
};

USTRUCT(BlueprintType)
struct FTresLSIScoreBarnyardSports
{
	GENERATED_BODY()
public:
	int the100m;
	int hurdle;
	int triplejump;
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresMapSetDataArray")
	TArray<struct FTresMapSetData> DataArray;
};

USTRUCT(BlueprintType)
struct FTresMBModelElement
{
	GENERATED_BODY()
public:
	FName m_ModelName;
	int m_ParentIndex;
	FVector m_Scaling;
	FVector m_Rotation;
	FVector m_Translation;
	int m_CurveIndex[0x9];
};

USTRUCT(BlueprintType)
struct FTresMBCameraElement
{
	GENERATED_BODY()
public:
	int m_Index;
	int m_InterestIndex;
	float m_roll;
	float m_FOV;
	int m_CurveIndex[0x2];
};

USTRUCT(BlueprintType)
struct FTresMBCurveKeyElement
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresMBCurveInterp> m_Interpolation;
	float m_Time;
	float m_Value;
	float m_Left;
	float m_Right;
};

USTRUCT(BlueprintType)
struct FTresMBCurveElement
{
	GENERATED_BODY()
public:
	TArray<struct FTresMBCurveKeyElement> m_Keys;
};

USTRUCT(BlueprintType)
struct FTresMBClipElement
{
	GENERATED_BODY()
public:
	int m_CameraIndex;
	float m_Start;
	float m_Stop;
	bool m_bFadeOut;
	float m_FadeoutTime;
	bool m_bFadeOutCaptureEveryFrame;
	float m_FadeOutCaptureOffsetTime;
	float m_PreBlankTime;
	float m_PostBlankTime;
};

USTRUCT(BlueprintType)
struct FTresMiRxReplicaStateInfo
{
	GENERATED_BODY()
public:
	float m_fCoolDownTime;
	TEnumAsByte<ETresMiRxReplicaManagerStateKind> m_eNextState;
	TArray<float> m_fCommonParams;
	TArray<bool> m_bCommonParams;
};

USTRUCT(BlueprintType)
struct FTresMiRxReplicaStatePattern
{
	GENERATED_BODY()
public:
	bool m_bIsFirstTimeUseOnly;
	int m_dTransitionPercent;
	TEnumAsByte<ETresStateID> m_eStateIDWhenInterrupt;
	TArray<struct FTresMiRxReplicaStateInfo> m_StateInfos;
};

USTRUCT(BlueprintType)
struct FTresMiRxReplicaStateTable
{
	GENERATED_BODY()
public:
	TArray<struct FTresMiRxReplicaStatePattern> m_Patterns;
};

USTRUCT(BlueprintType)
struct FAttackIntervalParam_e_ex082
{
	GENERATED_BODY()
public:
	float ElapsedTime;
	bool bDisableAttack;
	struct FFloatInterval IntervalTimeRange;
};

USTRUCT(BlueprintType)
struct FEX359_BeamOnCircleInfo
{
	GENERATED_BODY()
public:
	float m_fAngle;
	int m_iNotify;
};

USTRUCT(BlueprintType)
struct FEX359_BeamOnRateInfo
{
	GENERATED_BODY()
public:
	float m_fTimingRate;
	int m_iNotify;
};

USTRUCT(BlueprintType)
struct FTresAnims_e_ex113_Move2_UpDown
{
	GENERATED_BODY()
public:
	class UAnimationAsset* StartAnimData;
	class UAnimationAsset* LoopAnimData;
	class UAnimationAsset* EndAnimData;
};

USTRUCT(BlueprintType)
struct FEX731_DashEffectInfo
{
	GENERATED_BODY()
public:
	int m_iNotifyParam;
	class UParticleSystem* m_DashEffectClass;
	float m_fWorldGroundHeight;
	float m_fDashEffectSpawnHeight;
	FVector m_DashEffectLocationOffset;
	FRotator m_DashEffectRotationOffset;
	bool m_bDashEffectLoopSpawn;
	float m_fDashEffectSpawnInterval;
	class ATresCharPawnBase* MyCharPawn;
};

USTRUCT(BlueprintType)
struct FTresNavLinkExtendedInfo
{
	GENERATED_BODY()
public:
	uint32_t ElementSize;
	uint32_t Version;
	TArray<int8_t> Data;
};

USTRUCT(BlueprintType)
struct FTresAgentInfoStruct
{
	GENERATED_BODY()
public:
	class UClass* AgentType;
	class AActor* AgentActor;
	float AgentRadius;
	float AgentHeight;
};

USTRUCT(BlueprintType)
struct FTresNpcAICombiData
{
	GENERATED_BODY()
public:
	ETresFNpcAICombiID m_CombiID;
	ETresChrUniqueID m_MainChrUID;
	ETresChrUniqueID m_PartnerChrUID;
	bool m_bUseMP;
	float m_StandbyLimitTime;
	float m_ExecLength_PtoM;
};

USTRUCT(BlueprintType)
struct FTresComNpcMaterialInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresComNpcMaterialInfo")
	FName m_MaterialName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresComNpcMaterialInfo")
	FName m_ParamName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresComNpcMaterialInfo")
	float m_fValue;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex711_BouncyPetsParam
{
	GENERATED_BODY()
public:
	int m_BouncyPetsNum;
	float m_DistMin;
	float m_DistMax;
	float m_HeightMin;
	float m_HeightMax;
	float m_RevolutionSpeed;
	float m_RevolutionOffsetYaw;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex711_OuterScaffoldParam
{
	GENERATED_BODY()
public:
	int m_ScaffoldNum;
	float m_HeightMin;
	float m_HeightMax;
	float m_DistMin;
	float m_DistMax;
	float m_RotSpeed;
	float m_RevolutionSpeed;
	float m_TornadoRotSpeed;
	float m_TornadoRevolutionSpeed;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex711_PhysicsActorTornadoInvolveParam
{
	GENERATED_BODY()
public:
	float m_InitMoveSpeed;
	float m_AddMoveSpeed;
	float m_MaxMoveSpeed;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_CrushingParam
{
	GENERATED_BODY()
public:
	FName m_Comment;
	class UMaterialInterface* m_Material;
	FVector2D m_Size;
	float m_AnimTime;
	//TEnumAsByte<ESQEX_BreakBlendMode> m_Mode;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_CrushingPattern
{
	GENERATED_BODY()
public:
	FName m_Comment;
	struct FKey m_Keys;
	TArray<int> m_pro_CrushingParamNoArray;
};

USTRUCT(BlueprintType)
struct FTresParam_e_ex773_SpawnParam
{
	GENERATED_BODY()
public:
	float Interval;
	class UClass* SpawnClass;
};

USTRUCT(BlueprintType)
struct FTresParam_e_ex773_ParamReverseFlareShot
{
	GENERATED_BODY()
public:
	int Num;
	int MaxNum;
	float StartLocationOffsetSize;
	float TabooEndLength;
	float OneLength;
	float StartTimeOffset;
	float NextSpawnTime;
	float ExplosionTime;
	FVector TargetOffset;
	FVector SpawnOffsetMaxValue;
	TArray<FVector> SpawnOffsetArray;
	TArray<float> SpawnOffsetAngleArray;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_CrushingParam
{
	GENERATED_BODY()
public:
	FName m_Comment;
	class UMaterialInterface* m_Material;
	FVector2D m_Size;
	float m_AnimTime;
	//TEnumAsByte<ESQEX_BreakBlendMode> m_Mode;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_CrushingPattern
{
	GENERATED_BODY()
public:
	FName m_Comment;
	struct FKey m_Keys;
	TArray<int> m_pro_CrushingParamNoArray;
};

USTRUCT(BlueprintType)
struct FTresHologramLocationResetInfo
{
	GENERATED_BODY()
public:
	class ATresPhotoHologramActor* m_pTargetActor;
};

USTRUCT(BlueprintType)
struct FTresPhotoHologramDebugMenu
{
	GENERATED_BODY()
public:
	class UTresUIP_MobileAlbum* m_pAlbum;
};

USTRUCT(BlueprintType)
struct FTresPhotoHologramEditEffectDef
{
	GENERATED_BODY()
public:
	float TargetMaxRootSize;
	class UParticleSystem* EditMarkerEffectData;
};

USTRUCT(BlueprintType)
struct FTresPhotoHologramFacialDef
{
	GENERATED_BODY()
public:
	FName FacialType;
	FName EyeAnimName;
	FName LipAnimName;
	FString TextId;
	int TextIndex;
	FName PreEvent;
	FName PostEvent;
};

USTRUCT(BlueprintType)
struct FTresHologramSubAnimReplaceDef
{
	GENERATED_BODY()
public:
	ETresHologramSubAnimReplaceType m_Type;
	FName m_Slot;
	FName m_AnimName;
};

USTRUCT(BlueprintType)
struct FTresHologramSubAnimReplaceInfo
{
	GENERATED_BODY()
public:
	TArray<FName> m_ValidSlotList;
	TArray<struct FTresHologramSubAnimReplaceDef> m_ReplaceDefList;
};

USTRUCT(BlueprintType)
struct FTresHologramActorPoseTableInfo
{
	GENERATED_BODY()
public:
	TWeakObjectPtr<class UDataTable> m_pTable;
};

USTRUCT(BlueprintType)
struct FTresHologramWorldInitParam
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresWorldCode> World;
	FName MapId;
	EHologramWorldInitParamValueType ValueType;
	FName ParamName;
	float FloatValue;
	FVector VectorValue;
	struct FLinearColor ColorValue;
};

USTRUCT(BlueprintType)
struct FTresPhotoHologramEffectData
{
	GENERATED_BODY()
public:
	class UParticleSystem* AttachEffect;
	TEnumAsByte<ESQEX_ATTACH_OBJECT_NAME> AttachType;
	FName SocketName;
	FName EndSocketName;
	FVector LocationOffset;
	FRotator RotationOffset;
	FVector ScaleOffset;
	float WarmupTime;
	bool PauseEffect;
	float PauseTime;
	TEnumAsByte<ESQEX_ATTACH_EFFECT_END_TYPE> AttachEffectEndType;
	float FadeOut;
	TArray<struct FTresHologramWorldInitParam> WorldInitParamList;
	bool EffectInvisibleInPhoto;
	bool IsAsWeaponEffect;
};

USTRUCT(BlueprintType)
struct FTresDetectCollShapeAssetUnit2D
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "FTresDetectCollShapeAssetUnit2D")
	TEnumAsByte<ETresDetectCollShape2D::Type> ShapeType;

	UPROPERTY(EditAnywhere, Category = "FTresDetectCollShapeAssetUnit2D")
	FVector Size;

	UPROPERTY(EditAnywhere, Category = "FTresDetectCollShapeAssetUnit2D")
	FVector RelativeLocation;

	UPROPERTY(EditAnywhere, Category = "FTresDetectCollShapeAssetUnit2D")
	FRotator RelativeRocation;
};

USTRUCT(BlueprintType)
struct FTresAttractionFlowAssetInfo
{
	GENERATED_BODY()
public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttractionFlowAssetInfo")
	//TAssetPtr<class UClass> m_AssetPtr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAttractionFlowAssetInfo")
	class UClass* m_pAsset;
};

USTRUCT(BlueprintType)
struct FVoiceAndLipParameter
{
	GENERATED_BODY()
public:
	FName GroupID;
	class USoundBase* pAsset;
	FName LipName;
};

USTRUCT(BlueprintType)
struct FTresGimmickDropPrizeDataUnit
{
	GENERATED_BODY()
public:
	ETresDropItemID m_Prize;
	int m_SpawnNum;
	int m_SpawnPlusNum;
};

USTRUCT(BlueprintType)
struct FTresGimmickDropPrizeTable
{
	GENERATED_BODY()
public:
	TArray<struct FTresGimmickDropPrizeDataUnit> m_Prizes;
	float m_SpawnRate;
};

USTRUCT(BlueprintType)
struct FTresGimmickPrizeVelocityData
{
	GENERATED_BODY()
public:
	bool m_bSetDirection;
	bool m_bApplyParentRotation;
	float m_InitSpeed;
	float m_InitSpeedRand;
	float m_PitchMin;
	float m_PitchMax;
	float m_YawMin;
	float m_YawMax;
	float m_AirResistance;
};

USTRUCT(BlueprintType)
struct FMovableCrabParam
{
	GENERATED_BODY()
public:
	float m_directionChangeInterval;
	float m_turnRate;
	float m_turnRateOnHitWall;
	float m_turnRateTimeOnHitWall;
	float m_moveRange;
	float m_moveRangePredictRate;
	float m_defaultVelocity;
	float m_maxDeltaAngle;
	float m_gravityScaleOnMove;
};

USTRUCT(BlueprintType)
struct FTresVectorAnim
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVectorAnim")
	FVector m_SrcValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVectorAnim")
	FVector m_UpdatedValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVectorAnim")
	FVector m_LimitMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVectorAnim")
	FVector m_LimitMax;

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
};

USTRUCT(BlueprintType)
struct FTresProj_MagicReaction
{
	GENERATED_BODY()
public:
	class UClass* m_ReactionSpawnProjectileClass;
	bool m_ReactionOnlySameTeam;
};

USTRUCT(BlueprintType)
struct FBX901_RailSlideProjDropInfo
{
	GENERATED_BODY()
public:
	ETresDropItemID m_DropPrize1;
	int m_NumDropPrize1;
	ETresDropItemID m_DropPrize2;
	int m_NumDropPrize2;
	ETresDropItemID m_DropItemID;
	int m_DropItemRate;
};

USTRUCT(BlueprintType)
struct FEX105_JOINT_INFO
{
	GENERATED_BODY()
public:
	class ATresProjectileBase* pCube;
};

USTRUCT(BlueprintType)
struct FEX354_ChargeShotBounceInfo
{
	GENERATED_BODY()
public:
	TArray<int> m_iMaxBounceCountArray;
	bool m_bCountReflectAsBounce;
	float m_fMaxBounceCountDistance;
	TArray<float> m_fVelocityArray;
	class UEnvQuery* m_EQS_Bounce;
	float m_fEQSWaitTime;
};

USTRUCT(BlueprintType)
struct FEX354_ClusterShotMoveInfo
{
	GENERATED_BODY()
public:
	class ATresProjectileBase* m_Proj;
};

USTRUCT(BlueprintType)
struct FEX354_ClusterShotHitActorInfo
{
	GENERATED_BODY()
public:
	class AActor* m_HitActor;
};

USTRUCT(BlueprintType)
struct FEX354_DownShotInfo
{
	GENERATED_BODY()
public:
	float m_fVelocity;
	float m_fLandMoveStartHeight;
	float m_fLandMoveHeight;
	float m_fMaxLandMoveTime;
	float m_fRotateVelocity;
	bool m_bKeepVelocityOnHoming;
	float m_fNoHomingDistance;
};

USTRUCT(BlueprintType)
struct FEX354_UpShotInfo
{
	GENERATED_BODY()
public:
	float m_fVelocity;
	float m_fMaxUpTime;
	float m_fMaxDownTime;
	float m_fRotateVelocity;
	bool m_bKeepVelocityOnHoming;
	float m_fMinHomingTime;
};

USTRUCT(BlueprintType)
struct FEX359_BeamOnSplineInfo
{
	GENERATED_BODY()
public:
	class UClass* m_ProjectileClass;
	float m_fStartRadius;
	float m_fStartAngle;
	float m_fSplineSizeScale;
	bool m_bSplineReverse;
	float m_fSplineAngleOffset;
	float m_fMaxWaitTime;
	float m_fAccel;
	float m_fMaxVelocity;
	float m_fMaxMoveEndLifeTime;
	bool m_bStopOnEnd;
	float m_fDebugDispTime;
	bool m_bDebugDisp;
	class USplineComponent* m_SplineComp;
	class ATresCharPawnBase* m_Owner;
	class ATresProjectile_e_ex359_BeamBase* m_Projectile;
};

USTRUCT(BlueprintType)
struct FEX359_BeamOnSplineInfoSet
{
	GENERATED_BODY()
public:
	TArray<struct FEX359_BeamOnSplineInfo> m_BeamOnSplineInfoArray;
	TEnumAsByte<EEX359_SpawnDirType> m_DirType;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx771_FlareAttractParam
{
	GENERATED_BODY()
public:
	class ATresActor_e_ex771_Attract* m_pAttract;
	class AActor* m_pTarget;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx771_FlarePillarAttractParam
{
	GENERATED_BODY()
public:
	class ATresActor_e_ex771_Attract* m_pAttract;
	class AActor* m_pTarget;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx771_BlowParam
{
	GENERATED_BODY()
public:
	class ATresActor_e_ex771_Attract* m_pBlow;
	class AActor* m_pTarget;
};

USTRUCT(BlueprintType)
struct FTres_e_ex773_Eclipse13_ShellMoveData
{
	GENERATED_BODY()
public:
	float SpawnTime;
	float TimeToLandingPoint;
	int GeneratorIndex;
	int LandingPointIndex;
};

USTRUCT(BlueprintType)
struct FTres_e_ex773_Eclipse13_WaveData
{
	GENERATED_BODY()
public:
	float StartWait;
	class UTres_e_ex773_Eclipse13_WaveAsset* Asset;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx773_FlareAttractParam
{
	GENERATED_BODY()
public:
	class ATresActor_e_ex773_Attract* m_pAttract;
	class AActor* m_pTarget;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx773_FlarePillarAttractParam
{
	GENERATED_BODY()
public:
	class ATresActor_e_ex773_Attract* m_pAttract;
	class AActor* m_pTarget;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx773_BlowParam
{
	GENERATED_BODY()
public:
	class ATresActor_e_ex773_Attract* m_pBlow;
	class AActor* m_pTarget;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex027_ThundagaParam
{
	GENERATED_BODY()
public:
	class UParticleSystemComponent* m_ThundagaEff;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex054_DischargeInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex313_ThunderInfo
{
	GENERATED_BODY()
public:
	class UParticleSystemComponent* m_ThunderEff;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex361_ThunderInfo
{
	GENERATED_BODY()
public:
	class UParticleSystemComponent* m_ThunderEff;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_EncloseFlareParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_EncloseFlareHvnParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_FlareShotEntryParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_FlareShotSphereEntryParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_FlareShotHvnParam
{
	GENERATED_BODY()
public:
	class ATresProjectile_e_ex771_FlareShotTornado* m_FlareShot;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_FlareShotHvnGroupParam
{
	GENERATED_BODY()
public:
	class UParticleSystemComponent* m_FireOmenEff;
	TArray<struct FTresEnemy_e_ex771_FlareShotHvnParam> m_FlareShotHvnParamArray;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_FlareShotTornadoParam
{
	GENERATED_BODY()
public:
	class UParticleSystemComponent* m_FireOmenEff;
	TArray<TWeakObjectPtr<class ATresProjectileBase>> m_FlareShotArray;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_FlareShotTornadoEntryParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_FlareTornadoParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_ExFlareTornadoParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_HvnDebrisParam
{
	GENERATED_BODY()
public:
	class ATresProjectile_e_ex771_DebrisAttract* m_DebrisAttract;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_LivelyFlarePillarParam
{
	GENERATED_BODY()
public:
	class AActor* m_Target;
	class ATresProjectileBase* m_LivelyFlarePillar;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_LivelyFlarePillarPoint
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_EncloseFlareParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_EncloseFlareHvnParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_FlareShotEntryParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_FlareShotSphereEntryParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_FlareShotHvnParam
{
	GENERATED_BODY()
public:
	class ATresProjectile_e_ex773_FlareShotTornado* m_FlareShot;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_FlareShotHvnGroupParam
{
	GENERATED_BODY()
public:
	class UParticleSystemComponent* m_FireOmenEff;
	TArray<struct FTresEnemy_e_ex773_FlareShotHvnParam> m_FlareShotHvnParamArray;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_FlareShotTornadoParam
{
	GENERATED_BODY()
public:
	class UParticleSystemComponent* m_FireOmenEff;
	TArray<TWeakObjectPtr<class ATresProjectileBase>> m_FlareShotArray;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_FlareShotTornadoEntryParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_FlareTornadoParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_ExFlareTornadoParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_HvnDebrisParam
{
	GENERATED_BODY()
public:
	class ATresProjectile_e_ex773_DebrisAttract* m_DebrisAttract;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_LivelyFlarePillarParam
{
	GENERATED_BODY()
public:
	class AActor* m_Target;
	class ATresProjectileBase* m_LivelyFlarePillar;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_LivelyFlarePillarPoint
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_LivelyFlarePillarGenClass
{
	GENERATED_BODY()
public:
	FName ClassName;
	FName AttackName;
};

USTRUCT(BlueprintType)
struct FTresE_EX781BreakSlashPatternWaveParam
{
	GENERATED_BODY()
public:
	float m_IntervalTime;
	float m_SwordWaveRot;
	float m_LookAheadTime;
	int m_BulletID;
};

USTRUCT(BlueprintType)
struct FTresProjEffectSet_e_ex310
{
	GENERATED_BODY()
public:
	class UParticleSystem* m_AppearEffect;
	FName m_AppearEffectAttach;
	float m_AppearVisibleDelayTime;
	bool m_bIsEnableAppearScaleAnim;
	bool m_bIsDelayAppearScaleAnim;
	float m_AppearScaleAnimTime;
	float m_AppearScaleAnimStartScale;
	bool m_bIsEnableAppearDitherAnim;
	bool m_bIsDelayAppearDitherAnim;
	float m_AppearDitherAnimTime;
	float m_AppearDitherAnimStartValue;
	class UParticleSystem* m_DisappearEffect;
	FName m_DisappearEffectAttach;
	float m_DisappearVisibleDelayTime;
	bool m_bIsEnableDisappearScaleAnim;
	float m_DisappearScaleAnimTime;
	float m_DisappearScaleAnimEndScale;
	bool m_bIsEnableDisappearDitherAnim;
	float m_DisappearDitherAnimTime;
	float m_DisappearDitherAnimEndValue;
	bool m_bIsNotifyOnlyVisible;
	class UParticleSystemComponent* m_pEffect;
	class UTresSkeletalMeshComponent* MyMesh;
};

USTRUCT(BlueprintType)
struct FTresProjEffectSet_e_ex359
{
	GENERATED_BODY()
public:
	class UParticleSystem* m_AppearEffect;
	FName m_AppearEffectAttach;
	float m_AppearVisibleDelayTime;
	bool m_bIsEnableAppearScaleAnim;
	bool m_bIsDelayAppearScaleAnim;
	float m_AppearScaleAnimTime;
	float m_AppearScaleAnimStartScale;
	bool m_bIsEnableAppearDitherAnim;
	bool m_bIsDelayAppearDitherAnim;
	float m_AppearDitherAnimTime;
	float m_AppearDitherAnimStartValue;
	class UParticleSystem* m_DisappearEffect;
	FName m_DisappearEffectAttach;
	float m_DisappearVisibleDelayTime;
	bool m_bIsEnableDisappearScaleAnim;
	float m_DisappearScaleAnimTime;
	float m_DisappearScaleAnimEndScale;
	bool m_bIsEnableDisappearDitherAnim;
	float m_DisappearDitherAnimTime;
	float m_DisappearDitherAnimEndValue;
	bool m_bIsNotifyOnlyVisible;
	class UParticleSystemComponent* m_pEffect;
	class UTresSkeletalMeshComponent* MyMesh;
};

USTRUCT(BlueprintType)
struct FTresProjectileAssetUnit
{
	GENERATED_BODY()
public:
	FName ProjectileName;
	class UClass* ProjectileData;
};

USTRUCT(BlueprintType)
struct FTresPlayerMagicAssetUnit
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresPlayerMagicAssetUnit")
	TEnumAsByte<ETresCommandKind> m_Command;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresPlayerMagicAssetUnit")
	bool m_bIsCastType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresPlayerMagicAssetUnit")
	bool m_bIsTurnType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresPlayerMagicAssetUnit")
	bool m_bIsDirectPos;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresPlayerMagicAssetUnit")
	int m_EffectGroup;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresPlayerMagicAssetUnit")
	int m_VoiceGroup;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresPlayerMagicAssetUnit")
	int m_VoiceGroupFinish;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresPlayerMagicAssetUnit")
	class UClass* m_AssetData00;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresPlayerMagicAssetUnit")
	class UClass* m_AssetData01;
};

USTRUCT(BlueprintType)
struct FTresLotterySpawnActorData
{
	GENERATED_BODY()
public:
	class UClass* SpawnClass;
	int Power;
	struct FTresSpawnRuleChildGenerator ChildGeneratorRule;
};

USTRUCT(BlueprintType)
struct FTresRemunerationData
{
	GENERATED_BODY()
public:
	uint32 Crc;
	TArray<FName> ItemKeyArray;
};

USTRUCT(BlueprintType)
struct FTresRemyCuttingFoodParam
{
	GENERATED_BODY()
public:
	ERemyCuttingFoodType FoodType;
	class UClass* FoodPawn;
	class UClass* FoodMassStaticMeshActor;
	float FoodSliceBending;
	float FoodSliceJumpWaitTime;
	float FoodSliceJumpWaitTimeLagRangeStart;
	float FoodSliceJumpWaitTimeLagRangeEnd;
	float FoodSliceJumpSpeedCoefficient;
	class UParticleSystem* FoodClusterParticle;
	class UCurveVector* FoodClusterParticleCurveVector;
};

USTRUCT(BlueprintType)
struct FTresSharedFixedCameraParam
{
	GENERATED_BODY()
public:
	float FieldOfView;
	FVector WorldLocation;
	FRotator WorldRotation;
};

USTRUCT(BlueprintType)
struct FTresTextureReference
{
	GENERATED_BODY()
public:
	struct FStringAssetReference m_TexturePath;
};

USTRUCT(BlueprintType)
struct FTresTaggedTextureSet
{
	GENERATED_BODY()
public:
	FName m_Tag;
	TArray<struct FTresTextureReference> m_TextureReferences;
	TArray<class UTexture2D*> m_Textures;
};

struct FTresRootComponentPostPhysicsTickFunction : public FTickFunction
{
};

USTRUCT(BlueprintType)
struct FTresSignProjectileAttackStartDelayParam_e_ex357
{
	GENERATED_BODY()
public:
	FName AttackCollisionGroupName;
	float AttackStartDelayTime;
};

USTRUCT(BlueprintType)
struct FTresSoKcKeyHoleConnectNode
{
	GENERATED_BODY()
public:
	TWeakObjectPtr<class ATresSoKcKeyHoleGimmickActor> ConnectableKeyHole;
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
struct FTresSplineMeshExtensionStaticMeshInfo
{
	GENERATED_BODY()
public:
	class UStaticMesh* StaticMesh;
	class ASQEX_SplineActor* spline;
	bool isReverseMeshFront;
};

USTRUCT(BlueprintType)
struct FTresSplineTransformArray
{
	GENERATED_BODY()
public:
	FVector Location;
	FRotator Rotator;
};

USTRUCT(BlueprintType)
struct FTresSqexSplineNearestInfo
{
	GENERATED_BODY()
public:
	float Time;
	FVector nearPos;
	/*class ASQEX_SplineActor* splineActor;
	class ASQEX_SplineActor* nextSplineActor;
	class USQEX_SplineComponent* SplineComponent;*/
};

USTRUCT(BlueprintType)
struct FTresStateAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresStateAsset")
	class UClass* MyStateClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresStateAsset")
	FName MyStateName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresStateAsset")
	TEnumAsByte<ETresStateID> MyStateID;
};

USTRUCT(BlueprintType)
struct FTresSpawnActorDataForGenerator : public FTresSpawnActorData
{
	GENERATED_BODY()
public:
	struct FTresSpawnRuleChildGenerator ChildParam;
};

USTRUCT(BlueprintType)
struct FTresTsAwardData
{
	GENERATED_BODY()
public:
	FName m_Key;
	FString m_DevelopName;
	bool m_IsGet;
};

USTRUCT(BlueprintType)
struct FTresTextColor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresTextColor")
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresTextColor")
	struct FColor Color;
};

USTRUCT(BlueprintType)
struct FTresStreamingTextureData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresStreamingTextureData")
	FStringAssetReference m_TexturePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresStreamingTextureData")
	int m_MipMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresStreamingTextureData")
	int m_MaxMipMap;
};

USTRUCT(BlueprintType)
struct FTresTextureStream
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresTextureStream")
	FName m_ViewTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresTextureStream")
	TArray<struct FTresStreamingTextureData> m_TextureData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresTextureStream")
	TArray<class UTexture2D*> m_Textures;
};

USTRUCT(BlueprintType)
struct FTresOverwriteAllowedMips
{
	GENERATED_BODY()
public:
	//UPROPERTY(VisibleInstanceOnly, Category = "FTresOverwriteAllowedMips")
	//TEnumAsByte<ETextureGroup> m_TextureGroup;

	UPROPERTY(VisibleInstanceOnly, Category = "FTresOverwriteAllowedMips")
	int m_MaxAllowedMips;
};

USTRUCT(BlueprintType)
struct FTresNavLinkSet_e_ex035
{
	GENERATED_BODY()
public:
	class ANavLinkProxy* NavLinkProxy;
	TEnumAsByte<ETresNavLinkSegment_e_ex035> NavLinkSegment;
};

USTRUCT(BlueprintType)
struct FTresUICustomizeCommand
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresCommandKind> CommandKind;
	FString HelpTextNamespaceKey;
};

USTRUCT(BlueprintType)
struct FTresUICustomizeMagicCommand
{
	GENERATED_BODY()
public:
	struct FTresUICustomizeCommand Command[0x3];
};

USTRUCT(BlueprintType)
struct FSlideShowCutData
{
	GENERATED_BODY()
public:
	FString m_CutId;
	int m_SlideId;
};

USTRUCT(BlueprintType)
struct FSlideShowData
{
	GENERATED_BODY()
public:
	class USwfMovie* m_SwfAssetSequence;
	int m_NumPhotos;
	int m_Duration;
	int m_MaxFrame;
	ETresUISlideShowDataType m_DataType;
	class USoundBase* m_BGM;
	FString m_BgmTextId;
	TArray<struct FSlideShowCutData> m_Cuts;
	TArray<int> m_InitPhotos;
};

USTRUCT(BlueprintType)
struct FSlideShowIconData
{
	GENERATED_BODY()
public:
	TAssetPtr<class UTexture> Texture;
	int m_Code;
};

USTRUCT(BlueprintType)
struct FSlideShowFrameData
{
	GENERATED_BODY()
public:
	class UTexture* Texture;
};

USTRUCT(BlueprintType)
struct FTresUIBlurParams
{
	GENERATED_BODY()
public:
	float fUIBlurIntensity;
	float fUIBlurSize;
	float fUIBlurHoleSize;
	float fUIBlurCharaAdaptationRate;
	float fUIBlurHoleEdgeSize;
	float fUILensDistortionSize;
	float fUILensDistortionPower;
	float fUILensDistortionEdgeSize;
	float fUILensDistortionContrast;
};

USTRUCT(BlueprintType)
struct FTresSubCommandData : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSubCommandData")
	TEnumAsByte<ETresCommandKind> SubCommand1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSubCommandData")
	TEnumAsByte<ETresCommandKind> SubCommand2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSubCommandData")
	TEnumAsByte<ETresCommandKind> SubCommand3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSubCommandData")
	TEnumAsByte<ETresCommandKind> SubCommand4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSubCommandData")
	TEnumAsByte<ETresCommandKind> SubCommand5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSubCommandData")
	TEnumAsByte<ETresCommandKind> SubCommand6;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSubCommandData")
	TEnumAsByte<ETresCommandKind> SubCommand7;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSubCommandData")
	TEnumAsByte<ETresCommandKind> SubCommand8;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSubCommandData")
	TEnumAsByte<ETresCommandKind> SubCommand9;
};

USTRUCT(BlueprintType)
struct FTresShortcutCommandPageData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresShortcutCommandPageData")
	TEnumAsByte<ETresCommandKind> Commands;
};

USTRUCT(BlueprintType)
struct FTresShortcutCommandData : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresShortcutCommandData")
	struct FTresShortcutCommandPageData Page1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresShortcutCommandData")
	struct FTresShortcutCommandPageData Page2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresShortcutCommandData")
	struct FTresShortcutCommandPageData Page3;
};

USTRUCT(BlueprintType)
struct FTresUIMobileDictionaryCharacterCategory
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresWorldCode> WorldCode;
	FString TextId;
	ETresUIDataVersion Version;
};

USTRUCT(BlueprintType)
struct FTresUIMobileDictionaryEnemyCategory
{
	GENERATED_BODY()
public:
	ETresUIDictionaryEnemyCategory Category;
	FString TextId;
};

USTRUCT(BlueprintType)
struct FTresUICampMenuCuisineFavoriteItem
{
	GENERATED_BODY()
public:
	class UGFxObject* Icon;
	class UGFxObject* TextIcon;
	class UGFxObject* Name;
	class UGFxObject* TextName;
	class UGFxObject* Num;
	class UGFxObject* TextNum;
};

USTRUCT(BlueprintType)
struct FTresCodeMenuScoreData
{
	GENERATED_BODY()
public:
	class UGFxObject* m_pRecord;
	class UGFxObject* m_pObj;
	class UGFxObject* m_pLabel1;
	class UGFxObject* m_pLabelName1;
	class UGFxObject* m_pLabelName2;
	class UGFxObject* m_pLabelName3;
	class UGFxObject* m_pLabelNum;
};

USTRUCT(BlueprintType)
struct FTresCodeMenuIconData
{
	GENERATED_BODY()
public:
	class UGFxObject* m_pIconAnm;
	class UTresASProxyTresControlsIcon* m_pIcon;
};

USTRUCT(BlueprintType)
struct FTresUIP_Hologram_CharaInfoIcon
{
	GENERATED_BODY()
public:
	class UGFxObject* m_IconRoot;
	class UTresASProxyTresControlsIcon* m_IconImg;
	class UGFxObject* m_NewMark;
};

USTRUCT(BlueprintType)
struct FTresHudBaymaxPointInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresHudBaymaxLocationMarkerInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresHudBaymaxCharaMarkerInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresHudBaymaxDarkCubeInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresHudBmmTargetInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresCockpitCmd
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCockpitCmd")
	TEnumAsByte<ETresCommandKind> m_cmdKind;
};

USTRUCT(BlueprintType)
struct FTresCockpitCmdInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCockpitCmdInfo")
	TArray<struct FTresCockpitCmd> m_cockpitCmdAry;
};

USTRUCT(BlueprintType)
struct FTresCockpitShortcutCmdInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCockpitShortcutCmdInfo")
	struct FTresCockpitCmd m_cockpitCmdList;
};

USTRUCT(BlueprintType)
struct FTresCockpitFriendInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresHudGigasMarkerInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresGumiShipGuideObjects
{
	GENERATED_BODY()
public:
	class UGFxObject* m_pGuide;
	class UGFxObject* m_pCursor;
	class UGFxObject* m_pDist;
	class UGFxObject* m_pIcon;
	class UGFxObject* m_pLevel;
	class UGFxObject* m_pNormalLevel;
	class UGFxObject* m_pBossLevel;
};

USTRUCT(BlueprintType)
struct FTresGumiShipMultiItemMovieClip
{
	GENERATED_BODY()
public:
	class UGFxObject* m_pRoot;
	class UGFxObject* m_pItemName;
	class UGFxObject* m_pItemNum;
};

USTRUCT(BlueprintType)
struct FTresGumiShipRaderObject
{
	GENERATED_BODY()
public:
	class UGFxObject* m_pRoot;
	class UGFxObject* m_pMarker;
	class UGFxObject* m_pWorld;
	class UGFxObject* m_pArena;
	class UGFxObject* m_pTravel;
	class UGFxObject* m_pTreasure;
	class UGFxObject* m_pCrystal;
	class UGFxObject* m_pBox;
};

USTRUCT(BlueprintType)
struct FTresGumiShipItemGetObjects
{
	GENERATED_BODY()
public:
	class UGFxObject* m_pRoot;
	class UGFxObject* m_pMaxIcon;
	class UGFxObject* m_pItemName;
	class UGFxObject* m_pItemNum;
};

USTRUCT(BlueprintType)
struct FTresGumiShipDestroyMovieClip
{
	GENERATED_BODY()
public:
	class UGFxObject* m_pRoot;
	class UGFxObject* m_pNum;
	class UGFxObject* m_pNumEff;
};

USTRUCT(BlueprintType)
struct FTresGumiShipSPWeaponGauge
{
	GENERATED_BODY()
public:
	class UGFxObject* m_pRoot;
	class UGFxObject* m_pGaugeBody;
	class UGFxObject* m_pGaugeEff;
};

USTRUCT(BlueprintType)
struct FTresGumiShipTargetMarkerObject
{
	GENERATED_BODY()
public:
	class UGFxObject* m_pRoot;
	class UGFxObject* m_pLockAnm;
};

USTRUCT(BlueprintType)
struct FTresHudPlaneTargetInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FHudRalph_RalphBtn
{
	GENERATED_BODY()
public:
	class UGFxObject* Root;
	class UGFxObject* Icon;
	class UGFxObject* IconS;
	class UTresASProxyTresControlsBitmapNumber* StockBitmapNumber;
};

USTRUCT(BlueprintType)
struct FTresHudSpecialShipTargetInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresHudSRideTargetInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresCockpitTargetInfo
{
	GENERATED_BODY()
public:
	class UGFxObject* TargetCursor;
	class UGFxObject* Gauge;
	class UGFxObject* GaugeParts[0x3];
};

USTRUCT(BlueprintType)
struct FTresUIP_HudTarget_ButtonCount
{
	GENERATED_BODY()
public:
	class UGFxObject* Root;
	class UGFxObject* ColorSet;
	class UTresASProxyTresControlsBitmapNumber* Seconds;
	class UTresASProxyTresControlsBitmapNumber* DecimalSeconds;
};

USTRUCT(BlueprintType)
struct FTresUIP_HudTarget_UltimaLock
{
	GENERATED_BODY()
public:
	class UGFxObject* Root;
	class UGFxObject* UltimaLockSet;
	class UGFxObject* UltimaLockGauge;
};

USTRUCT(BlueprintType)
struct FTresUIP_HudTarget_PushButtonMark
{
	GENERATED_BODY()
public:
	class UGFxObject* Root;
};

USTRUCT(BlueprintType)
struct FTresUIP_MultiItemGet_ItemText
{
	GENERATED_BODY()
public:
	class UGFxObject* Name;
	class UGFxObject* Num;
	class UGFxObject* Max;
};

USTRUCT(BlueprintType)
struct FTresUINaviMapMarkerData
{
	GENERATED_BODY()
public:
	class UGFxObject* ASObject;
	TWeakObjectPtr<class AActor> OwnerActor;
};

USTRUCT(BlueprintType)
struct FTresSpecialShipPointInfo
{
	GENERATED_BODY()
public:
	class UTresASProxyTresControlsButton* m_pGFxMarker;
	class UGFxObject* m_pGFxSave;
	class UGFxObject* m_pGFxVisited;
	class UGFxObject* m_pGFxNext;
};

USTRUCT(BlueprintType)
struct FTresUIShopVoice
{
	GENERATED_BODY()
public:
	TAssetPtr<class USoundBase> VoiceSound;
	FString SubtitleTextID;
	float FixedSubtitleDisplayTime;
};

USTRUCT(BlueprintType)
struct FTresUIShopInfo
{
	GENERATED_BODY()
public:
	FString NameTextID;
	TAssetPtr<class UClass> Staff;
	TArray<struct FTresUIShopVoice> TalkWelcome;
	TArray<struct FTresUIShopVoice> TalkNewArrival;
};

USTRUCT(BlueprintType)
struct FTresUIDoFParams
{
	GENERATED_BODY()
public:
	float DepthOfFieldFocalDistance;
	float DepthOfFieldFocalRegion;
	float DepthOfFieldNearTransitionRegion;
	float DepthOfFieldFarTransitionRegion;
	float DepthOfFieldScale;
	float DepthOfFieldNearBlurSize;
	float DepthOfFieldFarBlurSize;
};

USTRUCT(BlueprintType)
struct FTresUIWorldIconName
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresWorldCode> WorldCode;
	FString WorldNameKey;
	TAssetPtr<class UTexture> IconAsset;
};

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
struct FTresEquipmentSetNameTable
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEquipmentSetNameTable")
	ETresWeaponForm m_FormType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEquipmentSetNameTable")
	ETresWeaponGrowLvl m_GrowLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEquipmentSetNameTable")
	FName m_EquipSetName;
};

USTRUCT(BlueprintType)
struct FTresEquipmentSetTable
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEquipmentSetTable")
	FName EquipName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEquipmentSetTable")
	FName EquipSetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresEquipmentSetTable")
	TArray<struct FTresEquipmentSetNameTable> m_EquipSetNames;
};

USTRUCT(BlueprintType)
struct FTresEquipmentSetAssetUnit
{
	GENERATED_BODY()
public:
	FName SetName;
	TArray<struct FTresEquipmentAssetUnit> SetData;
	TArray<struct FTresEquipmentAssetUnit> TransformSetData;
	class USkeletalMesh* m_ReplaceSkinAsset;
	ETresCharWearForm m_OwnerWearForm;
	TArray<class UTresAnimSet*> ReplaceAnimSets;
	class UTresPlayerMagicSet* m_ReplaceMagicSet;
	class UTresProjectileSet* m_ReplaceProjectileSet;
	FVector m_ReplaceIKOffset;
	TArray<struct FTresEquipmentAccompanyPawnAssetUnit> m_AccompanyPawnAssets;
};

USTRUCT(BlueprintType)
struct FTresEquipValiableSet
{
	GENERATED_BODY()
public:
	ETresWeaponGrowLvl m_GrowLevel;
	TArray<struct FTresEquipmentAssetUnit> m_Equips;
	TArray<struct FTresEquipmentAssetUnit> m_TransformSetData;
	ETresCharWearForm m_OwnerWearForm;
	TArray<class UTresAnimSet*> m_ReplaceAnimSets;
	class UTresPlayerMagicSet* m_ReplaceMagicSet;
	class UTresProjectileSet* m_ReplaceProjectileSet;
	FVector m_ReplaceIKOffset;
	TArray<struct FTresEquipmentAccompanyPawnAssetUnit> m_AccompanyPawnAssets;
	class UTresUIDataAsset* m_UIDataAsset;
};

USTRUCT(BlueprintType)
struct FTresEquipValiableSetList
{
	GENERATED_BODY()
public:
	TArray<struct FTresEquipValiableSet> m_List;
};

USTRUCT(BlueprintType)
struct FTresWearformTextureReplaceData
{
	GENERATED_BODY()
public:
	int m_ReplaceIndex;
	FName m_ReplaceMaterialName;
	class UTexture2D* m_ImageTexture;
	class UTexture2D* m_NormalTexture;
	class UTexture2D* m_MaskTexture;
	class UTexture2D* m_PointTexture;
};

USTRUCT(BlueprintType)
struct FTresWearformSetUnit
{
	GENERATED_BODY()
public:
	FName m_FormName;
	bool m_bTextureReplace;
	TArray<struct FTresWearformTextureReplaceData> m_TextureReplaceData;
	TArray<class UTresAnimSet*> m_ReplaceAnimSets;
	bool m_bPlayFaceAnim;
	FName m_PlayFaceAnimName;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleAutoIncreaseSpeedParam
{
	GENERATED_BODY()
public:
	int ColumnsNum;
	float DecreaseSpeed;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleChallengeModeAutoIncreaseSpeedCoeffParam
{
	GENERATED_BODY()
public:
	float RemainingTime;
	float DecreaseSpeedCoeff;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBucketUnitPlacingParam
{
	GENERATED_BODY()
public:
	FVector2D LocationOffsetXY;
	FRotator Rotation;
	FVector Scale;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBonusGaugeIncreaseByComboParam
{
	GENERATED_BODY()
public:
	int ComboValue;
	float IncreaseValue;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBonusGaugeIncreaseByInvolvedUnitsNumParam
{
	GENERATED_BODY()
public:
	int InvolvedUnitsNum;
	float IncreaseValue;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBonusGaugeIncreaseRateParam
{
	GENERATED_BODY()
public:
	int BonusUnitsNum;
	float Rate;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleComboBonusGaugeIncreaseParam
{
	GENERATED_BODY()
public:
	TArray<struct FTresWinniePuzzleBonusGaugeIncreaseByComboParam> IncreaseByComboParam;
	TArray<struct FTresWinniePuzzleBonusGaugeIncreaseByInvolvedUnitsNumParam> IncreaseByInvolvedUnitsNumParam;
	TArray<struct FTresWinniePuzzleBonusGaugeIncreaseRateParam> IncreaseRateParam;
	bool EnableIncreaseRateWhenGetCombo2OrMore;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBonusGaugeAlwaysDecreasingParam
{
	GENERATED_BODY()
public:
	bool IsEnable;
	float DecreasingBaseSpeed;
	class UCurveFloat* DecreasingSpeedChangeCurve;
	float DecreasingBaseSpeedOnSecond;
	class UCurveFloat* DecreasingSpeedChangeCurveOnSecond;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBombScoreOffsetParam
{
	GENERATED_BODY()
public:
	int Column;
	FVector Offset;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBombInterferedParam
{
	GENERATED_BODY()
public:
	bool IsInterfereUnits;
	float DistanceWithInterferedUnitOnSimulate;
	bool IsInterfereUnitsFloat;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleCharacterBonusBombParam
{
	GENERATED_BODY()
public:
	int FailTimes;
	int FailTimesAdditionalInvocation;
	TArray<int> TargetExcludeRows;
	TArray<int> TargetExcludeColumns;
	float MoveWaitTime;
	float FloatMoveDistance;
	float SuccessFloatMoveDistance;
	float FloatMoveVerticalAngle;
	float FloatMoveHorizontalAngle;
	float FloatMoveSpeed;
	float FloatMoveDelayTimeCorrectionValue;
	float FloatTime;
	class UCurveFloat* FloatMoveCurve;
	float MoveHeightMin;
	float MoveHeightMax;
	float MoveSpeed;
	float MoveDelayTimeCorrectionValue;
	float GotoFillUnitsPhaseWaitTime;
	TArray<struct FTresWinniePuzzleBombScoreOffsetParam> ScoreOffset;
	TArray<struct FTresWinniePuzzleBombScoreOffsetParam> ScoreOffsetOnSuccess;
	FVector ReservationLocation;
	FVector FirstAppearLocation;
	FVector FirstLocationWhenBonusOccurring;
	class UParticleSystem* AppearParticle;
	class UParticleSystem* MoveParticle;
	class USQEX_ParticleAttachDataAsset* ComeOutParticleOnReadyAttachData;
	class USQEX_ParticleAttachDataAsset* ComeOutParticleOnDiveAttachData;
	struct FTresWinniePuzzleBombInterferedParam InterferedParam;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleDecreaseStyleParam
{
	GENERATED_BODY()
public:
	int ColumnNum;
	int DecreaseColumnNum1st;
	int DecreaseColumnNum2nd;
	int ColumnDiffPerDecrease;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleCharacterBonusDecreaseParam
{
	GENERATED_BODY()
public:
	TArray<struct FTresWinniePuzzleDecreaseStyleParam> StyleParam;
	TArray<struct FTresWinniePuzzleDecreaseStyleParam> StyleParamAdditionalInvocation;
	int MinColumn;
	float MoveWaitTime1st;
	float MoveWaitTime1stWhenReserved;
	float MoveWaitTime2nd;
	float MoveHeightMin;
	float MoveHeightMax;
	float MoveSpeed;
	float MoveDelayTimeCorrectionValue;
	float WaitTimeTo2ndMove;
	float GotoFillUnitsPhaseWaitTime;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleHoneypotFillProbabilityParam
{
	GENERATED_BODY()
public:
	int diffNumBetweenMaxAndExist;
	float spawnNewOneProbability;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleHoneypotFillRowsParam
{
	GENERATED_BODY()
public:
	TArray<int> RowIdxes;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleHoneypotGaugeIncreaseValueParam
{
	GENERATED_BODY()
public:
	int HoneypotComboNum;
	int IncreaseValue;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleChallengeModeHoneypotGaugeParam
{
	GENERATED_BODY()
public:
	int Level;
	float GaugeValueIncValueRate;
	int GaugeValueDecSpeed;
	int SpawnMaxNum;
	bool SpawnInSameRow;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleHoneypotGaugeParam
{
	GENERATED_BODY()
public:
	int GaugeValueMax;
	TArray<struct FTresWinniePuzzleHoneypotGaugeIncreaseValueParam> GaugeIncreaseValueParam;
	float GaugeIncreaseSpeed;
	float GaugeIncreaseEffectLifetime;
	TArray<struct FTresWinniePuzzleChallengeModeHoneypotGaugeParam> ChallengeModeParam;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleGhostUnitStraightMoveJudgementRowRange
{
	GENERATED_BODY()
public:
	int StartRow;
	int EndRow;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleTotalScoreEvalution
{
	GENERATED_BODY()
public:
	int totalScore;
	EWinniePuzzleTotalScoreEvalution Evalution;
	TArray<int> GotItemNumList;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleFirstPlayReward
{
	GENERATED_BODY()
public:
	ETresItemDefFoodstuff FoodStuff;
	int EarnNum;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleChallengeModeLimitTimeIncreaseParam
{
	GENERATED_BODY()
public:
	int Level;
	float IncreaseTime;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleComboEvalution
{
	GENERATED_BODY()
public:
	int ComboNum;
	int BonusScore;
	EWinniePuzzleComboEvalution Evalution;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleComboEvalutionParam
{
	GENERATED_BODY()
public:
	TArray<struct FTresWinniePuzzleComboEvalution> ComboEvalution;
	int BreakthroughLimitBonusScorePerCombo;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleUnitScore
{
	GENERATED_BODY()
public:
	int UnitNum;
	int Score;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleUnitScoreParam
{
	GENERATED_BODY()
public:
	TArray<struct FTresWinniePuzzleUnitScore> UnitScores;
	TArray<struct FTresWinniePuzzleUnitScore> UnitScoresForCharacterBonus;
	EWinniePuzzleUnitScoreSizeJudgementMethod UnitScoreSizeJudgementMethod;
	int UnitScoreSizeJudgementNum;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleAdditionalBonusParam
{
	GENERATED_BODY()
public:
	int SingleInvocationScore;
	int AdditionalInvocationScore;
	int SingleInvocationAdditionalScore;
	int AdditionalInvocationAdditionalScore;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleScoreEvalutionInOneTurnParam
{
	GENERATED_BODY()
public:
	int ScoreInOneTurn;
	EWinniePuzzleComboEvalution ScoreEvalution;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleSpecialMoveParam
{
	GENERATED_BODY()
public:
	bool UseSpecialMove;
	int InvokeClusterMinUnitsNum;
	float P1DistanceFromStartMin;
	float P1DistanceFromStartMax;
	float MoveAngleRangeStartValue;
	float MoveAngleRangeEndValue;
	float MoveSpeed;
	class UParticleSystem* MoveLocusParticle;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleSpecialUnitParam
{
	GENERATED_BODY()
public:
	bool Enable;
	int MaxNum;
	int SpawnColumnsOffsetMax;
	class UParticleSystem* Particle;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBoundStyleParam
{
	GENERATED_BODY()
public:
	EWinniePuzzleBoundStartMoveDirection StartMoveDirection;
	int MoveStartColumn;
	int MoveEndColumnNumDiff;
	int EntryRow;
	int EntryColumn;
	int FirstTargetRow;
	int BoundTimes;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleCharacterBonusBoundParam
{
	GENERATED_BODY()
public:
	float MoveWaitTime;
	float MoveHeightMin;
	float MoveHeightMax;
	float MoveSpeed;
	float MoveDelayTimeCorrectionValue;
	float WaitBoundAnimationTime;
	float GotoFillUnitsPhaseWaitTime;
	TArray<struct FTresWinniePuzzleBoundStyleParam> StyleParam;
	TArray<struct FTresWinniePuzzleBoundStyleParam> StyleParamAdditionalInvocation;
	bool UseSpecialMove;
	class UParticleSystem* BoundParticle;
	float DistanceWithBoundPointWhenSpawnBoundParticle;
	FVector ReservationLocation;
};

USTRUCT(BlueprintType)
struct FTresAbilityDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName m_KeyName;
	ETresAbilityCategory m_Category;
	ETresAbilityEquipType m_EquipType;
	int8 m_UseAP;
	int8 m_UseMP;
	int8 m_MaxEquip;
	FString m_Comment;
	int m_UIPriority;
	FString m_NameTextID;
	FString m_HelpTextID;
};

USTRUCT(BlueprintType)
struct FTresAccessory_e_ex036_WaterBall
{
	GENERATED_BODY()
public:
	class UParticleSystemComponent* m_WaterBallEff;
};

USTRUCT(BlueprintType)
struct FTresAchievementParam : public FTableRowBase
{
	GENERATED_BODY()
public:
	int Param;
};

USTRUCT(BlueprintType)
struct FArtilleryOptimizeParam
{
	GENERATED_BODY()
public:
	int m_OffsetIndex;
	FName m_AttackName;
};

USTRUCT(BlueprintType)
struct FTresActionBindParams
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemyEx361CounterAfterActionInfo
{
	GENERATED_BODY()
public:
	ETresEnemyEx361CounterAfterActionKind ActionKind;
	ETresAIActionAbortTimingID AbortActionID;
};

USTRUCT(BlueprintType)
struct FTresHopNavLinkExtendedInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresLowJumpNavLinkExtendedInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresJumpNavLinkExtendedInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresAnimNode_AnimSetEvaluator : public FAnimNode_Base
{
	GENERATED_BODY()
public:
	FName m_AnimName;
	float m_ExplicitTime;
	float m_X;
	float m_Y;
	float m_Z;
	class UAnimSequenceBase* m_Sequence;
	class UBlendSpaceBase* m_BlendSpace;
	class UTresAnimInstance* m_Instance;
	struct FBlendFilter m_BlendFilter;
	TArray<struct FBlendSampleData> m_BlendSampleDataCache;
};

USTRUCT(BlueprintType)
struct FTresAnimNode_AnimSetPlayer : public FAnimNode_Base
{
	GENERATED_BODY()
public:
	FName m_AnimName;
	float m_X;
	float m_Y;
	float m_Z;
	bool m_bLoopAnimation;
	float m_PlayRate;
	int m_GroupIndex;
	TEnumAsByte<EAnimGroupRole::Type> m_GroupRole;
	class UAnimSequenceBase* m_Sequence;
	class UBlendSpaceBase* m_BlendSpace;
	class UTresAnimInstance* m_Instance;
	float m_InternalTimeAccumulator;
	struct FBlendFilter m_BlendFilter;
	TArray<struct FBlendSampleData> m_BlendSampleDataCache;
};

USTRUCT(BlueprintType)
struct FTresAnimNode_ExDropWaist : public FAnimNode_Base
{
	GENERATED_BODY()
public:
	struct FPoseLink SourcePose;
	float Alpha;
	struct FInputScaleBias AlphaScaleBias;
	struct FBoneReference m_EffectBone;
	float m_DropSpeed;
	float m_DropDetectHeightMax;
	float m_DropDetectHeightMin;
	TArray<struct FBoneReference> m_IKBones;
};

USTRUCT(BlueprintType)
struct FTresLookAtRotBoneParam
{
	GENERATED_BODY()
public:
	struct FBoneReference m_Bone;
	float m_YawCoefficientData;
	float m_PitchCoefficientData;
	float m_ParamACoefficientData;
};

USTRUCT(BlueprintType)
struct FTresLookAtEyeBoneParam
{
	GENERATED_BODY()
public:
	struct FBoneReference m_Bone;
	FRotator m_RotLimitMin;
	FRotator m_RotLimitMax;
};

USTRUCT(BlueprintType)
struct FTresAnimNode_ExLookAt : public FAnimNode_SkeletalControlBase
{
	GENERATED_BODY()
public:
	struct FBoneReference m_LookAtBaseBone;
	FVector m_LookAtBaseOffset;
	FVector LookAtLocation;
	float LookAtParamA;
	bool m_bIsDirectLook;
	FRotator m_RotationLimitDegMin;
	FRotator m_RotationLimitDegMax;
	float m_RotationBackMarginDeg;
	float m_RotationSpeedDeg;
	TArray<struct FTresLookAtRotBoneParam> m_RotBones;
	TArray<struct FTresLookAtEyeBoneParam> m_EyeBones;
	int m_LodLimit;
};

USTRUCT(BlueprintType)
struct FTresLookAtSubBoneParam
{
	GENERATED_BODY()
public:
	struct FBoneReference m_Bone;
	FRotator m_RotLimitMin;
	FRotator m_RotLimitMax;
};

USTRUCT(BlueprintType)
struct FTresAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	GENERATED_BODY()
public:
	struct FBoneReference BoneToModify;
	FVector LookAtLocation;
	FRotator RotationLimitMin;
	FRotator RotationLimitMax;
	float RotationSpeed;
	TArray<struct FTresLookAtSubBoneParam> m_SubBones;
};

USTRUCT(BlueprintType)
struct FTresAnimNode_ModifyBoneCurveParam
{
	GENERATED_BODY()
public:
	struct FBoneReference m_BoneToModify;
	TEnumAsByte<EBoneModificationMode> m_RotationMode;
	class UCurveVector* m_InterpRotationCurve;
	FRotator m_InterpRotationOffset;
};

USTRUCT(BlueprintType)
struct FTresAnimNode_ModifyBoneCurve : public FAnimNode_Base
{
	GENERATED_BODY()
public:
	struct FPoseLink SourcePose;
	float m_CurvePosition;
	TArray<struct FTresAnimNode_ModifyBoneCurveParam> m_InterpParams;
};

USTRUCT(BlueprintType)
struct FTresAnimNode_SaveCachedPose : public FAnimNode_Base
{
	GENERATED_BODY()
public:
	struct FPoseLink SourcePose;
};

USTRUCT(BlueprintType)
struct FTresAnimNode_SplineAnchor : public FAnimNode_Base
{
	GENERATED_BODY()
public:
	struct FPoseLink SourcePose;
	float Alpha;
	struct FInputScaleBias AlphaScaleBias;
	bool m_IsAnchorMode;
	FVector m_TargetLocation;
	struct FBoneReference m_EffectNode;
	struct FBoneReference m_BaseNode;
	ETresSplineAnchorInterpType m_InterpType;
	struct FInterpCurveVector m_InterpLocationInfo;
};

USTRUCT(BlueprintType)
struct FMaskedJoint
{
	GENERATED_BODY()
public:
	struct FBoneReference Joint;
	float Percentage;
};

USTRUCT(BlueprintType)
struct FMaskedJointChain
{
	GENERATED_BODY()
public:
	TArray<struct FMaskedJoint> MaskedJoints;
};

USTRUCT(BlueprintType)
struct FPDControllerScalar
{
	GENERATED_BODY()
public:
	float Gain;
};

USTRUCT(BlueprintType)
struct FTresAnimNode_UseCachedPose : public FAnimNode_Base
{
	GENERATED_BODY()
public:
	bool m_bSetRefferedFlag;
	bool m_bAlwaysRefferPrevPose;
};

USTRUCT(BlueprintType)
struct FTresAnimNotifyState_PlayVoice_PlayedInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FWeaponSwingSEAttachedInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresAnsemCodeData : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresItemDefReport ItemID;
	FString DetailTextID;
};

USTRUCT(BlueprintType)
struct FTresAreaNameDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FString AreaNameKey;
	FString SubAreaNameKey;
	FName MapNameKey;
	FName NavMapNameKey;
};

USTRUCT(BlueprintType)
struct FTresMapNameDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	TAssetPtr<class UTexture> IconAsset;
	FString NameKey;
};

USTRUCT(BlueprintType)
struct FTresUIGameFlagData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUIGameFlagData")
	FName FlagName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUIGameFlagData")
	FName FlagLabelName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUIGameFlagData")
	bool bGameCleared;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUIGameFlagData")
	bool bReMindCleared;
};

USTRUCT(BlueprintType)
struct FTresAreaSelectData : public FTableRowBase
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresWorldCode> WorldCode;
	FName SavePointName;
	FName MapName;
	FString MapNameNamespaceKey;
	FString AreaNameNamespaceKey;
	TAssetPtr<class UTexture> IconAsset;
	int UIPriority;
	struct FTresUIGameFlagData EnableGameFlag;
	struct FTresUIGameFlagData ForceOpenGameFlag;
	struct FTresUIGameFlagData DisableGameFlag;
	TArray<struct FTresUIGameFlagData> RestrictionStartGameFlag;
	TArray<struct FTresUIGameFlagData> RestrictionEndGameFlag;
	bool EnableLanding;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex027_ThundagaInfo
{
	GENERATED_BODY()
public:
	class UParticleSystemComponent* m_ThundagaEff;
};

USTRUCT(BlueprintType)
struct FTresBattleLevelFromName : public FTableRowBase
{
	GENERATED_BODY()
public:
	int BattleLevel;
};

USTRUCT(BlueprintType)
struct FTresPlayerSpecialActionLogRecord
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresAttackMissLogRecord
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresAttackHitLogRecord
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresStartAttackLogRecord
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTornadoBlowPawnInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTCHE02WALL_PARAM
{
	GENERATED_BODY()
public:
	class UClass* CameraShake;
};

USTRUCT(BlueprintType)
struct FTresCharAnimInstanceProxy : public FTresAnimInstanceProxy
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresChrSEDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	class USoundBase* m_Asset;
};

USTRUCT(BlueprintType)
struct FTresAttackDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	float m_Power;
	TEnumAsByte<ETresDamageKind> m_DamageKind;
	ETresDamageAttribute m_DamageAttribute;
	float m_DamagePowerScale;
	float m_DamageParabolaAngle;
	float m_DamageMoveLength;
	float m_DamageBrakeParam;
	ETresAtkHitKnockbackType m_KnockbackType;
	float m_DamageExecRate;
	float m_DamageEffectTime;
	ETresBadStatusType m_BadStatusKind;
	float m_BadStatusGenRate;
	float m_BadStatusEffectTime;
	float m_BadStatusEffectParam;
	ETresAtkTeamCheckType m_TeamCheckType;
	int m_ReactionPowerValue;
	bool m_bIsScrumAttack;
	int m_ArmorAttackPower;
	int m_FormPoint;
	bool m_bIsMagicAttack;
	bool m_bIsIvalidGuard;
	bool m_bIsRapidFire;
	bool m_bIsKillerAttack;
	bool m_bIsAttractionDamage;
	bool m_bIsCounterAttack;
	bool m_bIsEnableWeakGuardAttack;
	int m_ReflectLevel;
	ETresAtkCollReflectReaction m_ReflectReaction;
	float m_RevengePoint;
	ETresPhysDamageForceLevel m_PhysForceLv;
};

USTRUCT(BlueprintType)
struct FTresEnemyBaseStatusDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	int m_BaseHP;
	int m_BaseExp;
	int m_BaseAttackPower;
	int m_BaseDefensePower;
};

USTRUCT(BlueprintType)
struct FTresShipLevelUpDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	int m_Exp;
	int m_HP;
	int m_AttackPower;
	FString m_Comment;
};

USTRUCT(BlueprintType)
struct FTresChrLevelUpDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	int m_Exp;
	int m_AttackPower;
	int m_MagicPower;
	int m_DefensePower;
	int m_AbilityPoint;
	ETresAbilityKind m_AbilityKind1;
	ETresAbilityKind m_AbilityKind2;
	ETresAbilityKind m_AbilityKind3;
};

USTRUCT(BlueprintType)
struct FTresChrBaseParamDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	int m_MaxHitPoint;
	float m_MaxHPRate;
	int m_MaxMagicPoint;
	int m_MaxFocusPoint;
	int m_AttackPower;
	int m_MagicPower;
	int m_DefensePower;
	int m_AbilityPoint;
	float m_ExpRate;
	ETresBodyPushPowerLevel m_BodyPushPower;
	ETresChrBiologicalType m_BioType;
	float m_AttractionRate;
	int m_MaxBodyStrongValue;
	int m_MaxArmorHP;
	int m_DamageMin;
	int m_DamageMax;
	bool m_NeedReactionSameTeamZeroDmgAtk;
	float m_RevengeLimit;
	int m_MaxRevengeCount;
	float m_RevengeCoolDownTime;
	float m_RevengeCoefficientPhysical;
	float m_RevengeCoefficientFire;
	float m_RevengeCoefficientBlizzard;
	float m_RevengeCoefficientThunder;
	float m_RevengeCoefficientWater;
	float m_RevengeCoefficientAero;
	float m_RevengeCoefficientDark;
	float m_RevengeCoefficientNoType;
	int m_AttrResistPhysical;
	int m_AttrResistFire;
	int m_AttrResistBlizzard;
	int m_AttrResistThunder;
	int m_AttrResistWater;
	int m_AttrResistAero;
	int m_AttrResistDark;
	int m_AttrResistNoType;
	int m_ResistRapidFire;
	int m_ResistComboParam;
	int m_AttrWeekPointPhysical;
	int m_AttrWeekPointFire;
	int m_AttrWeekPointBlizzard;
	int m_AttrWeekPointThunder;
	int m_AttrWeekPointWater;
	int m_AttrWeekPointAero;
	int m_AttrWeekPointDark;
	int m_AttrWeekPointNoType;
	bool m_bResistEffectFreeFlow;
	bool m_bResistEffectDeath;
	bool m_bResistEffectCatch;
	bool m_bResistEffectDrillBind;
	bool m_bResistEffectYoBind;
	bool m_bResistEffectRalphBind;
	bool m_bResistEffectEnergyBurst;
	bool m_bResistEffectFreeze;
	bool m_bResistEffectStop;
	bool m_bResistEffectMagnet;
	bool m_bResistEffectStun;
	bool m_bResistEffectSneeze;
	bool m_bResistEffectHoney;
	bool m_bResistEffectCloud;
	bool m_bResistEffectDischarge;
	bool m_bResistEffectBurn;
	bool m_bResistEffectPoleSpinTurn;
	ETresDropItemID m_DropPrize1;
	int m_NumDropPrize1;
	ETresDropItemID m_DropPrize2;
	int m_NumDropPrize2;
	ETresDropItemID m_DropItemID;
	int m_DropItemRate;
	ETresDropItemID m_DropItemID2;
	int m_DropItemRate2;
	ETresDropItemID m_DropItemID3;
	int m_DropItemRate3;
};

USTRUCT(BlueprintType)
struct FTresCommandKindData : public FTableRowBase
{
	GENERATED_BODY()
public:
	FString Name;
	int8 Type;
	int8 Cate;
	int8 Old;
	int8 Attr;
	int8 Local;
	int8 Flag;
	int8 Sp;
	int8 Mp;
	int8 Fp;
	int Param0;
	int Param1;
	int Param2;
	int Param3;
	FString LocKey;
};

USTRUCT(BlueprintType)
struct FTresComNpcEntityCountInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresControlledRandomDistribution_Uniform
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresAccelAttackInfo_e_ex359
{
	GENERATED_BODY()
public:
	bool bValid;
	float A;
	float B;
	float x_min;
	float x_max;
};

USTRUCT(BlueprintType)
struct FTresPointDamageEvent : public FPointDamageEvent
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTornadoDebrisObject
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTornadoDebrisTransform
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTornadoDebrisState
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresUIGameFlagText
{
	GENERATED_BODY()
public:
	FString TextId;
	struct FTresUIGameFlagData GameFlag;
};

USTRUCT(BlueprintType)
struct FTresUIActorSetting
{
	GENERATED_BODY()
public:
	int LightSetIndex;
	int PostProcessSetIndex;
};

USTRUCT(BlueprintType)
struct FTresUIGameFlagActor
{
	GENERATED_BODY()
public:
	TAssetPtr<class UClass> ActorAsset;
	struct FTresUIActorSetting ActorSetting;
	struct FTresUIGameFlagData GameFlag;
};

USTRUCT(BlueprintType)
struct FTresDictionaryCharacterData : public FTableRowBase
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresWorldCode> WorldCode;
	int UIPriority;
	TArray<struct FTresUIGameFlagText> Texts;
	TArray<struct FTresUIGameFlagActor> Actors;
	FString NameTextID;
	FString SourceTextID;
	ETresItemDefKeyItem KeyItemID;
	TEnumAsByte<ESqexCPPKHSWorldType> KHSWorldType;
	ETresUIDataVersion Version;
};

USTRUCT(BlueprintType)
struct FTresDictionaryEnemyData : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresUIDictionaryEnemyCategory Category;
	int UIPriority;
	FString TextId;
	TArray<struct FTresUIGameFlagActor> Actors;
	FString NameTextID;
	bool bHideKillCount;
	ETresEnemyUniqueID MainEnemyID;
	TArray<ETresEnemyUniqueID> SubEnemyIDs;
	TEnumAsByte<ESqexCPPKHSWorldType> KHSWorldType;
	ETresUIDataVersion Version;
};

USTRUCT(BlueprintType)
struct FTresDLCIdentifier : public FTableRowBase
{
	GENERATED_BODY()
public:
	FString strValueEU;
	FString strValueJP;
	FString strValueNA;
	FString strValueTW;
	bool m_HasData;
	FString m_MountName;
};

USTRUCT(BlueprintType)
struct FSQEX_EffectAttachData
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTroopsRewards : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresDropItemID m_Prize1;
	FName m_Item1;
	int m_NumPrize1;
	int m_PrizeRate1;
	ETresDropItemID m_Prize2;
	FName m_Item2;
	int m_NumPrize2;
	int m_PrizeRate2;
	ETresDropItemID m_Prize3;
	FName m_Item3;
	int m_NumPrize3;
	int m_PrizeRate3;
	ETresDropItemID m_Prize4;
	FName m_Item4;
	int m_NumPrize4;
	int m_PrizeRate4;
	ETresDropItemID m_Prize5;
	FName m_Item5;
	int m_NumPrize5;
	int m_PrizeRate5;
	ETresDropItemID m_OnBoardPrize1;
	FName m_OnBoardItem1;
	int m_NumOnBoardPrize1;
	int m_OnBoardPrizeRate1;
	ETresDropItemID m_OnBoardPrize2;
	FName m_OnBoardItem2;
	int m_NumOnBoardPrize2;
	int m_OnBoardPrizeRate2;
	ETresDropItemID m_OnBoardPrize3;
	FName m_OnBoardItem3;
	int m_NumOnBoardPrize3;
	int m_OnBoardPrizeRate3;
	ETresDropItemID m_OnBoardPrize4;
	FName m_OnBoardItem4;
	int m_NumOnBoardPrize4;
	int m_OnBoardPrizeRate4;
	FName m_OnBoardItem5;
	ETresDropItemID m_OnBoardPrize5;
	int m_NumOnBoardPrize5;
	int m_OnBoardPrizeRate5;
};

USTRUCT(BlueprintType)
struct FTres_e_bx903Shine_Task
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_dw401_AirBlowParam
{
	GENERATED_BODY()
public:
	class ATresCharPawnBase* m_pTgtPawn;
};

USTRUCT(BlueprintType)
struct FDestinaionCandidate_e_ex035
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotModifySet
{
	GENERATED_BODY()
public:
	class AActor* m_Target;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx711_Flotation
{
	GENERATED_BODY()
public:
	class AStaticMeshActor* m_pActor;
};

USTRUCT(BlueprintType)
struct FTresEnemyEx711_ScaffoldParam
{
	GENERATED_BODY()
public:
	class AStaticMeshActor* m_pActor;
};

USTRUCT(BlueprintType)
struct FTresEnemyBigDealParam_e_ex356
{
	GENERATED_BODY()
public:
	FName FailedDamageAttackDataIDName;
	float ShuffleTime;
	float AttackBeforeDeceleration;
	float EndRotationAcceleration;
	float EndRotationAccelerationTime;
	float EndRotationMaxSpeed;
	int FirstSecondNotCardDesignNum;
	TArray<struct FTresEnemyBigDealContractionSpeedParam_e_ex356> FirstSecondContractionSpeedParamList;
	float FirstSecondEndRadius;
	float FirstSecondCardRotationSpeed;
	float FirstSecondCardShaffleIntervalTime;
	int LastNotCardDesignNum;
	float LastContractionStartDelayTime;
	TArray<struct FTresEnemyBigDealContractionSpeedParam_e_ex356> LastContractionSpeedParamList;
	float LastEndRadius;
	float LastCardRotationSpeed;
	float LastCardShaffleIntervalTime;
	TArray<float> FirstSecondAttackStartRadiusList;
	TArray<float> LastAttackStartRadiusList;
	float AttackTargetFollowSpeed;
	float AttackStartDelayTime;
	float CenterLocationCheckPlayerRadius;
};

USTRUCT(BlueprintType)
struct FTresFieldGenerateAttackParam_e_ex357
{
	GENERATED_BODY()
public:
	bool bIsFieldPenetrateAttackStart;
	float StartTime;
	float IntervalTime;
	float LifeTime;
};

USTRUCT(BlueprintType)
struct FTresFieldVoiceExecuteData
{
	GENERATED_BODY()
public:
	class AActor* m_pExecuter;
	float m_Time;
};

USTRUCT(BlueprintType)
struct FTresFirstMapJumpData : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresGumiShipWorldSymbolID m_nWmSymbleID;
	FName m_PresistenLevelPath;
	FName m_PlayerStartTagName;
	bool m_isWorldStart;
	ETresGumiShipWorldSymbolID m_nWmStart;
	bool m_isTpStart;
	ETresGumiShipTravelPointID m_nTpStart;
	FName m_DebugInfo;
};

USTRUCT(BlueprintType)
struct FTresFoodstuffDropDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	int8 m_GenRate;
	ETresFoodstuffDropperID m_BPType;
	ETresItemDefFoodstuff m_Drop1ItemID;
	int8 m_Drop1Num;
	int8 m_Drop1Rate;
	int8 m_Drop1Level;
	ETresItemDefFoodstuff m_Drop2ItemID;
	int8 m_Drop2Num;
	int8 m_Drop2Rate;
	int8 m_Drop2Level;
	ETresItemDefFoodstuff m_Drop3ItemID;
	int8 m_Drop3Num;
	int8 m_Drop3Rate;
	int8 m_Drop3Level;
	ETresItemDefFoodstuff m_Drop4ItemID;
	int8 m_Drop4Num;
	int8 m_Drop4Rate;
	int8 m_Drop4Level;
	ETresItemDefFoodstuff m_Drop5ItemID;
	int8 m_Drop5Num;
	int8 m_Drop5Rate;
	int8 m_Drop5Level;
	ETresItemDefFoodstuff m_Drop6ItemID;
	int8 m_Drop6Num;
	int8 m_Drop6Rate;
	int8 m_Drop6Level;
	ETresItemDefFoodstuff m_Drop7ItemID;
	int8 m_Drop7Num;
	int8 m_Drop7Rate;
	int8 m_Drop7Level;
	ETresItemDefFoodstuff m_Drop8ItemID;
	int8 m_Drop8Num;
	int8 m_Drop8Rate;
	int8 m_Drop8Level;
};

USTRUCT(BlueprintType)
struct FTresFriendEvaluationDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresCommandKind> m_CommandKind;
	int m_BadStatEvaluation;
	int m_HitPointEvaluation;
	int m_MagicPointEvaluation;
	int m_FocusPointEvaluation;
	int m_AllCharaEvaluation;
	bool m_SpecialCure;
	int m_RecoveryPoint;
};

USTRUCT(BlueprintType)
struct FTresFriendHomePosDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	float m_BaseLen;
	float m_BaseRot;
	float m_MiddleLen;
	float m_MiddleRot;
	float m_LargeLen;
	float m_LargeRot;
};

USTRUCT(BlueprintType)
struct FTresFriendRelationDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresChrUniqueID m_UniqueID;
	int m_Index;
	bool m_bodySize;
};

USTRUCT(BlueprintType)
struct FTresFriendIdDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName m_Name;
	ETresChrUniqueID m_UniqueID;
};

USTRUCT(BlueprintType)
struct FGameHelpItemPage
{
	GENERATED_BODY()
public:
	TAssetPtr<class UTexture> Image;
	FString TextNamespaceKey;
	TMap<FName, FString> TextNamespaceKeyPlatform;
};

USTRUCT(BlueprintType)
struct FTresGameHelpDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresGameHelp ID;
	ETresGameHelpCategory Category;
	TArray<struct FGameHelpItemPage> Pages;
	int UIPriority;
	FString TitleNamespaceKey;
	ETresUIDataVersion Version;
	bool WinImageUseKeyboardMouse;
	bool WinKeyboardHighlights;
};

USTRUCT(BlueprintType)
struct FTresGumiGameOverHintData : public FTableRowBase
{
	GENERATED_BODY()
public:
	FString HintNameLocSpaceKey;
};

USTRUCT(BlueprintType)
struct FTresGameOverHintEnemyInfo
{
	GENERATED_BODY()
public:
	ETresEnemyUniqueID ID;
	TArray<FName> AttackID;
};

USTRUCT(BlueprintType)
struct FTresGameOverHintData : public FTableRowBase
{
	GENERATED_BODY()
public:
	FString HintNameLocSpaceKey;
	EGameOverHintType HintType;
	int Priority;
	TEnumAsByte<ETresWorldCode> WorldCode;
	FName MapName;
	struct FTresUIGameFlagData StartGameFlag;
	struct FTresUIGameFlagData EndGameFlag;
	TArray<struct FTresGameOverHintEnemyInfo> EnemyInfo;
	ETresGameOverHintSpecialType SpecialType;
	ETresUIDataVersion Version;
};

USTRUCT(BlueprintType)
struct FTresSpawnPrizeData : public FTresSpawnActorData
{
	GENERATED_BODY()
public:
	float OverrideSphereRadius_;
};

USTRUCT(BlueprintType)
struct FTresCarDriverData
{
	GENERATED_BODY()
public:
	class UStaticMesh* DriverMesh;
	class UMaterialInterface* DriverMaterial;
};

USTRUCT(BlueprintType)
struct FTresFestivalClapSpot
{
	GENERATED_BODY()
public:
	class UParticleSystemComponent* m_pPSC;
};

USTRUCT(BlueprintType)
struct FSpecialMoveMission
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresRapunzelDanceMarker
{
	GENERATED_BODY()
public:
	EDancePerformType m_PerformType;
	float m_Length;
	FVector m_Location;
	class UParticleSystemComponent* m_pPSC;
};

USTRUCT(BlueprintType)
struct FTresGimmickTT_Post_PresentDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresItemDefBattleItem m_BattleItemID1;
	ETresItemDefCampItem m_CampItemID1;
	ETresItemDefAccessory m_AccessoryID1;
	ETresItemDefMaterial m_MaterialID1;
	int m_ItemNum1;
	float m_ItemPrizeRate1;
	bool m_ItemRare1;
};

USTRUCT(BlueprintType)
struct FTresGumiShipPlayerBaseCommonParameter
{
	GENERATED_BODY()
public:
	float m_fHitPoint;
	float m_fAttackPoint;
};

USTRUCT(BlueprintType)
struct FTresGumiShipPlayerBaseMovementParameter
{
	GENERATED_BODY()
public:
	float m_fMinOfSpeed;
	float m_fMaxOfSpeed;
	float m_fSpeedOfPitchUp;
	float m_fSpeedOfPitchDown;
	float m_fSpeedOfYaw;
	float m_fSpeedOfRoll;
	float m_fCoolDownTimeOfBoost;
	float m_fDurationOfBoost;
	float m_fScaleOfBoost;
	float m_fLimitOfPitch;
	float m_fSpeedOfAutoHorizontalCorrection;
	float m_fCameraDepthLagDestDist;
	float m_fCameraDepthLagAccSpeed;
	float m_fCameraDepthLagDecSpeed;
	float m_fCameraDepthLagScale;
};

USTRUCT(BlueprintType)
struct FTresGumiShipPlayerBaseTrackingParameter
{
	GENERATED_BODY()
public:
	float m_fTrackingTime;
	float m_fTracking2DSpeed;
	float m_fRailSlide2DSpeed;
	float m_fTrackingSpeed;
	float m_fBetweenDist;
	float m_fMostNearDistRatioForBoost;
	float m_fTrackingRange;
	float m_fCameraArmLength;
	float m_fCameraPitch;
	float m_fFOV;
	float m_fNearClipPlane;
	float m_fAdjustmentUD;
	float m_fAdjustmentLR;
	float m_fParseAdjustmentUD;
	float m_fParseAdjustmentLR;
	float m_fModelParseAdjustmentUD;
	float m_fModelParseAdjustmentLR;
	FVector2D m_vLimitOfMove;
	FVector2D m_vRatioOfStartMoveCamera;
	float m_fInterpSpeedOfCamera;
};

USTRUCT(BlueprintType)
struct FTresGumiShipPlayerBaseParameterDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	struct FTresGumiShipPlayerBaseCommonParameter m_Common;
	struct FTresGumiShipPlayerBaseMovementParameter m_Movement;
	struct FTresGumiShipPlayerBaseTrackingParameter m_Tracking;
};

USTRUCT(BlueprintType)
struct FTresGumiShipEnemyTerritoryInfo
{
	GENERATED_BODY()
public:
	ETresGumiShipEnemyTerritoryID m_eTerritoryID;
	FName m_sNameLabel;
	ETresGummiSpaceDef m_nSpace;
	int8 m_nDispNum;
	int8 m_nLevel;
	bool m_isBoss;
	bool m_isDiscard;
};

USTRUCT(BlueprintType)
struct FTresGumiShipEnemyTerritoryParameterDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	TArray<struct FTresGumiShipEnemyTerritoryInfo> m_Territory;
};

USTRUCT(BlueprintType)
struct FTresGumiShipStrikeGumiParametarDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresGumiShipCollisionShape m_eShape;
	FVector m_vSize;
	FVector m_vOffset;
	float m_fRefreshSec;
	float m_fWidth;
};

USTRUCT(BlueprintType)
struct FTresGumiShipAbilityParametarDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	float m_fEffect1;
	float m_fEffect2;
	float m_fEffect3;
	struct FTresGumiShipElementResistance m_ElementResistance;
	int8 m_byCost;
	int8 m_byMaxCountOfEquip;
};

USTRUCT(BlueprintType)
struct FTresGumiShipHudRaderParam
{
	GENERATED_BODY()
public:
	float m_fRaderRange;
	float m_fMiddleAlertRange;
	float m_fNearAlertRange;
};

USTRUCT(BlueprintType)
struct FTresGumiShipHudGuideAreaParam
{
	GENERATED_BODY()
public:
	float m_fWorldSymbolMarkerVolumeRadius;
	float m_fTravelGateMarkerVolumeRadius;
	float m_fTreasureSphereMarkerVolumeRadius;
	float m_fEnemyTerritoryMarkerVolumeRadius;
};

USTRUCT(BlueprintType)
struct FTresGumiShipHudStanderdDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	struct FTresGumiShipHudRaderParam m_RaderParam;
	struct FTresGumiShipHudGuideAreaParam m_GuideParam;
	float m_fShowMessageWindowTime;
	int m_dEnemyHPGaugeMax;
};

USTRUCT(BlueprintType)
struct FTresGumiShipBattleMissionItemParameterDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	struct FTresGumiShipDropPrizeData m_Compensations[0x3];
	struct FTresGumiShipDropPrizeData m_CompensationForFirstTime;
};

USTRUCT(BlueprintType)
struct FTresGumiShipBattleMisisonBonusWithConditionI
{
	GENERATED_BODY()
public:
	uint32 m_udBonusPoint;
	int m_dConditionValue;
};

USTRUCT(BlueprintType)
struct FTresGumiShipBattleMissionIndividalParam
{
	GENERATED_BODY()
public:
	ETresGumiShipBattleMissionType m_eBattleType;
	uint32 m_udScoreOfRanks[0x5];
	int m_dTimeBonus[0x8];
	struct FTresGumiShipBattleMisisonBonusWithConditionI m_DefeatedBonus[0x3];
	uint32 m_udTimeLimitSeconds;
	uint32 m_udNumbetOfDefeated;
	FName m_ItemDataName;
	FString m_InfoMesLabel;
};

USTRUCT(BlueprintType)
struct FTresGumiShipBattleMissionIndividalParameterDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	struct FTresGumiShipBattleMissionIndividalParam m_Individal;
};

USTRUCT(BlueprintType)
struct FTresGumiShipBattleMissionCommonParam
{
	GENERATED_BODY()
public:
	uint32 m_udNoDamageBonus;
	uint32 m_udBrokePartsBonus;
	uint32 m_udDefeatedGroupBonus;
	float m_fDamageScoreCoefficient;
	float m_fScoreRates[0x8];
};

USTRUCT(BlueprintType)
struct FTresGumiShipBattleMissionCommonParameterDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	struct FTresGumiShipBattleMissionCommonParam m_Common;
};

USTRUCT(BlueprintType)
struct FTresGumiShipProjectileDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName m_AttackDataName;
	float m_fMovementSpeed;
	float m_fRange;
	float m_fHomingAngle;
	float m_fDoHomingInDegree;
	FVector m_vScale;
	class UParticleSystem* m_pMuzzleFlashEffect;
	bool m_bDoWarpHitLocation;
	bool m_bTargetLocationPredictable;
};

USTRUCT(BlueprintType)
struct FTresGumiShipWeaponDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	float m_fShootPerSecond;
	float m_fDelayTimeOfStartShoot;
	float m_fDispersion;
	float m_fRollDispersion;
	float m_fForwardOffset;
	class UClass* m_ProjectileType;
};

USTRUCT(BlueprintType)
struct FTresGumiShipAttackDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	float m_fAttackPoint;
	ETresGumiShipAttackElementType m_eElementType;
	ETresGumiShipAttackSubElemntType m_eSubElementType;
	ETresGumiShipReactionType m_eReactionType;
	ETresGumiShipBadStateType m_eBadStateType;
	float m_fTimeOfBadStateEffective;
	float m_fPercentOfBadState;
	FName m_HitEffectDataName;
};

USTRUCT(BlueprintType)
struct FTresGumiShipHitEffectDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	class UParticleSystem* m_pHitEffect;
	bool m_bUseScaleFromCameraDistTo;
};

USTRUCT(BlueprintType)
struct FTresGumiShipGlobalEnemyDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName m_BossWorldUnlockRemoteEventName;
	FName m_SymbolEncountBattleStartRemoteEventName;
	float m_fEnemyRespawnIntervalTime;
	float m_fEnemyRespawnThresholdDistance;
	float m_fBattleStartConditionThresholdTime;
	float m_fBattleStartTriggerActivateThresholdScale;
	float m_fEnemyAttackRequestableScreenPercentageX;
	float m_fEnemyAttackRequestableScreenPercentageY;
	float m_fEnemyAppearFadeDelayTime;
	float m_fTutorialHelpShowThresholdDistance;
};

USTRUCT(BlueprintType)
struct FTresGumiShipEnemyAttackMethodDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName m_AttackName;
	float m_fAttackMinRange;
	float m_fAttackMaxRange;
	float m_fAttackRangeAngle;
	float m_fAttackingTime;
	float m_fCoolDownTime;
	ETresGumiShipEnemyStateID m_eAttackStateID;
	FName m_UsableEnemyID;
	bool m_bUsableDefaultValue;
};

USTRUCT(BlueprintType)
struct FTresGumiShipEnemyBaseParameterDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	int m_nMaxHitPoint;
	int m_nScorePoint;
	float m_fMaxRotateSpeed;
	float m_fPitchLimitAngle;
	struct FTresGumiShipDropPrizeData m_DropPrizeSettingData;
};

USTRUCT(BlueprintType)
struct FTresGumiShipReactionResistance
{
	GENERATED_BODY()
public:
	bool m_bBrow;
};

USTRUCT(BlueprintType)
struct FTresGumiShipBadStateResistance
{
	GENERATED_BODY()
public:
	bool m_bStun;
};

USTRUCT(BlueprintType)
struct FTresGumiShipReactionParameter
{
	GENERATED_BODY()
public:
	float m_fMass;
	ETresGumiShipObjectSize m_eSizeType;
	struct FTresGumiShipReactionResistance m_ReactionResistance;
	struct FTresGumiShipBadStateResistance m_BadStateResistance;
};

USTRUCT(BlueprintType)
struct FTresGumiShipSkeletalMeshCtrl
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresGumiShipClusterInfo : public FTableRowBase
{
	GENERATED_BODY()
public:
	class UStaticMesh* StaticMesh;
	class UParticleSystem* AttachEffectType;
	float HP;
};

USTRUCT(BlueprintType)
struct FTresGumiShipDamageEvent : public FPointDamageEvent
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresGumiShipEnemyGeneratorDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	class UClass* m_SpawnEnemyClass;
	float m_fOffsetX;
	float m_fOffsetY;
	float m_fOffsetZ;
	int m_nAttackPriority;
	float m_fSpawnDelayTime;
	struct FGuid m_EnemyGUID;
};

USTRUCT(BlueprintType)
struct FTresGumiShipSplinePathMoveExecutor
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresGumiShipEnemyStateWork
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresGumiShipGenericProjectileParam
{
	GENERATED_BODY()
public:
	class UParticleSystem* m_pAttachEffectType;
	FName m_ProjectileDataName;
};

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickConstellationTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresGumiShipConstellationCode> m_ConstellationCode;
	FString m_NameStrId;
};

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickDashRingTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	bool m_Type;
	float m_Accelerat;
	float m_AcceleratTime;
	float m_RingRenge;
	float m_fDashDistance;
};

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickPrizeBoxTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	float RollingTime;
	float TriggerLimitTime;
	int MaxCount;
	float RotSpeedScale;
	float BounceAttenuation;
};

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickCrystalTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	float m_fRecoveryPointRate;
	float m_fRotSpeed;
	class UParticleSystem* m_pBrokenVFX;
	bool m_bRevival;
	float m_fRevivalTime;
	float m_fDistance;
	float m_fScaleMax;
	float m_fScaleMid;
	float m_fScaleMin;
};

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickTreasureTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	class UParticleSystem* m_pEmissionVFX;
	class UParticleSystem* m_pAcquisitionVFX;
	class UParticleSystem* m_pGearVFX;
	float m_fTreasureDistance;
	float m_fTreasureAngleSpeed;
	float m_fMaxAngle;
	float m_fGlowMashMin;
	float m_fGlowMashMax;
	class USoundBase* m_SECoreLoopStart;
	class USoundBase* m_SECoreLoopError;
	class USoundBase* m_SECoreLoopEnd;
	class USoundBase* m_SECoreColorChange;
	class USoundBase* m_SEGearSuccess;
};

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickSwCannonTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	class UParticleSystem* m_pSwDeadVFX;
	FVector m_vSwDeadOffset;
	float m_fSwDistance;
	struct FTresGumiShipDropPrizeData m_SwItem;
	float m_fAnglespeed;
	float m_fMaxYaw;
	float m_fMaxPitch;
	float m_fMinPitch;
	float m_fSwPcDistance;
	int m_CannonHP;
	float m_fLaserSavingTime;
	float m_fTriggerReleaseTime;
	float m_fTriggerWaitTime;
	float m_fSwRespawnTime;
};

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickCannonTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	class UParticleSystem* m_pDeadVFX;
	FVector m_vDeadOffset;
	float m_fCannonDistance;
	struct FTresGumiShipDropPrizeData m_Item;
	float m_fPcDistance;
	bool m_MultiCannon;
	int m_CannonHP;
	float m_fRespawnTime;
};

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickMeteorTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	int m_MeteoroHP;
	class UParticleSystem* m_pHoleVFX;
	class UParticleSystem* m_pGuideVFX;
	class UParticleSystem* m_pMeteoroVFX;
	class UParticleSystem* m_pMuzzleVFX;
	class UParticleSystem* m_pDeadVFX;
	float m_fStartDispTimer;
	float m_fEndDispTimer;
	float m_pMuzzleTimer;
	float m_fStartTimer;
	float m_fScaleTimer;
	float m_fGlowTimer;
	float m_fInitalScale;
	float m_fEffectScale;
};

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickMagmaTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	class UParticleSystem* m_pMagmaVFX;
	float m_fPlayerDistance;
};

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickMineTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	float RespawnTime;
	float RespawnDistance;
	int MaxHP;
	bool Fragile;
};

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickTreasureDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FString m_Labels;
	float m_Dir;
	float m_Dirtime;
	FRotator m_InitalRot;
	FRotator m_AnswerRot;
	bool m_PrizeOutPos;
	bool m_DummyMesh;
	FVector m_PrizeOutOffset;
	TArray<FString> m_ImpactMash;
};

USTRUCT(BlueprintType)
struct FTresGumiShipItemlotteryDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	struct FTresGumiShipDropPrizeData m_Itemlottery;
	EGUMI_SHIP_DROPITEM_RARITY m_Rarity;
	int m_ApperProb;
};

USTRUCT(BlueprintType)
struct FTresGumiShipBattleMisisonBonusWithConditionF
{
	GENERATED_BODY()
public:
	float m_fBonusPoint;
	int m_dConditionValue;
};

USTRUCT(BlueprintType)
struct FTresGumiShipMovemnetParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresGumiShipPrizeDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	int m_ItemCount;
	float m_RotatoSpeed;
	float m_fInitSpeed;
	float m_fMaxSpeed;
	float m_fSuctionRange;
	float m_LoopSpeed;
	float m_LoopStartLengs;
	float m_LoopSuction;
	float m_fRevivalDistance;
	float m_fRevivalWaitTimer;
	float m_fStartDistance;
	float m_min_size;
	float m_fSizeSpeed;
	class USoundBase* m_SoundAssets;
};

USTRUCT(BlueprintType)
struct FTresGumiShipPrizeItemDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	class UClass* m_SpawnClass;
	struct FTresGumiShipPrizeDataTable m_Parameters;
};

USTRUCT(BlueprintType)
struct FTresGumiShipTextSet
{
	GENERATED_BODY()
public:
	FString m_strNamespace;
	FString m_strKey;
};

USTRUCT(BlueprintType)
struct FTresTinyShipPlanData : public FTableRowBase
{
	GENERATED_BODY()
public:
	struct FTresGummiShipHeader m_header;
	struct FTresGummiShipSticker m_Sticker[0x8];
	TArray<struct FTresGummiShipPartsStruct> m_body;
};

USTRUCT(BlueprintType)
struct FTresGummiShipPlanData : public FTableRowBase
{
	GENERATED_BODY()
public:
	struct FTresGummiShipHeader m_header;
	struct FTresGummiShipAbility m_Ability;
	struct FTresGummiShipSticker m_Sticker[0x8];
	TArray<struct FTresGummiShipPartsStruct> m_body;
};

USTRUCT(BlueprintType)
struct FTresNameEntryTextData
{
	GENERATED_BODY()
public:
	FString Text[0x64];
};

USTRUCT(BlueprintType)
struct FTresNameEntryTextDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	struct FTresNameEntryTextData TextList[0x9];
};

USTRUCT(BlueprintType)
struct FTresGummiStickerStruct
{
	GENERATED_BODY()
public:
	class UTexture2D* m_pStickerTexture;
};

USTRUCT(BlueprintType)
struct FTresGummiGraphicData
{
	GENERATED_BODY()
public:
	class USkeletalMesh* m_pSkeltalMesh;
	class UTexture2D* m_BaseColorTexture;
	float m_BaseColorTexUVIndex;
	struct FLinearColor m_EmissiveColor;
	struct FLinearColor m_EmissiveMaskChannel;
	class UTexture2D* m_EmissiveMaskTexture;
	float m_EmissiveMaskTexUVIndex;
	float m_EMS_AdjustColor;
	float m_EMS_SineMax;
	float m_EMS_SineMin;
	float m_EMS_SineSpeed;
	float m_EMS_UseColorTable;
	class UTexture2D* m_NormalTexture;
	float m_NormalTexUVIndex;
	class UTexture2D* m_AOTexture;
	float m_AOTexUVIndex;
	class UTexture2D* m_CT1_PaletteTexture;
	float m_CT2_PaletteNum;
	class UTexture2D* m_CT3_MaskTexture;
	float m_CT4_MaskTexUVIndex;
	float m_CT5_MaskTexUVTiling;
	struct FLinearColor m_CT_CustomColor;
	float m_CT_PaletteUse;
	class UTexture2D* m_PTN1_MaskTexture;
	struct FLinearColor m_PTN1_MaskTexture1_R_Color;
	struct FLinearColor m_PTN1_MaskTexture2_G_Color;
	struct FLinearColor m_PTN1_MaskTexture3_B_Color;
	struct FLinearColor m_PTN1_MaskTexture4_A_Color;
	class UTexture2D* m_PTN2_NormalTexture;
	class UTexture2D* m_PTN3_SetTexture;
	float m_PTN4_TexUVIndex;
	float m_PTN5_TexUVTiling;
	float m_PTN_MetalicToSpecular;
	class UTexture2D* m_MaskTexture;
	float m_MaskTexUVIndex;
	struct FLinearColor m_R1_ColorMulti;
	float m_R2_Metallic;
	float m_R3_Specular;
	float m_R4_Roughness;
	struct FLinearColor m_R5_Emissive;
	struct FLinearColor m_R_MaskChannel_2;
	float m_R_NormalStrength;
	float m_R_PatternID;
	float m_R_UVTiling;
	float m_R_UVIndex;
	struct FLinearColor m_G1_ColorMulti;
	float m_G2_Metallic;
	float m_G3_Specular;
	float m_G4_Roughness;
	struct FLinearColor m_G5_Emissive;
	struct FLinearColor m_G_MaskChannel_2;
	float m_G_NormalStrength;
	float m_G_PatternID;
	float m_G_UVTiling;
	float m_G_UVIndex;
	struct FLinearColor m_B1_ColorMulti;
	float m_B2_Metallic;
	float m_B3_Specular;
	float m_B4_Roughness;
	struct FLinearColor m_B5_Emissive;
	struct FLinearColor m_B_MaskChannel_2;
	float m_B_NormalStrength;
	float m_B_PatternID;
	float m_B_UVTiling;
	float m_B_UVIndex;
	struct FLinearColor m_A1_ColorMulti;
	float m_A2_Metallic;
	float m_A3_Specular;
	float m_A4_Roughness;
	struct FLinearColor m_A5_Emissive;
	struct FLinearColor m_A_MaskChannel_2;
	float m_A_NormalStrength;
	float m_A_PatternID;
	float m_A_UVTiling;
	float m_A_UVIndex;
	struct FLinearColor m_LightAttenuationChannel;
	class UTexture2D* m_LightAttenuationTexture;
	float m_LightAttenuationTexUVIndex;
	float m_RotateAxisX;
	float m_RotateAxisY;
	float m_RotateAxisZ;
	float m_RotateSpeed;
	float m_UVScrollSpeedU;
	float m_UVScrollSpeedV;
};

USTRUCT(BlueprintType)
struct FTresGummiPartsStruct
{
	GENERATED_BODY()
public:
	int8 m_nSizeX;
	int8 m_nSizeY;
	int8 m_nSizeZ;
	int16 m_nCost;
	int16 m_nHP;
	int16 m_nSpeed;
	int16 m_nPower;
	int16 m_nRoll;
	int16 m_nAttack;
	int16 m_nTurn;
	bool m_isMaterial;
	bool m_isPattern;
	bool m_isSticker;
	bool m_isColorChange;
	bool m_isFlip;
	bool m_isAnim;
	bool m_isUVAnim;
	float m_fPreviewScale;
	struct FTresGummiGraphicData m_GraphicData;
};

USTRUCT(BlueprintType)
struct FTresGummiPlanInfoData
{
	GENERATED_BODY()
public:
	FString m_PlanName;
	int m_nNowCost;
	int m_nMaxCost;
	int m_nNowHP;
	int m_nMaxHP;
	int m_nNowAttack;
	int m_nMaxAttack;
	int m_nNowPower;
	int m_nMaxPower;
	int m_nNowTurn;
	int m_nMaxTurn;
	int m_nNowRoll;
	int m_nMaxRoll;
	int m_nNowSpeed;
	int m_nMaxSpeed;
	int m_nNowAbility;
	int m_nMaxAbility;
};

USTRUCT(BlueprintType)
struct FTresGummiGraphicDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	class USkeletalMesh* m_pSkeltalMesh;
	class UTexture2D* m_BaseColorTexture;
	float m_BaseColorTexUVIndex;
	struct FLinearColor m_EmissiveColor;
	struct FLinearColor m_EmissiveMaskChannel;
	class UTexture2D* m_EmissiveMaskTexture;
	float m_EmissiveMaskTexUVIndex;
	float m_EMS_AdjustColor;
	float m_EMS_SineMax;
	float m_EMS_SineMin;
	float m_EMS_SineSpeed;
	float m_EMS_UseColorTable;
	class UTexture2D* m_NormalTexture;
	float m_NormalTexUVIndex;
	class UTexture2D* m_AOTexture;
	float m_AOTexUVIndex;
	class UTexture2D* m_CT1_PaletteTexture;
	float m_CT2_PaletteNum;
	class UTexture2D* m_CT3_MaskTexture;
	float m_CT4_MaskTexUVIndex;
	float m_CT5_MaskTexUVTiling;
	struct FLinearColor m_CT_CustomColor;
	float m_CT_PaletteUse;
	class UTexture2D* m_PTN1_MaskTexture;
	struct FLinearColor m_PTN1_MaskTexture1_R_Color;
	struct FLinearColor m_PTN1_MaskTexture2_G_Color;
	struct FLinearColor m_PTN1_MaskTexture3_B_Color;
	struct FLinearColor m_PTN1_MaskTexture4_A_Color;
	class UTexture2D* m_PTN2_NormalTexture;
	class UTexture2D* m_PTN3_SetTexture;
	float m_PTN4_TexUVIndex;
	float m_PTN5_TexUVTiling;
	float m_PTN_MetalicToSpecular;
	class UTexture2D* m_MaskTexture;
	float m_MaskTexUVIndex;
	struct FLinearColor m_R1_ColorMulti;
	float m_R2_Metallic;
	float m_R3_Specular;
	float m_R4_Roughness;
	struct FLinearColor m_R5_Emissive;
	struct FLinearColor m_R_MaskChannel_2;
	float m_R_NormalStrength;
	float m_R_PatternID;
	float m_R_UVTiling;
	float m_R_UVIndex;
	struct FLinearColor m_G1_ColorMulti;
	float m_G2_Metallic;
	float m_G3_Specular;
	float m_G4_Roughness;
	struct FLinearColor m_G5_Emissive;
	struct FLinearColor m_G_MaskChannel_2;
	float m_G_NormalStrength;
	float m_G_PatternID;
	float m_G_UVTiling;
	float m_G_UVIndex;
	struct FLinearColor m_B1_ColorMulti;
	float m_B2_Metallic;
	float m_B3_Specular;
	float m_B4_Roughness;
	struct FLinearColor m_B5_Emissive;
	struct FLinearColor m_B_MaskChannel_2;
	float m_B_NormalStrength;
	float m_B_PatternID;
	float m_B_UVTiling;
	float m_B_UVIndex;
	struct FLinearColor m_A1_ColorMulti;
	float m_A2_Metallic;
	float m_A3_Specular;
	float m_A4_Roughness;
	struct FLinearColor m_A5_Emissive;
	struct FLinearColor m_A_MaskChannel_2;
	float m_A_NormalStrength;
	float m_A_PatternID;
	float m_A_UVTiling;
	float m_A_UVIndex;
	struct FLinearColor m_LightAttenuationChannel;
	class UTexture2D* m_LightAttenuationTexture;
	float m_LightAttenuationTexUVIndex;
	float m_RotateAxisX;
	float m_RotateAxisY;
	float m_RotateAxisZ;
	float m_RotateSpeed;
	float m_UVScrollSpeedU;
	float m_UVScrollSpeedV;
};

USTRUCT(BlueprintType)
struct FTresGummiMaterialDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	class UMaterialInstance* m_MaterialInstance_Base;
	class UMaterialInstance* m_MaterialInstance_Deco;
	class UTexture2D* m_CT1_PaletteTexture;
	float m_CT2_PaletteNum;
	class UTexture2D* m_CT3_MaskTexture_Base;
	class UTexture2D* m_CT3_MaskTexture_Deco;
	float m_CT4_MaskTexUVIndex;
	float m_CT5_MaskTexUVTiling;
	struct FLinearColor m_CT_CustomColor;
	float m_CT_PaletteUse;
	bool m_isPattern;
	bool m_isSticker;
	bool m_isColorChange;
};

USTRUCT(BlueprintType)
struct FTresWorldObjectPreviewTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FTransform m_nTransform_he;
	FTransform m_nTransform_tt;
	FTransform m_nTransform_ts;
	FTransform m_nTransform_ra;
	FTransform m_nTransform_fz;
	FTransform m_nTransform_mi;
	FTransform m_nTransform_bx;
	FTransform m_nTransform_ca;
	FTransform m_nTransform_kg;
	FTransform m_nTransform_cs;
	FTransform m_nTransform_travel;
	FTransform m_nTransform_jump;
};

USTRUCT(BlueprintType)
struct FTresGummiMissionDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName m_nMemo;
	bool m_isUse;
	int m_nDispIndex;
	ETresGummiMissionRarity m_nRarity;
	FString m_nTitleTextID;
	ETresGummiMissionReleaseCondition m_nReleaseCondition;
	FString m_nAfterConditionTextID;
	FString m_nBeforeConditionTextID;
	FString m_nAfterGetItemTextID;
	FString m_nBeforeGetItemTextID;
	uint32_t m_nMissionClearNum;
	bool m_isHideClearNum;
	ETresItemDefGumiParts m_nReward1;
	uint16 m_nReward1Num;
	TArray<ETresItemDefGumiMaterial> m_nReward2;
	TArray<ETresItemDefGumiPattern> m_nReward3;
	TArray<ETresItemDefGumiSticker> m_nReward4;
	TArray<ETresItemDefGumiShipBP> m_nReward5;
	TArray<ETresItemDefGumiEtc> m_nReward6;
};

USTRUCT(BlueprintType)
struct FTresGummiPartsDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName m_nSkeltalMeshName;
	int8 m_nGetMax;
	int8 m_nSizeX;
	int8 m_nSizeY;
	int8 m_nSizeZ;
	int16 m_nCost;
	int16 m_nHP;
	int16 m_nSpeed;
	int16 m_nPower;
	int16 m_nRoll;
	int16 m_nAttack;
	int16 m_nTurn;
	bool m_isFlip;
	bool m_isMaterial;
	bool m_isPattern;
	bool m_isSticker;
	bool m_isColorChange;
	bool m_isAnim;
	bool m_isUVAnim;
	float m_fPreviewScale;
};

USTRUCT(BlueprintType)
struct FTresGummiPatternDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	class UTexture2D* m_PTN1_MaskTexture;
	FLinearColor m_PTN1_MaskTexture1_R_Color;
	FLinearColor m_PTN1_MaskTexture2_G_Color;
	FLinearColor m_PTN1_MaskTexture3_B_Color;
	FLinearColor m_PTN1_MaskTexture4_A_Color;
	class UTexture2D* m_PTN2_NormalTexture;
	class UTexture2D* m_PTN3_SetTexture;
	float m_PTN4_TexUVIndex;
	float m_PTN5_TexUVTiling;
	float m_PTN_MetalicToSpecular;
};

USTRUCT(BlueprintType)
struct FTresGummiPieceDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	TArray<ETresItemDefGumiShipBP> m_pSpace1GummiPieceData;
	TArray<ETresItemDefGumiShipBP> m_pSpace2GummiPieceData;
	TArray<ETresItemDefGumiShipBP> m_pSpace3GummiPieceData;
	TArray<ETresItemDefGumiShipBP> m_pSpace4GummiPieceData;
};

USTRUCT(BlueprintType)
struct FTresGummiPlanSetData : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresItemDefGumiShipBP m_GummiShipPlan;
	ETresItemDefGumiShipBP m_TinyShipPlan[0x2];
};

USTRUCT(BlueprintType)
struct FTresGummiPlanDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	TArray<struct FTresGummiPlanSetData> m_nGummiPlanSet;
	TArray<struct FTresGummiPlanSetData> m_nSpecialGummiPlanSet;
};

USTRUCT(BlueprintType)
struct FTresGumiShipRankDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	int m_nRank;
	int m_nPrize;
	int m_nNextPrize;
	int m_nGummiShipCostAdd;
	int m_nTinyShipCostAdd;
	int16_t m_nAbilityPointAdd;
	int8_t m_nTinyUseAdd;
	int8_t m_nFormationAdd;
	ETresItemDefGumiEtc m_nAbilityKind[0x5];
};

USTRUCT(BlueprintType)
struct FTresGummiStickerDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName m_nTextureName;
};

USTRUCT(BlueprintType)
struct FTresGummiStickerTextureDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	class UTexture2D* m_nTexture;
};

USTRUCT(BlueprintType)
struct FTresGummiTreasureDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	TArray<ETresItemDefGumiParts> m_nTreasureGummiParts;
	TArray<ETresItemDefGumiEtc> m_nTreasureSpecialWeapon;
	TArray<ETresItemDefGumiShipBP> m_nTreasurePlan;
};

USTRUCT(BlueprintType)
struct FTresLuckyMarkMilestoneRewardDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	int RewardIndex;
	int MarkCount;
	bool CompleteRewardFlag;
	FName RewardTreasureName;
};

USTRUCT(BlueprintType)
struct FTresLuckyMarkDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName World;
	int MarkIndex;
};

USTRUCT(BlueprintType)
struct FTornadoVacuumSet
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresHudCommandData : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName MagicSubCommandDataKey;
	FName ItemSubCommandDataKey;
	FName LinkSubCommandDataKey;
	FName ShortcutCommandDataKey;
	FName CheatRightShortcutCommandDataKey;
	FName CheatLeftShortcutCommandDataKey;
	FName WeaponShortcutDataKey;
};

USTRUCT(BlueprintType)
struct FTresShortcutWeaponData : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresItemDefWeapon Type1;
	ETresItemDefWeapon Type2;
	ETresItemDefWeapon Type3;
	ETresItemDefWeapon Type4;
};

USTRUCT(BlueprintType)
struct FTresSlidePhotoWork
{
	GENERATED_BODY()
public:
	class UTexture* pTexture;
};

USTRUCT(BlueprintType)
struct FTresIconTextDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	int X;
	int Y;
	int Width;
	int Height;
	int VSpace;
	FString BindKey;
};

USTRUCT(BlueprintType)
struct FTresFoodCompleteMealEffectDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresAbilityKind m_AbilityPlus;
	int m_Level;
};

USTRUCT(BlueprintType)
struct FTresFoodItemEffectDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FString m_Comment;
	int m_MaxHPPlus;
	int m_MaxMPPlus;
	int m_AttackPlus;
	int m_MagicPlus;
	int m_DefensePlus;
	int m_FoodItemLevel;
	bool m_bPlusFoodItem;
};

USTRUCT(BlueprintType)
struct FTresItemDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName m_KeyName;
	ETresItemCategory m_Category;
	int m_UIPriority;
	FString m_Comment;
	ETresItemCategoryIcon m_CategoryIcon;
	ETresItemRank m_ItemRank;
	TAssetPtr<class UTexture> m_IconAsset;
	FString m_NameTextID;
	FString m_HelpTextID;
	int m_BuyPrice;
	int m_SellPrice;
	int m_ShopLevel;
	int m_GumiShopLevel;
	bool m_bNeedMogCard;
	int m_UnlockFlagIndex;
	bool m_bCanSell;
	bool m_bCanDrop;
	bool m_bCanbeSoldOut;
	int m_MaxNum;
};

USTRUCT(BlueprintType)
struct FTresItemWeaponEnhanceIconDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresItemDefWeapon m_WeaponID;
	TAssetPtr<class UTexture> PickerIconAsset;
	TAssetPtr<class UTexture> KeybladeIconAsset;
};

USTRUCT(BlueprintType)
struct FTresItemSynthesisDataTableBase : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName m_Material0;
	int m_MatNum0;
	FName m_Material1;
	int m_MatNum1;
	FName m_Material2;
	int m_MatNum2;
	FName m_Material3;
	int m_MatNum3;
	FName m_Material4;
	int m_MatNum4;
	FName m_Material5;
	int m_MatNum5;
};

USTRUCT(BlueprintType)
struct FTresItemWeaponEnhanceDataTable : public FTresItemSynthesisDataTableBase
{
	GENERATED_BODY()
public:
	int m_FlagIndex;
	ETresItemDefWeapon m_WeaponID;
	bool m_bInitAchieved;
	int m_WeaponLevel;
	int m_AttackPlus;
	int m_MagicPlus;
	ETresAbilityKind m_AppendAbility;
};

USTRUCT(BlueprintType)
struct FTresItemMotifDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	int m_FlagIndex;
	FString m_Comment;
	bool m_bSevenPrincessFlag;
	FName m_GameFlagName;
	FName m_GameFlagLabel;
	FName m_PrevMotifName;
	FString m_NameTextID;
	FString m_HelptTextID;
	int m_UIPriority;
};

USTRUCT(BlueprintType)
struct FTresItemCollectDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	int m_FlagIndex;
	ETresItemCollectCondition m_Condition;
	int m_ConditionN;
	ETresItemDefMaterial m_ConditionX;
	ETresItemDefMaterial m_ConditionY;
	ETresItemRank m_ConditionR;
	ETresItemCollectRewardKind m_RewardKind;
	FName m_RewardItem;
	FString m_NameTextID;
	FString m_HelptTextID;
};

USTRUCT(BlueprintType)
struct FTresItemSynthesisDataTable : public FTresItemSynthesisDataTableBase
{
	GENERATED_BODY()
public:
	int m_FlagIndex;
	FName m_RewardItem;
	ETresItemSynthesisCondition m_Condition;
	FName m_ConditionName;
};

USTRUCT(BlueprintType)
struct FTresKeywordGlossaryData : public FTableRowBase
{
	GENERATED_BODY()
public:
	struct FTresUIGameFlagText KeywordText;
	FString DetailTextID;
	ETresUIDataVersion Version;
};

USTRUCT(BlueprintType)
struct FTresLSIGameData : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresItemDefLSIGameItem LSIGameItemID;
	FString DetailTextID;
	ETresGameHelp GameHelpID;
	int ImageIconIndex;
	ETresUILSIScoreType ScoreType;
	FString IconGraALabelName;
	FString IconGraBLabelName;
	FString BgIconGraLabelName;
	TAssetPtr<class UTexture2D> TitleLogoImage;
	FString ButtonSetLabelName;
	TArray<TEnumAsByte<ETresUIPadButtonType>> ButtonSetButtonTypes;
};

USTRUCT(BlueprintType)
struct FTresMemoryArchiveData : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName MapName;
	FString EpisodeNameTextID;
	TAssetPtr<class UTexture> IconAsset;
};

USTRUCT(BlueprintType)
struct FTresGummiShipAnimInstanceProxy : public FAnimSingleNodeInstanceProxy
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresNauticalChartData : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresUINauticalChartPoint NO;
	FString TextId;
	FVector2D Point;
	FVector2D Range;
	bool bGoal;
	bool bSavePoint;
	bool bVisitedMarker;
	FName MapName;
	FName StartTag;
	FName VisitedMarkerFlag;
};

USTRUCT(BlueprintType)
struct FTresNaviMapData : public FTableRowBase
{
	GENERATED_BODY()
public:
	TAssetPtr<class UTexture> TextureAsset;
	float Scale;
	FVector2D Origin;
	FName ItemKeyName;
	float AngleCorrect;
};

USTRUCT(BlueprintType)
struct FTresNextTodoData : public FTableRowBase
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresWorldCode> WorldCode;
	struct FTresUIGameFlagData GameFlag;
	FString TextId;
	ETresUIDataVersion Version;
};

USTRUCT(BlueprintType)
struct FTresNpcAILeadSubCharaSlot
{
	GENERATED_BODY()
public:
	ETresChrUniqueID Slot0;
	ETresChrUniqueID Slot1;
};

USTRUCT(BlueprintType)
struct FTresPhilharmonicData : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName MapName;
	FString ProgramMoviePath;
	FString ProgramNameTextID;
};

USTRUCT(BlueprintType)
struct FTresPhotoHologramEffectInstance
{
	GENERATED_BODY()
public:
	TArray<class UParticleSystemComponent*> m_pPSCList;
	TWeakObjectPtr<class ATresPhotoHologramActor> m_pOwner;
};

USTRUCT(BlueprintType)
struct FTresHologramCharaWindParam
{
	GENERATED_BODY()
public:
	TArray<FString> m_Groups;
	//TEnumAsByte<ESQEX_Bonamik_EmissiveDirection> m_DirectionSpace;
	FVector m_DirectionVec;
	float m_BaseStrength;
	float m_WaveAmplitude;
	float m_WavePeriod;
};

USTRUCT(BlueprintType)
struct FTresPhotoHologramPoseDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName m_AnimName;
	float m_StartTime;
	FVector m_LocationOffSet;
	FRotator m_RotationOffset;
	FVector m_FocusDefaultLocation;
	FString m_Comment;
	FName m_MapSetId;
	FString PoseNameNamespaceKey;
	int PoseIndex;
	bool m_bWeaponVisible;
	FName m_ValidWeaponTag;
	FName m_ValidBodyCollTag;
	TArray<FName> m_ExtraValidBodyCollTagList;
	bool m_bEnableWeaponOnOff;
	TArray<ETresHologramSubAnimReplaceType> m_WeaponOffHandReplacement;
	TArray<FName> m_FacialTypeList;
	TArray<struct FTresPhotoHologramEffectData> m_EffectData;
	ETresCharWearForm m_WearForm;
	TArray<struct FSQEX_BonamikChangingParameter> m_BonamikGroupParams;
	TArray<struct FTresHologramCharaWindParam> m_BonamikCharaWind;
	FName m_SetPosePreEvent;
	FName m_SetPosePostEvent;
	FName m_AfterPoseEvent;
};

USTRUCT(BlueprintType)
struct FTresPhotoHologramPoseSet
{
	GENERATED_BODY()
public:
	FName AnimName;
	float StartTime;
	bool IsWeaponVisible;
};

USTRUCT(BlueprintType)
struct FTresPhotoHologramMapSetDef : public FTableRowBase
{
	GENERATED_BODY()
public:
	TArray<FName> ValidMapList;
};

USTRUCT(BlueprintType)
struct FTresPhotoHologramMapData : public FTableRowBase
{
	GENERATED_BODY()
public:
	FString m_Comment;
	int Index;
	TEnumAsByte<ETresWorldCode> WorldCode;
	TAssetPtr<class UTexture> WorldIconAsset;
	FName PlayerStartLabelName;
	FName MapName;
	FString MapNameNamespaceKey;
	FString AreaNameNamespaceKey;
	int AreaIndex;
	TAssetPtr<class UTexture> IconAsset;
	int UIPriority;
	FName ExtraLoadingScreenDataName;
	int m_NewMarkIndex;
	FName m_UnlockGameFlagName;
	FName m_UnlockGameFlagLabelName;
	int m_SaveIndex;
	int CharaNumMax;
	int ObjectNumMax;
	bool IsBonamikIgnoreGroundCollision;
};

USTRUCT(BlueprintType)
struct FTresPhotoHologramCameraEffectTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FString m_Comment;
	EHologramActorCategory m_Category;
	FString m_EffectNameNamespaceKey;
	TAssetPtr<class UTexture> m_IconAsset;
	int m_UIPriority;
	FName m_MapSetId;
	int m_NewMarkIndex;
	int m_EffectGroupID;
	bool m_IsSepiaType;
};

USTRUCT(BlueprintType)
struct FTresPhotoHologramWeaponTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FString m_Comment;
	int m_Index;
	ETresItemDefWeapon m_WeaponItemID;
	FString m_WeaponNameNamespaceKey;
	TAssetPtr<class UTexture> m_IconAsset;
	int m_UIPriority;
	FName m_MapSetId;
	int m_NewMarkIndex;
	TAssetPtr<class UTresPhotoHologramWeaponAsset> m_WeaponAsset;
	TArray<TAssetPtr<class UTresPhotoHologramWeaponAsset>> m_WeaponAssetList;
};

USTRUCT(BlueprintType)
struct FTresPhotoHologramDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName m_AssetName;
	int m_Index;
	FString m_Comment;
	EHologramActorCategory m_Category;
	FName m_IdentifyName;
	int m_MaxCount;
	FString m_CharaNameNamespaceKey;
	TAssetPtr<class UTexture> m_IconAsset;
	int m_UIPriority;
	int m_UICharaInfoPage;
	int m_UICharaInfoSlotNo;
	FName m_AreaCharaInfoMapSet;
	int m_NewMarkIndex;
	float m_RootCollisionSize;
	FName m_MapSetId;
	FName m_UnlockGameFlagName;
	FName m_UnlockGameFlagLabelName;
	int m_SaveIndex;
	TAssetPtr<class UClass> m_HologramAsset;
};

USTRUCT(BlueprintType)
struct FTresPlayerAttackStateParameterDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName m_MotionName;
	float m_fAnimStartTime;
	bool m_bUseTractionMove;
	bool m_bUseRootMoveScale;
	bool m_bIsJumpAttack;
	bool m_bIsDownAttack;
	bool m_bNotFallingUntilStartAttack;
	bool m_bStabSuppression;
	float m_fTractionSpeedXY;
	float m_fTractionSpeedZ;
	float m_fTractionRateZ;
	float m_fRootMoveLength;
	float m_fCloseRangeXY;
	bool m_bIsFinish;
	bool m_bIsAerial;
	bool m_bIsInvincible;
	bool m_bIsImmpbile;
	bool m_bIsFaceTrgUntil;
	bool m_bIgnoreCoolDown;
	float m_fInvincibleTimer;
	bool m_bIsWarp;
	float m_fWarpTimer;
	FName m_WarpMotionName;
	int m_dWarpAuraEffectGroup;
	int m_dEffectGroup;
	int m_dVoiceGroup;
};

USTRUCT(BlueprintType)
struct FTresClaymoreSet_e_ex306
{
	GENERATED_BODY()
public:
	TWeakObjectPtr<class ATresProjectile_e_ex306_Claymore_Idle> pClaymore;
};

USTRUCT(BlueprintType)
struct FWaveHitWork_e_ex310
{
	GENERATED_BODY()
public:
	class ATresCharPawnBase* pOwner;
};

USTRUCT(BlueprintType)
struct FTresClaymoreSet_e_ex355
{
	GENERATED_BODY()
public:
	TWeakObjectPtr<class ATresProjectile_e_ex355_Claymore_Idle> pClaymore;
};

USTRUCT(BlueprintType)
struct FEX355_ThrowHomingSecondInfo
{
	GENERATED_BODY()
public:
	float m_fMinHomingDistance;
	float m_fMaxHomingAngle;
	float m_fInitHomingRotateVelocity;
	float m_fMaxHomingRotateVelocity;
	float m_fHomingRotateAccel;
	float m_fMaxHomingAngleIgnoreTime;
	bool m_bEnableGrabityOnDisablingHomingToLandTarget;
	float m_fGravityScale;
};

USTRUCT(BlueprintType)
struct FWaveHitWork_e_ex359
{
	GENERATED_BODY()
public:
	class ATresCharPawnBase* pOwner;
};

USTRUCT(BlueprintType)
struct FTresProjectileGenerator_e_ex054_TargetParam
{
	GENERATED_BODY()
public:
	class ATresCharPawnBase* m_pTarget;
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex313_DarkMineEntryParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex361_DarkMineEntryParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_EncloseFlareEntryParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_EncloseFlareHvnEntryParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_FlareShotHvnEntryParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_ExFlareTornadoEntryParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_FlareTornadoEntryParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_HvnDebrisBlowParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_EncloseFlareEntryParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_EncloseFlareHvnEntryParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_FlareShotHvnEntryParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_ExFlareTornadoEntryParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_FlareTornadoEntryParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_HvnDebrisBlowParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FMagmaTornadoSpawnerInfo
{
	GENERATED_BODY()
public:
	FVector m_vSpawnOffset;
	float m_fLifeTime;
	float m_fMaxVelocity;
	float m_fAccel;
	float m_fHomingRotVelocity;
	float m_fHomingMinDistance2D;
	float m_fHomingMaxYaw;
	float m_fProjectileSpawnWidth;
	float m_fProjectileSpawnDepth;
	float m_fProjectileSpawnInterval;
};

USTRUCT(BlueprintType)
struct FTresFloat32_Range
{
	GENERATED_BODY()
public:
	float m_fMinValue;
	float m_fMaxValue;
};

USTRUCT(BlueprintType)
struct FTresInt32_Range
{
	GENERATED_BODY()
public:
	int m_nMinValue;
	int m_nMaxValue;
};

USTRUCT(BlueprintType)
struct FTresRemyRewardDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	int16 CookingSuccessPoints;
	int16 CookingGreatSuccessPoints;
	ETresItemDefAccessory Milestone1Reward;
	ETresItemDefBattleItem Milestone2Reward;
	int16 CircumductionNum;
	ETresItemDefFoodstuff CircumductionReward;
	ETresItemDefFood CookingFailedReward;
	ERemyRecipeType SpecialFoodStuffRecipeType;
};

USTRUCT(BlueprintType)
struct FTresRemyUnlockDishLevelDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	int16 EarnUnlockDishLevelPointsWhenSuccess;
	int16 EarnUnlockDishLevelPointsWhenGreatSuccess;
	int16 EarnUnlockDishLevelPointsWhenFail;
	TMap<ERemyDishLevel, int16> UnlockDishLevelPoints;
};

USTRUCT(BlueprintType)
struct FTresRemyRestaurantRankDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	ERemyRestaurantRank Rank;
	int NecessaryPoint;
	ERemyMilestone Milestone;
	ERemyKitchenGrade KitchenGrade;
};

USTRUCT(BlueprintType)
struct FTresRemyCameraDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	ERemyCameraWorkTiming CameraWorkTiming;
	FName CameraWorkEventName;
};

USTRUCT(BlueprintType)
struct FTresRemyResultAnimationDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	ERemyCookingGameType GameType;
	ERemyResultAnimationType AnimationType;
	FName AnimationName;
};

USTRUCT(BlueprintType)
struct FTresRemyAnimationDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	ERemyAnimationType AnimationType;
	FName AnimationName;
};

USTRUCT(BlueprintType)
struct FTresRemyCookingGameDataTableBase : public FTableRowBase
{
	GENERATED_BODY()
public:
	float GameDuration;
	float MaterialMaxAmount;
	float MaterialIncreasingCorrect;
	float SuccessPercent;
	float GreatSuccessPercent;
	float TooManyPercent;
};

USTRUCT(BlueprintType)
struct FTresRemySprinklePepperV2DataTable : public FTresRemyCookingGameDataTableBase
{
	GENERATED_BODY()
public:
	ERemySprinklePepperEquipmentType EquipmentType;
	ERemySprinklePepperContentsType ContentsType;
	float ValidInputValue;
	float StickNeutralValue;
	float GreatSuccessInputBonusCorrectionCoefficient;
	float InputTimingSuccessPercent;
	float InputTimingGreatSuccessPercent;
	float InputTimingTooSlowPercent;
};

USTRUCT(BlueprintType)
struct FTresRemyEggCrackingV2DataTable : public FTresRemyCookingGameDataTableBase
{
	GENERATED_BODY()
public:
	float RightStickEggCrackingValue;
	float TooInclinedPercent;
};

USTRUCT(BlueprintType)
struct FTresRemyFlambeV2DataTable : public FTresRemyCookingGameDataTableBase
{
	GENERATED_BODY()
public:
	ERemyFlambeFoodType FoodType;
	float PourStickPourStartValue;
	float PourStickRotationJudgementAngle;
	float PourStickRotationAnimationCoefficient;
	float PourStickNoRotationJudgementTime;
	float FlambeStickFlambeValue;
};

USTRUCT(BlueprintType)
struct FTresRemyCuttingDataTable : public FTresRemyCookingGameDataTableBase
{
	GENERATED_BODY()
public:
	ERemyCuttingFoodType FoodType;
	float StickCuttingValue;
	float StickReloadValue;
	float ReloadStickNoInputValue;
	int ReloadCutTimesRangeStart;
	int ReloadCutTimesRangeEnd;
	TArray<ERemyCookingCommand> ReloadCommand1;
	TArray<ERemyCookingCommand> ReloadCommand2;
	float ReloadTime;
};

USTRUCT(BlueprintType)
struct FTresRemySprinklePepperDataTable : public FTresRemyCookingGameDataTableBase
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresRemyEggCrackingDataTable : public FTresRemyCookingGameDataTableBase
{
	GENERATED_BODY()
public:
	float StickEggCrackingValue;
};

USTRUCT(BlueprintType)
struct FTresRemyFlambeDataTable : public FTresRemyCookingGameDataTableBase
{
	GENERATED_BODY()
public:
	float LeftStickFlambeValue;
};

USTRUCT(BlueprintType)
struct FTresRemyPawnDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FVector PawnLocation;
	FRotator PawnRotation;
	FVector HourglassLocation;
	FVector GreatSuccessEffectLocationOffset;
	FVector GreatSuccessBGEffectLocation;
	FRotator GreatSuccessBGEffectRotation;
	FVector GasStoveFireEffectLocation;
};

USTRUCT(BlueprintType)
struct FTresRemyRecipeDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	ERemyDishCategory Category;
	ERemyMenuType MenuType;
	ERemyRecipeType RecipeType;
	FString RecipeNameTextID;
	FString RecipeHelpTextID;
	ERemyCookingGameType GameType;
	ERemyDishLevel DishLevel;
	FName PawnDataID;
	TAssetPtr<class UTexture> IconAsset;
	ETresItemDefFood CommonItemId;
	ETresItemDefFood GoodItemId;
	TMap<ETresItemDefFoodstuff, int> FoodList;
};

USTRUCT(BlueprintType)
struct FTresRemyStoveFireParticleParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresScalabilityCsvData : public FTableRowBase
{
	GENERATED_BODY()
public:
	int MotionBlur;
	int AAQuality;
	int DepthOfFieldQuality;
	int AmbientOcclusionLevels;
	int EyeAdaptationQuality;
	int SSRQuality;
	int TranslucencyVolumeBlur;
	int TranslucencyLightingVolumeDim;
	int ShadowQuality;
};

USTRUCT(BlueprintType)
struct FTresSceneColorCsvData : public FTableRowBase
{
	GENERATED_BODY()
public:
	float KHSSceneEmmisive;
	float LightIntensity;
	float InDirectIntensity;
	float AmbientIntensity;
	struct FLinearColor TintColor;
};

USTRUCT(BlueprintType)
struct FTresScreenShotResult
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresSoKcKeyHoleGimmickCommonParameter : public FTableRowBase
{
	GENERATED_BODY()
public:
	float m_fConnectBeamMaxSpeed;
	float m_fConnectBeamInitialSpeed;
	float m_fConnectBeamAcceleration;
	float m_fLastLightConnectBeamMaxSpeed;
	float m_fLastLightConnectBeamInitialSpeed;
	float m_fLastLightConnectBeamAcceleration;
	int m_nConnectedKeyHolePassableLimitNum;
	struct FTresUInt8_Range m_NormalKeyHoleConnectableCountRange;
	struct FTresUInt8_Range m_ChanceMarkerKeyHoleConnectableCountRange;
	struct FTresUInt8_Range m_BigChanceMarkerKeyHoleConnectableCountRange;
	int8 m_uChanceMarkerLimitNum;
	int8 m_uBigChanceMarkerLimitNum;
	float m_fChanceMarkerProbability;
	float m_fBigChanceMarkerProbability;
	TArray<int8> m_ChanceMarkerPatternDistributionTable;
	TArray<float> m_ChanceMarkerLimitTimeTable;
	float m_fBigChanceMarkerLimitTime;
	int m_nBigChanceMarkerNormaConnectedCount;
};

USTRUCT(BlueprintType)
struct FTresSpawnPointBuildSettings
{
	GENERATED_BODY()
public:
	FName m_Id;
	ETresSpawnPointSize m_Size;
	float m_Radius;
	float m_Height;
	ETresSpawnPointBuildMethod m_Method;
};

USTRUCT(BlueprintType)
struct FTresSpawnPointManualCreated
{
	GENERATED_BODY()
public:
	FName m_Id;
	float m_Radius;
	float m_Height;
	struct FTresSpawnPointElement m_Element;
};

USTRUCT(BlueprintType)
struct FTresSpawnRuleFromSplineSection
{
	GENERATED_BODY()
public:
	//class ASQEX_SplineActor* StartActor;
	//class ASQEX_SplineActor* EndActor;
	TArray<class UClass*> GeneratedClassArray;
	class UClass* GeneratedClass;
	class UClass* FirstGeneratedClass;
	class UClass* LastGeneratedClass;
	//class UTresGeneratorPlacePaternFromSplineBase* PlacePatern;
	float Interval;
	FVector Offset;
	class UTresRotatorRuleBase* RotatorRule;
	//struct FTresSpawnRuleChildGenerator ChildRule;
};

USTRUCT(BlueprintType)
struct FClusterInfo
{
	GENERATED_BODY()
public:
	float VoxelSize;
	struct FBox Bounds;
	struct FIntVector VoxelNum;
	TMap<uint32, uint32> OverlapInfo;
};

USTRUCT(BlueprintType)
struct FTresStoryEpisodeData
{
	GENERATED_BODY()
public:
//	struct FTresUIGameFlagText EpisodeText;
	TAssetPtr<class UTexture2D> IconAsset;
};

USTRUCT(BlueprintType)
struct FTresStoryData : public FTableRowBase
{
	GENERATED_BODY()
public:
	FString WorldNameTextID;
	TArray<struct FTresStoryEpisodeData> EpisodeData;
	ETresUIDataVersion Version;
};

USTRUCT(BlueprintType)
struct FTresTaggedActorPropertyValueBase
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTaggedActorPropertyValue_OceanTimeDilationFactor : public FTresTaggedActorPropertyValueBase
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTaggedActorPropertyValue_OceanOmegaPeriod : public FTresTaggedActorPropertyValueBase
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTaggedActorPropertyValue_OceanOppositeWaveSuppression : public FTresTaggedActorPropertyValueBase
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTaggedActorPropertyValue_OceanSmallWaveSuppression : public FTresTaggedActorPropertyValueBase
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTaggedActorPropertyValue_OceanWindAngle : public FTresTaggedActorPropertyValueBase
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTaggedActorPropertyValue_OceanWindSpeed : public FTresTaggedActorPropertyValueBase
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTaggedActorPropertyValue_OceanSteepness : public FTresTaggedActorPropertyValueBase
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTaggedActorPropertyValue_OceanAmplitude : public FTresTaggedActorPropertyValueBase
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTaggedActorPropertyValue_OceanWavelength : public FTresTaggedActorPropertyValueBase
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTaggedActorPropertyValue_OceanWorldMaxY : public FTresTaggedActorPropertyValueBase
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTaggedActorPropertyValue_OceanWorldMaxX : public FTresTaggedActorPropertyValueBase
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTaggedActorPropertyValue_OceanWorldMinY : public FTresTaggedActorPropertyValueBase
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTaggedActorPropertyValue_OceanWorldMinX : public FTresTaggedActorPropertyValueBase
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTaggedActorPropertyValue_DistanceCulling : public FTresTaggedActorPropertyValueBase
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTaggedActorPropertyValue_LOD : public FTresTaggedActorPropertyValueBase
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresTheaterMapInfo
{
	GENERATED_BODY()
public:
	FName MapName;
	TAssetPtr<class UTresTexturePump> TexturePump;
};

USTRUCT(BlueprintType)
struct FTresTheaterSceneData : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName Chapter;
	TArray<struct FTresTheaterMapInfo> MapInfo;
	FString SceneNameNamespaceKey;
	struct FTresUIGameFlagData GameFlag;
	bool bSecret;
	int nDispPriorty;
};

USTRUCT(BlueprintType)
struct FTresTheaterChapterData : public FTableRowBase
{
	GENERATED_BODY()
public:
	FString ChapterNameNamespaceKey;
	TAssetPtr<class UTexture> IconAsset;
	ETresUIDataVersion Version;
};

USTRUCT(BlueprintType)
struct FTresTreasureDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName m_TreasureName;
	TEnumAsByte<ETresWorldAreaCode> m_WorldAreaCode;
	bool m_bUnused;
	int m_UIPriority;
	FString m_Comment;
};

USTRUCT(BlueprintType)
struct FTresTutorialData : public FTableRowBase
{
	GENERATED_BODY()
public:
	FString TextId;
	FString DetailTextID;
	struct FTresUIGameFlagData GameFlag;
	ETresGameHelp GameHelp;
};

USTRUCT(BlueprintType)
struct FTresRailSlideMoveInfo
{
	GENERATED_BODY()
public:
	class ASQEX_SplineActor* m_StartActor;
	class ASQEX_SplineActor* m_EndActor;
	class USQEX_SplineComponent* m_Component;
};

USTRUCT(BlueprintType)
struct FTresVector2DInt
{
	GENERATED_BODY()
public:
	int X;
	int Y;
};

USTRUCT(BlueprintType)
struct FTresUICharacterData : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresChrUniqueID ChrUniqueID;
	ETresPlayerUniqueID PlayerUniqueID;
	ETresUIFaceUniqueID FaceUniqueID;
	TEnumAsByte<ETresWorldCode> WorldCode;
	TAssetPtr<class UTresUIDataAssetStatus> StatusData;
	TAssetPtr<class UTexture> MenuFaceIcon;
	TArray<struct FTresUIGameFlagText> Names;
};

USTRUCT(BlueprintType)
struct FTresUIStyleData : public FTableRowBase
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresCommandKind> m_CommandKind;
	TAssetPtr<class USwfMovie> m_SwfAsset;
};

USTRUCT(BlueprintType)
struct FTresCockpitStyleInfo
{
	GENERATED_BODY()
public:
	TArray<FString> m_strBtnLocKeyAry;
	TArray<TEnumAsByte<ETresUIPadButtonType>> m_eBtnTypeAry;
};

USTRUCT(BlueprintType)
struct FTresUIMainCommandData : public FTableRowBase
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresCommandKind> m_CommandKind;
	ETresUIHudCommandExKind m_CommandExKind;
	ETresUIMainCommandTitleKind m_TitleKind;
	TAssetPtr<class USwfMovie> m_SwfAsset;
	struct FTresCockpitStyleInfo m_styleInfo;
};

USTRUCT(BlueprintType)
struct FTresCodeMenuChallengeRankData : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresDlcChallengeRank m_Code;
	TAssetPtr<class UTexture> m_IconAsset;
	FString m_RankName;
};

USTRUCT(BlueprintType)
struct FTresCodeMenuChallengeScoreInfo
{
	GENERATED_BODY()
public:
	ETresDlcChallengeScoreID m_Code;
	TArray<FString> m_NameIds;
};

USTRUCT(BlueprintType)
struct FTresCodeMenuChallengeScoreData : public FTableRowBase
{
	GENERATED_BODY()
public:
	FString m_NameId;
	TArray<struct FTresCodeMenuChallengeScoreInfo> m_Scores;
	struct FTresUIGameFlagData GameFlag;
	bool m_SecretOpenEnable;
};

USTRUCT(BlueprintType)
struct FTresCodeMenuCheatAchievementData : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresDlcCheatAchievementID m_Code;
	FString m_NameId;
	FString m_DetailId;
	TAssetPtr<class UTexture> m_IconAsset;
	struct FTresUIGameFlagData GameFlag;
	TEnumAsByte<ETresWorldCode> WorldCode;
};

USTRUCT(BlueprintType)
struct FTresCodeMenuChallengeData : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresDlcChallengeCode m_Code;
	FString m_NameId;
	FString m_DetailId;
};

USTRUCT(BlueprintType)
struct FTresCodeMenuCheatData : public FTableRowBase
{
	GENERATED_BODY()
public:
	ETresDlcCheatCode m_Code;
	FString m_NameId;
	FString m_DetailId;
	ETresUICheatCategory m_Category;
};

USTRUCT(BlueprintType)
struct FTresUILoadingScreenData : public FTableRowBase
{
	GENERATED_BODY()
public:
	FName DefinitionName;
	TEnumAsByte<ETresWorldCode> WorldCode;
	FName NeedFlagName;
	ETresUIValueCompareType NeedCmpType;
	FName NeedFlagLabelName;
	FName DisableFlagName;
	ETresUIValueCompareType DisableCmpType;
	FName DisableFlagLabelName;
	int LotValue;
	bool ForceAtSuccess;
	ETresUIDataVersion Version;
};

USTRUCT(BlueprintType)
struct FTresUILoadingScreenDataDefinitions : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUILoadingScreenDataDefinitions")
	ETresUICharaID FromChara;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUILoadingScreenDataDefinitions")
	FString CharaTextID;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUILoadingScreenDataDefinitions")
	TAssetPtr<class UTexture> ImageAsset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUILoadingScreenDataDefinitions")
	FString CommentTextID;
};

USTRUCT(BlueprintType)
struct FTresUIMissionCounterTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUIMissionCounterTable")
	TAssetPtr<class UTexture> IconAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUIMissionCounterTable")
	int MaxValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUIMissionCounterTable")
	FString CounterTextLocNameSpaceKey;
};

USTRUCT(BlueprintType)
struct FTresUIMissionGageTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUIMissionGageTable")
	TAssetPtr<class USwfMovie> IconAsset;

	uint32 InitialValue;
	uint32 MaxValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUIMissionGageTable")
	ETresUIMissionGageColorType GageColorType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUIMissionGageTable")
	FString GageTextLocSpaceKey;
};

USTRUCT(BlueprintType)
struct FTresUIP_Hologram_CharaPageInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresUIP_Hologram_DataTableItem
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresCockpitActionCmdSelect
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresCockpitBadStatus
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresCockpitFriend
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresCockpitActionCmdInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCockpitActionCmdInfo")
	class UTresUICommandInfoBase* m_pUICommandInfo;
};

USTRUCT(BlueprintType)
struct FTresHudDanceCmdKind
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresUIGigasGameAward
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUIGigasGameAward")
	FString LocalizeKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUIGigasGameAward")
	int Score;
};

USTRUCT(BlueprintType)
struct FTresUIGameProgressSection
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUIGameProgressSection")
	struct FTresUIGameFlagData Start;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUIGameProgressSection")
	struct FTresUIGameFlagData End;
};

USTRUCT(BlueprintType)
struct FTresUISaveMenuRestrictionData : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUISaveMenuRestrictionData")
	FName SavePointName;
	struct FTresUIGameProgressSection RestrictionAreaSelectSection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUISaveMenuRestrictionData")
	struct FTresUIGameProgressSection RestrictionWorldMapSection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUISaveMenuRestrictionData")
	struct FTresUIGameProgressSection RestrictionRestaurantSection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUISaveMenuRestrictionData")
	ETresUIDataVersion Version;
};

USTRUCT(BlueprintType)
struct FTresUISaveMenuFaceIconLotteryData : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUISaveMenuFaceIconLotteryData")
	TEnumAsByte<ETresWorldCode> WorldCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUISaveMenuFaceIconLotteryData")
	struct FTresUIGameFlagData GameFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUISaveMenuFaceIconLotteryData")
	TArray<ETresChrUniqueID> CharaIDs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUISaveMenuFaceIconLotteryData")
	TArray<ETresUIFaceUniqueID> FaceIDs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUISaveMenuFaceIconLotteryData")
	ETresUIDataVersion Version;
};

USTRUCT(BlueprintType)
struct FTresUnlockFlagDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUnlockFlagDataTable")
	FName GameFlagName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresUnlockFlagDataTable")
	FName GameFlagLabel;
};

USTRUCT(BlueprintType)
struct FTresAreaEffectCurveData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAreaEffectCurveData")
	class UCurveVector* AreaBaseColorCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAreaEffectCurveData")
	class UCurveVector* AreaBrightColorCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAreaEffectCurveData")
	class UCurveVector* AreaDarkColorCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAreaEffectCurveData")
	class UCurveFloat* AreaColorSynthesisCurve;
};

USTRUCT(BlueprintType)
struct FTresAreaEffectData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAreaEffectData")
	bool bNoUseDefaultAttachEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAreaEffectData")
	TEnumAsByte<ETresAreaCustonEffectsType> EffectsType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresAreaEffectData")
	TArray<class UParticleSystem*> SpawnParticleSystems;
};

USTRUCT(BlueprintType)
struct FTresVFXAreaCustomTableData : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVFXAreaCustomTableData")
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVFXAreaCustomTableData")
	struct FLinearColor AreaBaseColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVFXAreaCustomTableData")
	struct FLinearColor AreaBrightColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVFXAreaCustomTableData")
	struct FLinearColor AreaDarkColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVFXAreaCustomTableData")
	float AreaColorSynthesis;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVFXAreaCustomTableData")
	struct FTresAreaEffectCurveData CurveDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVFXAreaCustomTableData")
	TArray<struct FTresAreaEffectData> AreaEffectData;
};

USTRUCT(BlueprintType)
struct FTresVFXSceneColorTableData : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVFXSceneColorTableData")
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVFXSceneColorTableData")
	struct FLinearColor SceneBaseColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVFXSceneColorTableData")
	struct FLinearColor SceneBrightColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVFXSceneColorTableData")
	struct FLinearColor SceneDarkColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVFXSceneColorTableData")
	float SceneColorSynthesis;
};

USTRUCT(BlueprintType)
struct FTresVictoryBonusDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	FName m_FlagName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusDataTable")
	FString m_Comment;

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
struct FTresVictoryBonusUnit
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusUnit")
	ETresVictoryBonusKind m_Bonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresVictoryBonusUnit")
	ETresAbilityKind m_Ability;
};

USTRUCT(BlueprintType)
struct FTresWeightedShuffleBag
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresWinnieVoiceDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresWinnieVoiceDataTable")
	EWinniePuzzleVoice VoiceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresWinnieVoiceDataTable")
	EWinniePuzzleVoicePriority Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresWinnieVoiceDataTable")
	bool EnablePlayCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresWinnieVoiceDataTable")
	int PlayCounterRandomValueMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresWinnieVoiceDataTable")
	int PlayCounterRandomValueMax;
};

USTRUCT(BlueprintType)
struct FTresWinnieSoundEffectDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresWinnieSoundEffectDataTable")
	EWinniePuzzleSoundEffect SoundEffectType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresWinnieSoundEffectDataTable")
	class USoundBase* SoundEffect;
};

USTRUCT(BlueprintType)
struct FTresWinnieAnimationData : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresWinnieAnimationData")
	FName AnimationName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresWinnieAnimationData")
	bool isLoop;
};

USTRUCT(BlueprintType)
struct FTresWinnieCharacterAnimationData : public FTresWinnieAnimationData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresWinnieCharacterAnimationData")
	EWinnieCharacterAnimationType AnimationType;
};

USTRUCT(BlueprintType)
struct FTresWinniePlayerAnimationData : public FTresWinnieAnimationData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresWinniePlayerAnimationData")
	EWinniePlayerAnimationType AnimationType;
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleGhostUnitParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleVoiceParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleUnitCoord
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzlePlayerRollParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleScalingParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleQueueableCountParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleCountInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleLinearMultipleMoveParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleVibrationParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleCurvedMoveParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleLinearLerpMoveParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresWinniePuzzleLinearMoveParam
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FTresWorldMapObjData : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresWorldMapObjData")
	class UClass* m_MapObj;
};