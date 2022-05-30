#pragma once
#include "CoreMinimal.h"
#include "TresComNpcActGreet.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcActGreet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_AnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ActionName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Rate;
    
    TRESGAME_API FTresComNpcActGreet();
};

