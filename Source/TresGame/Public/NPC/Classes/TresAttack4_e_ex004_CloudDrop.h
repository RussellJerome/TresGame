#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_ex004_CloudDrop.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack4_e_ex004_CloudDrop : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresProjectileBase* m_Proj;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StartMoveHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StartMoveSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StartMaxMoveSpeedXYTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StartMoveSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StartMaxMoveSpeedZTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StopSpeedTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StopSpeedZTime;
    
public:
    UTresAttack4_e_ex004_CloudDrop();
};

