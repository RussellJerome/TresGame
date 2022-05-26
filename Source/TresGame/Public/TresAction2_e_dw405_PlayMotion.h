#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_dw405_Base.h"
#include "TresAction2_e_dw405_PlayMotion.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAction2_e_dw405_PlayMotion : public UTresAction_e_dw405_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearHeight;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableSettingDisappearTime: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DisappearTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_AppearTime;
    
public:
    UTresAction2_e_dw405_PlayMotion();
};

