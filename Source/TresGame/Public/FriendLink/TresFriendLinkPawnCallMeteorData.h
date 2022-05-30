#pragma once
#include "CoreMinimal.h"
#include "TresFriendLinkPawnCallMeteorData.generated.h"

USTRUCT(BlueprintType)
struct FTresFriendLinkPawnCallMeteorData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fBaseYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStartLength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetLength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStartTimer;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInitialSpeed;
    
    TRESGAME_API FTresFriendLinkPawnCallMeteorData();
};

