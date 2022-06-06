#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoopDefinitionParamBP.h"
#include "TresCoop1_e_ex039_SpinAttack.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresCoop1_e_ex039_SpinAttack : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_MinRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ReverseTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_QueryIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EndEnvQuery;
    
public:
    UTresCoop1_e_ex039_SpinAttack();
    UFUNCTION()
    bool IsAttackLoop(const FTresCoopDefinitionParamBP& Param) const;
    
    UFUNCTION()
    void CoopMemberAttackStart(const FTresCoopDefinitionParamBP& Param);
    
};

