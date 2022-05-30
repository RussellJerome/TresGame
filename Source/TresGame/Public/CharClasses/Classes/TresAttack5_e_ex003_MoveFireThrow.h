#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack5_e_ex003_MoveFireThrow.generated.h"

UCLASS(HideDropdown)
class UTresAttack5_e_ex003_MoveFireThrow : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 m_ShotNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_shotInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotAngle;
    
public:
    UTresAttack5_e_ex003_MoveFireThrow();
};

