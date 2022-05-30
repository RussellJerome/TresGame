#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGimmickDitherFadeInterface.h"
#include "TresGimmickCA_TreeBase.generated.h"

UCLASS(Abstract, Config=Game)
class ATresGimmickCA_TreeBase : public AActor, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 m_SpawnPrizeNumOnHit;
    
    UPROPERTY(EditAnywhere)
    float m_SpawnPrizeIntervalOnHit;
    
public:
    ATresGimmickCA_TreeBase();
    UFUNCTION(BlueprintCallable)
    void StopPrizeShower();
    
    UFUNCTION(BlueprintCallable)
    void StartPrizeShower(float InInterval);
    
    UFUNCTION(BlueprintPure)
    bool IsStartingPrizeShower() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

