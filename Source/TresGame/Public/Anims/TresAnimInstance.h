#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ETresFaceAnimType.h"
#include "LastPlayedInfo.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETresFaceAnimPlayPriority.h"
#include "ETresRiskDodgeType.h"
#include "TresAnimInstance.generated.h"

class UTresAnimSet;
class ATresCharPawnBase;
class ATresPawnBase;
class UAnimMontage;
class ATresGimmickSkeletalBase;
class UAnimSequenceBase;
class UBlendSpaceBase;

UCLASS(NonTransient)
class TRESGAME_API UTresAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<UTresAnimSet*> MyAnimSets;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UTresAnimSet*> m_SubAnimSets;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<UTresAnimSet*> m_ReplaceAnimSets;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<UTresAnimSet*> m_ReplaceAnimSets2;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<UTresAnimSet*> m_AppendAnimSetList;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<UTresAnimSet*> m_WorldAppendAnimSetList;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<UTresAnimSet*> m_ReplaceMatineeAnimSets;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<UTresAnimSet*> m_ReplaceSubAnimSets;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_CacheStartPoseAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_DefaultAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDefaultAnimAlwaysLoopPlay: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDefaultAnimCheckSame: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bAnimStopIfAnimAssetIsNone: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FName AnimPlayUseSlotNodeName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_FaceAnimSlotName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_LipAnimSlotName;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bAutoPlayFaceAnim: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresFaceAnimType> m_AutoPlayFaceAnimType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AutoPlayFaceAnimInterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bAutoPlayFaceAnimLoop: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bKeepAnimMorphTargetCurveValue: 1;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<FName> m_ActiveSlots;
    
    UPROPERTY(Transient)
    FName m_DefaultSlotGroupName;
    
    UPROPERTY(Transient)
    FName m_FaceAnimSlotGroupName;
    
    UPROPERTY(Transient)
    FName m_LipAnimSlotGroupName;
    
    UPROPERTY(DuplicateTransient, Transient)
    TMap<FName, FLastPlayedInfo> m_LastPlayedInfo;
    
