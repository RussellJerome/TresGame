#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "TresInterpTrackBonamikControlKey.h"
#include "TresInterpTrackBonamikControl.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackBonamikControl : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_Reset;
    
    UPROPERTY(EditAnywhere)
    int32 m_PreRoll;
    
    UPROPERTY(EditAnywhere)
    int32 m_PreRollForAttachment;
    
    UPROPERTY(EditAnywhere)
    bool m_bBlendedWeight;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresInterpTrackBonamikControlKey> m_Keys;
    
    UTresInterpTrackBonamikControl();
};

