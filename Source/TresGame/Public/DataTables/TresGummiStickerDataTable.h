#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGummiStickerDataTable.generated.h"

USTRUCT()
struct FTresGummiStickerDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_nTextureName;
    
    TRESGAME_API FTresGummiStickerDataTable();
};

