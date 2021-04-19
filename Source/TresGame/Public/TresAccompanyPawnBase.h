// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresAccompanyPawnBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresAccompanyPawnBase : public ATresCharPawnBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAccompanyPawnBase")
	class UTresUIDataAsset* m_UIDataAccompany;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAccompanyPawnBase")
	class UTresSkeletalMeshComponent* MyPenetrationEffectMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAccompanyPawnBase")
	class UParticleSystemComponent* MyPenetrationParticleEffect;

	//class UTresVoiceGroupSet* m_VoiceData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAccompanyPawnBase")
	class ATresPlayerControllerBase* m_PlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAccompanyPawnBase")
	bool m_bDispDebugInfo;

	//struct FScriptMulticastDelegate OnAccompanyPawnAppear;
	//struct FScriptMulticastDelegate OnAccompanyPawnDisappear;
	//struct FScriptMulticastDelegate OnAccompanyPawnDoFinish;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAccompanyPawnBase")
	//TMap<TEnumAsByte<ETresChrUniqueID>, class UTresAnimSet*> m_AppendAnimSetMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAccompanyPawnBase")
	class USoundBase* m_BGMAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAccompanyPawnBase")
	float m_Param_MaxTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAccompanyPawnBase")
	float m_Param_MoveTurnSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAccompanyPawnBase")
	float m_Param_JumpRotRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAccompanyPawnBase")
	float m_Param_FallCheckHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAccompanyPawnBase")
	bool m_Param_bZMoveLand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAccompanyPawnBase")
	bool m_Param_bLargeSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAccompanyPawnBase")
	float m_Param_LandSpawnHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAccompanyPawnBase")
	TArray<class ATresCharPawnBase*> m_SlavePawnList;

	void ReceiveAccompanyPawnDoFinish() {};
	void ReceiveAccompanyPawnDisappear() {};
	void ReceiveAccompanyPawnAppear() {};
	FVector BP_GetSafetyPos() { return FVector::FVector(); };
};
