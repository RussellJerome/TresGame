#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EyeLookAtWork_e_ex816.generated.h"

USTRUCT(BlueprintType)
struct FEyeLookAtWork_e_ex816 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FName BaseBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator MinLimitRot;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator MaxLimitRot;
    
    UPROPERTY(EditDefaultsOnly)
    float RotationSpeed;
    
public:
    TRESGAME_API FEyeLookAtWork_e_ex816();
};

