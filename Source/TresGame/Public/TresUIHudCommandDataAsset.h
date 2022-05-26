#pragma once
#include "CoreMinimal.h"
#include "TresShortcutCommandData.h"
#include "Engine/DataAsset.h"
#include "TresSubCommandData.h"
#include "TresUIHudCommandDataAsset.generated.h"

UCLASS()
class UTresUIHudCommandDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresSubCommandData MagicCommands;
    
    UPROPERTY(EditDefaultsOnly)
    FTresShortcutCommandData ShortcutCommands;
    
    UPROPERTY(EditDefaultsOnly)
    FTresSubCommandData LinkCommands;
    
    UTresUIHudCommandDataAsset();
};

