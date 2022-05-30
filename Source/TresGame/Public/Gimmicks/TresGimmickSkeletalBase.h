#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "ETresGimmickLookAtType.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimInstance.h"
#include "ETresGimmickLookAtTrackingType.h"
#include "ETresAnimNotifyBpEventID.h"
#include "TresGimmickSkeletalBase.generated.h"

class UTresSkeletalMeshComponent;
class UTresRootComponent;
class UTresEffectAttachComponent;
class UTresAnimSet;
class UAnimationAsset;
class USQEX_KBD_Component;

UCLASS(Abstract)
class ATresGimmickSkeletalBase : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresEffectAttachComponent* MyEffectAtt;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnMontageStartedMCDelegate OnAnimationStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnMontageEndedMCDelegate OnAnimationEnded;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresGimmickLookAtTrackingType> m_GltTrackType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_LookAtRateMultiRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_LookAtParamA;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresGimmickLookAtType> m_GltLookAtType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UTresAnimSet*> m_AppendAnimSetMap;
    
public:
    ATresGimmickSkeletalBase();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveNotifyProjectileAttackHitBpEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveNotifyAttackHitBpEvent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAnimNotifyStartBpEvent(FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAnimNotifyEndBpEvent(FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAnimationStarted(UAnimationAsset* AnimAsset);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAnimationEnded(UAnimationAsset* AnimAsset, bool bInterrupted);
    
    UFUNCTION(BlueprintPure)
    USQEX_KBD_Component* GetKBDComponent() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_NotifyTiming(int32 InParam);
    
public:
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
    
};

