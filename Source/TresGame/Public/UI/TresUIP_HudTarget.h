#pragma once
#include "CoreMinimal.h"
#include "TresUIP_HudTarget_ButtonCount.h"
#include "TresCockpitParts.h"
#include "TresCockpitTargetInfo.h"
#include "TresUIP_HudTarget_PushButtonMark.h"
#include "TresUIP_HudTarget_UltimaLock.h"
#include "TresUIP_HudTarget.generated.h"

class UAudioComponent;
class UGFxObject;

UCLASS()
class UTresUIP_HudTarget : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FTresCockpitTargetInfo> m_targetInfoAry;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* m_FocusModeAudio;
    
    UPROPERTY(Transient)
    UGFxObject* m_ButtonNotice;
    
    UPROPERTY(Transient)
    FTresUIP_HudTarget_ButtonCount m_ButtonCount;
    
    UPROPERTY(Transient)
    UGFxObject* m_GradeText;
    
    UPROPERTY(Transient)
    UGFxObject* m_GradeTextValue;
    
    UPROPERTY(Transient)
    UGFxObject* m_ExpPointPlain;
    
    UPROPERTY(Transient)
    UGFxObject* m_TargetCursorPlain;
    
    UPROPERTY(Transient)
    FTresUIP_HudTarget_UltimaLock m_UltimaLock;
    
    UPROPERTY(Transient)
    UGFxObject* m_CurrentFlowScope;
    
    UPROPERTY(Transient)
    FTresUIP_HudTarget_PushButtonMark m_PushButtonMarkInfo;
    
    UPROPERTY(Transient)
    UGFxObject* m_addInput;
    
public:
    UTresUIP_HudTarget();
};

