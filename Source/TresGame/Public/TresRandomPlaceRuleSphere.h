#pragma once
#include "CoreMinimal.h"
#include "TresRandomPlaceRuleBase.h"
#include "TresSnapData.h"
#include "TresLotterySpawnActorData.h"
#include "TresRandomPlaceRuleSphere.generated.h"

class UTresRotatorRuleBase;

UCLASS(EditInlineNew)
class UTresRandomPlaceRuleSphere : public UTresRandomPlaceRuleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTresLotterySpawnActorData> SpawnActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ObjectSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Num;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UTresRotatorRuleBase* RotatorRule;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTresSnapData SnapData;
    
    UTresRandomPlaceRuleSphere();
};

