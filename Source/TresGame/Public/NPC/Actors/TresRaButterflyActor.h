#pragma once
#include "CoreMinimal.h"
#include "TresMapEffectActor.h"
#include "TresRaButterflyActor.generated.h"

class UTresDebugEditorRaButterflyActorComponent;

UCLASS()
class ATresRaButterflyActor : public ATresMapEffectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UTresDebugEditorRaButterflyActorComponent* EditorInfoComp;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EscapeDistance;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AppearDistance;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float AppearTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BattleModeCheckDistance;
    
    ATresRaButterflyActor();
};

