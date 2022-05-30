#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSimpleStaticBase.h"
#include "TresGimmickRA_WoodBase.generated.h"

class UTresPoleComponent;

UCLASS(Abstract)
class ATresGimmickRA_WoodBase : public ATresGimmickSimpleStaticBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresPoleComponent* MyPole;
    
public:
    ATresGimmickRA_WoodBase();
};

