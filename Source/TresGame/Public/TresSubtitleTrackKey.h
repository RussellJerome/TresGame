#pragma once
#include "CoreMinimal.h"
#include "TresSubtitleTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FTresSubtitleTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Time;
    
    UPROPERTY(EditAnywhere)
    float m_Length;
    
    UPROPERTY(EditAnywhere)
    FString m_TextLabel;
    
    TRESGAME_API FTresSubtitleTrackKey();
};

