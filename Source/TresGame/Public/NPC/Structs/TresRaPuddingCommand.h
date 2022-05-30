#pragma once
#include "CoreMinimal.h"
#include "ERaPuddingCommandType.h"
#include "TresRaPuddingCommand.generated.h"

USTRUCT(BlueprintType)
struct FTresRaPuddingCommand {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ERaPuddingCommandType CommandType;
    
    UPROPERTY(EditAnywhere)
    FName PositionID;
    
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    float StartTime;
    
    UPROPERTY(EditAnywhere)
    float LastTime;
    
    TRESGAME_API FTresRaPuddingCommand();
};

