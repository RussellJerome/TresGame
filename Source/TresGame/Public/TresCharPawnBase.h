#pragma once
#include "CoreMinimal.h"
#include "TresPawnBase.h"
#include "Perception/AISightTargetInterface.h"
#include "GenericTeamAgentInterface.h"
#include "ETresStateID.h"
#include "ETresAnimNotifyBpEventID.h"
#include "UObject/NoExportTypes.h"
#include "TresCharMovementUpdatedSignatureDelegate.h"
#include "ETresChrUniqueID.h"
#include "ETresCharWearForm.h"
#include "ETresBodyCollReactionType.h"
#include "ETresPlayerJumpModes.h"
#include "ETresCommandKind.h"
#include "Engine/EngineTypes.h"
#include "TresCharTakeDamageSignatureDelegate.h"
#include "ETresTeam.h"
#include "ETresWeaponType.h"
#include "TresReactorDoCommandSignatureDelegate.h"
#include "ETresDamageKind.h"
#include "TresDamageInfo.h"
#include "Engine/EngineTypes.h"
#include "ETresAbilityKind.h"
#include "AlphaBlend.h"
#include "ETresItemDefWeapon.h"
#include "TresCharPawnBase.generated.h"

class UTresAtkCollComponent;
class USQEXSEADAutoSeComponent;
class UTresCharMovementComponent;
class UTresLockonTargetComponent;
class UTresSkeletalMeshComponent;
class AController;
class UTresBodyCollComponent;
class UTresEquipmentComponent;
class UTresEffectAttachComponent;
class UTresStateQueueComponent;
class UAnimMontage;
class UTresPoleComponent;
class UTresHopComponent;
class UParticleSystem;
class UTresUIDataAssetStatus;
class ATresAdhereObjBase;
class UTresAttractionFlowMarkerComponent;
class UTresSwimRingComponent;
class USQEX_ParticleAttachDataAsset;
class USQEXSEADSoundReferenceEnumSet;
class USQEX_DynamicBindAssetUserData;
class USQEXSEADAutoSeComponentCallbackDefault;
class AActor;
class USQEX_KBD_Component;
class UAnimSequenceBase;

UCLASS(Abstract)
class TRESGAME_API ATresCharPawnBase : public ATresPawnBase, public IGenericTeamAgentInterface, public IAISightTargetInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresDtorState, TEnumAsByte<ETresStateID>, StateID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresCtorState, TEnumAsByte<ETresStateID>, StateID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresAnimNotifyStartBpEvent, FName, AnimSeqName, TEnumAsByte<ETresAnimNotifyBpEventID>, EventID, int32, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresAnimNotifyEndBpEvent, FName, AnimSeqName, TEnumAsByte<ETresAnimNotifyBpEventID>, EventID, int32, Param);
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresCharMovementComponent* MyMovement;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresAtkCollComponent* MyAtkColl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresBodyCollComponent* MyBodyColl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresEquipmentComponent* MyEquipment;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStateQueueComponent* MyStateComp;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresEffectAttachComponent* MyEffectAtt;
    
protected:
    UPROPERTY()
    FVector BaseTranslationOffset;
    
    UPROPERTY(BlueprintReadOnly)
    uint32 bPressedJump: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    float JumpKeyHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpMaxHoldTime;
    
public:
    UPROPERTY(BlueprintAssignable)
    FTresCharMovementUpdatedSignature OnCharacterMovementUpdated;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETresChrUniqueID m_ChrUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DebugLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxHitPoint;
    
    UPROPERTY(SaveGame)
    int32 m_HitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxMagicPoint;
    
    UPROPERTY(SaveGame)
    int32 m_MagicPoint;
    
    UPROPERTY(SaveGame)
    uint32 m_bAppearMsgSended: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyMpChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxFocusPoint;
    
    UPROPERTY(SaveGame)
    int32 m_FocusPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresBodyCollReactionType m_DefaultBodyCollReactionType;
    
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint32 m_bEnableAttractionFlowHitPoint: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint32 m_bEnableAttractionFlowMarkerProc: 1;
    
