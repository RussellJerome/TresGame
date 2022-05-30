#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGimmickBalanceBall.h"
#include "TresGimmickDitherFadeInterface.h"
#include "TresGimmickBxDaruma.generated.h"

class AActor;
class ATresCameraNormal;

UCLASS()
class ATresGimmickBxDaruma : public ATresGimmickBalanceBall, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_TakeOverCamera;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraNormal> BalanceBallCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UClass*> BreakClasses;
    
    ATresGimmickBxDaruma();
    UFUNCTION(BlueprintPure)
    bool CheckBreakClass(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    void AvoidDaruma();
    
    
    // Fix for true pure virtual functions not being implemented
};

