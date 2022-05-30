#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttackParam_e_ex322a.h"
#include "TresAttack2_e_ex322a_SingleAttack.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack2_e_ex322a_SingleAttack : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresAttackParam_e_ex322a> m_AttackParamList;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_LandEnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_AirEnvQuery;
    
public:
    UTresAttack2_e_ex322a_SingleAttack();
};

