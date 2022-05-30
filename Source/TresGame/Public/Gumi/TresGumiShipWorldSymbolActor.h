#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickActorBase.h"
#include "ETresGumiShipWorldSymbolID.h"
#include "ETresWorldCode.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipWorldSymbolActor.generated.h"

class UStaticMeshComponent;
class UCameraComponent;
class AActor;
class USphereComponent;
class UPrimitiveComponent;

UCLASS()
class ATresGumiShipWorldSymbolActor : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresGumiShipWorldSymbolID WorldMapID;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CameraOffset;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USphereComponent* ApproachCollision;
    
    UPROPERTY(EditDefaultsOnly)
    float IconRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float MistRadius;
    
    UPROPERTY(Export)
    UCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsLocked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsLockedByBoss;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UStaticMeshComponent* WorldIcon;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UStaticMeshComponent* WorldMist;
    
    ATresGumiShipWorldSymbolActor();
private:
    UFUNCTION()
    void OnLeaveGoalVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnHitGoalVolume(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit);
    
    UFUNCTION()
    void OnEnterGoalVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCancel();
    
public:
    UFUNCTION(BlueprintCallable)
    void LockWorldByBoss(bool LockEnable);
    
private:
    UFUNCTION(BlueprintCallable)
    void LockWorld(bool Locked);
    
public:
    UFUNCTION()
    ETresGumiShipWorldSymbolID GetWorldMapID();
    
private:
    UFUNCTION(BlueprintCallable)
    bool CheckLanding();
    
};

