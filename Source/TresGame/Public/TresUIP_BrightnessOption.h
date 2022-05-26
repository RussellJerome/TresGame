#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_BrightnessOption.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_BrightnessOption : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pBrightSlider;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBrightDecideText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBrightCancelText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBrightDescriptionText;
    
public:
    UTresUIP_BrightnessOption();
};

