#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_BouncyPestsBase_Stamp.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_BouncyPestsBase_Stamp : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_MaxRangeXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RiseSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallSpeed;
    
public:
    UTresAttack1_BouncyPestsBase_Stamp();
};

