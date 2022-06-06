#pragma once
#include "CoreMinimal.h"
#include "Kunai_Setup.generated.h"

USTRUCT(BlueprintType)
struct FKunai_Setup {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_BoneName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_IgnoreAtkCollGroupName;
    
    TRESGAME_API FKunai_Setup();
};

