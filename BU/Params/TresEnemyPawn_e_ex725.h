#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresThornChainEffectInfo.h"
#include "TresEnemyPawn_e_ex725.generated.h"

class UParticleSystem;
class ATresProjectileBase;
class USQEX_ParticleAttachDataAsset;
class ATresEffectActor_e_ex721_ThornChain;
class AStaticMeshActor;
class USoundBase;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class ATresEnemyPawn_e_ex725 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AStaticMeshActor> m_HitActorData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AStaticMeshActor> m_HitActorDataForNpc;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEffectActor_e_ex721_ThornChain> m_ThornChainEffectActorData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_CaptureProjectileAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_CatchProjectileAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ThornMeshEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FTresThornChainEffectInfo m_BaseEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FTresThornChainEffectInfo m_ThornEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OffsetThornToTarget;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OffsetTargetToThorn;
    
    UPROPERTY(EditDefaultsOnly)
    FTresThornChainEffectInfo m_RestraintEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EdgeEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ThornFireIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CanMoveRange;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_DragLocationName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DragSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ThornOverRunDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ThornSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpitOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_SoundData;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_BaseEffectCmp;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_ThornEffectCmp;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_RestraintEffectCmp;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_EdgeEffectCmp[2];
    
    UPROPERTY()
    AStaticMeshActor* m_HitActor;
    
    UPROPERTY()
    ATresEffectActor_e_ex721_ThornChain* m_ThronChainEffectActor;
    
    UPROPERTY()
    ATresProjectileBase* m_CaptureProjectile;
    
    UPROPERTY()
    ATresProjectileBase* m_CatchProjectile;
    
public:
    UPROPERTY(EditDefaultsOnly)
    float m_CanCaptureRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NextCaptureStartTime;
    
    ATresEnemyPawn_e_ex725();
};

