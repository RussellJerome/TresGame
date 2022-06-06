#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AtomSoundObject.generated.h"

UCLASS(MinimalAPI)
class UAtomSoundObject : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool EnableVoiceLimitScope;
    
    UPROPERTY(EditAnywhere)
    bool EnableCategoryCueLimitScope;
    
    UAtomSoundObject();
};

