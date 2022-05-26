#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAgentInfoStruct.generated.h"

class APawn;
class AActor;

USTRUCT(BlueprintType)
struct FTresAgentInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<APawn> AgentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* AgentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AgentRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AgentHeight;
    
    TRESGAME_API FTresAgentInfoStruct();
};

