#pragma once
#include "CoreMinimal.h"
#include "TresWeaponBase.h"
#include "TresEnemyWeapon_e_ex308.generated.h"

class UParticleSystem;

UCLASS()
class ATresEnemyWeapon_e_ex308 : public ATresWeaponBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SickleRotationParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PhantomBlitzOffset;
    
public:
    ATresEnemyWeapon_e_ex308();
};

