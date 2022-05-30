#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresAttractionProjAFSRPaint.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresAttractionProjAFSRPaint : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AerialHitEff;
    
    ATresAttractionProjAFSRPaint();
};

