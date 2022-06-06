#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "TresTextureReference.generated.h"

USTRUCT(BlueprintType)
struct FTresTextureReference {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FStringAssetReference m_TexturePath;
    
    TRESGAME_API FTresTextureReference();
};

