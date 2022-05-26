#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackMove.h"
#include "TresInterpTrackRelativeMove.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackRelativeMove : public UInterpTrackMove {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_ParentGroupName;
    
    UPROPERTY(EditAnywhere)
    FName m_BoneSocketName;
    
    UTresInterpTrackRelativeMove();
};

