#pragma once
#include "CoreMinimal.h"
#include "TresHUDBase.h"
#include "ETresGameHelp.h"
#include "TresGumiShipBonusParameterDataTable.h"
#include "TresGMInputResult.h"
#include "ETresGumiShipBonusType.h"
#include "TresGumiShipHUD.generated.h"

class UTresUIP_HudGummiShip;
class UTresUIP_MenuGummiShip;
class UTresUIP_MobileAlbum;
class ATresGumiShipBattleVolume;
class ATresGumiShipPlayerControllerBase;
class USceneComponent;

UCLASS(NonTransient)
class ATresGumiShipHUD : public ATresHUDBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipHudResultRetry);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipHudResultRankConfirmed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipHudResultFinish);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipCloseInfomation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiSettingMenuFinish);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiRecordMenuFinish);
    
    UPROPERTY(BlueprintAssignable)
    FTresGumiShipHudResultRankConfirmed OnRankConfirmedResultHudDispather;
    
    UPROPERTY(BlueprintAssignable)
    FTresGumiShipHudResultFinish OnFinishResultHudDispather;
    
    UPROPERTY(BlueprintAssignable)
    FTresGumiShipHudResultRetry OnRetryResultHudDispather;
    
private:
    UPROPERTY(Transient)
    UTresUIP_HudGummiShip* m_pHud;
    
    UPROPERTY(Transient)
    UTresUIP_MenuGummiShip* m_pGummiMenu;
    
    UPROPERTY(Transient)
    UTresUIP_MobileAlbum* m_pAlbum;
    
public:
    ATresGumiShipHUD();
    UFUNCTION(BlueprintCallable)
    void SetSightEnable(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void OpenMissionClearWindow();
    
    UFUNCTION(BlueprintCallable)
    void OpenMessageWindow(const FString& strMessage, bool bAuto);
    
    UFUNCTION(BlueprintCallable)
    void OpenInfomationWithLabel(const FString& label);
    
    UFUNCTION(BlueprintCallable)
    void OpenInfomation();
    
    UFUNCTION(BlueprintCallable)
    void OpenGumiTutorialWindow(ETresGameHelp eOpenId, bool bWithPause);
    
    UFUNCTION(BlueprintCallable)
    void OpenCapture();
    
    UFUNCTION(BlueprintCallable)
    void DebugWorldGuideAllEnable(bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void DebugHudDrawSuppression(bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void DebugEnemyHPIgnore(bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void DebugEnemyHPEnable(bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void CloseMessageWindow(bool bAll);
    
    UFUNCTION(BlueprintCallable)
    void CloseInfomation();
    
private:
    UFUNCTION()
    void _OnUpdateInfomation(float DeltaTime);
    
    UFUNCTION()
    void _OnStartSpWeapon();
    
    UFUNCTION()
    void _OnStartBattleMission();
    
    UFUNCTION()
    void _OnResultHudRetry();
    
    UFUNCTION()
    void _OnResultHudRankConfirmed();
    
    UFUNCTION()
    void _OnResultHudFinish();
    
    UFUNCTION()
    void _OnPostSetupPlayer();
    
    UFUNCTION()
    void _OnPostCreateSpWeapon();
    
    UFUNCTION()
    void _OnOutBattleMode(ATresGumiShipBattleVolume* pBattleVolume);
    
    UFUNCTION()
    void _OnInBattleMode(ATresGumiShipBattleVolume* pBattleVolume);
    
    UFUNCTION()
    void _OnGetItem(int32 eItemId);
    
    UFUNCTION()
    void _OnDefeatedEnemy(const int32 dCount);
    
    UFUNCTION()
    void _OnCoolTimeSpWeapon();
    
    UFUNCTION()
    void _OnCoolEndSpWeapon();
    
    UFUNCTION()
    void _OnCompletedBonus(const FTresGumiShipBonusParameterDataTable& rInfo);
    
    UFUNCTION()
    void _OnClosedGameHelp(int32 UserParam);
    
    UFUNCTION()
    void _OnChangeTinyShipFormation(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION()
    void _OnChangeSpWeaponGauge(const float fOldPoint, const float fNewPoint, const float fRatio);
    
    UFUNCTION()
    void _OnChangeSpeedGauge(const float fOldPoint, const float fNewPoint, const float fRatio);
    
    UFUNCTION()
    void _OnChangeHpGauge(const int32 dOldHp, const int32 dNewHp, const float fRatio);
    
    UFUNCTION()
    void _OnChangedLockonTarget(USceneComponent* pTarget);
    
    UFUNCTION()
    void _OnBattleBonus(TEnumAsByte<ETresGumiShipBonusType> eType, int32 dPoint);
    
};

