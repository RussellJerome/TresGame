#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresMove1_e_ex044_Move.generated.h"

class AActor;
class ATresLinkActor_e_ex044_MoveLocation;

UCLASS(HideDropdown)
class UTresMove1_e_ex044_Move : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxRiseVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseAIPoint;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDestinationMargin;
    
    UPROPERTY()
    AActor* m_DestinationActor;
    
    UPROPERTY()
    ATresLinkActor_e_ex044_MoveLocation* m_pOldAIPoint;
    
    UPROPERTY()
    ATresLinkActor_e_ex044_MoveLocation* m_pNewAIPoint;
    
    UTresMove1_e_ex044_Move();
};

