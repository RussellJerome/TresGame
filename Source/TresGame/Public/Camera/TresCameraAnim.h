#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraTarget.h"
#include "ViewTargetTransitionParamsEx.h"
#include "Engine/LatentActionManager.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraAnim.generated.h"

class ASQEX_CameraUpVector;
class UCameraAnimInst;
class ATresCameraAnim;
class UCameraAnim;
class ASQEX_CameraInterest;
class UObject;

UCLASS()
class ATresCameraAnim : public ATresCameraTarget {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UCameraAnimInst* m_CamAnimIns;
    
protected:
    UPROPERTY(Transient)
    ASQEX_CameraInterest* m_CameraInterest;
    
    UPROPERTY(Transient)
    ASQEX_CameraUpVector* m_CameraUpVector;
    
public:
    ATresCameraAnim();
    UFUNCTION(BlueprintCallable, meta = (LatentInfo = "LatentInfo"))
    void WaitPlayEnd(bool bDummy, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void StartTresCameraAnim(UCameraAnim* Anim, bool bLoop, bool bTakeover, FViewTargetTransitionParamsEx TransitionParams, bool bAutoEnd, bool bEndTakeover, FViewTargetTransitionParamsEx EndTransitionParams);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
    static ATresCameraAnim* BP_SpawnTresCameraAnim(UObject* WorldContextObject, TSubclassOf<ATresCameraAnim> CameraClass, const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraAnimPlayZeroFrame(bool bEbnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraAnimCtrl(bool bEnable, float WaitTime, float ReturnTime, float LimitPitchMin, float LimitPitchMax);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraAnimBaseOffset(FVector offsetLocation, FRotator OffsetRotation);
    
};

