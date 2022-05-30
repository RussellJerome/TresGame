#pragma once
#include "CoreMinimal.h"
#include "TresHUDBase.h"
#include "TresHUDSlideShow.generated.h"

class USoundBase;
class UTresUIP_SlideShow;
class UTresUIDataAssetSlideShow;

UCLASS(NonTransient)
class ATresHUDSlideShow : public ATresHUDBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UTresUIDataAssetSlideShow* m_UIDataAssetSlideShow;
    
    UPROPERTY(Transient)
    UTresUIP_SlideShow* m_pSlideShow;
    
    UPROPERTY(Transient)
    USoundBase* m_pSlideBgm;
    
public:
    ATresHUDSlideShow();
};

