#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresInterpTrackBonamikTeleportKey.h"
#include "TresInterpTrackBonamikTeleport.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackBonamikTeleport : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresInterpTrackBonamikTeleportKey> m_Keys;
    
    UTresInterpTrackBonamikTeleport();
};

