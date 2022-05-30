#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackVisibility.h"
#include "TresInterpTrackVisibility.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackVisibility : public UInterpTrackVisibility {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> m_ComponentTags;
    
    UPROPERTY(EditAnywhere)
    bool m_IncludeChildActors;
    
    UPROPERTY(EditAnywhere)
    bool m_UseHiddenInGame;
    
    UPROPERTY(EditAnywhere)
    bool m_DisableRestore;
    
    UTresInterpTrackVisibility();
};

