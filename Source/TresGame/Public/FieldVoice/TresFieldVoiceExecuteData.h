#pragma once
#include "CoreMinimal.h"
#include "TresFieldVoiceExecuteData.generated.h"

class AActor;

USTRUCT()
struct FTresFieldVoiceExecuteData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AActor* m_pExecuter;
    
    UPROPERTY(EditAnywhere)
    float m_Time;
    
    TRESGAME_API FTresFieldVoiceExecuteData();
};

