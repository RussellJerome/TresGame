#pragma once
#include "CoreMinimal.h"
#include "TresAttack1_e_ex361_DarkHand.h"
#include "TresAttack1_e_ex361_DarkHandVerticalSwing.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex361_DarkHandVerticalSwing : public UTresAttack1_e_ex361_DarkHand {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HaloMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HaloMoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HaloMoveZRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HaloLimitPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HaloMoveXYRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HaloLimitYaw;
    
public:
    UTresAttack1_e_ex361_DarkHandVerticalSwing();
};

