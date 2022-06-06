#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSimpleStaticBase.h"
#include "TresGimmickRA_SignBoardBase.generated.h"

class UTresReactorComponent;

UCLASS(Abstract)
class ATresGimmickRA_SignBoardBase : public ATresGimmickSimpleStaticBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* MyReactor;
    
public:
    ATresGimmickRA_SignBoardBase();
    UFUNCTION()
    void OnChangeBattleMode(bool bIsBattleMode);
    
};

