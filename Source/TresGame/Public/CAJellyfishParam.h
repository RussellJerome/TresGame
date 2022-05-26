#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CAJellyfishParam.generated.h"

USTRUCT(BlueprintType)
struct FCAJellyfishParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_WaveUPDownTimeMulti;
    
    UPROPERTY(EditAnywhere)
    float m_WaveUPDownLength;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval m_TickEnableRange;
    
    UPROPERTY(EditAnywhere)
    FName m_AttackName;
    
    UPROPERTY(EditAnywhere)
    float m_AttackInterval;
    
    TRESGAME_API FCAJellyfishParam();
};

