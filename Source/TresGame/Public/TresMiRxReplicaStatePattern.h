#pragma once
#include "CoreMinimal.h"
#include "ETresStateID.h"
#include "TresMiRxReplicaStateInfo.h"
#include "TresMiRxReplicaStatePattern.generated.h"

USTRUCT(BlueprintType)
struct FTresMiRxReplicaStatePattern {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool m_bIsFirstTimeUseOnly;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_dTransitionPercent;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresStateID> m_eStateIDWhenInterrupt;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresMiRxReplicaStateInfo> m_StateInfos;
    
public:
    TRESGAME_API FTresMiRxReplicaStatePattern();
};

