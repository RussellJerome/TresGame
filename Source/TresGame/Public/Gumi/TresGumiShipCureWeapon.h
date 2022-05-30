#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipTriggerOnlyWeapon.h"
#include "ETresGumiShipCureValueType.h"
#include "TresGumiShipCureWeapon.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipCureWeapon : public UTresGumiShipTriggerOnlyWeapon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    ETresGumiShipCureValueType m_eCureType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool m_bUseRange;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float m_fCureValue;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float m_fCureValueMax;
    
public:
    UTresGumiShipCureWeapon();
};

