#pragma once
#include "CoreMinimal.h"
#include "TresComNpcActMoveNormal.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcActMoveNormal {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_TargetName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLimitTimer;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nWalkMode;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bNextMove: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDisableAvoid: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bLoopMode: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPriorty;
    
    TRESGAME_API FTresComNpcActMoveNormal();
};

