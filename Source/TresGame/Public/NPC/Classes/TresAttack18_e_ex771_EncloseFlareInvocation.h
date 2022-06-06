#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack18_e_ex771_EncloseFlareInvocation.generated.h"

UCLASS(HideDropdown)
class UTresAttack18_e_ex771_EncloseFlareInvocation : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_OmenTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_OmenEffEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_BombWaitTime;
    
    UPROPERTY(VisibleDefaultsOnly)
    float m_pro_BindDist;
    
    UPROPERTY(VisibleDefaultsOnly)
    float m_pro_BindHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_BindTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_BindAfterTime;
    
public:
    UTresAttack18_e_ex771_EncloseFlareInvocation();
};

