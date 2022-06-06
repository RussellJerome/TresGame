#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresTsDancingPlantSensor.generated.h"

class APointLight;
class ATresTsDancingPlant;

UCLASS(Abstract)
class ATresTsDancingPlantSensor : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ATresTsDancingPlant*> PlantsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APointLight*> PlantLights;
    
    ATresTsDancingPlantSensor();
    UFUNCTION(BlueprintNativeEvent)
    void ChangeRate(float Rate);
    
};

