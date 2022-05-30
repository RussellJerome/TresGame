#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_MenuRemy.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_MenuRemy : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_GrandMenuBtnHelp;
    
    UPROPERTY(Transient)
    UGFxObject* m_SpecialBtnHelp;
    
public:
    UTresUIP_MenuRemy();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};

