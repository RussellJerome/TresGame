#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex061_TsuboWait.generated.h"

UCLASS(HideDropdown)
class UTresAction1_e_ex061_TsuboWait : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresActionDefinitionBase> m_NextActionDefinition;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinStopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxStopTime;
    
    UTresAction1_e_ex061_TsuboWait();
};

