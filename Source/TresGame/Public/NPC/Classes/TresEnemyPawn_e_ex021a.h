#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex021a.generated.h"

class ATresProjectileBase;

UCLASS()
class ATresEnemyPawn_e_ex021a : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ShotgunFireProjectile;
    
    ATresEnemyPawn_e_ex021a();
    UFUNCTION(BlueprintPure)
    FRotator BP_GetAnimOffsetValue() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetAnimOffsetAlpha() const;
    
};

