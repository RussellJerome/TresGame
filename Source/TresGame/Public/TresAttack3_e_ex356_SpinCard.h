#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_XIIILB_Base.h"
#include "ETresBodyCollReactionType.h"
#include "TresAttack3_e_ex356_SpinCard.generated.h"

class ATresProjectile_e_ex356_HideAndSeekBase;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack3_e_ex356_SpinCard : public UTresAttack_XIIILB_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex356_HideAndSeekBase> m_RiseProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex356_HideAndSeekBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CardParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_RiseProjectileNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ProjectileNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RiseSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    ETresBodyCollReactionType m_NotifyBodyCollReactionType;
    
public:
    UTresAttack3_e_ex356_SpinCard();
};

