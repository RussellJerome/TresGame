#pragma once
#include "CoreMinimal.h"
#include "EX354_ChargeShotBounceInfo.h"
#include "TresProjectileBase.h"
#include "ETresRiskDodgeType.h"
#include "TresProjectile_e_ex354_ChargeShot.generated.h"

class UParticleSystem;
class AActor;

UCLASS(Abstract)
class ATresProjectile_e_ex354_ChargeShot : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FEX354_ChargeShotBounceInfo m_BounceInfo;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinBoundDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxBoundDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinBoundAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxBoundAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinDistance_NoTarget;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBeforeTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinCameraYawOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxCameraYawOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBeforeTargetAdjustMaxTargetVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBeforeTargetLocAdjustTargetVelocityRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bAimTargetWithVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIgnoreAngleRestrictionOnBound;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIgnoreDistanceRestrictionOnBound;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ShotEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BoundEffect;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bRayTraceHitCheck;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bDebugDisp;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bDebugDisp_BoundLoc;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bNoUseEQS;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bUseEQSOnly;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fTargetSameHeightRange;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fNextAirBoundHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIgnoreFirstRelectPosOutofScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETresRiskDodgeType> DodgeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_EntryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LimitAngle;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<bool> m_DamageCautionBoolArray;
    
    UPROPERTY()
    AActor* m_Target;
    
public:
    ATresProjectile_e_ex354_ChargeShot();
};

