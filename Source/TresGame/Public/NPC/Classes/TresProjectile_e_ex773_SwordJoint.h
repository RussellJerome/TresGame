#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresProjectile_e_ex773_SwordJoint.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS(Abstract)
class ATresProjectile_e_ex773_SwordJoint : public ATresCharPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_UniqueEffectDataAsset;
    
    ATresProjectile_e_ex773_SwordJoint();
};

