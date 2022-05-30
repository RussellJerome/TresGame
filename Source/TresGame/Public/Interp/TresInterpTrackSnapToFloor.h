#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresTrackSnapToFloorKey.h"
#include "TresInterpTrackSnapToFloor.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackSnapToFloor : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresTrackSnapToFloorKey> m_Keys;
    
    UPROPERTY(EditAnywhere)
    float m_SnapToFloorUpLength;
    
    UPROPERTY(EditAnywhere)
    float m_SnapToFloorDownLength;
    
    UTresInterpTrackSnapToFloor();
};

