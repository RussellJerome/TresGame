#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawn_e_ex731_Base.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex731.generated.h"

class AActor;

UCLASS()
class ATresEnemyPawn_e_ex731 : public ATresEnemyPawn_e_ex731_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString m_BattleAreaActorName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSmallDamageTurnRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBlowDamageTurnRate;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_ForceStrondDamageAttackIDArray;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseBlowAsParabolaDamage;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSkipBlowLoopAnim;
    
protected:
    UPROPERTY(Transient)
    AActor* m_pBattleAreaActor;
    
public:
    ATresEnemyPawn_e_ex731();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool ValidateStep(FVector inRootTransOffset) const;
    
    UFUNCTION(BlueprintPure)
    bool IsOutOfBattleArea();
    
};

