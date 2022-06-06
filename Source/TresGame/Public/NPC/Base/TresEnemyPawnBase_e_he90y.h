#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawnBase_e_he90x.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawnBase_e_he90y.generated.h"

class AActor;

UCLASS(Abstract)
class ATresEnemyPawnBase_e_he90y : public ATresEnemyPawnBase_e_he90x {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_AimOffsetAxisBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimOffsetYawThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimOffsetPitchThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vIgnoreAimOffsetCenter;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fIgnoreAimOffsetRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fIgnoreAimOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_BattleStartAimOffsetValue;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWorldFloorHeight;
    
    UPROPERTY(EditInstanceOnly)
    AActor* m_AimOffsetTestActor;
    
    ATresEnemyPawnBase_e_he90y();
    UFUNCTION(BlueprintPure)
    bool IsOtherAttacking();
    
    UFUNCTION(BlueprintPure)
    bool CanAttack();
    
    UFUNCTION(BlueprintPure)
    FRotator BP_GetAnimOffsetValue() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetAnimOffsetAlpha() const;
    
};

