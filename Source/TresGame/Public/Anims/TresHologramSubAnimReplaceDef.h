#pragma once
#include "CoreMinimal.h"
#include "ETresHologramSubAnimReplaceType.h"
#include "TresHologramSubAnimReplaceDef.generated.h"

USTRUCT(BlueprintType)
struct FTresHologramSubAnimReplaceDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresHologramSubAnimReplaceType m_Type;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_Slot;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AnimName;
    
    TRESGAME_API FTresHologramSubAnimReplaceDef();
};

