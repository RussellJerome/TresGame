#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "WinniePuzzleBucketType.h"
#include "TresWinniePuzzleBucket.generated.h"

UCLASS()
class ATresWinniePuzzleBucket : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleBucketType BucketType;
    
    ATresWinniePuzzleBucket();
};

