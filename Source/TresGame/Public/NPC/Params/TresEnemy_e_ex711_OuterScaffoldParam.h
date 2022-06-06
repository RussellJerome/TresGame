#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex711_OuterScaffoldParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex711_OuterScaffoldParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_ScaffoldNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HeightMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HeightMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DistMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DistMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RevolutionSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TornadoRotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TornadoRevolutionSpeed;
    
    TRESGAME_API FTresEnemy_e_ex711_OuterScaffoldParam();
};

