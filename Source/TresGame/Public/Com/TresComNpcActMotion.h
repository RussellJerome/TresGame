#pragma once
#include "CoreMinimal.h"
#include "TresComNpcActMotion.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcActMotion {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_AnimName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBlendInTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bLoop: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableRootMotion: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bWaitMotion: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bWaitTurn: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bSetIdle: 1;
    
    TRESGAME_API FTresComNpcActMotion();
};

