#pragma once
#include "CoreMinimal.h"
#include "RunAwayShipParam.h"
#include "TresCharPawnBase.h"
#include "TresGimmickCA_RunAwayShipPawnOnFinishShootingSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickCA_RunAwayShipPawn.generated.h"

class UTresSkeletalMeshComponent;

UCLASS(Abstract)
class ATresGimmickCA_RunAwayShipPawn : public ATresCharPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRunAwayShipParam m_Parameter;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickCA_RunAwayShipPawnOnFinishShootingSignature OnFinishShooting;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresSkeletalMeshComponent* m_MastMesh;
    
public:
    ATresGimmickCA_RunAwayShipPawn();
    UFUNCTION(BlueprintCallable)
    void SetTurnRate(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetStopMovement(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShotRandamMoveDirectionFactor(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShotRandamLength(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShotRandamDistanceFactor(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShotInterval(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOffsetShotDistance(FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void SetNumProjectilePerFrame(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMinShotYaw(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMinShotPitchAngle(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMinShotDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMinSafeAreaYaw(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxYawSpeed(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxShotYaw(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxShotPitchDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxShotPitchAngle(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxShotDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSafeAreaYaw(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFade(FName ParamName, float fromValue, float toValue, float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultVelocity(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentRestTimer(float Value);
    
    UFUNCTION(BlueprintPure)
    bool IsStopMovement() const;
    
    UFUNCTION(BlueprintPure)
    float GetYawToPlayer2D() const;
    
    UFUNCTION(BlueprintPure)
    float GetTurnRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetShotRandamMoveDirectionFactor() const;
    
    UFUNCTION(BlueprintPure)
    float GetShotRandamLength() const;
    
    UFUNCTION(BlueprintPure)
    float GetShotRandamDistanceFactor() const;
    
    UFUNCTION(BlueprintPure)
    float GetShotInterval() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetOffsetShotDistance() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumProjectilePerFrame() const;
    
    UFUNCTION(BlueprintPure)
    float GetMinShotYaw() const;
    
    UFUNCTION(BlueprintPure)
    float GetMinShotPitchAngle() const;
    
    UFUNCTION(BlueprintPure)
    float GetMinShotDistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetMinSafeAreaYaw() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxYawSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxShotYaw() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxShotPitchDistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxShotPitchAngle() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxShotDistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxSafeAreaYaw() const;
    
    UFUNCTION(BlueprintPure)
    float GetDistanceToPlayer2D() const;
    
    UFUNCTION(BlueprintPure)
    float GetDefaultVelocity() const;
    
    UFUNCTION(BlueprintPure)
    float GetCannonRestTimer() const;
    
};

