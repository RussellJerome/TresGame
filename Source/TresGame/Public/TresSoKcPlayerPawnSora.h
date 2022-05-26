#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresPlayerPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresSoKcPlayerPawnSora.generated.h"

class UTresAnimSet;
class UCurveFloat;
class ATresSoKcKeyHoleGimmickActor;
class ATresCameraSoKc;
class UParticleSystem;
class ATresSoKcLightWaveProjectile;

UCLASS(Abstract)
class ATresSoKcPlayerPawnSora : public ATresPlayerPawnBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExecuteSpecificReactionCommandSignature, ATresSoKcKeyHoleGimmickActor*, TargetKeyHole);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDisplaySpecificReactionCommandSignature);
    
private:
    UPROPERTY(BlueprintAssignable)
    FDisplaySpecificReactionCommandSignature _OnDisplaySpecificReactionCommand;
    
    UPROPERTY(BlueprintAssignable)
    FExecuteSpecificReactionCommandSignature _OnExecuteSpecificReactionCommand;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTresAnimSet* m_pAppendAnimSet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UParticleSystem* m_pLightSphereEffectAsset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UParticleSystem* m_pKeyBladeBeamEffectAsset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresCameraSoKc> m_CameraClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresSoKcLightWaveProjectile> m_LightWaveProjectileClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* m_pLastLightCameraRotationCurveData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fCameraPitchUpperLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fCameraPitchLowerLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator m_CameraRotationMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator m_CameraRotateAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator m_CameraRotateDeceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fDefaultKeyBladeBeamLength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector m_vLightSphereEffectAttachOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fDotRangeToTargetDirectionForAimInterp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fDotRangeWithMovementDirectionForAimInterp;
    
public:
    ATresSoKcPlayerPawnSora();
private:
    UFUNCTION(BlueprintCallable)
    void _SetUserControllPermission(bool bIsUserControllAccept);
    
    UFUNCTION(BlueprintCallable)
    void _DetachKeyBladeBeamEffect();
    
    UFUNCTION(BlueprintCallable)
    void _ChangeKeyHoleConnectMissionState();
    
};

