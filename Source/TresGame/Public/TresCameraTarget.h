#pragma once
#include "CoreMinimal.h"
#include "TresCameraTargetInfo.h"
#include "TresCameraBase.h"
#include "ETresCameraTargetWallCheckType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraTarget.generated.h"

class ATresAccompanyPawnBase;
class AActor;
class UTresLockonTargetComponent;

UCLASS(Abstract)
class ATresCameraTarget : public ATresCameraBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FVector m_LookPosition;
    
    UPROPERTY(EditAnywhere)
    FVector m_CameraLocalOffset;
    
    UPROPERTY(EditAnywhere)
    FTresCameraTargetInfo m_TargetInfo;
    
public:
    ATresCameraTarget();
    UFUNCTION(BlueprintCallable)
    void SetTresCameraTargetInfluenceRotationValue(bool bYaw, bool bPitch, bool bRoll, FRotator TargetRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetTresCameraTargetInfluenceRotation(bool bAlways, float AlWaysTime, bool bYaw, bool bPitch, bool bRoll);
    
    UFUNCTION(BlueprintCallable)
    void SetTresCameraTargetInfluenceLocationXYZ(bool bAlwaysXY, bool bAlwaysZ);
    
    UFUNCTION(BlueprintCallable)
    void SetTresCameraTargetInfluenceLocation(bool bAlways);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetBoneName(FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetOutsideWallCheckType(TEnumAsByte<ETresCameraTargetWallCheckType> WallCheckType, FVector TargetPos, FName TargetBoneName, ATresAccompanyPawnBase* TargetAccompanyPawn);
    
    UFUNCTION(BlueprintPure)
    FVector GetTargetOffset() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetTargetLocalOffset() const;
    
    UFUNCTION(BlueprintPure)
    FName GetTargetBoneName() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDefaultTargetOffset() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDefaultTargetLocalOffset() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDefaultCameraLocalOffset() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCameraLocalOffset() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableCollision(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraLocalOffset(FVector CameraLocalOffset, float Time);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTargetOffset(FVector TargetOffset, float Time);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTargetLocalOffset(FVector TargetLocalOffset, float Time);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTargetComponent(UTresLockonTargetComponent* pTargetComp);
    
    UFUNCTION(BlueprintCallable)
    void BP_RemoveCollisionIgnoredActor(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    bool BP_IsAttachTresCameraTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_AttachTresCameraTarget(bool bAttach);
    
    UFUNCTION(BlueprintCallable)
    void BP_AddCollisionIgnoredActor(AActor* Actor);
    
};

