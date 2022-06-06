#pragma once
#include "CoreMinimal.h"
#include "TresCharState_ReMindLgRx.h"
#include "TresPlayerState_ReMindLgRx.generated.h"

class ATresLgRxManager;

UCLASS()
class UTresPlayerState_ReMindLgRx : public UTresCharState_ReMindLgRx {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresLgRxManager* m_pMan;
    
public:
    UTresPlayerState_ReMindLgRx();
};

