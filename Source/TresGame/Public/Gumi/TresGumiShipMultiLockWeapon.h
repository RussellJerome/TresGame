#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipShootWeaponBase.h"
#include "ETresGumiShipMultiWeaponSetTargetType.h"
#include "TresGumiShipMultiLockWeapon.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipMultiLockWeapon : public UTresGumiShipShootWeaponBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 m_dMaxOfMultiLockNum;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 m_dMinOfGuaranteeLockNum;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    ETresGumiShipMultiWeaponSetTargetType m_eSetTargetType;
    
public:
    UTresGumiShipMultiLockWeapon();
};

