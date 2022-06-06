#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresObjectsArray.generated.h"

class UObject;

UCLASS()
class TRESGAME_API UTresObjectsArray : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UObject*> m_Objects;
    
    UTresObjectsArray();
};

