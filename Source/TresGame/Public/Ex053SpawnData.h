#pragma once
#include "CoreMinimal.h"
#include "Ex053SpawnData.generated.h"

class ATresEnemyPawn_e_ex053;
class AActor;

USTRUCT(BlueprintType)
struct FEx053SpawnData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<ATresEnemyPawn_e_ex053> wpActor;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> wpSpawn;
    
    UPROPERTY()
    float Wait;
    
    TRESGAME_API FEx053SpawnData();
};

