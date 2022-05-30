#pragma once
#include "CoreMinimal.h"
#include "EX355_ThrowBB_Info.h"
#include "EX355_ThrowBB_Pattern.generated.h"

USTRUCT(BlueprintType)
struct FEX355_ThrowBB_Pattern {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX355_ThrowBB_Info> m_ThrowInfoArray;
    
    TRESGAME_API FEX355_ThrowBB_Pattern();
};

