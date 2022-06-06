#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresDanceEffectColorParam.generated.h"

USTRUCT(BlueprintType)
struct FTresDanceEffectColorParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Key;
    
    UPROPERTY(EditAnywhere)
    FLinearColor Color_PS4;
    
    UPROPERTY(EditAnywhere)
    FLinearColor Color_XB1;
    
    TRESGAME_API FTresDanceEffectColorParam();
};

