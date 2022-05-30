#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "TresUIActorSettingDataAsset.generated.h"

class UTresUIActorPostProcessSetDataAsset;
class ATresUIActorLightSet;

UCLASS()
class UTresUIActorSettingDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<ATresUIActorLightSet>> LightSets;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UTresUIActorPostProcessSetDataAsset*> PostProcessSets;
    
public:
    UTresUIActorSettingDataAsset();
};

