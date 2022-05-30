#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_XIIILB_Base.h"
#include "TresPairCardParam_e_ex356.h"
#include "TresAttack4_e_ex356_PressCard.generated.h"

class ATresProjectile_e_ex356_HideAndSeekBase;

UCLASS(HideDropdown)
class UTresAttack4_e_ex356_PressCard : public UTresAttack_XIIILB_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex356_HideAndSeekBase> m_FireProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex356_HideAndSeekBase> m_ThunderProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsCardInverse: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresPairCardParam_e_ex356> m_PairCardParamList;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PairCardSpawnTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CardPressOffsetDeltaAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CardFollowInitialSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CardFollowMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CardFollowAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CardPressSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PressSignInitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PressSignDeceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CardUpScale;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ChaseAttackDataIDName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CardChaseAttackOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CardChaseAttackDelayTime;
    
public:
    UTresAttack4_e_ex356_PressCard();
};

