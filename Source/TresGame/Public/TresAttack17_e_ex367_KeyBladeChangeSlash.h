#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "RootMotionScaleDataParam_e_ex367.h"
#include "TresAttack17_e_ex367_KeyBladeChangeSlash.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack17_e_ex367_KeyBladeChangeSlash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_PramSlashType;
    
    UPROPERTY(EditAnywhere)
    int32 m_SlashEffectGroupID;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_UseStartMot;
    
    UPROPERTY(EditAnywhere)
    float m_TargetDistOffset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ChainParticleData;
    
    UPROPERTY(EditAnywhere)
    float m_ChainDsableTime;
    
    UPROPERTY(EditAnywhere)
    int32 m_ChainDsableID;
    
    UPROPERTY(EditAnywhere)
    float m_ChainSize;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleDataParam_e_ex367 m_RootMotion1ScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleDataParam_e_ex367 m_RootMotion2ScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleDataParam_e_ex367 m_RootMotion3ScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleDataParam_e_ex367 m_RootMotion4ScaleParam;
    
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_ChainParticle;
    
public:
    UTresAttack17_e_ex367_KeyBladeChangeSlash();
};

