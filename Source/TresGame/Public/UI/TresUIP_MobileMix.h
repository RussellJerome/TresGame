#pragma once
#include "CoreMinimal.h"
#include "TresUIP_MobilePortalApp.h"
#include "TresUIP_MobileMix.generated.h"

class UGFxObject;
class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsList;
class UTresASProxyTresControlsIcon;

UCLASS()
class UTresUIP_MobileMix : public UTresUIP_MobilePortalApp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Root;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_MixList;
    
    UPROPERTY(Transient)
    UGFxObject* m_MixCount;
    
    UPROPERTY(Transient)
    UGFxObject* m_IconAnimation;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_Icon;
    
    UPROPERTY(Transient)
    UGFxObject* m_MaterialInfo[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_MaterialIcon[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_MaterialName[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_MaterialCount[6];
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_HelpText;
    
public:
    UTresUIP_MobileMix();
};

