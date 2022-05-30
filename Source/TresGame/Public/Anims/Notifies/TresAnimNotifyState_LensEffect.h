#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_LensEffect.generated.h"

class AEmitterCameraLensEffectBase;

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_LensEffect : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AEmitterCameraLensEffectBase> m_LensEffectClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bLoopEnd: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_FadeTime;
    
public:
    UTresAnimNotifyState_LensEffect();
};

