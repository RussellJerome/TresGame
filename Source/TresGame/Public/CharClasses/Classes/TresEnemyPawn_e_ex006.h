#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex006.generated.h"

class ATresActorManager_e_ex006_CoopScrum;

UCLASS()
class ATresEnemyPawn_e_ex006 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_NearIdleDistance;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActorManager_e_ex006_CoopScrum> m_CoopScrumManagerAsset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_IgnoreStepHeight;
    
    UPROPERTY(EditInstanceOnly)
    uint8 m_bCoopDebug: 1;
    
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bCoopPawn: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SmallDamagePower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SmallDamageBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GuardReflectKnockBackPower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GuardReflectKnockBackBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ReflectKnockBackPower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ReflectKnockBackBrake;
    
    ATresEnemyPawn_e_ex006();
    UFUNCTION()
    bool IsIncludeFormation();
    
    UFUNCTION()
    bool IsFormationMode();
    
    UFUNCTION(BlueprintPure)
    bool IsCoopMode() const;
    
    UFUNCTION()
    bool IsBrokenHorn();
    
    UFUNCTION()
    bool IsBeforeReactionGuardReflect();
    
};

