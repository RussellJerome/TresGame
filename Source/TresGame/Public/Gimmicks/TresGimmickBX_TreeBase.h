#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickBX_TreeBase.generated.h"

class UTresStaticMeshComponent;

UCLASS(Abstract, Config=Game)
class ATresGimmickBX_TreeBase : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyMesh;
    
public:
    ATresGimmickBX_TreeBase();
};

