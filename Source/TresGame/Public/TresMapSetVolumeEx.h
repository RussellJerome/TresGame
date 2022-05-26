#pragma once
#include "CoreMinimal.h"
#include "TresMapSetVolume.h"
#include "TresMapSetVolumeEx.generated.h"

class UTresMapSet;

UCLASS(Abstract)
class TRESGAME_API ATresMapSetVolumeEx : public ATresMapSetVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTresMapSet* EndOverlapMapset;
    
    UPROPERTY(EditAnywhere)
    FName EndOverlapCommandName;
    
    ATresMapSetVolumeEx();
};

