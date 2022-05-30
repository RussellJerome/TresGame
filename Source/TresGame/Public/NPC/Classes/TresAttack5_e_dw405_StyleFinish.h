#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_dw405_Base.h"
#include "Base/TresAttack_e_dw405_Base.h"
#include "TresAttack5_e_dw405_StyleFinish.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack5_e_dw405_StyleFinish : public UTresAttack_e_dw405_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
public:
    UTresAttack5_e_dw405_StyleFinish();
};

