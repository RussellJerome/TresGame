#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Matinee/InterpTrackVectorBase.h"
#include "TresInterpTrackVectorAnimBPParam.generated.h"

class UAnimInstance;

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackVectorAnimBPParam : public UInterpTrackVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAnimInstance> AnimClass;
    
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    bool bAsRotator;
    
    UPROPERTY(EditAnywhere)
    bool bRestoreWhenTerminate;
    
    UTresInterpTrackVectorAnimBPParam();
};

