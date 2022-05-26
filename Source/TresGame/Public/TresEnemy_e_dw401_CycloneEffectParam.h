#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_dw401_CycloneEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemy_e_dw401_CycloneEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_ScaleMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ScaleMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ScaleChangeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxRotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CreateDelay;
    
    TRESGAME_API FTresEnemy_e_dw401_CycloneEffectParam();
};

