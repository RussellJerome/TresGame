#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUISaveMenuDataAsset.generated.h"

class UDataTable;

UCLASS()
class UTresUISaveMenuDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* MenuRestrictionData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* AreaSelectData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_FaceIconLotteryData;
    
    UTresUISaveMenuDataAsset();
};

