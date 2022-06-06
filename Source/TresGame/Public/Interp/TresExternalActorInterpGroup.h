#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpGroup.h"
#include "TresExternalActorInterpGroup.generated.h"

class AActor;

UCLASS(CollapseCategories)
class TRESGAME_API UTresExternalActorInterpGroup : public UInterpGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TLazyObjectPtr<AActor> m_Actor;
    
    UTresExternalActorInterpGroup();
};

