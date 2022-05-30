#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGimmickSpaceDivisionManager.generated.h"

UCLASS(Abstract)
class ATresGimmickSpaceDivisionManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AllAreaSize;
    
    UPROPERTY(EditAnywhere)
    float AreaSize;
    
    ATresGimmickSpaceDivisionManager();
    UFUNCTION(BlueprintPure)
    int32 GetSpawnedObjectNum() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetObjectNum() const;
    
};

