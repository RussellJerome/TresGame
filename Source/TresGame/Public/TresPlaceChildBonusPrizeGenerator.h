#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresPlaceChildBonusPrizeBase.h"
#include "TresSnapData.h"
#include "UObject/NoExportTypes.h"
#include "TresPlaceChildBonusPrizeGenerator.generated.h"

class AActor;
class ATresPlacePrizeBase;

UCLASS()
class ATresPlaceChildBonusPrizeGenerator : public ATresPlaceChildBonusPrizeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RandomGenerateNum_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GenerateRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GenerateOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> GeneratorChildClass;
    
    ATresPlaceChildBonusPrizeGenerator();
    UFUNCTION(BlueprintCallable)
    AActor* SpawnActorRandSnapPos(const FTresSnapData& Data, ATresPlacePrizeBase* bonusPlz);
    
    UFUNCTION(BlueprintCallable)
    bool GetRandSnapPos(const FTresSnapData& Data, FVector& outPos);
    
};

