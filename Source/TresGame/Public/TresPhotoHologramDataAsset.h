#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresPhotoHologramDataAsset.generated.h"

class UDataTable;
class UTexture;

UCLASS()
class UTresPhotoHologramDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_MapDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_HologramDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_MapSetDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UTexture*> m_UIImageBgList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UTexture*> m_UIImageStartList;
    
    UTresPhotoHologramDataAsset();
};

