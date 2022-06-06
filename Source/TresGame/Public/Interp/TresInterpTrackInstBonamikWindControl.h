#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstBonamikWindControl.generated.h"

UCLASS()
class TRESGAME_API UTresInterpTrackInstBonamikWindControl : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_LastKeyIndex;
    
    UPROPERTY()
    float m_BackupWindScale;
    
    UTresInterpTrackInstBonamikWindControl();
};

