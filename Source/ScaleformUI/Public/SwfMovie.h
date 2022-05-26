#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FlashTextureRescale.h"
#include "SwfMovie.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class USwfMovie : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bUseGFxExport: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOptimizeForMobiles: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSetSRGBOnImportedTextures: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bPackTextures: 1;
    
    UPROPERTY(EditAnywhere)
    int32 PackTextureSize;
    
    UPROPERTY(EditAnywhere)
    uint8 bForceSquarePacking: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<FlashTextureRescale> TextureRescale;
    
    UPROPERTY(EditAnywhere)
    FString TextureFormat;
    
    UPROPERTY(EditAnywhere)
    uint8 bReplaceImages: 1;
    
    UPROPERTY(AssetRegistrySearchable, VisibleAnywhere)
    FString SourceFile;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FString> FontMappings;
    
    UPROPERTY(VisibleAnywhere)
    FString SourceFileTimestamp;
    
    UPROPERTY(Transient)
    uint64 ImportTimeStamp;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<uint8> RawData;
    
    UPROPERTY()
    TArray<FString> ReferencedAssetNames;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UObject*> References;
    
    UPROPERTY(EditAnywhere)
    TArray<UObject*> UserReferences;
    
    USwfMovie();
};

