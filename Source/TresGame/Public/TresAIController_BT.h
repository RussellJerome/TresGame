#pragma once
#include "CoreMinimal.h"
#include "TresAIController.h"
#include "GameplayTagContainer.h"
#include "TresAIController_BT.generated.h"

UCLASS()
class ATresAIController_BT : public ATresAIController {
    GENERATED_BODY()
public:
    ATresAIController_BT();
    UFUNCTION(BlueprintCallable)
    bool SetAttackPermissionTicket(FGameplayTag RequiredAttackGroup, bool bCheckOnly);
    
    UFUNCTION(BlueprintCallable)
    bool SetAttackPermission(FGameplayTag RequiredAttackGroup);
    
    UFUNCTION(BlueprintCallable)
    void ResetAttackPermissionTicket();
    
    UFUNCTION(BlueprintCallable)
    void ResetAttackPermission();
    
    UFUNCTION(BlueprintPure)
    bool HasAttackPermissionTicket();
    
    UFUNCTION(BlueprintPure)
    bool HasAttackPermission();
    
    UFUNCTION(BlueprintPure)
    float GetTimeSinceAIStarted() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetCurrentAttackPermissionTicket();
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetCurrentAttackPermission();
    
};

