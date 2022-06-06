#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex351_Base.h"
#include "TresEnemyEx351AvaterParam.h"
#include "TresEnemyEx351TimeRushComboDefine.h"
#include "TresAttack5_e_ex351_TimeRush.generated.h"

class UParticleSystem;
class UCurveFloat;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack5_e_ex351_TimeRush : public UTresAttack_e_ex351_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_SlowRateStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_OwnMoveCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_MoveCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AvaterFadeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AnimStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AfterImageVisibleTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ParticleAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyEx351AvaterParam> m_AvaterParams;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyEx351TimeRushComboDefine> m_TimeRushComboDefineList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_FirstVoiceList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_ResumeVoiceList;
    
    UPROPERTY()
    FTresEnemyEx351TimeRushComboDefine m_CurrentTimeRushComboDefine;
    
    UTresAttack5_e_ex351_TimeRush();
};

