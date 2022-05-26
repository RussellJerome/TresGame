#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_e_ex761_ShotBase.h"
#include "TresAttack6_e_ex761_Shot.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack6_e_ex761_Shot : public UTresAttack_e_ex761_ShotBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AnimStartTime;
    
public:
    UTresAttack6_e_ex761_Shot();
};

