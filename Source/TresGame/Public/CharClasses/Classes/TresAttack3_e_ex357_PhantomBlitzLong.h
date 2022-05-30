#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack3_e_ex357_PhantomBlitzBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack3_e_ex357_PhantomBlitzLong.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex357_PhantomBlitzLong : public UTresAttack3_e_ex357_PhantomBlitzBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsEnableAttackHitIgnore: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ProjectileSpawnNum;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_ProjectileSpawnRadiusRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileSpawnMinIntervalDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishStartCenterDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DeathSentenceCountEndOffsetTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDisableLightDark: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightChangeStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightChangeEndTime;
    
public:
    UTresAttack3_e_ex357_PhantomBlitzLong();
};

