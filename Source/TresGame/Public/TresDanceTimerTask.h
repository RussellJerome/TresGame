#pragma once
#include "CoreMinimal.h"
#include "TresTimerTask.h"
#include "TresDanceTimerTask.generated.h"

class UObject;
class UTresDanceTimerTask;

UCLASS()
class UTresDanceTimerTask : public UTresTimerTask {
    GENERATED_BODY()
public:
    UTresDanceTimerTask();
    UFUNCTION(BlueprintCallable)
    void ReturnNowTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    static UTresDanceTimerTask* CreateDanceTimerGameMode(UObject* WorldContextObject);
    
};

