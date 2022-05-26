#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "ETresEnemyToyKind.h"
#include "TresEnemyToyActor.generated.h"

class UNavModifierComponent;

UCLASS(Abstract)
class ATresEnemyToyActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UNavModifierComponent* MyNavModifierComponent;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyToyKind> m_ToyKind;
    
public:
    ATresEnemyToyActor();
    UFUNCTION(BlueprintPure)
    bool CanUse() const;
    
};

