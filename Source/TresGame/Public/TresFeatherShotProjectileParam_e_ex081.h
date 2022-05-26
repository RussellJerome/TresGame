#pragma once
#include "CoreMinimal.h"
#include "TresFeatherShotProjectileParam_e_ex081.generated.h"

USTRUCT(BlueprintType)
struct FTresFeatherShotProjectileParam_e_ex081 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShootPitchAngle;
    
    TRESGAME_API FTresFeatherShotProjectileParam_e_ex081();
};

