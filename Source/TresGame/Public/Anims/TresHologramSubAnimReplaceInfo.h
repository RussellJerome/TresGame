#pragma once
#include "CoreMinimal.h"
#include "TresHologramSubAnimReplaceDef.h"
#include "TresHologramSubAnimReplaceInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresHologramSubAnimReplaceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_ValidSlotList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresHologramSubAnimReplaceDef> m_ReplaceDefList;
    
    TRESGAME_API FTresHologramSubAnimReplaceInfo();
};

