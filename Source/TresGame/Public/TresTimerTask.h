#pragma once
#include "CoreMinimal.h"
#include "TresTimerTaskData.h"
#include "TresTaskBase.h"
#include "TresTimerTask.generated.h"

UCLASS()
class UTresTimerTask : public UTresTaskBase {
    GENERATED_BODY()
public:
    UTresTimerTask();
    UFUNCTION(BlueprintCallable)
    void Stop(FName RemoteEventName);
    
    UFUNCTION(BlueprintCallable)
    void Start(FName RemoteEventName);
    
    UFUNCTION(BlueprintCallable)
    void SetNowTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void Reset(FName RemoteEventName);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintPure)
    float GetNowTime();
    
    UFUNCTION(BlueprintCallable)
    void AddTimeAndEvent(float Time, FName RemoteEventName);
    
    UFUNCTION(BlueprintCallable)
    void AddMultiTimeAndEvent(const TArray<FTresTimerTaskData>& DataArray);
    
};

