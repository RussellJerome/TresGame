#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_Subtitle.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_Subtitle : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Jimaku;
    
    UPROPERTY(Transient)
    UGFxObject* m_SkipIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_Lyrics;
    
    UPROPERTY(Transient)
    UGFxObject* m_LyricsText;
    
public:
    UTresUIP_Subtitle();
};

