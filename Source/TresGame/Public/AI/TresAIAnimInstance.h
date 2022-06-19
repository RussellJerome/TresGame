#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresCharAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "ETresTurnMode.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresAIAnimInstance.generated.h"

class UAnimationAsset;
class UObject;

UCLASS(NonTransient)
class UTresAIAnimInstance : public UTresCharAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bUseCodeDrivenAnimation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LocomotionStateMachineIndex;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator CurrentFacingOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator DesiredFacingOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DesiredVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bUseOmnidirectionalMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bUseQuickStop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMovementMode> DesiredLocomotionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETresTurnMode::Type> DesiredTurnMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StopDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UseRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RootMotionForwardRunEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bIsJumpingOrFalling: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bIsPreciseArrival: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bIsAbortMove: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bIsFastAbort: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<EMovementMode> CurrentLocomotionMode;
    
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<ETresTurnMode::Type> CurrentTurnMode;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator LastFacingOrientation;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator LastDesiredMovementDirection;
    
    UPROPERTY(BlueprintReadWrite)
    float DeltaFacingYaw;
    
    UPROPERTY(BlueprintReadWrite)
    float DeltaMovementYaw;
    
    UPROPERTY(BlueprintReadWrite)
    float DesiredFacingYaw;
    
    UPROPERTY(BlueprintReadWrite)
    float DesiredVelocityXY;
    
    UPROPERTY(BlueprintReadWrite)
    float DesiredVelocityZ;
    
    UPROPERTY(BlueprintReadWrite)
    uint32 bIsIdle: 1;
    
public:
    UTresAIAnimInstance();
    UFUNCTION(BlueprintPure)
    static FTransform ExtractRootMotion(UObject* WorldContextObject, UAnimationAsset* InAnimAsset, FVector inInput, FColor DebugColor);
    
};

