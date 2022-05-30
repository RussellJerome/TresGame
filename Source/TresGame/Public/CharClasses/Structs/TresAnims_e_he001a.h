#pragma once
#include "CoreMinimal.h"
#include "TresAnims_e_he001a.generated.h"

USTRUCT(BlueprintType)
struct FTresAnims_e_he001a {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName AttackName;
    
    UPROPERTY(EditDefaultsOnly)
    FName ReactionName;
    
    TRESGAME_API FTresAnims_e_he001a();
};

