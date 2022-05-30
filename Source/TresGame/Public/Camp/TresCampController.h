#pragma once
#include "CoreMinimal.h"
#include "TresUICampCharacterParam.h"
#include "UObject/Object.h"
#include "TresCampController.generated.h"

class UTresUIManager;
class UTresUIP_CampMenu;

UCLASS()
class UTresCampController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresUIManager* m_UIManager;
    
    UPROPERTY(Transient)
    UTresUIP_CampMenu* m_CampMenu;
    
    UPROPERTY(Transient)
    FTresUICampCharacterParam m_PartyParams[5];
    
public:
    UTresCampController();
};

