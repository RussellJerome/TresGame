#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGummiStickerTextureDataTable.generated.h"

class UTexture2D;

USTRUCT()
struct FTresGummiStickerTextureDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_nTexture;
    
    TRESGAME_API FTresGummiStickerTextureDataTable();
};

