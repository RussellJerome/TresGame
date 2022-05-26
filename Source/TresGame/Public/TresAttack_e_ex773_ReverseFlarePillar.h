#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack_e_ex773_ReverseFlarePillar.generated.h"

UCLASS(HideDropdown)
class UTresAttack_e_ex773_ReverseFlarePillar : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FlarePillarLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FlarePillarSpawnPosRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FlarePillarSpawnPosRateAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TargetDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpdraftRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpdraftHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpdraftForce;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpdraftLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpdraftExecuteTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingSubSpeed;
    
public:
    UTresAttack_e_ex773_ReverseFlarePillar();
};

