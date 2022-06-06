#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex773_Eclipse13Base.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_ex773_Eclipse13_Explosion.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex773_Eclipse13_Explosion : public ATresProjectile_e_ex773_Eclipse13Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 SavedFrame;
    
    ATresProjectile_e_ex773_Eclipse13_Explosion();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ChangeShootIndex(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ChangeScale(const FVector& Scale);
    
};

