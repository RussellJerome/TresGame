#pragma once
#include "CoreMinimal.h"
#include "TresRemunerationData.generated.h"

USTRUCT(BlueprintType)
struct FTresRemunerationData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 Crc;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FName> ItemKeyArray;
    
    TRESGAME_API FTresRemunerationData();
};

