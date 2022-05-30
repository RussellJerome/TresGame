#pragma once
#include "CoreMinimal.h"
#include "TresVehiclePawnBase.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickBalanceBall.generated.h"

class USceneComponent;
class UParticleSystemComponent;
class USphereComponent;
class UPrimitiveComponent;
class UCapsuleComponent;
class AActor;
class ATresCharPawnBase;

UCLASS()
class ATresGimmickBalanceBall : public ATresVehiclePawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* BallRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* SignEffect;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* TickSensor;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapsuleComponent* BlockCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ParamSpeedDumping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ParamAccelSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ParamReflection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ParamBallSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ParamMoveThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_CanbePushed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_PawnPushPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AttackPushPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ReturnToInitialWhenCutScenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_CheckSpawnPoint;
    
    ATresGimmickBalanceBall();
    UFUNCTION(BlueprintCallable)
    void SetSensorEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreLanding(bool InIgnore);
    
    UFUNCTION(BlueprintNativeEvent)
    void SetFadeParam(float Param);
    
    UFUNCTION(BlueprintCallable)
    void SetEmphasis(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAttackName(FName AttackName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetCollisionEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachmentComp(USceneComponent* pAttachComp);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnReflectBalanceBall(const FHitResult& Impact);
    
private:
    UFUNCTION()
    void OnEndSensorOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginSensorOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION()
    void NotifyChangeGimmickPause(bool bPause);
    
protected:
    UFUNCTION()
    void NotifyChangeGimmickActionImpl(bool bShow);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void NotifyChangeBallSpeed(const FVector& Speed, float fRatio);
    
    UFUNCTION(BlueprintNativeEvent)
    void NotifyChangeBallEntried(bool Entry);
    
    UFUNCTION(BlueprintNativeEvent)
    USphereComponent* GetEntrySensorComponent();
    
    UFUNCTION(BlueprintCallable)
    float GetBalanceBallSize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndOverlap(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginOverlap(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintCallable)
    void BalanceBallRemoveCollisionShape(const FName InTagName, bool bUpdate);
    
    UFUNCTION(BlueprintCallable)
    void BalanceBallAppendCollisionShape(const FName InTagName, FVector InSize, FVector InRelativeLocaiton, FRotator InRelativeRotation, bool bUpdate);
    
};

