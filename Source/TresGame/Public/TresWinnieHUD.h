#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresHUDBase.h"
#include "TresWinnieHUD.generated.h"

class UTresUIDataAsset;
class UTresSharedUMG;
class UTresUIP_HundredGame;

UCLASS(NonTransient)
class ATresWinnieHUD : public ATresHUDBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresSharedUMG> DebugUMGRef;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUIDataAsset* m_UIDataAssetHundredGame;
    
private:
    UPROPERTY(Transient)
    UTresSharedUMG* m_pDebugUMG;
    
    UPROPERTY(Transient)
    UTresUIP_HundredGame* m_HundredGameUI;
    
public:
    ATresWinnieHUD();
};

