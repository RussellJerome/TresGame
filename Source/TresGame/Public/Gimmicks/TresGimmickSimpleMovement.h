#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSimpleMovementOnFinishMoveSignatureDelegate.h"
#include "Components/ActorComponent.h"
#include "ETresGimmickSimpleMovementMoveType.h"
#include "UObject/NoExportTypes.h"
#include "ETresGimmickSimpleMovementAcclType.h"
#include "ETresGimmickSimpleMovementDirAxis.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickSimpleMovement.generated.h"

class AActor;
class UTresGimmickSimpleMovementProgressInterface;
class ITresGimmickSimpleMovementProgressInterface;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGimmickSimpleMovement : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TScriptInterface<ITresGimmickSimpleMovementProgressInterface> m_Progress;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bEnableMove;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresGimmickSimpleMovementMoveType m_MoveType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresGimmickSimpleMovementAcclType m_AcclType;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    AActor* m_MoveTargetActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_InitialVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_Acceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* m_UnitAccelerationCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MaxVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MaxMoveLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresGimmickSimpleMovementDirAxis m_Direction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bEnableSweep;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_HomingRotSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* m_UnitParabolaCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ParabolaHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* m_UnitInterpRotationCurve;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickSimpleMovementOnFinishMoveSignature OnFinishMove;
    
    UTresGimmickSimpleMovement();
    UFUNCTION(BlueprintCallable)
    void BP_StopMove();
    
    UFUNCTION(BlueprintCallable)
    void BP_StartMove();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTargetLocation(const FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMoveType(ETresGimmickSimpleMovementMoveType Type);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMoveTargetActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMaxMoveVelocity(float Velocity);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetEnableSweep(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetAcceleration(float Acceleration);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnFinishMove();
    
    UFUNCTION(BlueprintPure)
    FVector BP_GetTargetLocation() const;
    
    UFUNCTION(BlueprintPure)
    FTransform BP_GetStartTransform() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetMaxMoveVelocity() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetAcceleration() const;
    
};

