#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex352_ChaosFiragaBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack11_e_ex352_BurnChaosFiraga.generated.h"

class UCurveVector;

UCLASS(HideDropdown)
class UTresAttack11_e_ex352_BurnChaosFiraga : public UTresAttack_e_ex352_ChaosFiragaBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* m_DarkMatterControlCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_CoefficientForCurveData;
    
    UTresAttack11_e_ex352_BurnChaosFiraga();
};

