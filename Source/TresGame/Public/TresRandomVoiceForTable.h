#pragma once
#include "CoreMinimal.h"
#include "TresRandomVoiceForTable.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTresRandomVoiceForTable {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pVoice;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_dRandomWeights;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MouthMotionName;
    
    TRESGAME_API FTresRandomVoiceForTable();
};

