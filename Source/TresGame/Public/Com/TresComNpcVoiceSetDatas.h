#pragma once
#include "CoreMinimal.h"
#include "TresComNpcVoiceSetDatas.generated.h"

class UTresFieldVoice;

USTRUCT(BlueprintType)
struct FTresComNpcVoiceSetDatas {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ActionName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UTresFieldVoice*> m_VoiceLists;
    
    TRESGAME_API FTresComNpcVoiceSetDatas();
};

