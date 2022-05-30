#pragma once
#include "CoreMinimal.h"
#include "TresHUDBase.h"
#include "TresHudGummiMenu.generated.h"

class UTresUIP_MenuGummiShip;
class UTresUIP_EditGummiShip;
class UTresUIP_MenuGummiShipBackground;

UCLASS(NonTransient)
class ATresHudGummiMenu : public ATresHUDBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresUIP_MenuGummiShip* m_pGummiMenu;
    
    UPROPERTY(Transient)
    UTresUIP_EditGummiShip* m_pGummiEditor;
    
    UPROPERTY(Transient)
    UTresUIP_MenuGummiShipBackground* m_pGummiEditorBG;
    
public:
    ATresHudGummiMenu();
};

