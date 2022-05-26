#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EX359_ThrowEffectInfoSet.h"
#include "TresAttackDefinitionBase.h"
#include "EX359_ThrowInfo.h"
#include "EX359_BeamOnTimeInfoSet.h"
#include "TresAttack2_e_ex359_Throw.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex359_Throw : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY()
    ATresProjectileBase* m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_BeamOnTimeInfoSet m_BeamOnTimeInfoSet;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_ThrowEffectInfoSet m_ThrowEffectInfoSet;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxProjTargetPastDestroyTime;
    
    UPROPERTY()
    bool m_bDestroyProjOnPastTarget;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinActionAbortTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fActionAbortTimeAfterHit;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_ThrowInfo m_ThrowInfo;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bStartFromEnableChange;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bStartFromEnableChangeOnFastMoveEnd;
    
    UTresAttack2_e_ex359_Throw();
};

