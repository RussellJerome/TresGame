#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresPawnBase.h"
#include "TresEnemyPawn_e_ex781_GunShotMarker.generated.h"

class UParticleSystem;
class ATresEnemyPawn_e_ex781;
class UParticleSystemComponent;
class AActor;
class ATresProjectileBase;

UCLASS(HideDropdown)
class ATresEnemyPawn_e_ex781_GunShotMarker : public ATresPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_MarkerParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ShotFlashParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ShotLoopParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MarkerEndWaitTime;
    
private:
    UPROPERTY()
    ATresEnemyPawn_e_ex781* m_MyParent;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_MarkerParticle;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_FlashParticle;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_LoopParticle;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> m_Target;
    
    UPROPERTY()
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
public:
    ATresEnemyPawn_e_ex781_GunShotMarker();
};

