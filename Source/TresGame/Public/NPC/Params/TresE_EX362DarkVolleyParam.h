#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresE_EX362DarkVolleyParam.generated.h"

USTRUCT(BlueprintType)
struct FTresE_EX362DarkVolleyParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_Offset;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_Rot;
    
    TRESGAME_API FTresE_EX362DarkVolleyParam();
};

