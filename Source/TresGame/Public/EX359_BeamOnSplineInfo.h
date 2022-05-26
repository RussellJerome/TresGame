#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EX359_BeamOnSplineInfo.generated.h"

class USplineComponent;
class ATresProjectile_e_ex359_BeamBase;
class ATresCharPawnBase;

USTRUCT(BlueprintType)
struct FEX359_BeamOnSplineInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex359_BeamBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStartRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStartAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSplineSizeScale;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSplineReverse;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSplineAngleOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxMoveEndLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bStopOnEnd;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDebugDispTime;
    
    UPROPERTY()
    bool m_bDebugDisp;
    
protected:
    UPROPERTY(Export)
    USplineComponent* m_SplineComp;
    
    UPROPERTY()
    ATresCharPawnBase* m_Owner;
    
    UPROPERTY()
    ATresProjectile_e_ex359_BeamBase* m_Projectile;
    
public:
    TRESGAME_API FEX359_BeamOnSplineInfo();
};

