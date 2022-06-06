#include "TresGumiShipPlayer.h"
#include "Components/SphereComponent.h"
#include "TresGumiShipDirectSpeedCompo.h"
#include "TresGumiShipBoostDirectCompo.h"
#include "TresGumiShipDefCollisionSetCompo.h"
#include "TresGumiShipTargetPointCompo.h"
#include "TresGumiShipMultiLockonCompo.h"
#include "TresGumiShipRailSlideManager.h"
#include "TresGumiShipPlayBonus.h"

class UObject;
class ATresGumiShipPlayerControllerBase;
class AActor;
class UPrimitiveComponent;
class USceneComponent;

void ATresGumiShipPlayer::WaitSetupPlayer(UObject* pWorldContextObject, FLatentActionInfo LatentInfo) {
}

void ATresGumiShipPlayer::RequestWorldSymbolStart(AActor* pWorldSymbolActor) {
}

void ATresGumiShipPlayer::RequestUseCameraForEnemyBattle(const float fInterpSec, const bool bIsTakeover) {
}

bool ATresGumiShipPlayer::IsRouteRailSliding() const {
    return false;
}

bool ATresGumiShipPlayer::IsRailSliding() const {
    return false;
}

bool ATresGumiShipPlayer::IsAutoPilotFromGimmick() const {
    return false;
}

void ATresGumiShipPlayer::GumiShip_ToggleDebug_SwitchEnableTrackingNoTimeLimit() {
}

void ATresGumiShipPlayer::GumiShip_ToggleDebug_SwitchEnableTrackingDebugDraw() {
}

void ATresGumiShipPlayer::GumiShip_ToggleDebug_DispPlayerParamInfo() {
}

void ATresGumiShipPlayer::GumiShip_ToggleDebug_DispPlayerInfo() {
}

void ATresGumiShipPlayer::GumiShip_ToggleDebug_ChangeMovementCompo(const FString& rCompoName) {
}

void ATresGumiShipPlayer::GumiShip_ToggleDebug_ChangeAccelCompo(const FString& rCompoName) {
}

void ATresGumiShipPlayer::GumiShip_Debug_SetSpWeaponNoCoolDownEnable(bool bIn) {
}

void ATresGumiShipPlayer::GumiShip_Debug_SetSpWeaponNoConsumePointEnable(bool bIn) {
}

void ATresGumiShipPlayer::GumiShip_Debug_SetOverrideParam(int32 dIndex, int32 dIn) {
}

void ATresGumiShipPlayer::GumiShip_Debug_SetInvincible(bool bIn) {
}

void ATresGumiShipPlayer::GumiShip_Debug_SetHpToOne() {
}

void ATresGumiShipPlayer::GumiShip_Debug_SetForceBerserkMode(bool bIn) {
}

void ATresGumiShipPlayer::GumiShip_Debug_SetExplosion(bool bIn, float fSpeed, float fRot) {
}

void ATresGumiShipPlayer::GumiShip_Debug_SetEnableOverrideParam(int32 dIndex, bool bIn) {
}

void ATresGumiShipPlayer::GumiShip_Debug_SetDontConsumeBoost(bool bIn) {
}

void ATresGumiShipPlayer::GumiShip_Debug_SetBerserkModeSuppression(bool bIn) {
}

void ATresGumiShipPlayer::GumiShip_Debug_SetBarrierHp(int32 dIn) {
}

void ATresGumiShipPlayer::GumiShip_Debug_RailSlide_SetCameraFOV(float fIn) {
}

void ATresGumiShipPlayer::GumiShip_Debug_RailSlide_SetCameraDegree(float fIn) {
}

void ATresGumiShipPlayer::GumiShip_Debug_RailSlide_SetCameraArmLength(float fIn) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Lockon_SetDebugDraw(bool bIn) {
}

void ATresGumiShipPlayer::GumiShip_Debug_CreateTinyShip(bool bIsRight, int32 dKind, int32 dIndex) {
}

void ATresGumiShipPlayer::GumiShip_Debug_CreateSpWeapon(int32 dIndex) {
}

void ATresGumiShipPlayer::GumiShip_Debug_CreateGumiShip(int32 dKind, int32 dIndex) {
}

