#pragma once
#include "CoreMinimal.h"
#include "TresUIP_MobilePortalApp.h"
#include "TresUIP_MobileTreasure.generated.h"

class UGFxObject;
class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsList;

UCLASS()
class UTresUIP_MobileTreasure : public UTresUIP_MobilePortalApp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Top;
    
    UPROPERTY(Transient)
    UGFxObject* m_TotalTreasureNum;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_WorldNameList;
    
    UPROPERTY(Transient)
    UGFxObject* m_TreasureItemName;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_TreasureList;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_HelpText;
    
public:
    UTresUIP_MobileTreasure();
};

