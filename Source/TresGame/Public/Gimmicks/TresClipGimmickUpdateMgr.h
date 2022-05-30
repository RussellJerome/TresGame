#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGimmickUpdateMgr.h"
#include "TresClipGimmickUpdateMgr.generated.h"

class AActor;

UCLASS()
class ATresClipGimmickUpdateMgr : public ATresGimmickUpdateMgr {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ClipLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<AActor>> ClipClasses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ClipActorPredictedSize;
    
    ATresClipGimmickUpdateMgr();
};

