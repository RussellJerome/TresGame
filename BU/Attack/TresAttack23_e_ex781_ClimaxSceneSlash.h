#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RootMotionScaleDataParam_e_ex781.h"
#include "TresAttack23_e_ex781_ClimaxSceneSlash.generated.h"

class UCurveFloat;
class USoundBase;
class UParticleSystem;
class ATresProjectileBase;
class ATresCharPawnBase;
class UParticleSystemComponent;

UCLASS()
class UTresAttack23_e_ex781_ClimaxSceneSlash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_CameraLockonCenter;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CameraLockonCenterTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ToTargetTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSubDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ToTargetSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D m_BodyCollSize;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_BodyCollOffsetPos;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleDataParam_e_ex781 m_RootMotion1ScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleDataParam_e_ex781 m_RootMotion2ScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleDataParam_e_ex781 m_RootMotion3ScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsClimaxSceneMode;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ClimaxSceneCutOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ClimaxSlashParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GravityParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ClimaxSceneMotStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_TestClimaxSceneAction;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_GravitySpherePos;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GravitySpherePosOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CrimaxSceneGravityPower;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_CrimaxSceneRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CrimaxSceneAnimWaitTime;
    
private:
    UPROPERTY()
    ATresCharPawnBase* m_PlayerPawn;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_GravityParticle;
    
public:
    UTresAttack23_e_ex781_ClimaxSceneSlash();
};

