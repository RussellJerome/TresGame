#pragma once
#include "CoreMinimal.h"
#include "TresShipDamageParam.generated.h"

USTRUCT(BlueprintType)
struct FTresShipDamageParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_AttackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bActionCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_PitchRollPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_YawPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MovePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_WaitTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SpeedRateTime;
    
    TRESGAME_API FTresShipDamageParam();
};

