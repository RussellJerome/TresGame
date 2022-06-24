#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPlayerPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipPlayerNotifyInterface.h"
#include "Engine/LatentActionManager.h"
#include "ETresGumiShipBattleMissionEndFactorType.h"
#include "TresGMInputResult.h"
#include "ETresGumiShipRailSlideType.h"
#include "ETresGumiShipBattleMissionRankType.h"
#include "TresGumiShipPlayer.generated.h"

class USceneComponent;
class UTresGumiShipDirectSpeedCompo;
class UTresGumiShipBoostDirectCompo;
class UTresGumiShipDefCollisionSetCompo;
class UTresGumiShipTargetPointCompo;
class UTresGumiShipMultiLockonCompo;
class UTresGumiShipRailSlideManager;
class UTresGumiShipPlayBonus;
class ATresGumiShipSpWeaponConnection;
class UPrimitiveComponent;
class USphereComponent;
class UTresGumiShipPlayerParameterDataTableSet;
class UObject;
class AActor;
class ATresGumiShipPlayerControllerBase;

UCLASS()
class ATresGumiShipPlayer : public ATresGumiShipPlayerPawnBase, public ITresGumiShipPlayerNotifyInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipPostSetup);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipPostReraise);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipPostCreateSpWeapon);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipGetItem, int32, dItemId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipFinishedRailSlide);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresGumiShipChangeSpPoint, const float, fOldPoint, const float, fNewPoint, const float, fRatio);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipChangedLockonTarget, USceneComponent*, pTarget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresGumiShipChangeBoostPoint, const float, fOldSeed, const float, fNewSpeed, const float, fRatio);
    
    UPROPERTY(BlueprintAssignable)
    FTresGumiShipChangeSpPoint m_OnChangeSpPointDispather;
    
    UPROPERTY(BlueprintAssignable)
    FTresGumiShipChangeBoostPoint m_OnChangeBoostPointDispather;
    
    UPROPERTY(BlueprintAssignable)
    FTresGumiShipChangedLockonTarget m_OnChangeLockonTargetDispather;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipDirectSpeedCompo* m_pSpeedDirectCompo;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipBoostDirectCompo* m_pBoostDirectCompo;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipTargetPointCompo* m_pTargetCursorPoint;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipMultiLockonCompo* m_pLockonManager;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipRailSlideManager* m_pRailSlideManager;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipPlayBonus* m_pPlayBonus;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<ATresGumiShipSpWeaponConnection> m_pSpWeaponConnection;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipDefCollisionSetCompo* m_pDefCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* m_pWarningCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* m_pLimitedCollision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fWarningAreaRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fLimitedAreaRadius;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresGumiShipPlayerParameterDataTableSet* m_pParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_UseBaseParamRowName;
    
