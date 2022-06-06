#pragma once
#include "CoreMinimal.h"
#include "TresFriendLinkPawnFlareForceData.generated.h"

USTRUCT(BlueprintType)
struct FTresFriendLinkPawnFlareForceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearTimer;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFireTimer;
    
    TRESGAME_API FTresFriendLinkPawnFlareForceData();
};

