#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction100_e_ex017_D23MoveLine.generated.h"

UCLASS(HideDropdown)
class UTresAction100_e_ex017_D23MoveLine : public UTresActionDefinitionBase {
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
    
public:
    UTresAction100_e_ex017_D23MoveLine();
};