protected:
    UPROPERTY(SaveGame)
    int32 m_AttractionHP;
    
    UPROPERTY(SaveGame)
    TEnumAsByte<ETresCommandKind> m_AttractionMarkerCommandID;
    
    UPROPERTY(SaveGame)
    float m_AttractionMarkerRestTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint32 m_bRootTransCalcRootSpace: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    uint32 bIsBattleMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsInvincible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsNoDamageResponse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bNoHpDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsHpLimitOne: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsHpLimitOneExceptPlayerAttack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bIsNeedAttachAttackHitEffect: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    uint32 m_bDisableInvincibleInCinematicMode: 1;
    
    UPROPERTY(Transient)
    float m_ControlAnalogInputModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyRailSlideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RailSlideJumpInertialVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RailSlideJumpInertialBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_DangleOffsetPos;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bEquipmentAutoSpawn: 1;
    
    UPROPERTY(Export, Transient)
    UTresPoleComponent* m_LastHitPoleComponent;
    
    UPROPERTY(Export, Transient)
    UTresHopComponent* m_LastHitHopComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    float m_NoActionCounter;
    
    UPROPERTY(Transient)
    UParticleSystem* m_LastWaterOuterEffect;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bCameraLookPosToMesh: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTresUIDataAssetStatus* m_pUIDataStatus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint32 MySkelCtrl_IkDisableFlag: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MySkelCtrl_IkInitValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint32 m_bApplyWetnessMaterial: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint32 m_bApplyOceanWetnessMaterial: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ApplyOceanWetnessMaterialMinHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ApplyOceanWetnessMaterialMaxHeight;
    
    UPROPERTY(Transient)
    ATresAdhereObjBase* m_pBadStatAdhereActor;
    
public:
    UPROPERTY(BlueprintAssignable)
    FTresCharTakeDamageSignature OnTresTakeDamage;
    
protected:
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresLockonTargetComponent* m_FlowTarget;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresAttractionFlowMarkerComponent* m_AttractionFlowMarker;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresSwimRingComponent* m_pSwimRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETresTeam::Type> MyTeam;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_CmnAuraEffect;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_CmnMagicCastEffect;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_CmnBadStatesEffect;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_CmnAppearEffect;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bEnableRegistFootStepEffectGen: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bEnableWaterRippleEffect: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_RippleBaseBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RippleLocationShiftScale;
    
public:
    UPROPERTY(BlueprintAssignable)
    FTresCtorState OnCtorState;
    
    UPROPERTY(BlueprintAssignable)
    FTresDtorState OnDtorState;
    
    UPROPERTY(BlueprintAssignable)
    FTresAnimNotifyStartBpEvent OnAnimNotifyStartBpEvent;
    
    UPROPERTY(BlueprintAssignable)
    FTresAnimNotifyEndBpEvent OnAnimNotifyEndBpEvent;
    
    UPROPERTY(BlueprintAssignable)
    FTresReactorDoCommandSignature OnReactorDoCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USQEXSEADSoundReferenceEnumSet* m_AutoSeAssets;
    
protected:
    UPROPERTY(Export, Transient)
    USQEXSEADAutoSeComponent* MyAutoSe;
    
    UPROPERTY(Transient)
    USQEXSEADAutoSeComponentCallbackDefault* MyAutoSeCallback;
    
