#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_Philharmonic.generated.h"

class UTresASProxyRSLBtnInfo;
class UTresASProxyTresControlsList;
class UTresASProxyRSLHelpText;
class UGFxObject;

UCLASS()
class UTresUIP_Philharmonic : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyRSLBtnInfo* m_BtnInfo;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_CreditSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_SubtitleOnOff;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_ContentList;
    
public:
    UTresUIP_Philharmonic();
};

