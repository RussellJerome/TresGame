#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "TresAssetReferences.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FTresAssetReferences {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Tag;
    
    UPROPERTY(EditAnywhere)
    TArray<FStringAssetReference> m_Assets;
    
    UPROPERTY(Transient)
    TArray<UObject*> m_Residents;
    
    TRESGAME_API FTresAssetReferences();
};

