#pragma once
#include "CoreMinimal.h"
#include "TresNpc_n_ex023_TractionData.generated.h"

USTRUCT(BlueprintType)
struct FTresNpc_n_ex023_TractionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString m_Comment;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMaxVerticalTractionDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMaxHorizontalTractionDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fVerticalOffsetFromTarget;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fHorizontalOffsetFromTarget;
    
    TRESGAME_API FTresNpc_n_ex023_TractionData();
};

