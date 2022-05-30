#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "ETresGimmickMI_02_LaserArmActionType.h"
#include "TresGimmickMI_02_LaserArmActionParam.h"
#include "TresGimmickMI_02_LaserArm.generated.h"

class USceneComponent;
class UParticleSystemComponent;
class AActor;
class UTresProjectileGenComponent;
class USplineComponent;
class UCurveFloat;
class ATresProjectileBase;
class UParticleSystem;

UCLASS(Abstract, Config=Game)
class ATresGimmickMI_02_LaserArm : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_EffectLaserComponent;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_EffectLaserChargeComponent;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_EffectLaserHitComponent;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_EffectLaserOverHeatComponent;
    
    UPROPERTY()
    AActor* m_HitActor;
    
    UPROPERTY()
    AActor* m_OldHitActor;
    
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresProjectileGenComponent* MyProjectile;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* WorkTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresGimmickMI_02_LaserArmActionType m_ArmActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FTresGimmickMI_02_LaserArmActionParam> m_ActionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    float m_DestroyRotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    float m_DestroyUpDownSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ArmBarricadeYLockAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ArmBarricadeXLockHeight;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    USplineComponent* m_TargetSpline;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    USceneComponent* m_ArmUpDownTargetSceneComp;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UCurveFloat* m_ArmUpDownInterpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_ArmUpDownAngleMin;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_ArmUpDownAngleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ArmSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ArmReturnWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LaserMaxLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LaserDamageInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LaserThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ATresProjectileBase* m_LaserProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bEnableLaserLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_LaserMaxLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LaserMaxLODRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LaserLODBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_Effect_Laser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_Effect_LaserCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_Effect_LaserHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_Effect_LaserOverHeat;
    
    ATresGimmickMI_02_LaserArm();
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveGimmickReturnArm();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveGimmickEndAttack();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveGimmickBeginAttack();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetArmLockAngle(ETresGimmickMI_02_LaserArmActionType Type, float Angle);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetActionType(ETresGimmickMI_02_LaserArmActionType Type);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetActionParamMinMax(ETresGimmickMI_02_LaserArmActionType Type, float Min, float Max);
    
    UFUNCTION(BlueprintPure)
    float BP_GetArmUpDownValue() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetArmRotationValue() const;
    
};

