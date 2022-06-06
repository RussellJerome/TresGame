#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction101_e_ex017_D23MoveCircle.generated.h"

UCLASS(HideDropdown)
class UTresAction101_e_ex017_D23MoveCircle : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TgtHeightMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TgtHeightMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TgtHeightDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveSpeed;
    
public:
    UTresAction101_e_ex017_D23MoveCircle();
};

