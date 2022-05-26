#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAction2_n_ex010_Slide.generated.h"

UCLASS(HideDropdown)
class UTresAction2_n_ex010_Slide : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_LandMaxHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_MoveDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_MoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GoalDistance;
    
public:
    UTresAction2_n_ex010_Slide();
};

