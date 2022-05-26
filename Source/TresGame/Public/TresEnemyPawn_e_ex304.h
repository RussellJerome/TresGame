#pragma once
#include "CoreMinimal.h"
#include "TresEx304HitEffectInfo.h"
#include "TresEnemyXIIIEPawnBase.h"
#include "TresFRThinkOfYouInterface.h"
#include "TresEx304HitEffectManager.h"
#include "TresEnemyPawn_e_ex304.generated.h"

UCLASS()
class ATresEnemyPawn_e_ex304 : public ATresEnemyXIIIEPawnBase, public ITresFRThinkOfYouInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresEx304HitEffectInfo m_HitEffectInfos[2];
    
    UPROPERTY()
    TArray<FTresEx304HitEffectManager> m_HitEffectManager;
    
    UPROPERTY(EditAnywhere)
    int32 m_BattleEndHitPointPerAreaD;
    
    ATresEnemyPawn_e_ex304();
    UFUNCTION(BlueprintCallable)
    void SetEnableDebugFnishBlow(bool bEnable);
    
    UFUNCTION()
    bool IsSaixBodyTypeBlueBurst();
    
    UFUNCTION()
    bool IsHitAerialComboAttack();
    
    UFUNCTION(Exec)
    bool IsDuringLeaderChangeOrFatalAttackCooldown();
    
    UFUNCTION(Exec)
    bool IsDuringFatalAttackCooldownWithPlayerHeightCheck();
    
    UFUNCTION()
    bool IsDebugFnishBlow();
    
    UFUNCTION(BlueprintCallable)
    void BP_EndHandCharging();
    
    
    // Fix for true pure virtual functions not being implemented
};

