#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "SQEX_CommonEffectData.h"
#include "SQEX_DesignatedAttachData.h"
#include "UObject/NoExportTypes.h"
#include "TresEffectAttachComponent.generated.h"

class USQEX_ParticleAttachDataAsset;
class UMeshComponent;
class UObject;
class AActor;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresEffectAttachComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSQEX_CommonEffectData> CommonEffectList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSQEX_DesignatedAttachData> DesignatedAttachDataList;
    
    UPROPERTY()
    TArray<USQEX_ParticleAttachDataAsset*> CommonAttachDataList;
    
    UTresEffectAttachComponent();
    UFUNCTION(BlueprintCallable)
    void SpawnAttachEffect(UMeshComponent* in_MeshComp, USQEX_ParticleAttachDataAsset* in_AttachData, int32 in_GroupID, bool in_UseDesignatedData);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorParameter(int32 in_GroupID, FName in_ParamName, FVector in_Param, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnStop(bool in_NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectParameter(int32 in_GroupID, FName in_ParamName, UObject* in_Param, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatParameter(int32 in_GroupID, FName in_ParamName, float in_Param, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectVisibility(int32 in_GroupID, bool in_NewVisibility, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    void SetColorParameter(int32 in_GroupID, FName in_ParamName, FLinearColor in_Param, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    void SetActorParameter(int32 in_GroupID, FName in_ParamName, AActor* in_Param, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    void Set(UMeshComponent* in_MeshComp, int32 in_Group, bool bContinue);
    
    UFUNCTION(BlueprintCallable)
    void ResetEffects(int32 in_GroupID, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    bool IsSpawnStop();
    
    UFUNCTION(BlueprintCallable)
    bool IsComplete(int32 in_GroupID);
    
    UFUNCTION(BlueprintCallable)
    USQEX_ParticleAttachDataAsset* GetDesignatedAttachData(FName in_DataKey);
    
    UFUNCTION(BlueprintCallable)
    void FadeOutEffect(float in_FadeOutTime, int32 in_GroupID, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    void EndEffect(int32 in_GroupID, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    void DestroyEffects(int32 in_GroupID, bool bEqual);
    
};

