#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_dw401_DevilScrew.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack1_e_dw401_DevilScrew : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_CoreRotEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_TornadoEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_RightCloudDustEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_LeftCloudDustEff;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_CoreRotEffData;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_CoreRotEffAttachBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_TornadoEffData;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TornadoEffAttachBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_RightCloudDustEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_LeftCloudDustEffData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RushTurnAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RushTurnMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_pro_bInBattleArea;
    
public:
    UTresAttack1_e_dw401_DevilScrew();
};

