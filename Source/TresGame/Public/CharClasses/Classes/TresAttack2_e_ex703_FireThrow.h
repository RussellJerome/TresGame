#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_e_ex703_Base.h"
#include "TresAttack2_e_ex703_FireThrow.generated.h"

class UAnimSequenceBase;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex703_FireThrow : public UTresAttack_e_ex703_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotPitchMaxAngle;
    
public:
    UTresAttack2_e_ex703_FireThrow();
};

