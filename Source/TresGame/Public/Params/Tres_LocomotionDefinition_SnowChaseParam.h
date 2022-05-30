#pragma once
#include "CoreMinimal.h"
#include "Tres_LocomotionDefinition_SnowChaseParam.generated.h"

USTRUCT(BlueprintType)
struct FTres_LocomotionDefinition_SnowChaseParam {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_DashDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DashMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DashAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SuperSlowTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SuperSlowMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowAcceleration;
    
public:
    TRESGAME_API FTres_LocomotionDefinition_SnowChaseParam();
};

