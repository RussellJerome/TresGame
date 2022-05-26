#pragma once
#include "CoreMinimal.h"
#include "TresEventPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresMimicryPawnBase.generated.h"

UCLASS(Abstract)
class TRESGAME_API ATresMimicryPawnBase : public ATresEventPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_OffsetLocation;
    
public:
    ATresMimicryPawnBase();
};

