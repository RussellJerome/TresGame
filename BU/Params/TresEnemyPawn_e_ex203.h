#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex203.generated.h"

class USceneComponent;

UCLASS()
class ATresEnemyPawn_e_ex203 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* SuctionAttachComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* EatCheckComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* CoopTargetComponent;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_CoopAttachSocketNames;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawnBase> m_CoopAppearPawnClass;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsMediumSize: 1;
    
public:
    ATresEnemyPawn_e_ex203();
    UFUNCTION(BlueprintCallable)
    void SetEnableIKinema(bool InEnable);
    
    UFUNCTION(BlueprintPure)
    bool IsEndAttackCoopPawns() const;
    
    UFUNCTION(BlueprintPure)
    float GetSlapMotionBlendRate() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugSpawnCoopPawn();
    
};

