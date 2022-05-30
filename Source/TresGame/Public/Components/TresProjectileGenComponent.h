#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickComponentBase.h"
#include "TresProjectileGenComponent.generated.h"

class ATresProjectileBase;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresProjectileGenComponent : public UTresGimmickComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<ATresProjectileBase>> m_Projctiles;
    
public:
    UTresProjectileGenComponent();
    UFUNCTION(BlueprintCallable)
    ATresProjectileBase* BP_SpawnProjectileWithPos(int32 InIndex, FVector InSpawnPos, FVector InDir);
    
    UFUNCTION(BlueprintCallable)
    ATresProjectileBase* BP_SpawnProjectile(int32 InIndex);
    
    UFUNCTION(BlueprintPure)
    int32 BP_GetProjectileNum() const;
    
};

