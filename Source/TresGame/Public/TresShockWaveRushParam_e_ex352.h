#pragma once
#include "CoreMinimal.h"
#include "TresShockWaveRushParam_e_ex352.generated.h"

USTRUCT(BlueprintType)
struct FTresShockWaveRushParam_e_ex352 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_RushSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Acceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NextTargetDistance;
    
    TRESGAME_API FTresShockWaveRushParam_e_ex352();
};

