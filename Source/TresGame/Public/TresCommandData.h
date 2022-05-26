#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresCommandData.generated.h"

class UDataTable;

UCLASS()
class UTresCommandData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_CommandKindData;
    
    UTresCommandData();
};

