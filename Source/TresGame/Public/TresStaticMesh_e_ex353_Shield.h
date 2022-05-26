#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresActorInterface.h"
#include "TresNotifyInterface.h"
#include "TresStaticMesh_e_ex353_Shield.generated.h"

class UTresRootComponent;
class UParticleSystemComponent;
class UTresStaticMeshComponent;
class ATresCharPawnBase;

UCLASS(Abstract)
class ATresStaticMesh_e_ex353_Shield : public AActor, public ITresActorInterface, public ITresNotifyInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MyParticle;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCharPawnBase> m_LockOnActorClass;
    
public:
    ATresStaticMesh_e_ex353_Shield();
    
    // Fix for true pure virtual functions not being implemented
};

