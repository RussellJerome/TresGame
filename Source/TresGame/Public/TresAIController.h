// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TresGame_StructsAndEnums.h"
#include "TresAIController.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresAIController : public AAIController
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIController")
	TEnumAsByte<ETresCharInputType> m_CharInputType;

	UFUNCTION(BlueprintCallable, Category = "TresAIController")
	void SetMyTarget(class AActor* inNewMyTarget) {};

	UFUNCTION(BlueprintCallable, Category = "TresAIController")
	void SetDestination(const struct FVector& inNewDestination) {};

	UFUNCTION(BlueprintPure, Category = "TresAIController")
	bool IsElapsedTimeFromDamaged(float InTime, class AActor* InTarget) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresAIController")
	bool IsActorRightSide(class AActor* inOtherActor) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresAIController")
	float GetVerticalDistanceToMyTarget(bool inCollision) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIController")
	float GetVerticalDistanceToActor(class AActor* inOtherActor, bool inCollision) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIController")
	class AActor* GetMyTarget() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresAIController")
	float GetHorizontalDistanceToMyTarget(bool inCollision) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIController")
	float GetHorizontalDistanceToActor(class AActor* inOtherActor, bool inCollision) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIController")
	float GetDistanceToMyTarget(bool inCollision) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIController")
	float GetDistanceToActor(class AActor* inOtherActor, bool inCollision) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIController")
	FVector GetDestination() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresAIController")
	int GetCoopTeamMemberID() { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresAIController")
	int GetCoopTeamID() { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresAIController")
	class AActor* FindMyTarget(bool inFindGimmick) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresAIController")
	void BP_SetHeadFocus(class AActor* NewFocus) {};

	UFUNCTION(BlueprintCallable, Category = "TresAIController")
	void BP_SetHeadFocalPoint(const struct FVector& Fp) {};

	UFUNCTION(BlueprintPure, Category = "TresAIController")
	class AActor* BP_GetHeadFocusActor() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresAIController")
	FVector BP_GetHeadFocalPoint() { return FVector::FVector(); };

	UFUNCTION(BlueprintCallable, Category = "TresAIController")
	void BP_ClearHeadFocus() {};
};
