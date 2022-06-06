#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "CAJellyfishParam.h"
#include "TresGimmickCA_TickControlInterface.h"
#include "TresGimmickCA_Jellyfish.generated.h"

class UTresStaticMeshComponent;
class UTresAtkCollComponent;
class USceneComponent;

UCLASS(Config=Game)
class ATresGimmickCA_Jellyfish : public ATresGimmickActor, public ITresGimmickCA_TickControlInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresStaticMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresAtkCollComponent* MyAtkColl_Jelly;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* MyCollBase;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCAJellyfishParam m_Parameter;
    
public:
    ATresGimmickCA_Jellyfish();
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveNotifyProjectileAttackHitBpEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveNotifyAttackHitBpEvent();
    
    
    // Fix for true pure virtual functions not being implemented
};

