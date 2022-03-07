// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresGame.h"
#include "TresGimmickHitComponent.generated.h"

//These Delegates may not be correct!
DECLARE_MULTICAST_DELEGATE(OnTresHitGimmick);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TRESGAME_API UTresGimmickHitComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickHitComponent")
	bool m_bUseHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickHitComponent")
	bool m_bEnableHitInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickHitComponent")
	float m_HitInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickHitComponent")
	TArray<TEnumAsByte<ETresChrUniqueID>> m_ApplyHitChrUniqueIDs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickHitComponent")
	TArray< TEnumAsByte<ETresEnemyUniqueID>> m_ApplyHitEnemyUniqueIDs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickHitComponent")
	TArray<class UClass*> m_ApplyHitClass;

	//UPROPERTY(BlueprintAssignable, Category = "TresGimmickHitComponent")
	//FTresHitGimmick OnTresHitGimmick;

	UFUNCTION(BlueprintImplementableEvent, Category = "TresGimmickHitComponent")
	void OnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "TresGimmickHitComponent")
	void BPEV_OnTresHitGimmick(const struct FHitResult& HitInfo, class AActor* DamageCauser);

	UFUNCTION(BlueprintCallable, Category = "TresGimmickHitComponent")
	void BP_SetEnableHit(bool Enable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickHitComponent")
	void BP_ApplyHit(class AActor* DamageCauser) {};
};
