#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_HudKeyHole.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_HudKeyHole : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pKeyMissionGage;
    
    UPROPERTY(Transient)
    UGFxObject* m_pKeyMissionKey;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMissionGageAnms;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMissionKasanAnm;
    
public:
    UTresUIP_HudKeyHole();
};

