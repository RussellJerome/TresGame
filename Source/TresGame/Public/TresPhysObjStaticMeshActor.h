#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "ETresChrUniqueID.h"
#include "ETresEnemyUniqueID.h"
#include "TresPhysObjStaticMeshActor.generated.h"

class AController;
class APhysicsVolume;
class UPrimitiveComponent;
class AActor;
class UDamageType;

UCLASS()
class ATresPhysObjStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDisappearAfterWake: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDisappearLeaveInitLoc: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDisappearLeaveInitPhysVolume: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDisappearInnerWaterPhysVolume: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDisappearInnerOceanPhysVolume: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDisappearOnTakeDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DisappearAfterWakeTimeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DisappearLeaveDistanceSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_DisappearOnTakeDamageSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bAutoDisappearEffectProc: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DisappearFadeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_DisappearFadeParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bWakeOnlyDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ETresChrUniqueID> m_ApplyDamageChrUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ETresEnemyUniqueID> m_ApplyDamageEnemyUniqueID;
    
public:
    ATresPhysObjStaticMeshActor();
    UFUNCTION(BlueprintCallable)
    void StartDisappear(bool bImmediate);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePreDisappear();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveDisappearTick(float DeltaSeconds);
    
protected:
    UFUNCTION()
    void OnMeshPhysVolumeChange(APhysicsVolume* NewVolume);
    
    UFUNCTION()
    void OnMeshComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName);
    
    UFUNCTION()
    void OnMeshComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    UFUNCTION()
    void OnActorTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
};

