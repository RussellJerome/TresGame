#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction100_e_ex037_D23Move.generated.h"

UCLASS(HideDropdown)
class UTresAction100_e_ex037_D23Move : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_NextMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveDistMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_SideMoveDistMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_SideMoveDistMax;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_RefractionNumMin;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_RefractionNumMax;
    
public:
    UTresAction100_e_ex037_D23Move();
};

