#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresHudCommandData.generated.h"

USTRUCT()
struct FTresHudCommandData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName MagicSubCommandDataKey;
    
    UPROPERTY(EditDefaultsOnly)
    FName ItemSubCommandDataKey;
    
    UPROPERTY(EditDefaultsOnly)
    FName LinkSubCommandDataKey;
    
    UPROPERTY(EditDefaultsOnly)
    FName ShortcutCommandDataKey;
    
    UPROPERTY(EditDefaultsOnly)
    FName CheatRightShortcutCommandDataKey;
    
    UPROPERTY(EditDefaultsOnly)
    FName CheatLeftShortcutCommandDataKey;
    
    UPROPERTY(EditDefaultsOnly)
    FName WeaponShortcutDataKey;
    
    TRESGAME_API FTresHudCommandData();
};

