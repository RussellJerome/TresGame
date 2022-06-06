#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "TresStreamingTextureData.generated.h"

USTRUCT(BlueprintType)
struct FTresStreamingTextureData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FStringAssetReference m_TexturePath;
    
    UPROPERTY(EditAnywhere)
    int32 m_MipMap;
    
    UPROPERTY(EditAnywhere)
    int32 m_MaxMipMap;
    
    TRESGAME_API FTresStreamingTextureData();
};

