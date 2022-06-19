#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProj_MagicReaction.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FTresProj_MagicReaction {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ReactionSpawnProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_ReactionOnlySameTeam: 1;
    
    TRESGAME_API FTresProj_MagicReaction();
};

