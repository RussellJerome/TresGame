#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipShootWeaponBase.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipAttachedBulletWeapon.generated.h"

class UParticleSystem;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipAttachedBulletWeapon : public UTresGumiShipShootWeaponBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipPostDestroyBullet);
    
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pChargeEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vChargeEffectScale;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bAutoStopAttackWhenBulletEndPlay;
    
public:
    UTresGumiShipAttachedBulletWeapon();
private:
    UFUNCTION()
    void _OnBulletEndPlay(AActor* pActor, TEnumAsByte<EEndPlayReason::Type> EEndPlayReason);
    
    UFUNCTION()
    void _OnBulletDestroyOverride();
    
};

