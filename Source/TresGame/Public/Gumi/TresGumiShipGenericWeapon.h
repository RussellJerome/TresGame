#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipShootWeaponBase.h"
#include "ETresGumiShipCollisionPriority.h"
#include "TresGumiShipAtkCollisionParam.h"
#include "TresGumiShipCollisionParam.h"
#include "TresGumiShipGenericWeapon.generated.h"

class UParticleSystem;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipGenericWeapon : public UTresGumiShipShootWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UParticleSystem* m_pAttachEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName m_ProjectileDataName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fHomingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fRange;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fLifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bDestroyWhenHit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bUseInitialOwnerSpeed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bSearchWeaponWhenEndPlay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_WideShotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_WideAngle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FTresGumiShipAtkCollisionParam m_AtkParam;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<ETresGumiShipCollisionPriority> m_eColPriority;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FTresGumiShipCollisionParam m_ColParam;
    
public:
    UTresGumiShipGenericWeapon();
};

