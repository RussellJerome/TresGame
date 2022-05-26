#pragma once
#include "CoreMinimal.h"
#include "TresStreamingTextureData.h"
#include "TresTextureStream.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTresTextureStream {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_ViewTarget;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresStreamingTextureData> m_TextureData;
    
    UPROPERTY(Transient)
    TArray<UTexture2D*> m_Textures;
    
    TRESGAME_API FTresTextureStream();
};

