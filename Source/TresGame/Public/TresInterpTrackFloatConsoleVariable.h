#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "TresInterpTrackFloatConsoleVariable.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackFloatConsoleVariable : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_RestoreWhenTerminated;
    
    UPROPERTY(EditAnywhere)
    FString m_CommandName;
    
    UPROPERTY(Transient)
    float m_DefaultValue;
    
    UTresInterpTrackFloatConsoleVariable();
};

