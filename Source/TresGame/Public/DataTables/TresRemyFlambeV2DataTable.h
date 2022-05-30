#pragma once
#include "CoreMinimal.h"
#include "TresRemyCookingGameDataTableBase.h"
#include "RemyFlambeFoodType.h"
#include "TresRemyFlambeV2DataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresRemyFlambeV2DataTable : public FTresRemyCookingGameDataTableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    RemyFlambeFoodType FoodType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PourStickPourStartValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PourStickRotationJudgementAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PourStickRotationAnimationCoefficient;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PourStickNoRotationJudgementTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FlambeStickFlambeValue;
    
    TRESGAME_API FTresRemyFlambeV2DataTable();
};

