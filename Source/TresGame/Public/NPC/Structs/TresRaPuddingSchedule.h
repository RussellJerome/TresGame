#pragma once
#include "CoreMinimal.h"
#include "TresRaPuddingCommand.h"
#include "TresRaPuddingSchedule.generated.h"

class ATresCharPawnBase;

USTRUCT(BlueprintType)
struct FTresRaPuddingSchedule {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ATresCharPawnBase> TargetPawn;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRaPuddingCommand> CommandList;
    
    UPROPERTY(EditAnywhere)
    uint8 Flag_LoopOnEnd: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FTresRaPuddingCommand> DamageList;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FTresRaPuddingCommand> ShutterList;
    
    UPROPERTY()
    TArray<FTresRaPuddingCommand> AngryList;
    
    UPROPERTY()
    TArray<FTresRaPuddingCommand> HappyList;
    
    TRESGAME_API FTresRaPuddingSchedule();
};

