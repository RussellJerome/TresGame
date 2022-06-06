#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresUIP_HudOperation.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_HudOperation : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pGFxRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxOperation;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxOperationGuide[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxOperationGuideButton[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxOperationGuideButton2[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxOperationGuideButton3[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxOperationGuideButton4[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxOperationGuideText[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxOperationGuideButtonMark[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxOperationGuideButtonMark2[6];
    
public:
    UTresUIP_HudOperation();
};

