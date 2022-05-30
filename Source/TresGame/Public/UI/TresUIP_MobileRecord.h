#pragma once
#include "CoreMinimal.h"
#include "TresUIP_MobilePortalApp.h"
#include "TresUIP_MobileRecord.generated.h"

class UGFxObject;
class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsList;

UCLASS()
class UTresUIP_MobileRecord : public UTresUIP_MobilePortalApp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Root;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_ListContent;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_ListRecord;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_FzTreasureInfo;
    
    UPROPERTY(Transient)
    UGFxObject* m_FzTreasureInfo_Text;
    
public:
    UTresUIP_MobileRecord();
};

