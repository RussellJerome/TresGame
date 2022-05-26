#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex816_Base.h"
#include "TresAttack2_e_ex816_Stamp.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex816_Stamp : public UTresAttack_e_ex816_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_RiseAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RiseSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RiseTargetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RiseSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RiseTurnSpeed;
    
public:
    UTresAttack2_e_ex816_Stamp();
};

