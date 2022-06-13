#pragma once
#include "CoreMinimal.h"
#include "TresAnimNotifyState_AttachEffect.h"
#include "TresEffectCustomAreaTriggerBox.h"
#include "TresAreaEffectData.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresAreaEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bNoUseDefaultAttachEffect: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresAreaCustonEffectsType> EffectsType;
    
    UPROPERTY(EditAnywhere)
    TArray<UParticleSystem*> SpawnParticleSystems;
    
    TRESGAME_API FTresAreaEffectData();
};

