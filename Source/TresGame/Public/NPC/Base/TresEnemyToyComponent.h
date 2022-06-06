#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ETresEnemyToyKind.h"
#include "TresEnemyToyComponent.generated.h"

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresEnemyToyComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresEnemyToyOnPossession);
    
private:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresEnemyToyKind> m_ToyKind;
    
    UPROPERTY(BlueprintAssignable)
    FTresEnemyToyOnPossession OnPossession;
    
public:
    UTresEnemyToyComponent();
    UFUNCTION(BlueprintPure)
    bool CanUse() const;
    
};

