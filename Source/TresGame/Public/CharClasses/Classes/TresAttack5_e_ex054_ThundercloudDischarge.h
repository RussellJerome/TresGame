#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5_e_ex054_ThundercloudDischarge.generated.h"

class ATresProjectileGenerator_e_ex054_ThundercloudDischarge;

UCLASS(HideDropdown)
class UTresAttack5_e_ex054_ThundercloudDischarge : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex054_ThundercloudDischarge> m_pro_DischargeGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_FireNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireOmenInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireInterval;
    
public:
    UTresAttack5_e_ex054_ThundercloudDischarge();
};

