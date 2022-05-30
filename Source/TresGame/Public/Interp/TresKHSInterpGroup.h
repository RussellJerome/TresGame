#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpGroup.h"
#include "TresKHSInterpGroup.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresKHSInterpGroup : public UInterpGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_RestoreWhenTerminated;
    
    UTresKHSInterpGroup();
};

