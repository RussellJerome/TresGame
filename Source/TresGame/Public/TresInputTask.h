#pragma once
#include "CoreMinimal.h"
#include "TresTaskBase.h"
#include "TresInputStruct.h"
#include "ETresGameKey.h"
#include "InputCoreTypes.h"
#include "TresInputTask.generated.h"

UCLASS()
class UTresInputTask : public UTresTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FTresInputStruct Input;
    
public:
    UTresInputTask();
    UFUNCTION(BlueprintPure)
    bool IsRepeatGameKey(TEnumAsByte<ETresGameKey::Type> Key, bool enableRepeat);
    
    UFUNCTION(BlueprintPure)
    bool IsRepeat(FKey Key, bool enableRepeat);
    
    UFUNCTION(BlueprintPure)
    bool IsReleaseGameKey(TEnumAsByte<ETresGameKey::Type> Key);
    
    UFUNCTION(BlueprintPure)
    bool IsRelease(FKey Key);
    
    UFUNCTION(BlueprintPure)
    bool IsPressGameKey(TEnumAsByte<ETresGameKey::Type> Key);
    
    UFUNCTION(BlueprintPure)
    bool IsPress(FKey Key);
    
    UFUNCTION(BlueprintPure)
    bool IsInputNone();
    
};

