#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_bx903_Spin.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack3_e_bx903_Spin : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ExplosionProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DrillInitialSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DrillUpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DrillUpHoldTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DrillUpHomingInitXYSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DrillUpHomingAddXYSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DrillUpHomingEndDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndTimeMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndTimeMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ReturnZSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpinAroundRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpinAroundSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_SpinRushNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpinAddRushSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpinEndRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DrillEndHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DrillRiseEndHeight;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_EnableTarget;
    
    UPROPERTY(EditDefaultsOnly)
    float m_IdleTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_IdleHigh;
    
    UPROPERTY(EditDefaultsOnly)
    float m_IdleStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetOffestHigh;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveHighMax;
    
public:
    UTresAttack3_e_bx903_Spin();
};

