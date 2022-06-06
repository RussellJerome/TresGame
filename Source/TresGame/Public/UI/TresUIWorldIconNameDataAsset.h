#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUIWorldIconName.h"
#include "TresUIWorldIconNameDataAsset.generated.h"

UCLASS()
class UTresUIWorldIconNameDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FString m_WorldNameNameSpace;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresUIWorldIconName> m_IconName;
    
public:
    UTresUIWorldIconNameDataAsset();
};

