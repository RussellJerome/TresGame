#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresFieldVoiceManager.generated.h"

class UTresFieldVoiceTask;

UCLASS()
class UTresFieldVoiceManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<UTresFieldVoiceTask*> TaskArray;
    
public:
    UTresFieldVoiceManager();
};

