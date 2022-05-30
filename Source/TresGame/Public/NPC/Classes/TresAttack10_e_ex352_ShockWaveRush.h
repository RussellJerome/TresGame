#pragma once
#include "CoreMinimal.h"
#include "TresAttack_XIIILE_Base.h"
#include "UObject/NoExportTypes.h"
#include "TresShockWaveRushParam_e_ex352.h"
#include "ETresRiskDodgeType.h"
#include "TresVoice_e_ex352.h"
#include "TresAttack10_e_ex352_ShockWaveRush.generated.h"

class UParticleSystemComponent;
class UEnvQuery;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack10_e_ex352_ShockWaveRush : public UTresAttack_XIIILE_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_ShockwaveDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RushSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Acceleration;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_HomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_MaxHomingAngle;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumberOfRushes;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OverrunDistance;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_Timeout;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitPawnPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartAccelerationForFinalRush;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndDecelerationForFinalRush;
    
    UPROPERTY(EditDefaultsOnly)
    FTresShockWaveRushParam_e_ex352 m_FinalRushShockWaveParams[2];
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresRiskDodgeType> m_DodgeType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EntryTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitAngle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ShockWaveEffectData2;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_FinalRushWarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresVoice_e_ex352> m_VoiceArray;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_ShockWaveEffectCmp;
    
public:
    UTresAttack10_e_ex352_ShockWaveRush();
};

