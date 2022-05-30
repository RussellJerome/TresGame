#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack15_e_ex771_FaceClawSuccess.generated.h"

class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack15_e_ex771_FaceClawSuccess : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_PcBgHitEffData;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_pro_WarpOffsetPos;
    
    UTresAttack15_e_ex771_FaceClawSuccess();
};

