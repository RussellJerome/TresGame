#pragma once
#include "CoreMinimal.h"
#include "TresFieldVoiceTextData.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresFieldVoiceTextData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString m_NameSpaceAndKey;
    
    UPROPERTY(EditAnywhere)
    float m_Delay;
    
    UPROPERTY(EditAnywhere)
    float m_Duration;
    
    FTresFieldVoiceTextData();
};

