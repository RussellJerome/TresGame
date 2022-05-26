#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "TresUIActorSettingDataAsset.generated.h"

class ATresUIActorLightSet;
class UTresUIActorPostProcessSetDataAsset;

UCLASS()
class UTresUIActorSettingDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<ATresUIActorLightSet>> LightSets;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UTresUIActorPostProcessSetDataAsset*> PostProcessSets;
    
};

