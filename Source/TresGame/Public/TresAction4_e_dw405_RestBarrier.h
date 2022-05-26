#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_dw405_Base.h"
#include "TresAction4_e_dw405_RestBarrier.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAction4_e_dw405_RestBarrier : public UTresAction_e_dw405_Base {
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
    
public:
    UTresAction4_e_dw405_RestBarrier();
};

