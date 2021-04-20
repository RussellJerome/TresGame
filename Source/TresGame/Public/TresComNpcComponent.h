// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresComNpcComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TRESGAME_API UTresComNpcComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresComNpcComponent")
	//TArray<TWeakObjectPtr<class ATresNpcPawn_c_npc>> m_pComNpcPawn;

	//UFUNCTION(BlueprintPure, Category = "TresComNpcComponent")
	//class ATresNpcPawn_c_npc* GetComNpc(const FName& InName) {};
};
