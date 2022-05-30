#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "TresWorldResidentActorClassAsset.generated.h"

class UTresWorldResidentActorClassAsset;
class AActor;

UCLASS()
class UTresWorldResidentActorClassAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, TSubclassOf<AActor>> AssetMaps;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<AActor>> AssetArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UTresWorldResidentActorClassAsset*> ReferenceAssets;
    
public:
    UTresWorldResidentActorClassAsset();
};

