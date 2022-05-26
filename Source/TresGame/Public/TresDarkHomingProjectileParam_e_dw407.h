#pragma once
#include "CoreMinimal.h"
#include "TresDarkHomingProjectileParam_e_dw407.generated.h"

USTRUCT(BlueprintType)
struct FTresDarkHomingProjectileParam_e_dw407 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_StartHomingTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingAccelSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingAccelSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDistance3D: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomigMinDist;
    
    TRESGAME_API FTresDarkHomingProjectileParam_e_dw407();
};

