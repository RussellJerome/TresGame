#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleSoundEffect.h"
#include "Engine/DataTable.h"
#include "TresWinnieSoundEffectDataTable.generated.h"

class USoundBase;

USTRUCT()
struct FTresWinnieSoundEffectDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleSoundEffect SoundEffectType;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* SoundEffect;
    
    TRESGAME_API FTresWinnieSoundEffectDataTable();
};

