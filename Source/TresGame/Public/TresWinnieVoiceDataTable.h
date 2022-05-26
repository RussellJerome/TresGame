#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleVoice.h"
#include "Engine/DataTable.h"
#include "WinniePuzzleVoicePriority.h"
#include "TresWinnieVoiceDataTable.generated.h"

USTRUCT()
struct FTresWinnieVoiceDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleVoice VoiceType;
    
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleVoicePriority Priority;
    
    UPROPERTY(EditDefaultsOnly)
    bool EnablePlayCounter;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayCounterRandomValueMin;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayCounterRandomValueMax;
    
    TRESGAME_API FTresWinnieVoiceDataTable();
};

