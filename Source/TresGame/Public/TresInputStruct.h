#pragma once
#include "CoreMinimal.h"
#include "TresInputStruct.generated.h"

USTRUCT(BlueprintType)
struct FTresInputStruct {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_FirstRepeatTime;
    
    UPROPERTY(EditAnywhere)
    float m_RepeatTime;
    
public:
    TRESGAME_API FTresInputStruct();
};

