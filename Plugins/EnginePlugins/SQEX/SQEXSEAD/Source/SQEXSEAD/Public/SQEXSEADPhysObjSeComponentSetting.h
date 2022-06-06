#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEXSEADPhysObjSeComponentSetting.generated.h"

class USoundBase;

UCLASS()
class SQEXSEAD_API USQEXSEADPhysObjSeComponentSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundBase* HitSE;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableSwithHitSE: 1;
    
    UPROPERTY(EditAnywhere)
    USoundBase* VelocitySE;
    
    UPROPERTY(EditAnywhere)
    float HitImpulseThreshold;
    
    UPROPERTY(EditAnywhere)
    float HitDistanceThreshold;
    
    UPROPERTY(EditAnywhere)
    float VelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float VelocityAudioFadeOutTime;
    
    USQEXSEADPhysObjSeComponentSetting();
};