public:
    ATresCharPawnBase();
    UFUNCTION(BlueprintCallable)
    void SetStopAI(bool bStop);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveMode(TEnumAsByte<EMovementMode> NewMovementMode, bool bClearVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxWalkSpeed(float InMaxWalkSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSwimSpeed(float InMaxSwimSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxFlySpeed(float InMaxFlySpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxAcceleration(float InAcceleration);
    
    UFUNCTION(BlueprintCallable)
    void SetMagicPoint(int32 InMP);
    
    UFUNCTION(BlueprintCallable)
    void SetIKinemaEnable(bool Enable, bool Force);
    
    UFUNCTION(BlueprintCallable)
    void SetHitPoint(int32 InHP);
    
    UFUNCTION(BlueprintCallable)
    void SetGravityScale(float InGravityScale);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusPoint(int32 InFP);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableGravityLock(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableGravity(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetConditionNoHpDamage(bool InNoHpDamage);
    
    UFUNCTION(BlueprintCallable)
    void SetConditionNoDamageResponse(bool InNoDamageResponse);
    
    UFUNCTION(BlueprintCallable)
    void SetConditionInvincible(bool InInvincible);
    
    UFUNCTION(BlueprintCallable)
    void SetConditionHpLimitOneExceptPlayerAttack(bool InHpLimitOne);
    
    UFUNCTION(BlueprintCallable)
    void SetConditionHpLimitOne(bool InHpLimitOne);
    
    UFUNCTION(BlueprintCallable)
    void SetBuoyancy(float InBuoyancy);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyCollReactionType(ETresBodyCollReactionType InType, FName InGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleMode(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void ResetMaxWalkSpeed();
    
    UFUNCTION(BlueprintCallable)
    void ResetMaxSwimSpeed();
    
    UFUNCTION(BlueprintCallable)
    void ResetMaxFlySpeed();
    
    UFUNCTION(BlueprintCallable)
    void ResetMaxAcceleration();
    
    UFUNCTION(BlueprintCallable)
    void ResetGravityScale();
    
    UFUNCTION(BlueprintCallable)
    void ResetBuoyancy();
    
    UFUNCTION(BlueprintCallable)
    void ResetBodyCollReactionType(FName InGroup);
    
    UFUNCTION(BlueprintCallable)
    void RequestDirectMove(FVector refVelocity, bool bForceMaxSpeed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent, BlueprintCallable)
    void ReceiveTresTakeDamage(float DamagePoint, AController* InstigatedBy, const FHitResult& HitInfo, const FTresDamageInfo& DamageInfo, FVector ShotFromDirection, AActor* DamageCauser);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveDtorState(ETresStateID StateID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveCtorState(ETresStateID StateID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAnimNotifyStartBpEvent(FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAnimNotifyEndBpEvent(FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLaunchedCharPawn(float Height);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLaunched(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnJumped();
    
    UFUNCTION(BlueprintCallable)
    bool LaunchCharPawn(float Height, bool bForce, TEnumAsByte<ETresPlayerJumpModes> InJumpMode);
    
    UFUNCTION(BlueprintCallable)
    void LaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_UpdateCustomMovement(float DeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
    
    UFUNCTION(BlueprintPure)
    bool IsStopAI() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOnGround() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMoveModeWalking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMoveModeSwimming() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMoveModeRailSlide() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMoveModeFlying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMoveModeFalling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLandAnimPose() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDisableAutoUpdateVelocity() const;
    
    UFUNCTION(BlueprintPure)
    bool IsConditionNoHpDamage() const;
    
    UFUNCTION(BlueprintPure)
    bool IsConditionNoDamageResponse() const;
    
    UFUNCTION(BlueprintPure)
    bool IsConditionInvincible() const;
    
    UFUNCTION(BlueprintPure)
    bool IsConditionHpLimitOneExceptPlayerAttack() const;
    
    UFUNCTION(BlueprintPure)
    bool IsConditionHpLimitOne() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCinematicEndAIRestart() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBattlePose() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBattleMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetVelocityZ() const;
    
    UFUNCTION(BlueprintPure)
    UTresCharMovementComponent* GetTresCharMovementComponent() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETresStateID> GetStateID() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxWalkSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxSwimSpeed() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxMagicPoint() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxHitPoint() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxFocusPoint() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxFlySpeed() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMagicPoint() const;
    
    UFUNCTION(BlueprintPure)
    USQEX_KBD_Component* GetKBDComponent() const;
    
    UFUNCTION(BlueprintPure)
    float GetHitPointRate() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHitPointPer() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHitPoint() const;
    
    UFUNCTION(BlueprintPure)
    float GetGravityZ() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFocusPoint() const;
    
    UFUNCTION(BlueprintPure)
    float GetDefaultMaxWalkSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetDefaultMaxSwimSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetDefaultMaxFlySpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetDefaultBuoyancy() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCurrentAcceleration() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChrLevel() const;
    
    UFUNCTION(BlueprintPure)
    float GetBuoyancy() const;
    
    UFUNCTION(BlueprintPure)
    ETresBodyCollReactionType GetBodyCollReactionType(FName InGroup) const;
    
    UFUNCTION(BlueprintCallable)
    void DisableAutoUpdateVelocity(bool bInDisable);
    
    UFUNCTION(BlueprintCallable)
    void ClearVelocity();
    
    UFUNCTION(BlueprintCallable)
    void ClampVelocityZ(float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    void ClampVelocityXY(float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    void ClampVelocity(float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    FVector CalcJumpVector(const FVector& InTarget, float inAngle);
    
    UFUNCTION(BlueprintCallable)
    void BP_UseMagicPoint(int32 UseMP);
    
    UFUNCTION(BlueprintCallable)
    void BP_StartCinematicLookAt(AActor* TargetActor, FName SocketName, float BlendIn, EAlphaBlendOption InBlendOption);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetWeaponVisible(bool bVisible, bool bAppearEffect, float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetWeaponRageformRate(float StartValue, float EndValue, float InterpTime);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetVelocityXY(FVector refVector);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMovementInputXY(FVector WorldDirection, float ScaleValue, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMovementInput(FVector WorldDirection, float ScaleValue, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetAccelerationDirXY(FVector refAcceleration);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetAccelerationDir(FVector refAcceleration);
    
    UFUNCTION(BlueprintCallable)
    void BP_RequestDirectVelocityZ(float InVelocityZ);
    
    UFUNCTION(BlueprintCallable)
    void BP_RequestDirectVelocityXY(FVector refVelocity);
    
    UFUNCTION(BlueprintCallable)
    void BP_RequestDirectVelocity(FVector refVelocity);
    
    UFUNCTION(BlueprintPure)
    bool BP_IsRailSlideGoForword() const;
    
    UFUNCTION(BlueprintPure)
    bool BP_IsInnerWaterCurrent() const;
    
    UFUNCTION(BlueprintPure)
    bool BP_IsInnerWater() const;
    
    UFUNCTION(BlueprintPure)
    bool BP_IsConditionCheered() const;
    
    UFUNCTION(BlueprintPure)
    bool BP_IsAbilityEnable(ETresAbilityKind InAbilityKind) const;
    
    UFUNCTION(BlueprintPure)
    FVector BP_GetWaterCurrentForce() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETresStateID> BP_GetTransitionStateID() const;
    
    UFUNCTION(BlueprintPure)
    int32 BP_GetRailSlideID() const;
    
    UFUNCTION(BlueprintPure)
    FVector BP_GetLastTakeDamageHitLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector BP_GetLastAttackHitLocation() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETresWeaponType> BP_GetEquipWeaponType() const;
    
    UFUNCTION(BlueprintPure)
    ETresItemDefWeapon BP_GetEquipWeaponID() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETresDamageKind> BP_GetDamageStateDamageKind() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_EndCinematicLookAt(float BlendOut, EAlphaBlendOption InBlendOption);
    
    UFUNCTION(BlueprintCallable)
    void BP_DisableSwimFluctuation(bool bDisable, float InInterpTime);
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugChangeWearform(ETresCharWearForm InForm, float InWearChangeTime);
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugAllAbilitySetDebugWork(int32 InLevel);
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugAbilitySetDebugWork(ETresAbilityKind InAbilityKind, int32 InLevel);
    
    UFUNCTION(BlueprintCallable)
    void BP_CopyRootMotionVelocityToVelocity();
    
    UFUNCTION(BlueprintCallable)
    void BP_AnimStop(float InBlendOut, FName InSlotName);
    
    UFUNCTION(BlueprintCallable)
    void BP_AnimPlaySequence(UAnimSequenceBase* InAsset, FName InSlotNodeName, float InBlendInTime, bool InLoop, int32 InEffectGroup, float InPlayRate, bool InRootTrans, bool InRootRot, float InRootTransScaleXY, float InRootTransScaleZ);
    
    UFUNCTION(BlueprintCallable)
    void BP_AnimPlayMontage(UAnimMontage* InAsset, int32 InEffectGroup, float InPlayRate, float InRootTransScaleXY, float InRootTransScaleZ);
    
    UFUNCTION(BlueprintCallable)
    void BP_AnimPlayAnimset(FName InAnimName, FName InSlotNodeName, float InBlendInTime, bool InLoop, int32 InEffectGroup, float InPlayRate, bool InRootTrans, bool InRootRot, float InRootTransScaleXY, float InRootTransScaleZ, bool InSameCheck);
    
    UFUNCTION(BlueprintPure)
    FName BP_AnimGetLastPlayAnimName(FName InSlotName) const;
    
    UFUNCTION(BlueprintCallable)
    bool BP_AbilityRemove(ETresAbilityKind InAbilityKind);
    
    UFUNCTION(BlueprintPure)
    int32 BP_AbilityGetLevel(ETresAbilityKind InAbilityKind) const;
    
    UFUNCTION(BlueprintPure)
    int32 BP_AbilityGetEquipNum(ETresAbilityKind InAbilityKind) const;
    
    UFUNCTION(BlueprintCallable)
    bool BP_AbilityAdd(ETresAbilityKind InAbilityKind, bool bEquip);
    
    UFUNCTION(BlueprintCallable)
    void ApplyKBD(USQEX_DynamicBindAssetUserData* KBDAssetUserData, FName ElementName, bool bIsReset, bool bIsResetPose, int32 PreRoll, bool KeepReferences);
    
    
    // Fix for true pure virtual functions not being implemented
};

