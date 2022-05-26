#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipWeaponBase.h"
#include "TresGumiShipStrikeWeaponBase.generated.h"

class UParticleSystem;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipStrikeWeaponBase : public UTresGumiShipWeaponBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FName m_AttackDataName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FName m_AttackDataNameForShockWave;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    uint8 m_byStrikeGumiDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pParticleSystem;
    
public:
    UTresGumiShipStrikeWeaponBase();
};

