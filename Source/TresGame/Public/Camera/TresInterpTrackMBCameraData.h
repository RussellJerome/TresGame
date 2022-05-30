#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresMBCameraDataTrackKey.h"
#include "TresInterpTrackMBCameraData.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackMBCameraData : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresMBCameraDataTrackKey> m_Keys;
    
    UPROPERTY(EditAnywhere)
    float m_FOVBias;
    
    UTresInterpTrackMBCameraData();
};

