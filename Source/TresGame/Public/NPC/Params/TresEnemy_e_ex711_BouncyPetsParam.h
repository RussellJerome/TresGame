#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex711_BouncyPetsParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex711_BouncyPetsParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_BouncyPetsNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DistMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DistMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HeightMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HeightMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RevolutionSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RevolutionOffsetYaw;
    
    TRESGAME_API FTresEnemy_e_ex711_BouncyPetsParam();
};

