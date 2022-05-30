#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorBase.h"
#include "ETresMI_04_DoorGeneratorMoveType.h"
#include "TresGimmickGeneratorMI_04_Base.generated.h"

class UTresInstancedStaticMeshComponent;
class ASQEX_SplineActor;

UCLASS(Abstract)
class ATresGimmickGeneratorMI_04_Base : public ATresGimmickGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ASQEX_SplineActor* m_pSplineActor;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    UTresInstancedStaticMeshComponent* InstancedStaticMeshComp;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    ETresMI_04_DoorGeneratorMoveType MoveType;
    
public:
    ATresGimmickGeneratorMI_04_Base();
    UFUNCTION(BlueprintCallable)
    void SetSplineActor(ASQEX_SplineActor* splineActor);
    
};

