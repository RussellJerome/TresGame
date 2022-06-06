#pragma once
#include "CoreMinimal.h"
#include "TresComNpcRandomVoiceDatas.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTresComNpcRandomVoiceDatas {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_VoiceType;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceLists;
    
    TRESGAME_API FTresComNpcRandomVoiceDatas();
};

