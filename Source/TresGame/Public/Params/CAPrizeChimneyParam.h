#pragma once
#include "CoreMinimal.h"
#include "ETresDropItemID.h"
#include "UObject/NoExportTypes.h"
#include "CAPrizeChimneyParam.generated.h"

USTRUCT(BlueprintType)
struct FCAPrizeChimneyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_MaxHitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_spawnPrizeNumForNormalAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_spawnPrizeNumForDead;
    
    UPROPERTY(EditAnywhere)
    ETresDropItemID m_prizeKind;
    
    UPROPERTY(EditAnywhere)
    float m_InitSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_InitSpeedRand;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval m_PitchRange;
    
    UPROPERTY(EditAnywhere)
    float m_AirResistance;
    
    UPROPERTY(EditAnywhere)
    float m_PrizeLivingTime;
    
    TRESGAME_API FCAPrizeChimneyParam();
};

