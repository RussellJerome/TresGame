#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "Animation/AnimInstance.h"
#include "TresGimmickDitherFadeInterface.h"
#include "Animation/AnimInstance.h"
#include "TresGimmickSimpleSkeletalBase.generated.h"

class UTresSkeletalMeshComponent;
class UAnimationAsset;

UCLASS(Abstract, Config=Game)
class ATresGimmickSimpleSkeletalBase : public ATresGimmickActor, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnMontageStartedMCDelegate OnAnimationStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnMontageEndedMCDelegate OnAnimationEnded;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyMesh;
    
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName m_GimmickClipDitherParamName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_IsGimmickClipDitherParamInvert;
    
    ATresGimmickSimpleSkeletalBase();
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAnimationStarted(UAnimationAsset* AnimAsset);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAnimationEnded(UAnimationAsset* AnimAsset, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    bool BP_IsAnimEnd(FName InSlotName);
    
    UFUNCTION(BlueprintCallable)
    void BP_AnimStop(FName InSlotName);
    
    UFUNCTION(BlueprintCallable)
    void BP_AnimSetCurrentTime(float InTime, FName InSlotName);
    
    UFUNCTION(BlueprintCallable)
    void BP_AnimPlayAnimset(FName InAnimName, FName InSlotName, float InBlendInTime, bool InLoop, int32 InEffectGroup, float InPlayRate, int32 InVoiceGroup);
    
    UFUNCTION(BlueprintCallable)
    void BP_AnimPlayAnimAsset(UAnimationAsset* InAsset, FName InSlotName, float InBlendInTime, bool InLoop, int32 InEffectGroup, float InPlayRate, int32 InVoiceGroup);
    
    UFUNCTION(BlueprintCallable)
    float BP_AnimGetCurrentTime(FName InSlotName);
    
protected:
    UFUNCTION()
    void _OnAnimStarted(UAnimationAsset* InAnimAsset);
    
    UFUNCTION()
    void _OnAnimEnded(UAnimationAsset* InAnimAsset, bool bInterrupted);
    
    
    // Fix for true pure virtual functions not being implemented
};

