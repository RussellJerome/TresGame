#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex105_Ranbu.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex105_Ranbu : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StCubeTargetDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeTargetDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_OwnerTurnSpeed;
    
public:
    UTresAttack3_e_ex105_Ranbu();
};

