#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawn_e_ex731_Base.h"
#include "EX734_FallInfo.h"
#include "DarkRainInfo_e_ex734.h"
#include "TresEnemyPawn_e_ex734.generated.h"

UCLASS()
class ATresEnemyPawn_e_ex734 : public ATresEnemyPawn_e_ex731_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FEX734_FallInfo m_FallInfo;
    
    UPROPERTY(EditDefaultsOnly)
    FDarkRainInfo_e_ex734 m_DarkRainInfo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_iRequiredWolfKillNum;
    
    ATresEnemyPawn_e_ex734();
protected:
    UFUNCTION()
    void OnChangeGimmickPause(bool bPause);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetMyRequiredWolfKillNum();
    
    UFUNCTION(BlueprintPure)
    float GetMyMaxFallTime();
    
    UFUNCTION()
    void DebugSetDarkRainRate(int32 Rate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnChangeGimmickPause(bool bPause);
    
};