void ATresGumiShipPlayer::GumiShip_Debug_CleanAndSetWeapon(int32 dIndex) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetToughnessUp(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetStrikeUp(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetSpeedUp(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetSpecialUp(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetSpecialConverter(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetSpecialCharge(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetShotUp(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetShockAbsorber(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetRollingPowerUp(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetRollingExtend(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetQuickStep(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetPrizeBonusUp(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetLaserUp(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetHealUp(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetFinalPower(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetDrainShot(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetCostConverter(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetCharengeMode(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetBorderLine(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetBoostCharge(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetAutoReraise(uint8 byNum) {
}

void ATresGumiShipPlayer::GumiShip_Debug_Ability_SetAspirShot(uint8 byNum) {
}

void ATresGumiShipPlayer::EnableBoostEffect(bool bIn) {
}

bool ATresGumiShipPlayer::CanTracking() const {
    return false;
}

void ATresGumiShipPlayer::BP_SetLockAtTargetForRailSlide(AActor* pTarget, const float fInterpSec, const FVector vOffset) {
}

void ATresGumiShipPlayer::BP_Debug_SetLockAtTargetForRailSlide(AActor* pTarget, const float fInterpSec, const FVector vOffset) {
}

void ATresGumiShipPlayer::_OnTeardownBattleMission(const ETresGumiShipBattleMissionEndFactorType eEndType) {
}

void ATresGumiShipPlayer::_OnStartBattleMission() {
}

void ATresGumiShipPlayer::_OnRefreshedBarrier(const int32 dIndex) {
}

void ATresGumiShipPlayer::_OnNeedRefrectionConfigSetting() {
}

void ATresGumiShipPlayer::_OnInputXButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController) {
}

void ATresGumiShipPlayer::_OnInputSpWeaponButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController) {
}

void ATresGumiShipPlayer::_OnInputSpButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController) {
}

void ATresGumiShipPlayer::_OnInputR3ButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController) {
}

void ATresGumiShipPlayer::_OnInputL3ButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController) {
}

void ATresGumiShipPlayer::_OnInputCancelButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController) {
}

void ATresGumiShipPlayer::_OnInputAutoHorizontalButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController) {
}

void ATresGumiShipPlayer::_OnGraze(UPrimitiveComponent* pComponent, const FVector& rvGrazeLocation) {
}

void ATresGumiShipPlayer::_OnFinishedRailSlide(const ETresGumiShipRailSlideType eRailSlideType) {
}

void ATresGumiShipPlayer::_OnFinishedBattleMission(const ETresGumiShipBattleMissionEndFactorType eEndType) {
}

void ATresGumiShipPlayer::_OnChangeSpPoint(const float fOld, const float fNow, const float fRatio) {
}

void ATresGumiShipPlayer::_OnChangeRankForBattleMission(const TEnumAsByte<ETresGumiShipBattleMissionRankType> eOldRank, const TEnumAsByte<ETresGumiShipBattleMissionRankType> eNewRank) {
}

void ATresGumiShipPlayer::_OnChangeLockonTargetForDist(USceneComponent* pNewTarget) {
}

void ATresGumiShipPlayer::_OnChangedLockonTarget(USceneComponent* pNewTarget) {
}

void ATresGumiShipPlayer::_OnBrokenBarrier(const int32 dIndex) {
}

ATresGumiShipPlayer::ATresGumiShipPlayer() {
    this->m_pSpeedDirectCompo = CreateDefaultSubobject<UTresGumiShipDirectSpeedCompo>(TEXT("SpeedDirectCompo"));
    this->m_pBoostDirectCompo = CreateDefaultSubobject<UTresGumiShipBoostDirectCompo>(TEXT("BoostDirectCompo"));
    this->m_pTargetCursorPoint = CreateDefaultSubobject<UTresGumiShipTargetPointCompo>(TEXT("TargetCursorPoint"));
    this->m_pLockonManager = CreateDefaultSubobject<UTresGumiShipMultiLockonCompo>(TEXT("LockonMgr"));
    this->m_pRailSlideManager = CreateDefaultSubobject<UTresGumiShipRailSlideManager>(TEXT("RailSlideMgr"));
    this->m_pPlayBonus = CreateDefaultSubobject<UTresGumiShipPlayBonus>(TEXT("PlayBonus"));
    this->m_pDefCollision = CreateDefaultSubobject<UTresGumiShipDefCollisionSetCompo>(TEXT("DefColllision"));
    this->m_pWarningCollision = CreateDefaultSubobject<USphereComponent>(TEXT("WarnignAreaCollision"));
    this->m_pLimitedCollision = CreateDefaultSubobject<USphereComponent>(TEXT("LimitedAreaCollision"));
    this->m_fWarningAreaRadius = 5000.00f;
    this->m_fLimitedAreaRadius = 500.00f;
    this->m_pParam = NULL;
}

