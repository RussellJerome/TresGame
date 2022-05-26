#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ETresBodyCollReactionType.h"
#include "TresAnimNotify_SetBodyCollReaction.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_SetBodyCollReaction : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_GroupName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bReset: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresBodyCollReactionType m_ReactionType;
    
public:
    UTresAnimNotify_SetBodyCollReaction();
};

