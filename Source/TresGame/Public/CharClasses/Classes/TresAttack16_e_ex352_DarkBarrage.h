#pragma once
#include "CoreMinimal.h"
#include "TresAttack_XIIILE_Base.h"
#include "TresDarkBarrageParam_e_ex352.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack16_e_ex352_DarkBarrage.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack16_e_ex352_DarkBarrage : public UTresAttack_XIIILE_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterLiftUpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresDarkBarrageParam_e_ex352> m_DarkBarrageParams;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LookAheadTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DriftEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_FiringAngle;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_FiringOffset;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_ShakeSpeed;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FVector m_ShakeSize;
    
protected:
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_DriftEffectCmp;
    
public:
    UTresAttack16_e_ex352_DarkBarrage();
};

