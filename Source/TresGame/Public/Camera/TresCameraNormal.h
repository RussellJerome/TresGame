#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraRotTarget.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraNormal.generated.h"

class UObject;
class ATresCameraNormal;

UCLASS()
class ATresCameraNormal : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_LimitPitchMin;
    
    UPROPERTY(EditAnywhere)
    float m_LimitPitchMax;
    
    UPROPERTY(EditAnywhere)
    float m_LimitYawMax;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bLimitYawBase: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WallDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AutoTurningPower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveRotationWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bMoveRotation: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bWorldBaseRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_NonBattleRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_NonBattleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_NearDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_NearTargetOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_NearTargetOffsetZDistance;
    
    UPROPERTY(EditAnywhere)
    float m_LockonLimitPitchMin;
    
    UPROPERTY(EditAnywhere)
    float m_LockonLimitPitchMax;
    
    UPROPERTY(EditAnywhere)
    float m_LockonLimitYawMax;
    
    UPROPERTY(EditAnywhere)
    float m_RotationSpeedMaxDistance;
    
    UPROPERTY(EditAnywhere)
    float m_RotationSpeedMinDistance;
    
    UPROPERTY(EditAnywhere)
    float m_RotationSpeedMaxRate;
    
    UPROPERTY(EditAnywhere)
    FRotator m_LockonRotation;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bLockonMoveRotation: 1;
    
    UPROPERTY(EditAnywhere)
    float m_LockonAutoRotationLowDist;
    
    UPROPERTY(EditAnywhere)
    float m_LockonAutoRotationHighDist;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bLockonAutoRotationDist3: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bLockonTargetOffset: 1;
    
    UPROPERTY(EditAnywhere)
    float m_LockonTargetOffsetZ;
    
public:
    ATresCameraNormal();
    UFUNCTION(BlueprintCallable)
    void SetLimitPitch(float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    void SetAimRotation(FRotator Rot, bool bWorld, float Time);
    
    UFUNCTION(BlueprintCallable)
    static ATresCameraNormal* BP_SpawnTresCameraNormal(UObject* WorldContextObject, TSubclassOf<ATresCameraNormal> CameraClass, const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTargetMaxSpeed(float TargetMaxSpeed);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetLockonLimitYaw(float LimitYaw);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetLockonDistance(float Distance, float Time);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetLockonBaseRotation(FRotator BaseRotation, bool bWorldPitch, bool bApplyAllPitch, bool bForce, float Time);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetAutoTurningPower(float TurningPower);
    
    UFUNCTION(BlueprintCallable)
    void BP_ResetLockonLimitYaw();
    
    UFUNCTION(BlueprintCallable)
    void BP_ResetLockonDistance(float Time);
    
    UFUNCTION(BlueprintCallable)
    void BP_ResetLockonBaseRotation(bool bForce, float Time);
    
    UFUNCTION(BlueprintCallable)
    bool BP_IsLockon();
    
    UFUNCTION(BlueprintPure)
    float BP_GetLockonDistance() const;
    
    UFUNCTION(BlueprintCallable)
    FRotator BP_GetLockonBaseRotation();
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableWorldBaseRotation(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableMoveRotation(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableLockonMoveRotation(bool bEnable);
    
};

