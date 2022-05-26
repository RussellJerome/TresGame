#pragma once
#include "CoreMinimal.h"
#include "Engine/Texture.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture.h"
#include "EManaComponentTextureType.h"
#include "ManaComponentTexture.generated.h"

UCLASS(MinimalAPI)
class UManaComponentTexture : public UTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SizeX;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SizeY;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<EPixelFormat> Format;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EManaComponentTextureType ComponentType;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<TextureAddress> AddressY;
    
    UManaComponentTexture();
};

