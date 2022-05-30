#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresTrackAttachKey.h"
#include "TresInterpTrackAttach.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackAttach : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresTrackAttachKey> m_Keys;
    
    UPROPERTY(EditAnywhere)
    bool m_bDetachWhenTerminated;
    
    UPROPERTY(EditAnywhere)
    bool m_bMaintainWorldPosition;
    
    UTresInterpTrackAttach();
};

