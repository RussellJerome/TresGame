#pragma once
#include "CoreMinimal.h"
#include "TresGummiStickerStruct.generated.h"

class UTexture2D;

USTRUCT()
struct FTresGummiStickerStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_pStickerTexture;
    
    TRESGAME_API FTresGummiStickerStruct();
};

