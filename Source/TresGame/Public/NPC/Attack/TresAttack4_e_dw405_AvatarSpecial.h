#pragma once
#include "CoreMinimal.h"
#include "TresAttack3_e_dw405_Avatar.h"
#include "TresAttack4_e_dw405_AvatarSpecial.generated.h"

class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack4_e_dw405_AvatarSpecial : public UTresAttack3_e_dw405_Avatar {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackDataIDName;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PawnHitEffect;
    
    UTresAttack4_e_dw405_AvatarSpecial();
};

