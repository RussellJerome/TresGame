#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresHUDBase.h"
#include "TresRemyHUD.generated.h"

class UTresSharedUMG;
class UTresUIDataAssetRemy;
class UTresUIP_HudRemy;
class UTresUIP_MenuRemy;

UCLASS(NonTransient)
class ATresRemyHUD : public ATresHUDBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresSharedUMG> DebugUMGRef;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUIDataAssetRemy* UIAsset;
    
private:
    UPROPERTY(Transient)
    UTresSharedUMG* m_debugUMG;
    
    UPROPERTY(Transient)
    UTresUIP_HudRemy* m_HudRemy;
    
    UPROPERTY(Transient)
    UTresUIP_MenuRemy* m_MenuRemy;
    
public:
    ATresRemyHUD();
};

