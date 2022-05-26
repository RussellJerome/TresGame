#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "TresMove1_e_ex061_Run.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS(HideDropdown)
class UTresMove1_e_ex061_Run : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffectDataAsset;
    
    UTresMove1_e_ex061_Run();
};

