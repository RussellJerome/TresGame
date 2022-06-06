#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EX355_CutDownClaymoreInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX355_CutDownClaymoreInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_AimLocOffset;
    
    TRESGAME_API FEX355_CutDownClaymoreInfo();
};

