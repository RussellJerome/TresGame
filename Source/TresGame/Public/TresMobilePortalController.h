#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresMobilePortalController.generated.h"

class UTresUIManager;
class ATresUIActor;
class UTresUIP_MobilePortal;
class UTresUIP_MobilePortalApp;

UCLASS()
class UTresMobilePortalController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresUIManager* m_UIManager;
    
    UPROPERTY(Transient)
    UTresUIP_MobilePortal* m_MobilePortal;
    
    UPROPERTY(Transient)
    UTresUIP_MobilePortalApp* m_AppUIParts;
    
    UPROPERTY(Transient)
    ATresUIActor* m_JiminyUIActor;
    
public:
    UTresMobilePortalController();
};

