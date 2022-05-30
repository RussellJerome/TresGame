#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickGeneratorBase.h"
#include "ETresMI_04_DoorGeneratorMoveType.h"
#include "TresGimmickExtraDoorGenerator.generated.h"

class UTresInstancedStaticMeshComponent;
class USplineComponent;
class UStaticMesh;
class USkeletalMesh;
class USkeletalMeshComponent;
class ASQEX_SplineActor;

UCLASS(Abstract)
class ATresGimmickExtraDoorGenerator : public ATresGimmickGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresInstancedStaticMeshComponent* InstancedStaticMeshComponent;
    
    UPROPERTY(Export, Transient)
    USplineComponent* m_SplineComponent;
    
    UPROPERTY(Transient)
    UStaticMesh* m_StaticMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USkeletalMesh* AnotherMesh;
    
    UPROPERTY(BlueprintReadOnly, Export)
    USkeletalMeshComponent* AnotherMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    ETresMI_04_DoorGeneratorMoveType MoveType;
    
public:
    ATresGimmickExtraDoorGenerator();
    UFUNCTION(BlueprintCallable)
    void Setup(USplineComponent* SplineComponent, UStaticMesh* StaticMesh, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveType(ETresMI_04_DoorGeneratorMoveType Type);
    
    UFUNCTION(BlueprintPure)
    FVector GetAnotherMeshLocation();
    
    UFUNCTION(BlueprintCallable)
    void ChangeDoor(FVector pos, bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    ASQEX_SplineActor* BPIE_GetSplineActor();
    
};

