#pragma once
#include "CoreMinimal.h"
#include "TresChaosFiragaShotInterval_e_ex352.h"
#include "TresChaosFiragaParams_e_ex352.generated.h"

USTRUCT(BlueprintType)
struct FTresChaosFiragaParams_e_ex352 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bSingleShot;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DisengageRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjectileFiringRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjectileSpreadRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjectileSpreadMargin;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_AttackIntervals;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresChaosFiragaShotInterval_e_ex352> m_ShotIntervalArray;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bShot3D;
    
    TRESGAME_API FTresChaosFiragaParams_e_ex352();
};

