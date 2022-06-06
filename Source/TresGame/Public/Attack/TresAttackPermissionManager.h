#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "ETresTeam.h"
#include "TresAttackPermissionManager.generated.h"

class UCurveVector;

UCLASS(Abstract)
class UTresAttackPermissionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag AttackerGroup;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresTeam::Type> AttackFilter;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* MaxAttackerCurve;
    
    UTresAttackPermissionManager();
};

