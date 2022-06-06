#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCharPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmick_e_ex781_GravitySphere.generated.h"

class UCurveFloat;
class UStaticMeshComponent;
class UCapsuleComponent;
class ATresEnemyPawnBase;
class UParticleSystem;
class ATresCameraNormal;
class ATresWaterCurrentSplineActor;
class UParticleSystemComponent;
class ATresKHSBlendVolume;

UCLASS()
class ATresGimmick_e_ex781_GravitySphere : public ATresCharPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* MyGravityCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* MyCatchDetectCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MyDomeCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MyFloorCollision;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_GravitySceneHeight;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GravitySceneDomeEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GravitySceneGrbObject;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GravityWaveEffectUp;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GravityWaveEffectPull;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GravityWaveEffectPush;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_GravityWaveEffectGrpUp;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_GravityWaveEffectGrpPull;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_GravityWaveEffectGrpPush;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CraftSceneDomeEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_CraftSceneStartBlendCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_CraftSceneEndBlendCurve;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<ATresEnemyPawnBase>> m_SpawnEnemyClasses;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CrimaxSceneHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CrimaxSceneTimer;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CrimaxSceneDomeEffect;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_CrimaxSceneCoreEffectGrp;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CrimaxSceneGravityPower;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_CrimaxSceneRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_CrimaxCatchAttachOffset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_VacuumParticleEffData;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VacuumParticleSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_CrimaxAttackID;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DesappearDeTouchTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraNormal> m_HighVoltageCameraClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWaterCurrentSplineActor> m_GravitySceneSplineClass;
    
    UPROPERTY(Transient)
    ATresCharPawnBase* m_MyTarget;
    
    UPROPERTY(Transient)
    ATresCharPawnBase* m_CatchPawn;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_pGravityWaveEffect;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_pPlayerPullEffect;
    
    UPROPERTY(Transient)
    UCurveFloat* m_pGravityEffectCurve;
    
    UPROPERTY(Transient)
    UCurveFloat* m_pReqGravityEffectCurve;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_pDomeEffect;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_pGrbObjEffect;
    
    UPROPERTY(Transient)
    ATresKHSBlendVolume* m_pBlendVolumeTarget;
    
    UPROPERTY(Transient)
    UCurveFloat* m_pBlendVolumeCurve;
    
    UPROPERTY(Transient)
    ATresCameraNormal* m_pCamera;
    
public:
    ATresGimmick_e_ex781_GravitySphere();
};

