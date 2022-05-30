#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresFieldVoiceStatics.generated.h"

UCLASS(Abstract, BlueprintType, NotPlaceable)
class UTresFieldVoiceStatics : public UObject {
    GENERATED_BODY()
public:
    UTresFieldVoiceStatics();
    UFUNCTION(BlueprintCallable)
    static void StopAllFieldVoice(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsPlayingFieldVoiceEx(float waitElapsedTime);
    
    UFUNCTION(BlueprintPure)
    static bool IsPlayingFieldVoice();
    
    UFUNCTION(BlueprintPure)
    static float GetPlayingVoiceTime();
    
};

