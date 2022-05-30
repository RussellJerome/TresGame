#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresNotifyInterface.h"
#include "e_ex064_WallParam.h"
#include "TresEnemyPawn_e_ex064_Wall.generated.h"

class UTresSkeletalMeshComponent;

UCLASS(Abstract)
class ATresEnemyPawn_e_ex064_Wall : public AActor, public ITresNotifyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresSkeletalMeshComponent* MyMesh;
    
    UPROPERTY(EditAnywhere)
    Fe_ex064_WallParam m_Param;
    
public:
    ATresEnemyPawn_e_ex064_Wall();
    
    // Fix for true pure virtual functions not being implemented
};

