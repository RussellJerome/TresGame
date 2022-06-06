#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_e_ex352_ChaosFiragaBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack12_e_ex352_FreezeChaosFiraga.generated.h"

class UCurveVector;
class ATresProjectile_e_ex313_DarkBiteShadow;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack12_e_ex352_FreezeChaosFiraga : public UTresAttack_e_ex352_ChaosFiragaBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* m_DarkMatterControlCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_CoefficientForCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_DarkBiteSpawnIntervals;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex313_DarkBiteShadow> m_DarkBiteShadowClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkBiteHomingTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkBiteStartBiteTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DarkBiteEffect[2];
    
protected:
    UPROPERTY(Transient)
    ATresProjectile_e_ex313_DarkBiteShadow* m_DarkBiteShadow;
    
public:
    UTresAttack12_e_ex352_FreezeChaosFiraga();
};

