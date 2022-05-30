#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresStateBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresLocomotionMode.h"
#include "Engine/EngineTypes.h"
#include "TresLocomotionDefinitionBase.generated.h"

class UNavigationQueryFilter;

UCLASS(Abstract, NotPlaceable)
class UTresLocomotionDefinitionBase : public UTresStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_MinSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Acceleration;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_MaxRotationSpeed;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool m_bUseAngularAcceleration;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_AngularAcceleration;
    
protected:
    UPROPERTY(VisibleDefaultsOnly)
    bool m_bRotInterpolation;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_RotInterpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresLocomotionMode::Type> m_Mode;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_CorridorCheckInterval;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    int32 m_SmoothSampleSize;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EMovementMode> m_EntryMovementMode;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EMovementMode> m_MovementMode;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EMovementMode> m_ExitMovementMode;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_StateMachineNumber;
    
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UNavigationQueryFilter> m_FilterClass;
    
    UTresLocomotionDefinitionBase();
};

