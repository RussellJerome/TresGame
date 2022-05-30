#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MissionIntervalParam_e_ex082.h"
#include "TresUserDataObject_e_ex082.generated.h"

UCLASS(Abstract, EditInlineNew)
class UTresUserDataObject_e_ex082 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_ModeChangeTime;
    
    UPROPERTY(EditDefaultsOnly)
    FMissionIntervalParam_e_ex082 m_IntervalParam;
    
    UTresUserDataObject_e_ex082();
};

