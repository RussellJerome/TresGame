#pragma once
#include "CoreMinimal.h"
#include "TresAttack1_e_ex309_JinraiBase.h"
#include "TresAttack1_e_ex309_JinraiSecond.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex309_JinraiSecond : public UTresAttack1_e_ex309_JinraiBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_RootMotionScaleXY;
    
public:
    UTresAttack1_e_ex309_JinraiSecond();
};

