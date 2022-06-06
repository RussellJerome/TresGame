#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipTextSet.generated.h"

USTRUCT()
struct FTresGumiShipTextSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString m_strNamespace;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_strKey;
    
    TRESGAME_API FTresGumiShipTextSet();
};

