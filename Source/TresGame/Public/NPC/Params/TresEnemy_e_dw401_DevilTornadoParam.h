#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_dw401_DevilTornadoParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemy_e_dw401_DevilTornadoParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_InitMoveSpped;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MaxMoveSpped;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AddMoveSpped;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnSpped;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RushTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_SubMoveSpped;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_NextRushTime;
    
    TRESGAME_API FTresEnemy_e_dw401_DevilTornadoParam();
};

