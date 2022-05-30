#pragma once
#include "CoreMinimal.h"
#include "TresGimmickBrickStaticBase.h"
#include "TresGimmickBrickStaticExBase.generated.h"

class UTresStaticMeshComponent;

UCLASS(Abstract)
class ATresGimmickBrickStaticExBase : public ATresGimmickBrickStaticBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyBreak;
    
public:
    ATresGimmickBrickStaticExBase();
};

