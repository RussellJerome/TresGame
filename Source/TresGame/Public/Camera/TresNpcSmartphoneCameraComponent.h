#pragma once
#include "CoreMinimal.h"
#include "TresDetectMarkerComponentBase.h"
#include "TresNpcSmartphoneCameraComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresNpcSmartphoneCameraComponent : public UTresDetectMarkerComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_AnimationNames;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AnimationAfterInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WaitTimeBeforeStart;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bTurnToCamera;
    
public:
    UTresNpcSmartphoneCameraComponent();
};

