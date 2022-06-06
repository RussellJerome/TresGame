#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEffectUnit.h"
#include "Engine/EngineTypes.h"
#include "TresSimpleEffect.generated.h"

class UTresRootComponent;

UCLASS()
class ATresSimpleEffect : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEffectUnit> MyEffects;
    
    UPROPERTY(BlueprintReadOnly)
    FHitResult SurfaceHit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLoopEndTime;
    
    ATresSimpleEffect();
};

