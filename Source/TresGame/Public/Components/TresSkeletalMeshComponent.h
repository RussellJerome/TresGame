#pragma once
#include "CoreMinimal.h"
#include "TresSkeletalFootStepUnit.h"
#include "TresBodyCollInterface.h"
#include "Components/SkeletalMeshComponent.h"
#include "TresAnimInterface.h"
#include "Engine/EngineTypes.h"
#include "ETresBodyCollReactionType.h"
#include "TresAnimNotifyState_AttachEffect.h"
#include "UObject/NoExportTypes.h"
#include "TresAnimNotify_ChangeEyeLookAtBlendParam.h"
#include "UObject/NoExportTypes.h"
#include "TresSkeletalMeshComponent.generated.h"

class UPhysicalMaterial;
class UParticleSystemComponent;

UCLASS(EditInlineNew, MinimalAPI, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UTresSkeletalMeshComponent : public USkeletalMeshComponent, public ITresAnimInterface, public ITresBodyCollInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bCanbeDetectAsBodyColl: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    FName m_BodyCollGrpName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_BodyCollIgnoreNameNoneGroup: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    ETresBodyCollReactionType m_BodyCollReactionType;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 m_bNeedSnowRenderDepthPrimitive: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName m_SnowTailAttachName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FVector m_SnowTailAttachRelativeOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FVector m_SnowTailAttachScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bEnableSyncAnimPlay: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 m_bEnableBonamikWhenOwnerHidden: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 m_bEnableCollisionFootStep: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 m_bDisableCollisionFootStepLOD;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    TArray<FTresSkeletalFootStepUnit> m_CheckFootSteps;
    
protected:
    UPROPERTY(DuplicateTransient, Transient)
    UPhysicalMaterial* m_pDetectPhysMaterial;
    
    UPROPERTY(DuplicateTransient, Transient)
    UPhysicalMaterial* m_pDetectWaterPhysMaterial;
    
    UPROPERTY(DuplicateTransient, Transient)
    UPhysicalMaterial* m_pDetectInnerWaterPhysMaterial;
    
    UPROPERTY(DuplicateTransient, Transient)
    FHitResult m_WaterSurfaceInfo;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UParticleSystemComponent* m_pSnowTailComp;
    
public:
    UTresSkeletalMeshComponent();
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetVectorParamAll(TEnumAsByte<ETresKHSMaterialParameterIDVectorType> InParamType, FLinearColor InVector);
    
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetVectorParam(int32 InMaterialIndex, TEnumAsByte<ETresKHSMaterialParameterIDVectorType> InParamType, FLinearColor InVector);
    
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetScalarParamAll(TEnumAsByte<ETresKHSMaterialParameterIDScalarType> InParamType, float InScalar);
    
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetScalarParam(int32 InMaterialIndex, TEnumAsByte<ETresKHSMaterialParameterIDScalarType> InParamType, float InScalar);
    
    UFUNCTION(BlueprintPure)
    int32 BP_GetPredictedLODLevel();
    
    
    // Fix for true pure virtual functions not being implemented
};

