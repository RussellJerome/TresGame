#pragma once
#include "CoreMinimal.h"
#include "TresPawnBase.h"
#include "TresNpcPawn_n_ra201_RollHair.generated.h"

class UTresSkeletalMeshComponent;

UCLASS(Abstract)
class ATresNpcPawn_n_ra201_RollHair : public ATresPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleDefaultsOnly)
    UTresSkeletalMeshComponent* MyMesh;
    
public:
    ATresNpcPawn_n_ra201_RollHair();
};

