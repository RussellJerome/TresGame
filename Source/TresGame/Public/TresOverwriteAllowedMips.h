#pragma once
#include "CoreMinimal.h"
#include "Engine/TextureDefines.h"
#include "TresOverwriteAllowedMips.generated.h"

USTRUCT(BlueprintType)
struct FTresOverwriteAllowedMips {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<TextureGroup> m_TextureGroup;
    
    UPROPERTY(EditAnywhere)
    int32 m_MaxAllowedMips;
    
    TRESGAME_API FTresOverwriteAllowedMips();
};

