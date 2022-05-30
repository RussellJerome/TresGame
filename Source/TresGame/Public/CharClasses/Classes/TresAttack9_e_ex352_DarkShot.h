#pragma once
#include "CoreMinimal.h"
#include "Tres_e_ex352_DarkShotSpawnParam.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack9_e_ex352_DarkShot.generated.h"

class UParticleSystem;
class UAnimationAsset;

UCLASS(HideDropdown)
class UTresAttack9_e_ex352_DarkShot : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTres_e_ex352_DarkShotSpawnParam> m_DarkShotSpawnParams;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_AttackAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_FireEffectData;
    
public:
    UTresAttack9_e_ex352_DarkShot();
};

