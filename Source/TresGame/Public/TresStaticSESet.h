#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresStaticSESet.generated.h"

class USoundBase;

UCLASS()
class TRESGAME_API UTresStaticSESet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_Assets[43];
    
    UTresStaticSESet();
};

