#pragma once
#include "CoreMinimal.h"
#include "TresTaskBase.h"
#include "TresBallPoolManageTask.generated.h"

class ATresPhysObjStaticMeshActor;

UCLASS()
class UTresBallPoolManageTask : public UTresTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<ATresPhysObjStaticMeshActor*> Balls;
    
    UTresBallPoolManageTask();
    UFUNCTION(BlueprintCallable)
    void SetupBalls();
    
    UFUNCTION(BlueprintCallable)
    void Respawn();
    
};

