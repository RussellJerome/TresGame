#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_Tutorial.generated.h"

class UGFxObject;
class UTresASProxyRSLTutorialMenu;
class UTresASProxyRSLStageCategory;

UCLASS()
class UTresUIP_Tutorial : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Root;
    
    UPROPERTY(Transient)
    UTresASProxyRSLTutorialMenu* m_TutorialMenu;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_StageCategory;
    
public:
    UTresUIP_Tutorial();
};

