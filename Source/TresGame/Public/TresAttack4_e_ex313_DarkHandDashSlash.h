#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_ex313_DarkHandDashSlash.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_e_ex313_DarkHandDashSlash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HaloMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HaloMoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DashSlashRootMotionScale;
    
public:
    UTresAttack4_e_ex313_DarkHandDashSlash();
};

