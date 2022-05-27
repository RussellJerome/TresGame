#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex082_ModeChange.generated.h"

class UAnimSequenceBase;
class ATresCharPawnBase;

UCLASS(HideDropdown)
class UTresAction1_e_ex082_ModeChange : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableMission: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MissionAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MissionOvertakeDistanceLimit;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCharPawnBase> m_ModeChangePawnClass;
    
public:
    UTresAction1_e_ex082_ModeChange();
};

