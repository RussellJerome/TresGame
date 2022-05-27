#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_XIIIE_Base.h"
#include "TresAttack2_e_ex304_LaserShot.generated.h"

class ATresProjectileBase;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex304_LaserShot : public UTresAttack_XIIIE_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsCoopAction: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bModifyViewPos: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDisableLockon: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_LaserShotProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_SpawnNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileFireDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsCooperationLaserShot: 1;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_CooperationVoice1;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_CooperationVoice2;
    
    UTresAttack2_e_ex304_LaserShot();
};

