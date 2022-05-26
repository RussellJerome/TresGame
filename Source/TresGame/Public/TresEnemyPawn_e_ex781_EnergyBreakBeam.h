#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "Engine/EngineTypes.h"
#include "TresEnemyPawn_e_ex781_EnergyBreakBeam.generated.h"

class UPrimitiveComponent;
class ATresWaterCurrentSplineActor;
class UCapsuleComponent;
class AActor;
class ATresPlayerPawnBase;

UCLASS()
class ATresEnemyPawn_e_ex781_EnergyBreakBeam : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapsuleComponent* MySuctionWindComponent;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWaterCurrentSplineActor> m_WaterSplineClass;
    
private:
    UPROPERTY()
    TArray<TWeakObjectPtr<ATresWaterCurrentSplineActor>> m_WaterSplineList;
    
    UPROPERTY()
    ATresPlayerPawnBase* m_OverlapCharPawn;
    
public:
    ATresEnemyPawn_e_ex781_EnergyBreakBeam();
protected:
    UFUNCTION()
    void OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

