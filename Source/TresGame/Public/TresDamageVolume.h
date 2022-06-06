#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PainCausingVolume.h"
#include "TresNotifyInterface.h"
#include "TresDamageVolume.generated.h"

UCLASS()
class ATresDamageVolume : public APainCausingVolume, public ITresNotifyInterface {
    GENERATED_BODY()
public:
    ATresDamageVolume();
    
    // Fix for true pure virtual functions not being implemented
};

