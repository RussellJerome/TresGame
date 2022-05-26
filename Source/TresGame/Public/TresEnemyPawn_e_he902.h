#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase_e_he90y.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_he902.generated.h"

UCLASS()
class ATresEnemyPawn_e_he902 : public ATresEnemyPawnBase_e_he90y {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_LavaActorBBKeyName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TornadoActorBBKeyName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_LegFixBoneName_L;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_LegFixBoneName_R;
    
    ATresEnemyPawn_e_he902();
    UFUNCTION(BlueprintPure)
    FTransform BP_GetLegFixTransform_R() const;
    
    UFUNCTION(BlueprintPure)
    FTransform BP_GetLegFixTransform_L() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetLegFixRate_R() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetLegFixRate_L() const;
    
};

