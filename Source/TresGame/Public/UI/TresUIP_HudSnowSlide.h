#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_HudSnowSlide.generated.h"

class UGFxObject;
class UTresASProxyTresControlsBitmapNumber;
class UAudioComponent;

UCLASS()
class UTresUIP_HudSnowSlide : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_CountDown;
    
    UPROPERTY(Transient)
    UGFxObject* m_GetTreasurePrizeWindow;
    
    UPROPERTY(Transient)
    UGFxObject* m_TreasurePrizeComplete;
    
    UPROPERTY(Transient)
    UGFxObject* m_TreasurePrizeCount;
    
    UPROPERTY(Transient)
    UGFxObject* m_PointAnimation;
    
    UPROPERTY(Transient)
    UGFxObject* m_PointDigitEffectAnimation;
    
    UPROPERTY(Transient)
    UGFxObject* m_PointDigitAnimation;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_PointBitmapNumber;
    
    UPROPERTY(Transient)
    UGFxObject* m_Result;
    
    UPROPERTY(Transient)
    UGFxObject* m_ClearTimeNewRecord;
    
    UPROPERTY(Transient)
    UGFxObject* m_TotalScoreNewRecord;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_ClearTimeMin;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_ClearTimeSec;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_ClearTimeMilliSec;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_ClearScore;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_TimeBonus;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_NoDamageBonus;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_TotalScore;
    
    UPROPERTY(Transient)
    UGFxObject* m_TreasureInfo;
    
    UPROPERTY(Transient)
    UGFxObject* m_RankEffect;
    
    UPROPERTY(Transient)
    UGFxObject* m_RankIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_RankIconEffect1;
    
    UPROPERTY(Transient)
    UGFxObject* m_RankIconEffect2;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* m_ResultRollSEAudioComponent;
    
public:
    UTresUIP_HudSnowSlide();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};

