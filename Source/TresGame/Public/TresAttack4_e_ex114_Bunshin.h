#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack4_e_ex114_Bunshin.generated.h"

class USQEX_ParticleAttachDataAsset;
class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack4_e_ex114_Bunshin : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpInFadeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpHideTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpMaxHideTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iNumBunshin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpAppearFadeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BunshinRotationVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BunshinRevolveVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BunshinAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BunshinMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BunshinTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BunshinHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BunshinAmplitude;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BunshinFrequency;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BunshinAttackWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpInAttackFadeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpAppearAttackFadeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpInBunshinFadeTime;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vAttackOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackPlayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackHomingRotVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackHomingRotTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackHomingMoveVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackHomingMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackHomingMoveBrake;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bStopMoveAttackHomingHit;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebug;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQSQuery_Counter;
    
public:
    UTresAttack4_e_ex114_Bunshin();
};

