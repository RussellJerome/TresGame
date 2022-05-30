#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatAnimBPParam.h"
#include "TresInterpTrackFloatAnimBPParam.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackFloatAnimBPParam : public UInterpTrackFloatAnimBPParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bRestoreWhenTerminate;
    
    UTresInterpTrackFloatAnimBPParam();
};

