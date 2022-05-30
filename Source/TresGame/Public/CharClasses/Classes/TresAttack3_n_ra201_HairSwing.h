#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack3_n_ra201_HairSwing.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_n_ra201_HairSwing : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDebug: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_ActionPointOffset;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bReverse: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_ActionPointOffsetReverse;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_HairOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeed;
    
    UTresAttack3_n_ra201_HairSwing();
};

