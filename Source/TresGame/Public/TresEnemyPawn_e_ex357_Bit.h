#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex357_Bit.generated.h"

class UParticleSystem;
class USceneComponent;
class ATresProjectileBase;

UCLASS()
class ATresEnemyPawn_e_ex357_Bit : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* MyMzlLocationComponent;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SignParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AppearParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DieParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_MoveParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WaitRotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveRotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotKnockbackDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotKnockbackTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotKnockbackPow;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableChangeManualLockonOtherBit: 1;
    
public:
    ATresEnemyPawn_e_ex357_Bit();
};

