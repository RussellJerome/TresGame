#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresItemSynthesisChecker.generated.h"

UCLASS()
class ATresItemSynthesisChecker : public AActor {
    GENERATED_BODY()
public:
    ATresItemSynthesisChecker();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TestChargeMaterialsToShop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ExcuteItemWeaponEnhanceTest(const FName rowId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ExcuteItemSynthesisTest(const FName rowId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ExcuteItemMotifTest(const FName rowId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ExcuteItemCollectTest(const FName rowId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CheckAllDataTableValidation() const;
    
};