public:
    ATresGumiShipPlayer();
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "pWorldContextObject", LatentInfo = "LatentInfo"))
    static void WaitSetupPlayer(UObject* pWorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void RequestWorldSymbolStart(AActor* pWorldSymbolActor);
    
    UFUNCTION(BlueprintCallable)
    void RequestUseCameraForEnemyBattle(const float fInterpSec, const bool bIsTakeover);
    
    UFUNCTION(BlueprintPure)
    bool IsRouteRailSliding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRailSliding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAutoPilotFromGimmick() const;
    
    UFUNCTION(Exec)
    void GumiShip_ToggleDebug_SwitchEnableTrackingNoTimeLimit();
    
    UFUNCTION(Exec)
    void GumiShip_ToggleDebug_SwitchEnableTrackingDebugDraw();
    
    UFUNCTION(Exec)
    void GumiShip_ToggleDebug_DispPlayerParamInfo();
    
    UFUNCTION(Exec)
    void GumiShip_ToggleDebug_DispPlayerInfo();
    
    UFUNCTION(Exec)
    void GumiShip_ToggleDebug_ChangeMovementCompo(const FString& rCompoName);
    
    UFUNCTION(Exec)
    void GumiShip_ToggleDebug_ChangeAccelCompo(const FString& rCompoName);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_SetSpWeaponNoCoolDownEnable(bool bIn);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_SetSpWeaponNoConsumePointEnable(bool bIn);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_SetOverrideParam(int32 dIndex, int32 dIn);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_SetInvincible(bool bIn);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_SetHpToOne();
    
    UFUNCTION(Exec)
    void GumiShip_Debug_SetForceBerserkMode(bool bIn);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_SetExplosion(bool bIn, float fSpeed, float fRot);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_SetEnableOverrideParam(int32 dIndex, bool bIn);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_SetDontConsumeBoost(bool bIn);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_SetBerserkModeSuppression(bool bIn);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_SetBarrierHp(int32 dIn);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_RailSlide_SetCameraFOV(float fIn);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_RailSlide_SetCameraDegree(float fIn);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_RailSlide_SetCameraArmLength(float fIn);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Lockon_SetDebugDraw(bool bIn);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_CreateTinyShip(bool bIsRight, int32 dKind, int32 dIndex);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_CreateSpWeapon(int32 dIndex);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_CreateGumiShip(int32 dKind, int32 dIndex);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_CleanAndSetWeapon(int32 dIndex);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetToughnessUp(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetStrikeUp(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetSpeedUp(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetSpecialUp(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetSpecialConverter(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetSpecialCharge(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetShotUp(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetShockAbsorber(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetRollingPowerUp(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetRollingExtend(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetQuickStep(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetPrizeBonusUp(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetLaserUp(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetHealUp(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetFinalPower(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetDrainShot(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetCostConverter(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetCharengeMode(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetBorderLine(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetBoostCharge(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetAutoReraise(uint8 byNum);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_Ability_SetAspirShot(uint8 byNum);
    
    UFUNCTION(BlueprintCallable)
    void EnableBoostEffect(bool bIn);
    
    UFUNCTION(BlueprintPure)
    bool CanTracking() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_SetLockAtTargetForRailSlide(AActor* pTarget, const float fInterpSec, const FVector vOffset);
    
    UFUNCTION(BlueprintCallable)
    void BP_Debug_SetLockAtTargetForRailSlide(AActor* pTarget, const float fInterpSec, const FVector vOffset);
    
private:
    UFUNCTION()
    void _OnTeardownBattleMission(const ETresGumiShipBattleMissionEndFactorType eEndType);
    
    UFUNCTION()
    void _OnStartBattleMission();
    
    UFUNCTION()
    void _OnRefreshedBarrier(const int32 dIndex);
    
    UFUNCTION()
    void _OnNeedRefrectionConfigSetting();
    
    UFUNCTION()
    void _OnInputXButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION()
    void _OnInputSpWeaponButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION()
    void _OnInputSpButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION()
    void _OnInputR3ButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION()
    void _OnInputL3ButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION()
    void _OnInputCancelButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION()
    void _OnInputAutoHorizontalButtonRP(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION()
    void _OnGraze(UPrimitiveComponent* pComponent, const FVector& rvGrazeLocation);
    
    UFUNCTION()
    void _OnFinishedRailSlide(const ETresGumiShipRailSlideType eRailSlideType);
    
    UFUNCTION()
    void _OnFinishedBattleMission(const ETresGumiShipBattleMissionEndFactorType eEndType);
    
    UFUNCTION()
    void _OnChangeSpPoint(const float fOld, const float fNow, const float fRatio);
    
    UFUNCTION()
    void _OnChangeRankForBattleMission(const TEnumAsByte<ETresGumiShipBattleMissionRankType> eOldRank, const TEnumAsByte<ETresGumiShipBattleMissionRankType> eNewRank);
    
    UFUNCTION()
    void _OnChangeLockonTargetForDist(USceneComponent* pNewTarget);
    
    UFUNCTION()
    void _OnChangedLockonTarget(USceneComponent* pNewTarget);
    
    UFUNCTION()
    void _OnBrokenBarrier(const int32 dIndex);
    
    
    // Fix for true pure virtual functions not being implemented
};

