#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack8_e_ex773_EncloseFlare.generated.h"

UCLASS(HideDropdown)
class UTresAttack8_e_ex773_EncloseFlare : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_OmenTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_OmenEffEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MotEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_BombWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ZHomingRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ZHomingDist;
    
    UPROPERTY(VisibleDefaultsOnly)
    float m_pro_BindDist;
    
    UPROPERTY(VisibleDefaultsOnly)
    float m_pro_BindHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_BindTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_BindAfterTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_pro_ExEnable: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExOmenTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExOmenEffEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExMotEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExBombWaitTime;
    
    UPROPERTY(VisibleDefaultsOnly)
    float m_pro_ExBindDist;
    
    UPROPERTY(VisibleDefaultsOnly)
    float m_pro_ExBindHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExBindTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExBindAfterTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExAttractSpeed;
    
public:
    UTresAttack8_e_ex773_EncloseFlare();
};

