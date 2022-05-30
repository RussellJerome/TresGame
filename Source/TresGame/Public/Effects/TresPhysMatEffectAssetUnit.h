#pragma once
#include "CoreMinimal.h"
#include "TresPhysMatEffectAssetUnit.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresPhysMatEffectAssetUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableInnerWater: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NmlSpeedParam;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_NmlEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HighSpeedParam;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_HighEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_StillEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EnterEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_LeaveEffect;
    
    TRESGAME_API FTresPhysMatEffectAssetUnit();
};

