#pragma once
#include "CoreMinimal.h"
#include "TresSharedCheatManager.h"
#include "TresWinnieCheatManager.generated.h"

UCLASS()
class UTresWinnieCheatManager : public UTresSharedCheatManager {
    GENERATED_BODY()
public:
    UTresWinnieCheatManager();
private:
    UFUNCTION(Exec)
    void WinnieToggleUnitsVisibility();
    
    UFUNCTION(Exec)
    void WinnieToggleUnitsInfoListVisibility();
    
    UFUNCTION(Exec)
    void WinnieToggleUnitsCoord();
    
    UFUNCTION(Exec)
    void WinnieToggleUMGDebugInfo();
    
    UFUNCTION(Exec)
    void WinnieToggleRaycastHitResult();
    
    UFUNCTION(Exec)
    void WinnieTogglePlayerUnitDebugInfoVisibility();
    
    UFUNCTION(Exec)
    void WinnieToggleDebugFixedCamera();
    
    UFUNCTION(Exec)
    void WinnieToggleBoundLine();
    
    UFUNCTION(Exec)
    void WinnieToggleBombTarget();
    
    UFUNCTION(Exec)
    void WinnieToggleBombInterfereUnits();
    
    UFUNCTION(Exec)
    void WinnieSwitchPuzzleForceMode(int32 modeID);
    
    UFUNCTION(Exec)
    void WinnieSetLimitTime(float Time);
    
    UFUNCTION(Exec)
    void WinnieSetIsForbidAutoInvokeCharacterBonus(int32 isForbid);
    
    UFUNCTION(Exec)
    void WinnieSetDebugInfoBGAlpha(int32 Percentage);
    
    UFUNCTION(Exec)
    void WinnieSetComboValue(int32 Value);
    
    UFUNCTION(Exec)
    void WinnieSetCharacterBonusInvokedTimesBySingle(int32 Times);
    
    UFUNCTION(Exec)
    void WinnieSetCharacterBonusInvokedTimesByAdditional(int32 Times);
    
    UFUNCTION(Exec)
    void WinnieSetCharacterBonusGaugeType(int32 Type);
    
    UFUNCTION(Exec)
    void WinnieSetCharacterBonusGaugePercentage(int32 Percentage);
    
    UFUNCTION(Exec)
    void WinnieSetCharacterBonusGaugeAlwaysDecreasable(int32 decreasable);
    
    UFUNCTION(Exec)
    void WinnieRandomInvokeBound(int32 isAdditionalInvocation);
    
    UFUNCTION(Exec)
    void WinnieRandomInvokeBomb(int32 isAdditionalInvocation);
    
    UFUNCTION(Exec)
    void WinnieRandomEarnUnits(int32 earnedUnitsNum);
    
    UFUNCTION(Exec)
    void WinnieInvokeDecrease(int32 isAdditionalInvocation);
    
    UFUNCTION(Exec)
    void WinnieInvokeBoundWithStyleIdx(int32 styleIdx, int32 isAdditionalInvocation);
    
    UFUNCTION(Exec)
    void WinnieInvokeBombWithID(int32 unitIDA, int32 unitIDB, int32 unitIDC, int32 Success);
    
    UFUNCTION(Exec)
    void WinnieIncreaseHoneypotGaugeValue(int32 IncreaseValue);
    
    UFUNCTION(Exec)
    void WinnieForceSetShootNum(int32 Num);
    
    UFUNCTION(Exec)
    void WinnieForceRetry();
    
    UFUNCTION(Exec)
    void WinnieForceInvokeSameKindRemoving();
    
    UFUNCTION(Exec)
    void WinnieForceIncrease();
    
    UFUNCTION(Exec)
    void WinnieForceFailed();
    
    UFUNCTION(Exec)
    void WinnieForceClear();
    
    UFUNCTION(Exec)
    void WinnieForceCharacterBonusGaugeMax(int32 isMax);
    
    UFUNCTION(Exec)
    void WinnieForceAutoPlay(int32 shootUnitsNum);
    
    UFUNCTION(Exec)
    void WinnieEarnUnitsByType(int32 unitTypeID, int32 earnedUnitsNum);
    
    UFUNCTION(Exec)
    void WinnieChangePlayerUnitType(int32 unitTypeID);
    
    UFUNCTION(Exec)
    void WinnieAddScorePerTurn(int32 Score);
    
    UFUNCTION(Exec)
    void WinnieAddScore(int32 Score);
    
    UFUNCTION(Exec)
    void WinnieAddElapsedTime(float Time);
    
    UFUNCTION(Exec)
    void WinnieAddCharacterBonusGaugePercentage(int32 Percentage);
    
    UFUNCTION(Exec)
    void WinnieAddChallengeModeLimitTime(float Time);
    
};

