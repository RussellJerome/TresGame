#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresStaticMesh_e_ex721_Base.generated.h"

class UTresRootComponent;
class UTresStaticMeshComponent;

UCLASS()
class ATresStaticMesh_e_ex721_Base : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyMesh;
    
public:
    ATresStaticMesh_e_ex721_Base();
};

