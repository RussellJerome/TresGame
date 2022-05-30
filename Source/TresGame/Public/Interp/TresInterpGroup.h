#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpGroup.h"
#include "TresInterpGroup.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpGroup : public UInterpGroup {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString m_CharacterMesh;
    
    UPROPERTY(EditAnywhere)
    FName m_TargetActorTag;
    
    UTresInterpGroup();
};

