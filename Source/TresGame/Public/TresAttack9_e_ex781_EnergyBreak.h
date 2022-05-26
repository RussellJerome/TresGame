#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack9_e_ex781_EnergyBreak.generated.h"

class ATresEnemyPawn_e_ex781_EnergyBreakBeam;
class ATresGimmick_e_ex781_StealPrizeBase;
class UParticleSystem;
class USoundBase;
class UParticleSystemComponent;
class ATresCameraTarget;

UCLASS()
class UTresAttack9_e_ex781_EnergyBreak : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_EnergyBreakWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EnergyBreakTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EnergyBreakAttackDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresGimmick_e_ex781_StealPrizeBase> m_PrizeHPsClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresGimmick_e_ex781_StealPrizeBase> m_PrizeHPlClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresGimmick_e_ex781_StealPrizeBase> m_PrizeBattleItemClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresGimmick_e_ex781_StealPrizeBase> m_PrizeMoignetMedalClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawn_e_ex781_EnergyBreakBeam> m_BeamClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WindForce;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StrongWindForce;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InitWindRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxWindRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WindStretchSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_WindAttachSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VacuumedHPIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SteeleHP;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VacuumedHPUpModeDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VacuumedHPUpSteeleHP;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_VacuumedHPUpPrizeNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EaroSuccessRotRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackCollisionGroupName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackCollisionAttackDataID;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackCollisionAttackUpdateTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VacuumedHPUpTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VacuumedHPUpWindForce;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BindTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseSpeedMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseDownSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotInitRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotAddRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotMaxRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseEndHigh;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EnergyBreakParticleEffData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SuccessAttackDist;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_AllwaysSuccess;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
protected:
    UPROPERTY(Transient)
    TArray<ATresGimmick_e_ex781_StealPrizeBase*> m_PrizeList;
    
private:
    UPROPERTY()
    ATresEnemyPawn_e_ex781_EnergyBreakBeam* m_EnergyBreakBeam;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_EnergyBreakParticleEff;
    
    UPROPERTY(Transient)
    ATresCameraTarget* m_Camera;
    
public:
    UTresAttack9_e_ex781_EnergyBreak();
};

