#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresCharacterAlias.generated.h"

UCLASS()
class UTresCharacterAlias : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TMap<FString, FString> m_AliasMap;
    
public:
    UTresCharacterAlias();
};

