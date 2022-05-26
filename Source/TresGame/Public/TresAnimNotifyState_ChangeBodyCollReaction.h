#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ETresBodyCollReactionType.h"
#include "TresAnimNotifyState_ChangeBodyCollReaction.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_ChangeBodyCollReaction : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_GroupName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresBodyCollReactionType m_ReactionType;
    
public:
    UTresAnimNotifyState_ChangeBodyCollReaction();
};

