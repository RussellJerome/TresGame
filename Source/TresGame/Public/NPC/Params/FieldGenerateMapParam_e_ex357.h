#pragma once
#include "CoreMinimal.h"
#include "FieldGenerateMapParam_e_ex357.generated.h"

USTRUCT(BlueprintType)
struct FFieldGenerateMapParam_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float DelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float OffsetAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float Distance;
    
    UPROPERTY(EditDefaultsOnly)
    float FirstAttackDelayTime;
    
    TRESGAME_API FFieldGenerateMapParam_e_ex357();
};

