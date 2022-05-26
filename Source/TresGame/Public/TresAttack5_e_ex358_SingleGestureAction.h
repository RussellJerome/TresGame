#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex358_Base.h"
#include "TresAttack5_e_ex358_SingleGestureAction.generated.h"

class USoundBase;

UCLASS(HideDropdown)
class UTresAttack5_e_ex358_SingleGestureAction : public UTresAction_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_ActionEndTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceDataList;
    
public:
    UTresAttack5_e_ex358_SingleGestureAction();
};

