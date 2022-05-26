#pragma once
#include "CoreMinimal.h"
#include "TresComNpcActTarget.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcActTarget {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_TargetName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinLength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxLength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLimitDir;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_RequiredNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPriorty;
    
    TRESGAME_API FTresComNpcActTarget();
};

