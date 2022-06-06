#pragma once
#include "CoreMinimal.h"
#include "TresChrLauncherComponentBase.h"
#include "Engine/EngineTypes.h"
#include "TresCollShapeAssetUnit.h"
#include "TresChrLauncherComponent.generated.h"

class UBodySetup;
class UPrimitiveComponent;
class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresChrLauncherComponent : public UTresChrLauncherComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresCollShapeAssetUnit> m_CollisionShapesSrc;
    
    UPROPERTY(DuplicateTransient, Transient)
    UBodySetup* m_pBodySetup;
    
public:
    UTresChrLauncherComponent();
protected:
    UFUNCTION()
    void OnBodyEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBodyBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

