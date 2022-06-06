#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickHeWorkShop.generated.h"

class UTresInputTask;
class UTresTaskExecuterBase;

UCLASS(Abstract)
class ATresGimmickHeWorkShop : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UTresInputTask* InputTask;
    
    UPROPERTY(Transient)
    UTresTaskExecuterBase* m_pTaskExecuter;
    
public:
    ATresGimmickHeWorkShop();
};

