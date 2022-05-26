#pragma once
#include "CoreMinimal.h"
#include "TresVoiceGroupUnit.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct TRESGAME_API FTresVoiceGroupUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_GroupNo;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pVoice;
    
    FTresVoiceGroupUnit();
};

