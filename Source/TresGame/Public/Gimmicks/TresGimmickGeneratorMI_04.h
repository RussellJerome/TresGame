#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorMI_04_Base.h"
#include "TresGimmickMI_04Status.h"
#include "TresGimmickMI_04_DoorDamageParam.h"
#include "UObject/NoExportTypes.h"
#include "ETresStateID.h"
#include "ETresPlayerSpecificActionID.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickGeneratorMI_04.generated.h"

class UTresBodyCollPrimitive;
class UTresBodyCollComponent;
class ASQEX_SplineActor;
class UStaticMeshComponent;
class ATriggerBox;
class UPrimitiveComponent;
class AActor;

UCLASS(Abstract)
class ATresGimmickGeneratorMI_04 : public ATresGimmickGeneratorMI_04_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FTresGimmickMI_04Status> m_Statuses;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresBodyCollPrimitive* BodyCollPrim;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresBodyCollComponent* BodyCollComp;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float SplineLength;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 DoorNum;
    
    UPROPERTY(EditAnywhere)
    float DoorInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ObjectLife;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector PositionOffset;
    
    UPROPERTY(EditAnywhere)
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsReverse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ASQEX_SplineActor* ConfluenceSplineActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTresGimmickMI_04_DoorDamageParam damageParam;
    
    UPROPERTY(Export, Transient)
    UStaticMeshComponent* m_pRideMesh;
    
    UPROPERTY(EditInstanceOnly)
    TArray<ASQEX_SplineActor*> RaildSlideDisconnect;
    
    UPROPERTY(EditAnywhere)
    TArray<ATriggerBox*> TabooRideVolumeArray;
    
public:
    ATresGimmickGeneratorMI_04();
    UFUNCTION(BlueprintCallable)
    void UpdateTransform(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void SetEventDoor();
    
    UFUNCTION()
    void OnPlayerStateEnd(TEnumAsByte<ETresStateID> ID);
    
    UFUNCTION()
    void OnPlayerSpecificAction(TEnumAsByte<ETresPlayerSpecificActionID> ActionID, int32 SubID);
    
    UFUNCTION()
    void OnBeginOverlapTabooRide(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintPure)
    FTransform GetNearDoorTransformFromIndex(int32 Index);
    
    UFUNCTION(BlueprintPure)
    int32 GetNearDoorIndexFromLocation(FVector nearLocation);
    
    UFUNCTION(BlueprintCallable)
    void DecLifeFromBp(int32 dec);
    
    UFUNCTION(BlueprintCallable)
    void DebugBreak(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void CreateDoor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Ride(UStaticMeshComponent* MeshComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    UStaticMeshComponent* BP_GenerateMesh();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BreakObject(UStaticMeshComponent* MeshComponent, int32 breakIndex);
    
};

