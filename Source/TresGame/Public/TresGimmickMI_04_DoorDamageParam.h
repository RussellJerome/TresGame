#pragma once
#include "CoreMinimal.h"
#include "TresGimmickMI_04_DoorDamageParam.generated.h"

USTRUCT(BlueprintType)
struct FTresGimmickMI_04_DoorDamageParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float interpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float maxAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float timeRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float initPower;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float powerReturnRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float stopPower;
    
    TRESGAME_API FTresGimmickMI_04_DoorDamageParam();
};

