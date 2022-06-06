#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex041_BeatenGoofyShoot.generated.h"

UCLASS(HideDropdown)
class UTresAction1_e_ex041_BeatenGoofyShoot : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    uint8 m_Immortal: 1;
    
    UPROPERTY(EditAnywhere)
    int32 m_DieEffectGroupID;
    
    UPROPERTY(EditAnywhere)
    float m_BreakBodyTime;
    
public:
    UTresAction1_e_ex041_BeatenGoofyShoot();
};

