#pragma once
#include "CoreMinimal.h"
#include "TresProj_MagicBase.h"
#include "TresProj_MagicThunder.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProj_MagicThunder : public ATresProj_MagicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_HitTailEffect;
    
public:
    ATresProj_MagicThunder();
};

