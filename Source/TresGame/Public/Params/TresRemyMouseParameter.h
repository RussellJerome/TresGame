#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresRemyMouseParameter.generated.h"

UCLASS(BlueprintType)
class UTresRemyMouseParameter : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FlambeFailedTimer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FlambeDivAngleNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FlambeSampleDirNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FlambeSuccessNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PepperAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PepperDeltaInputMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PepperSuccessBias;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CutAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CutDeltaInputMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EggOpenScale;
    
    UTresRemyMouseParameter();
};

