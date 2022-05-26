#pragma once
#include "CoreMinimal.h"
#include "ETresMiRxReplicaManagerStateKind.h"
#include "TresMiRxReplicaStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresMiRxReplicaStateInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_fCoolDownTime;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresMiRxReplicaManagerStateKind> m_eNextState;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_fCommonParams;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<bool> m_bCommonParams;
    
public:
    TRESGAME_API FTresMiRxReplicaStateInfo();
};

