#pragma once
#include "CoreMinimal.h"
#include "EX359_BeamSpinMoveInfo.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FEX359_BeamSpinMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxSpinTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSpinInversed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInitSpinVelocity;
    
    UPROPERTY()
    bool m_bSpinAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpinAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxSpinVelocity;
    
protected:
    UPROPERTY()
    ATresProjectileBase* m_Projectile;
    
public:
    TRESGAME_API FEX359_BeamSpinMoveInfo();
};

