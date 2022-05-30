#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstVectorAnimBPParam.generated.h"

class UAnimInstance;

UCLASS()
class TRESGAME_API UTresInterpTrackInstVectorAnimBPParam : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UAnimInstance* AnimScriptInstance;
    
    UPROPERTY(Transient)
    FVector ResetVector;
    
    UTresInterpTrackInstVectorAnimBPParam();
};

