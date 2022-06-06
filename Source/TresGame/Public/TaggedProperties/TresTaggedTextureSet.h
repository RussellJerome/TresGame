#pragma once
#include "CoreMinimal.h"
#include "TresTextureReference.h"
#include "TresTaggedTextureSet.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTresTaggedTextureSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Tag;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresTextureReference> m_TextureReferences;
    
    UPROPERTY(Transient)
    TArray<UTexture2D*> m_Textures;
    
    TRESGAME_API FTresTaggedTextureSet();
};

