#pragma once
#include "CoreMinimal.h"
#include "TresPhotoHologramActor.h"
#include "TresPhotoHologramEffectData.h"
#include "TresPhotoHologramDecoration.generated.h"

class UTresStaticMeshComponent;

UCLASS()
class ATresPhotoHologramDecoration : public ATresPhotoHologramActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresStaticMeshComponent* MyStaticMesh;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresPhotoHologramEffectData> EffectDataList;
    
public:
    ATresPhotoHologramDecoration();
    UFUNCTION(BlueprintCallable)
    void RequestRemoveHologram();
    
};

