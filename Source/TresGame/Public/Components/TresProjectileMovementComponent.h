#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ETresProjectileHomingType.h"
#include "UObject/NoExportTypes.h"
#include "TresScaleVectorAnim.h"
#include "TresProjectileMovementComponent.generated.h"

class UCurveFloat;
class UTresLockonTargetComponent;
class AActor;

UCLASS(ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UTresProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveTickDelegate, float, InDeltaTime);
    
    UPROPERTY(BlueprintAssignable)
    FOnMoveTickDelegate OnTickMove;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Accel;
    
    UPROPERTY()
    UCurveFloat* m_VelocityCurve;
    
    UPROPERTY()
    uint8 m_bVelocityCurveLoop: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDisableMovementProc: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableMapHitNormalCheck: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CheckMapHitNormal;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bQuaternionFollowsVelocity: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fQuaternionFollowsVelRate;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bWaitMoveStartOnce: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMoveStartDelay;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableHoming: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingStartDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMinDist;
    
    UPROPERTY()
    uint8 m_bIgnoreHomingZ: 1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresProjectileHomingType m_HomingType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingTurnMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingTurnAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxTurnMax;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UCurveFloat* m_HomingTurnMaxCurve;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bHomingTurnMaxCurveLoop: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAnglePITCH;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingTurnMaxPITCH;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingTurnAccelPITCH;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxTurnMaxPITCH;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UCurveFloat* m_HomingTurnMaxCurvePITCH;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bHomingTurnMaxCurveLoopPITCH: 1;
    
    UPROPERTY()
    float m_StepUpHeight;
    
    UPROPERTY(Transient)
    AActor* m_HomingTargetActor;
    
    UPROPERTY(Export, Transient)
    UTresLockonTargetComponent* m_HomingTargetComponent;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableSpin: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_Spin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpinStartDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpinMaxTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bEnableUpdatedComponentScaleAnim: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FTresScaleVectorAnim m_ScaleAnim;
    
public:
    UTresProjectileMovementComponent();
};

