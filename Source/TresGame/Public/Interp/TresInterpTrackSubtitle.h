#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresSubtitleTrackKey.h"
#include "ETresSubtitleTrack_OptionVoice.h"
#include "TresInterpTrackSubtitle.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackSubtitle : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresSubtitleTrack_OptionVoice> m_OptionVoice;
    
    UPROPERTY(EditAnywhere)
    FString m_TextNamespace;
    
    UPROPERTY(EditAnywhere)
    FString m_Culture;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresSubtitleTrackKey> m_Keys;
    
    UTresInterpTrackSubtitle();
};

