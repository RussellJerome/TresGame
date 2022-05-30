#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DarkRainInfo_e_ex734.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FDarkRainInfo_e_ex734 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpawnRate;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iAimTargetMinInterval;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iAimTargetMaxInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAimTargetForbiddenTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpawnRadius;
    
    TRESGAME_API FDarkRainInfo_e_ex734();
};

