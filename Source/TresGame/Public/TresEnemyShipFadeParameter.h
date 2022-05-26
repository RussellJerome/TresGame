#pragma once
#include "CoreMinimal.h"
#include "TresEnemyShipFadeParameter.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyShipFadeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_FadeAllName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_DriverFadeName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FadeTimeAppear;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FadeTimeAppearOnSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FadeTimeDisappear;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SwitchAtkCollValue;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SwitchBodyCollValue;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SwitchDamageSmokeValue;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartFadeTimeAfterEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MastFadeName0;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MastFadeName1;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MastFadeName2;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MastFadeName3;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MastFadeApplyHPRate0;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MastFadeApplyHPRate1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MastFadeApplyHPRate2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MastFadeTime0;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MastFadeTime1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MastFadeTime2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MastFadeTime3;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MastFadeDelayTime2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MastFadeOnDieDelayTime;
    
    TRESGAME_API FTresEnemyShipFadeParameter();
};

