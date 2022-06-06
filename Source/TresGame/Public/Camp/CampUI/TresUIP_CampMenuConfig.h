#pragma once
#include "CoreMinimal.h"
#include "TresUIP_CampMenuSubParts.h"
#include "TresUIP_CampMenuConfig.generated.h"

class UTresASProxyRSLConfig;
class UTresASProxyRSLStageCategory;

UCLASS(NonTransient)
class UTresUIP_CampMenuConfig : public UTresUIP_CampMenuSubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyRSLConfig* m_ConfigRSL;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_StageCategory;
    
public:
    UTresUIP_CampMenuConfig();
};

