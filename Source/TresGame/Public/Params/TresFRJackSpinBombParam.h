#pragma once
#include "CoreMinimal.h"
#include "TresFRJackSpinBombParam.generated.h"

USTRUCT(BlueprintType)
struct FTresFRJackSpinBombParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fBombRotate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBombLength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBombHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStruckBombSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStruckBombGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStruckBombHeight;
    
    TRESGAME_API FTresFRJackSpinBombParam();
};

