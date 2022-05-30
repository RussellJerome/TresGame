#pragma once
#include "CoreMinimal.h"
#include "TresE_ex011ConnectEffectParam.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresE_ex011ConnectEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* ConnectParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* AppearParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* GlowParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float RespawnDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float FadeInTime;
    
    UPROPERTY(EditDefaultsOnly)
    float FadeOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    float OffsetDistance;
    
    TRESGAME_API FTresE_ex011ConnectEffectParam();
};

