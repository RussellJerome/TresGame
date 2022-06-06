#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "SQEX_BonamikChangingParameter.h"
#include "SQEX_Bonamik_Component.generated.h"

class USQEX_BonamikAsset;
class USkeletalMeshComponent;
class USQEX_Bonamik_Component;
class UCharacterMovementComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BONAMIKRT_API USQEX_Bonamik_Component : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSkeletalMeshSkippedTransforms;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_BonamikAsset* m_BonamikAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* CharacterMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_BonamikEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_BonamikAutoDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAccurateBoundsUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PreRollStepOnResume;
    
    UPROPERTY(EditAnywhere, Transient)
    float PrevScreenSize;
    
public:
    USQEX_Bonamik_Component();
    UFUNCTION(BlueprintCallable)
    void SQEX_SetEmissiveWindScale(const TArray<FString>& Groups, const float Scale, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_TurnOff(bool preserveLatestResult, const TArray<FString>& Groups, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetWorldWindScale(const TArray<FString>& Groups, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetWeight(float Weight, float WeightChangeTime, bool ResetWhenNonZeroWeight, bool AutoDisable);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetUpdateOnlyVisible(bool bUpdateOnlyVisible);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetUpdateOnlyRendered(bool bUpdateOnlyRendered);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetTeleportDistance(float Distance, int32 TeleportPreRollStep, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetSpeedRate(float SpeedRate, float SpeedRateChangeTime, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetPresetWindScale(const TArray<FName>& PresetNames, const float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetPreRoll(int32 step, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetOuterConeScale(const TArray<FString>& Groups, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetLocalForceScale(const TArray<FString>& Groups, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetInnerConeScale(const TArray<FString>& Groups, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetGroupWeight(const TArray<FString>& Groups, float Weight, float WeightChangeTime, bool ResetWhenNonZeroWeight, bool AutoDisable);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetGroupParam(const TArray<FSQEX_BonamikChangingParameter>& GroupParam);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetGravity(const FVector& Gravity);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetEnableGroundCollisionAll(bool bNewEnable);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetEnableGroundCollision(const TArray<FString>& Groups, bool bNewEnable);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetEnable(bool NewEnable);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetEmissiveWind(const TArray<FString>& Groups, int32 DirectionSpace, const FVector& DirectionVec, float BaseStrength, float WaveAmplitude, float WaveFreq, float BlendTime, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetAutoDisable(bool AutoDisable);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetAnimPos(int32 BoneIndex, bool bForceSet);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_RestoreGroupParam(const TArray<FSQEX_BonamikChangingParameter>& GroupParam);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_RestoreDefaultParameters();
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_ResetGravity();
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_Reset(bool bResetPose, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_RemoveReferenceDefault();
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_RemoveReferenceCommon(USQEX_Bonamik_Component* OtherComponent);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_RemoveReferenceAll();
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_RemoveReference(USQEX_Bonamik_Component* OtherComponent, const FString& ReferenceGroupName);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_ReinitializeSimulationPose();
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_Bonamik_IsSetup();
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_Bonamik_IsEnable();
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_Bonamik_IsAutoDisable();
    
    UFUNCTION(BlueprintCallable)
    float SQEX_Bonamik_GetWeight();
    
    UFUNCTION(BlueprintCallable)
    float SQEX_Bonamik_GetTeleportDistance();
    
    UFUNCTION(BlueprintPure)
    float SQEX_Bonamik_GetSpeedRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector SQEX_Bonamik_GetGravity() const;
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_EnablePresetWind(const TArray<FName>& PresetNames);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_DisablePresetWind(const TArray<FName>& PresetNames);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_ClearEmissiveWind(float BlendTime, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_ClearAllPresetWind();
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_AddReferenceDefault();
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_AddReferenceCommon(USQEX_Bonamik_Component* OtherComponent);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_AddReference(USQEX_Bonamik_Component* OtherComponent, const FString& ReferenceGroupName);
    
};

