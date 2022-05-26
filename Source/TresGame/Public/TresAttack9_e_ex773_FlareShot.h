#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack9_e_ex773_FlareShot.generated.h"

UCLASS(HideDropdown)
class UTresAttack9_e_ex773_FlareShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_FlareNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireStRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FlareScaleMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FlareScaleMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FlareScaleMaxTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TargetDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveSpeed;
    
public:
    UTresAttack9_e_ex773_FlareShot();
};

