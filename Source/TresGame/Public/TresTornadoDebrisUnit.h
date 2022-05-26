#pragma once
#include "CoreMinimal.h"
#include "ETresTornadoDebrisStateName.h"
#include "TresTornadoDebrisTransformInfo.h"
#include "TresTornadoDebrisUnit.generated.h"

USTRUCT(BlueprintType)
struct FTresTornadoDebrisUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresTornadoDebrisStateName> StateName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresTornadoDebrisTransformInfo> DebrisArray;
    
    TRESGAME_API FTresTornadoDebrisUnit();
};

