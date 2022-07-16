#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresStateID.h"
#include "TresStateAsset.generated.h"

class UTresStateBase;

USTRUCT(BlueprintType)
struct FTresStateAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    TSubclassOf<UTresStateBase> MyStateClass;
    
    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite)
    FName MyStateName;
    
    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite)
    TEnumAsByte<ETresStateID> MyStateID;
    
    TRESGAME_API FTresStateAsset();
};

