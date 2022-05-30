#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_he904_Hate.generated.h"

UCLASS(HideDropdown)
class UTresAction1_e_he904_Hate : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fBeginFreezeSlowTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFreezeLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEndFreezeSlowTime;
    
    UTresAction1_e_he904_Hate();
};

