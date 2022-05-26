#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpGroup.h"
#include "TresParamDispatcherInterpGroup.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresParamDispatcherInterpGroup : public UInterpGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_DispatcherTag;
    
    UTresParamDispatcherInterpGroup();
};

