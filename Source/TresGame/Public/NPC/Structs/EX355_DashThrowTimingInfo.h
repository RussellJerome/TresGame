#pragma once
#include "CoreMinimal.h"
#include "EX355_DashThrowTimingInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX355_DashThrowTimingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_iIndex;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iRoamCount;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iAttackCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRoamTime;
    
    UPROPERTY()
    bool m_bAttack;
    
    TRESGAME_API FEX355_DashThrowTimingInfo();
};

