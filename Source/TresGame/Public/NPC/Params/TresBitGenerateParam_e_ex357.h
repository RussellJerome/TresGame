#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyBitGenerateLocation_e_ex357.h"
#include "UObject/NoExportTypes.h"
#include "TresBitGenerateParam_e_ex357.generated.h"

USTRUCT(BlueprintType)
struct FTresBitGenerateParam_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 Num;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 AddNum;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyBitGenerateLocation_e_ex357::Type> AppearLocationType;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval AppearHeightRange;
    
    TRESGAME_API FTresBitGenerateParam_e_ex357();
};

