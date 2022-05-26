#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack10_e_ex773_FlarePillar.generated.h"

class UCurveFloat;
class ATresActor_e_ex773_Updraft;

UCLASS(HideDropdown)
class UTresAttack10_e_ex773_FlarePillar : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_pro_AttractEnable: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex773_Updraft> m_pro_UpdraftClass;
    
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
    UCurveFloat* m_UpdraftForceRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpdraftLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AttractStTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AttractTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AttractRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AttractForce;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingSubSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingSubSpeedStDist;
    
public:
    UTresAttack10_e_ex773_FlarePillar();
};

