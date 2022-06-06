#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresPlayerMagicAssetUnit.h"
#include "TresPlayerMagicSet.generated.h"

UCLASS()
class UTresPlayerMagicSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresPlayerMagicAssetUnit> m_Units;
    
    UTresPlayerMagicSet();
};

