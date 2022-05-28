#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WaveInfo_e_ex310.generated.h"

USTRUCT(BlueprintType)
struct FWaveInfo_e_ex310 {
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
    
    TRESGAME_API FWaveInfo_e_ex310();
};

