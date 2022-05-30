#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresPoppingHolyProjectileOverrideParameters.generated.h"

USTRUCT(BlueprintType)
struct FTresPoppingHolyProjectileOverrideParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fRisingThresholdHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fGravityScaleWhenFalling;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector m_vBrakingVelocityScaleWhenFallingStarted;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fInitialSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMaxSpeed;
    
    TRESGAME_API FTresPoppingHolyProjectileOverrideParameters();
};

