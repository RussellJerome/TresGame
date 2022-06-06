#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresParamDispatcherPostInterpChangeDelegate.h"
#include "TresParamDispatcherUpdateDelegate.h"
#include "TresParamDispatcher.generated.h"

UCLASS(Abstract)
class TRESGAME_API ATresParamDispatcher : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_DispatcherTag;
    
    UPROPERTY(BlueprintAssignable)
    FTresParamDispatcherPostInterpChangeDelegate OnPostInterpChangeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FTresParamDispatcherUpdateDelegate OnUpdateDelegate;
    
    UPROPERTY(Transient)
    bool m_Dirty;
    
    ATresParamDispatcher();
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdate();
    
};

