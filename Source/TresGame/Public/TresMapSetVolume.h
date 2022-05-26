#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresMapSetVolume.generated.h"

class UTresMapSet;

UCLASS(Abstract)
class TRESGAME_API ATresMapSetVolume : public ATresVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UTresMapSet* MapSet;
    
    UPROPERTY(EditAnywhere)
    FName commandName;
    
    UPROPERTY(EditAnywhere)
    bool bUseOverlapManager;
    
public:
    ATresMapSetVolume();
    UFUNCTION(BlueprintCallable)
    void ChangeMapSetAndCommandName(UTresMapSet* newMapSet, FName newCommandName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMapSet(UTresMapSet* newMapSet);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCommandName(FName newCommandName);
    
};

