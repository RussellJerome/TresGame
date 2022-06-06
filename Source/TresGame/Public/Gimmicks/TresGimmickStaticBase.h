#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickStaticBase.generated.h"

class UTresRootComponent;
class UTresStaticMeshComponent;
class UTresEffectAttachComponent;

UCLASS(Abstract)
class ATresGimmickStaticBase : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresEffectAttachComponent* MyEffectAtt;
    
public:
    ATresGimmickStaticBase();
    UFUNCTION(BlueprintCallable)
    void SetCanEverAffectNavigation(bool bRelevant);
    
};

