#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresComNpcReaction.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcReaction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMinRange;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxRange;
    
    UPROPERTY(EditAnywhere)
    float m_fLimitDir;
    
    UPROPERTY(EditAnywhere)
    float m_fInRange;
    
    UPROPERTY(EditAnywhere)
    float m_fInDir;
    
    UPROPERTY(EditAnywhere)
    float m_fCoolDownTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> m_IgnorePoints;
    
    TRESGAME_API FTresComNpcReaction();
};

