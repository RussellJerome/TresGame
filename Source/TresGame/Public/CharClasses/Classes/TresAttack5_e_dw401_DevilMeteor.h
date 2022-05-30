#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresEnemy_e_dw401_CycloneEffectParam.h"
#include "TresAttack5_e_dw401_DevilMeteor.generated.h"

class ATresProjectileBase;
class ATresActor_e_dw401_Updraft;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack5_e_dw401_DevilMeteor : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<TWeakObjectPtr<ATresProjectileBase>> m_MeteorArray;
    
    UPROPERTY()
    ATresProjectileBase* m_pDevilMeteorCyclone;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase1_MoveStartInterval;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_Phase1_MeteorNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase1_MeteorFireInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase1_MeteorFireIntervalRand;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase1_MeteorGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase1_MeteorFireAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase1_MeteorFireExclusionAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase1_MeteorFirePitchAngleMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase1_MeteorFirePitchAngleMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase1_MeteorFireDistMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase1_MeteorFireDistMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase1_CycloneMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase1_NextPhaseInterval;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_Phase1_MeteorActionCnt;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase1_NextMeteorActionInterval;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemy_e_dw401_CycloneEffectParam> m_Phase1_CycloneEffectParam;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_Phase2_MeteorNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase2_MeteorFireInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase2_MeteorFireIntervalRand;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase2_MeteorImpactTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase2_MeteorHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase2_NextPhaseInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase2_MeteorTgtPosRadius;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_Phase2_MeteorPCAppearCnt;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_Phase2_MeteorPCAppearCntRnd;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_Phase2_MeteorPCFallCnt;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_Phase2_MeteorPCFallCntRnd;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_Phase2_MeteorActionCnt;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase2_NextMeteorActionInterval;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_dw401_Updraft> m_pro_UpdraftClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpdraftHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpdraftForce;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemy_e_dw401_CycloneEffectParam> m_Phase3_CycloneEffectParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_NextAtkInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_AtkCollInterval;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemy_e_dw401_CycloneEffectParam> m_Phase3_AtkCycloneEffectParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_AtkTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_CoreVanishEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_CoreAppearBodyEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_CoreAppearEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_Phase2FirstAtkEffData;
    
    UTresAttack5_e_dw401_DevilMeteor();
};

