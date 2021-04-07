// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresGame_StructsAndEnums.h"
#include "TresBodyCollPrimitive.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBodyCollPrimitive : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	FName MyBodyName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	bool MyIgnoreNameNoneGroup; //Verify
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	TEnumAsByte<ETresBodyCollision> MyShapeType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	class UStaticMesh* MyShapeMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	FVector MyShapeSize;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	TEnumAsByte<ETresBodyCollReactionType> m_BodyReactionType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	bool m_bFixedBodyReactionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	bool m_bEnableDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	bool m_bEnablePush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	bool m_bEnableCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	bool m_bEnableBlockCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	TEnumAsByte<ETresBodyCollOverlapCameraFunction> m_OverlapCameraFunction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	bool m_bIsBodyCollBaseLocationDist3D;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	TArray<FTresBodyTakeDamageEffect> m_DamageEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	class UBodySetup* m_pBodySetup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	class UBodySetup* m_pSrcBodySetup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	TEnumAsByte<ETresBodyCollReactionType> m_DefaultBodyReactionType;

	//struct FScriptMulticastDelegate OnTresBodyBeginOverlap;
	//struct FScriptMulticastDelegate OnTresBodyEndOverlap;


	//void TresBodyEndOverlapSignature__DelegateSignature(class UTresBodyCollPrimitive* MyPrimitive, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	//void TresBodyBeginOverlapSignature__DelegateSignature(class UTresBodyCollPrimitive* MyPrimitive, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "TresBodyCollPrimitive")
	void OnBodyEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBodyEndOverlap_Implementation(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex) {};
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "TresBodyCollPrimitive")
	void OnBodyBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnBodyBeginOverlap_Implementation(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult) {};
};
