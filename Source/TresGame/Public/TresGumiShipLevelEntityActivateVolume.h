#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipLevelEntityActivateVolume.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS()
class TRESGAME_API ATresGumiShipLevelEntityActivateVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    TArray<AActor*> m_ManagementActorList;
    
public:
    ATresGumiShipLevelEntityActivateVolume();
private:
    UFUNCTION()
    void _OnLeaveActivateVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION()
    void _OnEnterActivateVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

