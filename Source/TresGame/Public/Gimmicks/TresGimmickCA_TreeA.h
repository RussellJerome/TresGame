#pragma once
#include "CoreMinimal.h"
#include "TresGimmickCA_TreeBase.h"
#include "ETresDropItemID.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickCA_TreeA.generated.h"

UCLASS(Abstract)
class ATresGimmickCA_TreeA : public ATresGimmickCA_TreeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ETresDropItemID m_prizeKind;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> m_SeedLocations;
    
public:
    ATresGimmickCA_TreeA();
};

