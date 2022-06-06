#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack2_e_ex309_Tenrai.generated.h"

class UAnimSequenceBase;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex309_Tenrai : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_CenterProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_RootMotionScaleRangeXY;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsSpawnLandingProjectile: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileDelayTime;
    
public:
    UTresAttack2_e_ex309_Tenrai();
};

