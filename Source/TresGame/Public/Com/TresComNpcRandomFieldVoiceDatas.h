#pragma once
#include "CoreMinimal.h"
#include "TresComNpcRandomFieldVoiceDatas.generated.h"

class UTresFieldVoice;

USTRUCT(BlueprintType)
struct FTresComNpcRandomFieldVoiceDatas {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_VoiceType;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UTresFieldVoice*> m_VoiceLists;
    
    TRESGAME_API FTresComNpcRandomFieldVoiceDatas();
};

