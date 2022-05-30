#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipMapsetVolume.generated.h"

class UTresMapSet;
class UPrimitiveComponent;
class AActor;

UCLASS()
class TRESGAME_API ATresGumiShipMapsetVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    UTresMapSet* MapSet;
    
    UPROPERTY(EditInstanceOnly)
    FName commandName;
    
    UPROPERTY(EditInstanceOnly)
    bool bBlockLoad;
    
public:
    ATresGumiShipMapsetVolume();
    UFUNCTION()
    void _OnEnterActivateVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

