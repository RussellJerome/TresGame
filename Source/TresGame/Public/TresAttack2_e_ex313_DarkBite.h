#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex313_DarkBite.generated.h"

class ATresProjectile_e_ex313_DarkBiteShadow;

UCLASS(HideDropdown)
class UTresAttack2_e_ex313_DarkBite : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresProjectile_e_ex313_DarkBiteShadow* m_DarkBiteShadow;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex313_DarkBiteShadow> m_pro_DarkBiteShadowClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StartBiteTime;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_pro_MotionName;
    
public:
    UTresAttack2_e_ex313_DarkBite();
};

