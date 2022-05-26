#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "TresFriendLinkPoppingHolyProjectile.generated.h"

UCLASS(Abstract)
class ATresFriendLinkPoppingHolyProjectile : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fRisingThresholdHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fGravityScaleWhenRising;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fGravityScaleWhenFalling;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fLifeTimeWhenFalling;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fBattleAreaOutsideFallingThresholdHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector m_vBrakingVelocityScaleWhenFallingStarted;
    
public:
    ATresFriendLinkPoppingHolyProjectile();
};

