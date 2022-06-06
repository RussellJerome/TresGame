#pragma once
#include "CoreMinimal.h"
#include "TresGimmickPrizeVelocityData.generated.h"

USTRUCT(BlueprintType)
struct FTresGimmickPrizeVelocityData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 m_bSetDirection: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bApplyParentRotation: 1;
    
    UPROPERTY(EditAnywhere)
    float m_InitSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_InitSpeedRand;
    
    UPROPERTY(EditAnywhere)
    float m_PitchMin;
    
    UPROPERTY(EditAnywhere)
    float m_PitchMax;
    
    UPROPERTY(EditAnywhere)
    float m_YawMin;
    
    UPROPERTY(EditAnywhere)
    float m_YawMax;
    
    UPROPERTY(EditAnywhere)
    float m_AirResistance;
    
    TRESGAME_API FTresGimmickPrizeVelocityData();
};

