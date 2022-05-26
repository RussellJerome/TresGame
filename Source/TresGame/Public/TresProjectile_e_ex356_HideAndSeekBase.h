#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex356_Base.h"
#include "UObject/NoExportTypes.h"
#include "ETresDamageAttribute.h"
#include "TresProjectile_e_ex356_HideAndSeekBase.generated.h"

class UParticleSystem;
class UTresSceneComponent_e_ex356_HideAndSeekSpawn;

UCLASS(Abstract)
class ATresProjectile_e_ex356_HideAndSeekBase : public ATresProjectile_e_ex356_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresSceneComponent_e_ex356_HideAndSeekSpawn* MyHideAndSeekSpawnComponent;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_GimmickCardAnimInterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableGimmickCardAnimBrake: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GimmickCardAnimBrakeRate;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsAnimStartOnGround: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableOvertakeGravity: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDisableUpwardHoming: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableGuardedDestroy: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableScaleUpdate: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ScaleUpdateStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ScaleUpdateInterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_MeshRotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableMeshRotationSycParticle: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresDamageAttribute> m_DestroyDamageAttributeList;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AppearParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_UniqueParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AttributeDestroyParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SmokeParticleSystem;
    
public:
    ATresProjectile_e_ex356_HideAndSeekBase();
};

