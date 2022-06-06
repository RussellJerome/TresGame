#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickActorBase.h"
#include "TresGumiShipConstellation.generated.h"

class UTresGumiShipConstellationMarkerComponent;
class USceneComponent;

UCLASS(Abstract)
class ATresGumiShipConstellation : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    UTresGumiShipConstellationMarkerComponent* Marker;
    
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* OutLinesRoot;
    
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* StarsRoot;
    
    ATresGumiShipConstellation();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMarkerChanged(bool flg);
    
};

