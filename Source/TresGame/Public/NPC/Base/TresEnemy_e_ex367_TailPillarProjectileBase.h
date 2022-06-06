#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemy_e_ex367_TailPillarProjectileBase.generated.h"

UCLASS()
class ATresEnemy_e_ex367_TailPillarProjectileBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector m_InitScale;
    
    UPROPERTY(EditAnywhere)
    float m_ScaleZMin;
    
    UPROPERTY(EditAnywhere)
    float m_ScaleSpeedZ;
    
    ATresEnemy_e_ex367_TailPillarProjectileBase();
};

