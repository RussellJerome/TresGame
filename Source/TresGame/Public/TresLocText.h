#pragma once
#include "CoreMinimal.h"
#include "TresLocText.generated.h"

USTRUCT(BlueprintType)
struct FTresLocText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Namespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString LocalizedText;
    
    TRESGAME_API FTresLocText();
};

