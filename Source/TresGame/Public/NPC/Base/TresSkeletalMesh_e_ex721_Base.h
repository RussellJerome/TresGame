#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresAnimInterface.h"
#include "TresSkeletalMesh_e_ex721_Base.generated.h"

class UTresSkeletalMeshComponent;
class UTresRootComponent;
class UTresEffectAttachComponent;

UCLASS(Abstract)
class ATresSkeletalMesh_e_ex721_Base : public AActor, public ITresAnimInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresEffectAttachComponent* MyEffectAtt;
    
public:
    ATresSkeletalMesh_e_ex721_Base();
    
    // Fix for true pure virtual functions not being implemented
};

