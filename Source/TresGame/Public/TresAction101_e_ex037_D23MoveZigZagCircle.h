#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction101_e_ex037_D23MoveZigZagCircle.generated.h"

UCLASS(HideDropdown)
class UTresAction101_e_ex037_D23MoveZigZagCircle : public UTresActionDefinitionBase {
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
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_SideMoveDistMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_SideMoveDistMax;
    
public:
    UTresAction101_e_ex037_D23MoveZigZagCircle();
};

