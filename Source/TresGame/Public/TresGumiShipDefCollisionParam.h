#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipDefCollisionParam.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresGumiShipDefCollisionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fHitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fDefenseDegree;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UParticleSystem* m_pBarrierEffect;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector m_vEffectScale;
    
    TRESGAME_API FTresGumiShipDefCollisionParam();
};

