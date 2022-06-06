#pragma once
#include "CoreMinimal.h"
#include "TresComNpcEntityLinkData.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcEntityLinkData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName m_EntityName;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> m_LinkActors;
    
    TRESGAME_API FTresComNpcEntityLinkData();
};

