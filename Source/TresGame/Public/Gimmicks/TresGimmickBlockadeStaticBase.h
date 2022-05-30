#pragma once
#include "CoreMinimal.h"
#include "TresGimmickStaticBase.h"
#include "TresGimmickBlockadeStaticBase.generated.h"

UCLASS(Abstract, Config=Game)
class ATresGimmickBlockadeStaticBase : public ATresGimmickStaticBase {
    GENERATED_BODY()
public:
    ATresGimmickBlockadeStaticBase();
};

