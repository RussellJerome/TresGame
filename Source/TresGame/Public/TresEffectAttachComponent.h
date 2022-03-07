// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGame.h"
#include "TresEffectAttachComponent.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class TRESGAME_API UTresEffectAttachComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEffectAttachComponent")
	TArray<struct FSQEX_DesignatedAttachData> DesignatedAttachDataList;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEffectAttachComponent")
	TArray<class USQEX_ParticleAttachDataAsset*> CommonAttachDataList;
	
	UFUNCTION(BlueprintCallable, Category = "TresEffectAttachComponent")
	void SpawnAttachEffect(class UMeshComponent* in_MeshComp, class USQEX_ParticleAttachDataAsset* in_AttachData, int in_GroupID, bool in_UseDesignatedData) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresEffectAttachComponent")
	void SetVectorParameter(int in_GroupID, const FName& in_ParamName, const FVector& in_Param, bool bEqual) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresEffectAttachComponent")
	void SetSpawnStop(bool in_NewState) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresEffectAttachComponent")
	void SetObjectParameter(int in_GroupID, const FName& in_ParamName, class UObject* in_Param, bool bEqual) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresEffectAttachComponent")
	void SetFloatParameter(int in_GroupID, const FName& in_ParamName, float in_Param, bool bEqual) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresEffectAttachComponent")
	void SetEffectVisibility(int in_GroupID, bool in_NewVisibility, bool bEqual) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresEffectAttachComponent")
	void SetColorParameter(int in_GroupID, const FName& in_ParamName, const FLinearColor& in_Param, bool bEqual) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresEffectAttachComponent")
	void SetActorParameter(int in_GroupID, const FName& in_ParamName, class AActor* in_Param, bool bEqual) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresEffectAttachComponent")
	void Set(class UMeshComponent* in_MeshComp, int in_Group, bool bContinue) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresEffectAttachComponent")
	void ResetEffects(int in_GroupID, bool bEqual) {};
	
	UFUNCTION(BlueprintPure, Category = "TresEffectAttachComponent")
	bool IsSpawnStop() { return false; };
	
	UFUNCTION(BlueprintPure, Category = "TresEffectAttachComponent")
	bool IsComplete(int in_GroupID) { return false; };
	
	UFUNCTION(BlueprintPure, Category = "TresEffectAttachComponent")
	class USQEX_ParticleAttachDataAsset* GetDesignatedAttachData(const FName& in_DataKey) { return nullptr; };
	
	UFUNCTION(BlueprintCallable, Category = "TresEffectAttachComponent")
	void FadeOutEffect(float in_FadeOutTime, int in_GroupID, bool bEqual) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresEffectAttachComponent")
	void EndEffect(int in_GroupID, bool bEqual) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresEffectAttachComponent")
	void DestroyEffects(int in_GroupID, bool bEqual) {};
};
