#pragma once
#include "CoreMinimal.h"
#include "TresLgRxRushData.h"
#include "TresLgRxPhaseData.generated.h"

USTRUCT(BlueprintType)
struct FTresLgRxPhaseData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_Damage;
    
    UPROPERTY(EditAnywhere)
    float m_AttackRate;
    
    UPROPERTY(EditAnywhere)
    int32 m_AttackCountMin;
    
    UPROPERTY(EditAnywhere)
    int32 m_AttackCountMax;
    
    UPROPERTY(EditAnywhere)
    int32 m_HeavyAttackRate;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresLgRxRushData> m_RushData;
    
    TRESGAME_API FTresLgRxPhaseData();
};

