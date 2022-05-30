#pragma once
#include "CoreMinimal.h"
#include "TresHUD.h"
#include "TresHUDTutorial.generated.h"

class UTresUIP_Tutorial;
class UTresUIManager;
class UTresUIDataAsset;

UCLASS(NonTransient)
class ATresHUDTutorial : public ATresHUD {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UTresUIDataAsset* m_UIDataAssetTutorial;
    
    UPROPERTY(Transient)
    UTresUIManager* m_UIManager;
    
    UPROPERTY(Transient)
    UTresUIP_Tutorial* m_Tutorial;
    
public:
    ATresHUDTutorial();
};

