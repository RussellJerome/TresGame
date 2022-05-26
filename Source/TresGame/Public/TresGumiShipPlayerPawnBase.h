#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipPlayerMovementType.h"
#include "TresGumiShipCharaPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETresGumiShipPlayerAccelerationType.h"
#include "TresGumiShipPlayerPawnBase.generated.h"

class UTresGumiShipPlayerSpringArmCompo;
class UTresGumiShipPlayerAccelerationBase;
class UTresGumiShipPlayerMovementCompoBase;
class UTresGumiShipSoundSetComponent;
class AActor;
class UTresGumiShipFSM;
class UTresGumiShipEffectSetComponent;
class UTresPlayerStateEventComponent;

UCLASS(Abstract)
class ATresGumiShipPlayerPawnBase : public ATresGumiShipCharaPawnBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresGumiShipChangeSpeed, const float, fOldSeed, const float, fNewSpeed, const float, fRatio);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipChangeAccelCompo, UTresGumiShipPlayerAccelerationBase*, pCompo);
    
    UPROPERTY(BlueprintAssignable)
    FTresGumiShipChangeAccelCompo m_OnChangeAccelCompoDispather;
    
    UPROPERTY(BlueprintAssignable)
    FTresGumiShipChangeSpeed m_OnChangeSpeedDispather;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipFSM* m_pFSM;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UTresGumiShipSoundSetComponent* m_pSoundSet;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresGumiShipPlayerMovementCompoBase* m_pMovementCompo;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresGumiShipPlayerAccelerationBase* m_pAcceleration;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresGumiShipPlayerSpringArmCompo* m_pCameraSpringArm;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresGumiShipEffectSetComponent* m_pEffectSet;
    
protected:
    UPROPERTY(Export, Transient)
    UTresPlayerStateEventComponent* m_pStateEvent;
    
public:
    ATresGumiShipPlayerPawnBase();
    UFUNCTION(BlueprintCallable)
    void SetOutsideMaxSpeed(float fSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementEnable(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void SetEventMode(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void SetAccelerationEnable(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void ResetOutsideMaxSpeed();
    
    UFUNCTION(BlueprintCallable)
    void RequestWarp(const FVector vLocation, const FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void RequestStop(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void RequestMaxSpeed();
    
    UFUNCTION(BlueprintCallable)
    void RequestForceStop(bool bIn);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool RemoteGumiShipPlayerStateEvent(FName EventName, AActor* inActor);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEventMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAvoiding() const;
    
    UFUNCTION(BlueprintPure)
    ETresGumiShipPlayerMovementType GetPrevMovementType() const;
    
    UFUNCTION(BlueprintPure)
    ETresGumiShipPlayerMovementType GetMovementType() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void _UndoMovementCompo(const bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void _SetCameraLagEnable(bool bLocation, bool bRotation);
    
    UFUNCTION(BlueprintCallable)
    void _SetCameraControllEnable(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void _SetAvoiding(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void _RequestCameraReset(const bool bImmediate);
    
    UFUNCTION()
    void _OnChnageSpeed(const float fOldSeed, const float fNewSpeed, const float fRatio);
    
    UFUNCTION(BlueprintCallable)
    void _ChangeMovementCompo(const ETresGumiShipPlayerMovementType eType, const bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void _ChangeAccelerationCompo(const ETresGumiShipPlayerAccelerationType eType, const bool bForce);
    
};

