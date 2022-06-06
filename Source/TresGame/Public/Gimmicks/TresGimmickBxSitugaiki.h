#pragma once
#include "CoreMinimal.h"
#include "TresGimmickLauncher.h"
#include "TresGimmickBxSitugaiki.generated.h"

class UTresStaticMeshComponent;

UCLASS()
class ATresGimmickBxSitugaiki : public ATresGimmickLauncher {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresStaticMeshComponent* m_PropellerMesh;
    
    ATresGimmickBxSitugaiki();
    UFUNCTION(BlueprintCallable)
    void SetDisableLaunch(bool DisableLaunch);
    
};

