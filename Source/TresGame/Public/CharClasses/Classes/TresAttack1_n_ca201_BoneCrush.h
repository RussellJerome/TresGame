#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack1_n_ca201_BoneCrush.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_n_ca201_BoneCrush : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BombRotPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BombRotPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> m_BombPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BombBounceMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BombBounceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BombFrictionMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BombFrictioneMax;
    
    UTresAttack1_n_ca201_BoneCrush();
};

