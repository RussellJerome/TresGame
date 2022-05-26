#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kunai_Details.h"
#include "TresAttackDefinitionBase.h"
#include "Kunai_Setup.h"
#include "TresAttack1_e_ex114_Kunai.generated.h"

class ATresProjectile_e_ex114_Kunai;

UCLASS(HideDropdown)
class UTresAttack1_e_ex114_Kunai : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex114_Kunai> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    FKunai_Setup m_KunaiSetUp[4];
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FKunai_Details> m_KunaiDetailArray;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxShotAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinShotHeigt;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxShotHeigt;
    
    UPROPERTY()
    TArray<ATresProjectile_e_ex114_Kunai*> m_ProjArray;
    
    UTresAttack1_e_ex114_Kunai();
};

