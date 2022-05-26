#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction100_e_ex037_D23MoveZigZag.generated.h"

UCLASS(HideDropdown)
class UTresAction100_e_ex037_D23MoveZigZag : public UTresActionDefinitionBase {
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
    float m_pro_MoveBackAngleMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveBackAngleMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_SideMoveDistMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_SideMoveDistMax;
    
public:
    UTresAction100_e_ex037_D23MoveZigZag();
};

