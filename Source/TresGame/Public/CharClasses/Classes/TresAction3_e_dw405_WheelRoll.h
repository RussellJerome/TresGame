#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_dw405_Base.h"
#include "TresAction3_e_dw405_WheelRoll.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAction3_e_dw405_WheelRoll : public UTresAction_e_dw405_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableFixingAppearAngle: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FixingAppearAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveAngle;
    
public:
    UTresAction3_e_dw405_WheelRoll();
};

