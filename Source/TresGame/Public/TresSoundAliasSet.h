#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresSoundAliasSet.generated.h"

class USoundBase;

UCLASS()
class TRESGAME_API UTresSoundAliasSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_SoundCueAlias[12];
    
public:
    UTresSoundAliasSet();
};

