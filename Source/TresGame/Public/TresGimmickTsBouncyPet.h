#pragma once
#include "CoreMinimal.h"
#include "TresGimmickLauncher.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickTsBouncyPet.generated.h"

class UStaticMeshComponent;
class USphereComponent;
class UPrimitiveComponent;
class USceneComponent;
class UTresHopComponent;
class AActor;

UCLASS()
class ATresGimmickTsBouncyPet : public ATresGimmickLauncher {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* SideCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* SphereBlockWorldUnique;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* CancelComp;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* EnableSensor;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresHopComponent* TresHop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableSideCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SimulatePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableHop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AreaEnableOutside;
    
public:
    ATresGimmickTsBouncyPet();
    UFUNCTION(BlueprintCallable)
    void SetBouncyVisible(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetBouncyEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetActingBouncy(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceBouncy();
    
private:
    UFUNCTION()
    void OnSensorEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnSensorBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInvisibleBouncy() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAreaTimeOut() const;
    
protected:
    UFUNCTION(BlueprintPure)
    FVector GetSensorLocation() const;
    
};

