#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack7_e_ex054_BerserkFireBless.generated.h"

class ATresProjectileGenerator_e_ex054_FireBless;
class ATresProjectileGenerator_e_ex054_ThundercloudDischarge;
class ATresWaterCurrentSplineActor;

UCLASS(HideDropdown)
class UTresAttack7_e_ex054_BerserkFireBless : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresProjectileGenerator_e_ex054_FireBless* m_FireBlessGenerator;
    
    UPROPERTY()
    ATresProjectileGenerator_e_ex054_ThundercloudDischarge* m_ThundercloudDischargeGenerator;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex054_FireBless> m_pro_FireBlessGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWaterCurrentSplineActor> m_WaterSplineClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WindForce;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex054_ThundercloudDischarge> m_pro_DischargeGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireOmenInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireInterval;
    
public:
    UTresAttack7_e_ex054_BerserkFireBless();
};

