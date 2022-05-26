#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUIP_CampMenuCharacterLoading.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(NonTransient)
class UTresUIP_CampMenuCharacterLoading : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Chara;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_CharaIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_CharaLoadAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_CharaLoad;
    
public:
    UTresUIP_CampMenuCharacterLoading();
};

