#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresLevelEntitySequenceAction.generated.h"

UCLASS(Abstract, EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceAction : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_TargetGroup;
    
    UTresLevelEntitySequenceAction();
};

