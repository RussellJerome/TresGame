#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5XIIIAttackTypes_e_ex367.h"
#include "TresAttack5_e_ex367_XIIIAttack.generated.h"

class ATresCameraNormal;

UCLASS(HideDropdown)
class UTresAttack5_e_ex367_XIIIAttack : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<TresAttack5XIIIAttackTypes_e_ex367> m_ActionType;
    
    UPROPERTY(EditAnywhere)
    float m_CameraChangeWait;
    
    UPROPERTY(EditAnywhere)
    float m_CameraDist;
    
    UPROPERTY(EditAnywhere)
    float m_CameraTransition;
    
private:
    UPROPERTY(Transient)
    ATresCameraNormal* m_Camera;
    
public:
    UTresAttack5_e_ex367_XIIIAttack();
};

