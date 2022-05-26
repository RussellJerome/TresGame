#pragma once
#include "CoreMinimal.h"
#include "TresWearformTextureReplaceData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTresWearformTextureReplaceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_ReplaceIndex;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ReplaceMaterialName;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_ImageTexture;
    
    UPROPERTY()
    UTexture2D* m_NormalTexture;
    
    UPROPERTY()
    UTexture2D* m_MaskTexture;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_PointTexture;
    
    TRESGAME_API FTresWearformTextureReplaceData();
};

