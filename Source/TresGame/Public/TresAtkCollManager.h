// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresAtkCollManager.generated.h"

UCLASS()
class TRESGAME_API ATresAtkCollManager : public AActor
{
	GENERATED_BODY()
	
public:	
	ATresAtkCollManager();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAtkCollManager")
	TArray<class UTresAtkCollComponent*> m_AtkCompList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAtkCollManager")
	class UParticleSystem* m_CmnGuardReflectEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAtkCollManager")
	class UParticleSystem* m_CmnStaggerReflectEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAtkCollManager")
	class UParticleSystem* m_CmnInvincibleHitEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAtkCollManager")
	class UParticleSystem* m_CmnCriticalHitEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAtkCollManager")
	class UParticleSystem* m_CmnArmorHitEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAtkCollManager")
	class UParticleSystem* m_CmnIgnoreGuardHitEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAtkCollManager")
	class UClass* m_PhysDamageTypeClass;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAtkCollManager")
	TMap<TWeakObjectPtr<class AActor>, int> m_CheeringList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAtkCollManager")
	TArray<class AActor*> m_JoinForceTargetList;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	
	
};
