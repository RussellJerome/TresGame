#pragma once
#include "CoreMinimal.h"
#include "ETresCommandKind.h"
#include "Engine/DataAsset.h"
#include "TresUICustomizeMagicCommand.h"
#include "TresUICustomizeCommand.h"
#include "TresUICustomizeDataAsset.generated.h"

UCLASS()
class UTresUICustomizeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresUICustomizeMagicCommand> MagicCommands;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresUICustomizeCommand> LinkCommands;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TEnumAsByte<ETresCommandKind>> ItemCommands;
    
    UTresUICustomizeDataAsset();
};

