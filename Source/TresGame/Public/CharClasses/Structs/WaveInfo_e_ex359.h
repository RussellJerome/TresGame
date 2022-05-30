#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WaveInfo_e_ex359.generated.h"

USTRUCT(BlueprintType)
struct FWaveInfo_e_ex359 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 iNotifyParam;
    
    UPROPERTY(EditDefaultsOnly)
    FVector vOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool bPolarOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float fLength;
    
    UPROPERTY(EditDefaultsOnly)
    float fVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float fYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float fAttackInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float fHeightAdjustVelocity_Up;
    
    UPROPERTY(EditDefaultsOnly)
    float fHeightAdjustVelocity_Down;
    
    UPROPERTY(EditDefaultsOnly)
    float fHeightAdjustOffset;
    
    TRESGAME_API FWaveInfo_e_ex359();
};

