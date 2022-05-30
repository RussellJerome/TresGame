#pragma once
#include "CoreMinimal.h"
#include "TresUIP_CampMenuSubParts.h"
#include "TresUIP_CampMenuGameHelp.generated.h"

class UTresASProxyRSLStageCategory;
class UTresASProxyTresControlsList;
class UTresASProxyRSLHelpText;

UCLASS(NonTransient)
class UTresUIP_CampMenuGameHelp : public UTresUIP_CampMenuSubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_StageCategory;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_CategoryList;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_GameHelpList;
    
public:
    UTresUIP_CampMenuGameHelp();
};

