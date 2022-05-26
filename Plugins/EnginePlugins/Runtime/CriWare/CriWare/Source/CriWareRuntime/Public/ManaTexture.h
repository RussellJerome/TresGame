#pragma once
#include "CoreMinimal.h"
#include "Engine/Texture.h"
#include "ManaVideoTrackInfo.h"
#include "ManaEventPointInfo.h"
#include "Engine/Texture.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ManaTexture.generated.h"

class UManaComponentTexture;

UCLASS(MinimalAPI)
class UManaTexture : public UTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MovieFilePath;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FManaVideoTrackInfo> VideoTrackInfo;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FManaEventPointInfo> EventPointInfo;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumSubtitleChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRenderToTexture: 1;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressY;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    FLinearColor ClearColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float TargetGamma;
    
    UPROPERTY()
    TEnumAsByte<EPixelFormat> OverrideFormat;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    uint8 bHDR: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    TArray<UManaComponentTexture*> ComponentTextures;
    
    UManaTexture();
};