public:
    UTresAnimInstance();
    UFUNCTION(BlueprintPure)
    ATresPawnBase* TryGetTresPawnOwner();
    
    UFUNCTION(BlueprintPure)
    ATresGimmickSkeletalBase* TryGetTresGimmickSkeletalOwner();
    
    UFUNCTION(BlueprintPure)
    ATresCharPawnBase* TryGetTresCharPawnOwner();
    
    UFUNCTION(BlueprintCallable)
    float SQEX_PlaySlotAnimation(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, bool InLoop, float InPlayRate, bool InRootMotion, float InRootMoveScaleXY, float InRootMoveScaleZ);
    
    UFUNCTION(BlueprintCallable)
    float SQEX_Montage_Play(UAnimMontage* MontageToPlay, float InBlendInTime, float InPlayRate, float InRootMoveScaleXY, float InRootMoveScaleZ);
    
    UFUNCTION(BlueprintPure)
    bool SQEX_IsAnimLoop(FName InSlotName) const;
    
    UFUNCTION(BlueprintPure)
    bool SQEX_IsAnimEnd(FName InSlotName) const;
    
    UFUNCTION(BlueprintCallable)
    void SQEX_FaceAnimStop(float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_FaceAnimSetEyeRot(const FRotator& InEyeRot, float InAlpha);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_FaceAnimSetCurrentTime(float InTime);
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_FaceAnimSetBlendSpaceParam(const FVector& InBlendParam);
    
    UFUNCTION(BlueprintCallable)
    float SQEX_FaceAnimPlayType(TEnumAsByte<ETresFaceAnimType> InAnimType, float InBlendInTime, bool InLoop, float InPlayRate, const FVector& InBlendParam, bool InSameCheck, TEnumAsByte<ETresFaceAnimPlayPriority> InPlayPriority);
    
    UFUNCTION(BlueprintCallable)
    float SQEX_FaceAnimPlay(FName InAnimName, float InBlendInTime, bool InLoop, float InPlayRate, const FVector& InBlendParam, bool InSameCheck, TEnumAsByte<ETresFaceAnimPlayPriority> InPlayPriority);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_FaceAnimLipStop(float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_FaceAnimLipSetCurrentTime(float InTime);
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_FaceAnimLipSetBlendSpaceParam(const FVector& InBlendParam);
    
    UFUNCTION(BlueprintCallable)
    float SQEX_FaceAnimLipPlayType(TEnumAsByte<ETresFaceAnimType> InAnimType, float InBlendInTime, bool InLoop, float InPlayRate, const FVector& InBlendParam, bool InSameCheck, TEnumAsByte<ETresFaceAnimPlayPriority> InPlayPriority);
    
    UFUNCTION(BlueprintCallable)
    float SQEX_FaceAnimLipPlay(FName InAnimName, float InBlendInTime, bool InLoop, float InPlayRate, const FVector& InBlendParam, bool InSameCheck, TEnumAsByte<ETresFaceAnimPlayPriority> InPlayPriority);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_FaceAnimEyeStop(float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_FaceAnimEyeSetCurrentTime(float InTime);
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_FaceAnimEyeSetBlendSpaceParam(const FVector& InBlendParam);
    
    UFUNCTION(BlueprintCallable)
    float SQEX_FaceAnimEyePlayType(TEnumAsByte<ETresFaceAnimType> InAnimType, float InBlendInTime, bool InLoop, float InPlayRate, const FVector& InBlendParam, bool InSameCheck, TEnumAsByte<ETresFaceAnimPlayPriority> InPlayPriority);
    
    UFUNCTION(BlueprintCallable)
    float SQEX_FaceAnimEyePlay(FName InAnimName, float InBlendInTime, bool InLoop, float InPlayRate, const FVector& InBlendParam, bool InSameCheck, TEnumAsByte<ETresFaceAnimPlayPriority> InPlayPriority);
    
    UFUNCTION(BlueprintCallable)
    float SQEX_BlendSpace_Play(UBlendSpaceBase* BlendSpaceToPlay, FName InSlotNodeName, float InBlendInTime, bool InLoop, const FVector InBlendParam, float InPlayRate, bool InRootMotion, float InRootMoveScaleXY, float InRootMoveScaleZ);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_AnimStop(FName InSlotName, float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_AnimSetRootTransScale(FName InSlotName, float InXY, float InZ);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_AnimSetCurrentTime(FName InSlotName, float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_AnimSetCurrentPlayRate(FName InSlotName, float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_AnimSetBlendSpaceParam(FName InSlotName, float InX, float InY, float InZ);
    
    UFUNCTION(BlueprintCallable)
    float SQEX_AnimPlayAnimset(FName InAnimName, FName InSlotNodeName, float InBlendInTime, bool InLoop, float InPlayRate, bool InRootMotion, float InRootMoveScaleXY, float InRootMoveScaleZ);
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_AnimJumpToSection(FName InSlotName, const FName InSectionName, bool bJumpToSectionEnd);
    
    UFUNCTION(BlueprintPure)
    float SQEX_AnimGetCurrentTime(FName InSlotName) const;
    
    UFUNCTION(BlueprintPure)
    FName SQEX_AnimGetCurrentSectionName(FName InSlotName) const;
    
    UFUNCTION(BlueprintPure)
    float SQEX_AnimGetCurrentPlayRate(FName InSlotName) const;
    
    UFUNCTION(BlueprintPure)
    float SQEX_AnimGetCurrentLength(FName InSlotName) const;
    
    UFUNCTION(BlueprintPure)
    bool SQEX_AnimGetCurrentBlendParamMinMax(FName InSlotName, FVector& OutParamMin, FVector& OutParamMax) const;
    
    UFUNCTION(BlueprintPure)
    bool SQEX_AnimGetBlendParamMinMax(const FName InAnimName, FVector& OutParamMin, FVector& OutParamMax) const;
    
    UFUNCTION(BlueprintPure)
    float SQEX_AnimGetAnimSequenceLength(const FName InAnimName) const;
    
    UFUNCTION(BlueprintPure)
    float SQEX_AnimGetAnimLength(const FName InAnimName) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTresEventSkip();
    
    UFUNCTION(BlueprintCallable)
    void NotifyStartTurnToTarget(int32 InIndex, float inTurnSpeed);
    
    UFUNCTION(BlueprintCallable)
    void NotifyStartTraction();
    
    UFUNCTION(BlueprintCallable)
    void NotifyStartReverseLeg();
    
    UFUNCTION(BlueprintCallable)
    void NotifyStartLookAt(float InInterpTime);
    
    UFUNCTION(BlueprintCallable)
    void NotifyStartIK(float InInterpTime, float InTargetAlpha);
    
    UFUNCTION(BlueprintCallable)
    void NotifyStartFootStep(const FName InSocketName, const FVector& InLocationOffset);
    
    UFUNCTION(BlueprintCallable)
    void NotifyShot(FName InProjectileName, FName InSocketName, int32 InLocationIndex);
    
    UFUNCTION(BlueprintCallable)
    void NotifyLandStateEnded();
    
    UFUNCTION(BlueprintCallable)
    void NotifyJumpStart();
    
    UFUNCTION(BlueprintCallable)
    void NotifyFaceAt();
    
    UFUNCTION(BlueprintCallable)
    void NotifyEndTurnToTarget();
    
    UFUNCTION(BlueprintCallable)
    void NotifyEndTraction();
    
    UFUNCTION(BlueprintCallable)
    void NotifyEndReverseLeg();
    
    UFUNCTION(BlueprintCallable)
    void NotifyEndLookAt(float InInterpTime);
    
    UFUNCTION(BlueprintCallable)
    void NotifyEndIK(float InInterpTime);
    
    UFUNCTION(BlueprintCallable)
    void NotifyEndFootStep(const FName InSocketName, const FVector& InLocationOffset);
    
    UFUNCTION(BlueprintCallable)
    void NotifyEnableInput();
    
    UFUNCTION(BlueprintCallable)
    void NotifyEnableChange();
    
    UFUNCTION(BlueprintCallable)
    void NotifyDamageCaution(TEnumAsByte<ETresRiskDodgeType> InDodgeType, float InTime, float inAngle);
    
};

