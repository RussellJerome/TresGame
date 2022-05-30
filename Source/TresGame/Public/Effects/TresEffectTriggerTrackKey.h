#pragma once
#include "CoreMinimal.h"
#include "ETresEffectTriggerTrack_TriggerType.h"
#include "UObject/NoExportTypes.h"
#include "TresEffectTriggerTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FTresEffectTriggerTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Time;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresEffectTriggerTrack_TriggerType> m_TriggerType;
    
    UPROPERTY(EditAnywhere)
    float m_FadeTime;
    
    UPROPERTY(EditAnywhere)
    uint8 bChangeColor: 1;
    
    UPROPERTY(EditAnywhere)
    FVector ParticleColor;
    
    UPROPERTY(EditAnywhere)
    float ParticleAlpha;
    
    TRESGAME_API FTresEffectTriggerTrackKey();
};

