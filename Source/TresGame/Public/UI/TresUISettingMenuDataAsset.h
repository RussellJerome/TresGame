#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUISettingMenuDataAsset.generated.h"

class UDataTable;
class UTexture;

UCLASS()
class UTresUISettingMenuDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<UTexture*> IconPlatformTexture;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UDataTable*> IconPlatformData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UDataTable*> IconPlatformDataAsia;
    
    UTresUISettingMenuDataAsset();
};

