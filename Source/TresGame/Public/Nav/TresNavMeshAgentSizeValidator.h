#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresAgentInfoStruct.h"
#include "TresNavMeshAgentSizeValidator.generated.h"

class APawn;

UCLASS()
class ATresNavMeshAgentSizeValidator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<APawn>> PawnTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTresAgentInfoStruct> PawnStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTresAgentInfoStruct> NavMeshGroups;
    
    ATresNavMeshAgentSizeValidator();
};

