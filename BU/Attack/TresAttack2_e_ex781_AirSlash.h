#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RootMotionScaleDataParam_e_ex781.h"
#include "TresAttack2_e_ex781_AirSlash.generated.h"

class ATresCharPawnBase;
class USoundBase;
class UParticleSystem;
class ATresProjectileBase;
class UParticleSystemComponent;

UCLASS()
class UTresAttack2_e_ex781_AirSlash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
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
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
private:
    UPROPERTY()
    ATresCharPawnBase* m_PlayerPawn;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_GravityParticle;
    
public:
    UTresAttack2_e_ex781_AirSlash();
};

