#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "SQEX_BonamikChangingParameter.h"
#include "SQEX_KBD_Component.generated.h"

class USkeletalMeshComponent;
class UCharacterMovementComponent;
class USQEX_KBD_Component;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KBDRT_API USQEX_KBD_Component : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(Export, Transient)
    UCharacterMovementComponent* CharacterMovementComponent;
    
public:
    USQEX_KBD_Component();
    UFUNCTION(BlueprintCallable)
    void SQEX_SetEmissiveWindScale(const TArray<FString>& Groups, const float Scale, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_TurnOff(bool preserveLatestResult, const TArray<FString>& Groups, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetWorldWindScale(const TArray<FString>& Groups, float Scale, bool bApplyToChildren);
    
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
    void SQEX_Bonamik_SetOuterConeScale(const TArray<FString>& Groups, float Scale, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetMassScale(const TArray<FString>& Groups, float Scale, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetLocalForceScale(const TArray<FString>& Groups, float Scale, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_SetInnerConeScale(const TArray<FString>& Groups, float Scale, bool bApplyToChildren);
    
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
    void SQEX_Bonamik_RemoveReferenceCommon(USQEX_KBD_Component* OtherComponent);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_RemoveReferenceAll();
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_RemoveReference(USQEX_KBD_Component* OtherComponent, const FString& ReferenceGroupName);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_ReinitializeSimulationPose();
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_Bonamik_IsSetup();
    
    UFUNCTION(BlueprintPure)
    bool SQEX_Bonamik_IsEnable() const;
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_Bonamik_IsAutoDisable();
    
    UFUNCTION(BlueprintCallable)
    float SQEX_Bonamik_GetWeight();
    
    UFUNCTION(BlueprintCallable)
    float SQEX_Bonamik_GetTeleportDistance();
    
    UFUNCTION(BlueprintPure)
    float SQEX_Bonamik_GetSpeedRate() const;
    
    UFUNCTION(BlueprintPure)
    int32 SQEX_Bonamik_GetNumReferences() const;
    
    UFUNCTION(BlueprintPure)
    FVector SQEX_Bonamik_GetGravity() const;
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_EnablePresetWind(const TArray<FName>& PresetNames);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_EnableBnm3VariableFPSSupport(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_DisablePresetWind(const TArray<FName>& PresetNames);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_ClearEmissiveWind(float BlendTime, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_ClearAllPresetWind();
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_AddReferenceDefault();
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_AddReferenceCommon(USQEX_KBD_Component* OtherComponent);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_Bonamik_AddReference(USQEX_KBD_Component* OtherComponent, const FString& ReferenceGroupName);
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_ApplyKBDAssetElement(FName ElementName, bool bIsReset, bool bIsResetPose, int32 PreRoll, bool KeepReferences);
    
};

