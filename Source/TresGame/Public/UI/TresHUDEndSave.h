#pragma once
#include "CoreMinimal.h"
#include "TresHUDBase.h"
#include "TresHUDEndSave.generated.h"

class UTresUIDataAsset;
class USoundBase;
class UTresUIP_SaveLoad;
class UTresUIP_CreditDLC;

UCLASS(NonTransient)
class ATresHUDEndSave : public ATresHUDBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_BGM;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUIDataAsset* m_UIDataAssetEndSave;
    
    UPROPERTY(EditDefaultsOnly)
    float m_IgnoreInputTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DisplayTime;
    
    UPROPERTY(Transient)
    UTresUIP_SaveLoad* m_SaveLoad;
    
    UPROPERTY(Transient)
    UTresUIP_CreditDLC* m_CreditDLC;
    
public:
    ATresHUDEndSave();
};

