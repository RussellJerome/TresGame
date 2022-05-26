#pragma once
#include "CoreMinimal.h"
#include "TresComNpcActionSetValue.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcActionSetValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_Value;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ScriptName;
    
    TRESGAME_API FTresComNpcActionSetValue();
};

