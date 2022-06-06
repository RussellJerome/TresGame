#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGimmickActor.h"
#include "TresGimmickUpdateMgr.generated.h"

UCLASS(Config=Game)
class ATresGimmickUpdateMgr : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<ATresGimmickActor>> UpdateClasses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PredictedSize;
    
    ATresGimmickUpdateMgr();
};

