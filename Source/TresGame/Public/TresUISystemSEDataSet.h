#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUISystemSEDataSet.generated.h"

class USoundBase;

UCLASS()
class UTresUISystemSEDataSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USoundBase* Click;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* Decide;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* Cancel;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* Beep;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* Tab;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* GameHelpOpen;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* GameHelpMessage;
    
    UTresUISystemSEDataSet();
};

