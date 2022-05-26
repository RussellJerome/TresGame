#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_ex711_Rush.generated.h"

class UCurveFloat;

UCLASS(HideDropdown)
class UTresAttack4_e_ex711_Rush : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StRushSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StTargetDistXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StInitRushSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StRushAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StRushMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_EndRushSubSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_RushStopCurve;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_pro_bBattleAreaEnd;
    
public:
    UTresAttack4_e_ex711_Rush();
};

