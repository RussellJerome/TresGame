#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack13_e_ex781_TetraCircle.generated.h"

UCLASS()
class UTresAttack13_e_ex781_TetraCircle : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_TetraCircleStartDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TetraChaseEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TetraBindTime;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_BindDataIDName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_BindAttackDataIDName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BindAttackTime;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_BindFinishAttack;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_BindFailedDestroyBit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TriangleCenterOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TriangleCenterMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlipDamageTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BodyPushTime;
    
    UTresAttack13_e_ex781_TetraCircle();
};

