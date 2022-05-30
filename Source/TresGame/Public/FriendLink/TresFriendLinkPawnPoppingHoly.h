#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresFriendLinkUtilityPawn.h"
#include "ETresBodyPushPowerLevel.h"
#include "TresFriendLinkPawnPoppingHoly.generated.h"

class ATresProjectileBase;
class UParticleSystem;
class ATresCameraNormal;

UCLASS()
class ATresFriendLinkPawnPoppingHoly : public ATresFriendLinkUtilityPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_HolyProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_FinishAttackHolyProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pHolyBulletFiringEffectAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pKeyBladeAttachHolyEffectAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraNormal> m_PoppingHolyCameraClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMoveDeceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCameraStartInterpolationTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCameraEndInterpolationTime;
    
    UPROPERTY(EditDefaultsOnly)
    ETresBodyPushPowerLevel m_eBodyCollisionPushPowerLevel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFriendLinkFinishInvincibleTime;
    
public:
    ATresFriendLinkPawnPoppingHoly();
};

