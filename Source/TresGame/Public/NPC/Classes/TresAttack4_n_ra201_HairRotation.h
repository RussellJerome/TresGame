#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack4_n_ra201_HairRotation.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_n_ra201_HairRotation : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_RotationTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PutTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDebug: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ActionPointSize2D;
    
    UTresAttack4_n_ra201_HairRotation();
};

