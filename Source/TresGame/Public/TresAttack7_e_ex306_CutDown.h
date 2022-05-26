#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "WaveOneCollInfo_e_ex310.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack7_e_ex306_CutDown.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack7_e_ex306_CutDown : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FWaveOneCollInfo_e_ex310 m_CenterColl;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_CenterCollOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditAnywhere)
    bool m_bAimTarget;
    
    UPROPERTY(EditAnywhere)
    float m_fThrowRadius;
    
protected:
    UPROPERTY()
    ATresProjectileBase* m_ProjectileArray[4];
    
public:
    UTresAttack7_e_ex306_CutDown();
};

