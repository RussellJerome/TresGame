#pragma once
#include "CoreMinimal.h"
#include "TresComNpcActLookTarget.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcActLookTarget {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_TargetName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPriorty;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLookAtBlendTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinDegree;
    
    TRESGAME_API FTresComNpcActLookTarget();
};

