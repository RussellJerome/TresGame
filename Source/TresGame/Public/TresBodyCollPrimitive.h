// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresGame.h"
#include "TresBodyCollPrimitive.generated.h"

UENUM(BlueprintType)
enum ETresBodyCollision
{
	SPHERE = 0 UMETA(DisplayName = "Sphere"),
	CAPSULE = 1 UMETA(DisplayName = "Capsule"),
	BOX = 2 UMETA(DisplayName = "Box"),
	CONVEX = 3 UMETA(DisplayName = "Convex"),
	MAX = 4 UMETA(Hidden),
	ETresBodyCollision_MAX = 5 UMETA(Hidden)
};

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParam(FTresBodyEndOverlap, class UTresBodyCollPrimitive*, MyPrimitive, class AActor*, OtherActor, class UPrimitiveComponent*, OtherComp, int, OtherBodyIndex);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParam(FTresBodyBeginOverlap, class UTresBodyCollPrimitive*, MyPrimitive, class AActor*, OtherActor, class UPrimitiveComponent*, OtherComp, int, OtherBodyIndex, bool, bFromSweep, const FHitResult&, SweepResult)

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
	uint8 MyIgnoreNameNoneGroup;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	TEnumAsByte<ETresBodyCollision> MyShapeType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	class UStaticMesh* MyShapeMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	FVector MyShapeSize;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBodyCollPrimitive")
	ETresBodyCollReactionType m_BodyReactionType;
	
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
	ETresBodyCollReactionType m_DefaultBodyReactionType;
	
	//UPROPERTY(BlueprintAssignable, Category = "TresBodyCollPrimitive")
	//FTresBodyEndOverlap OnTresBodyBeginOverlap;

	//UPROPERTY(BlueprintAssignable, Category = "TresBodyCollPrimitive")
	//FTresBodyBeginOverlap OnTresBodyEndOverlap;

	UFUNCTION(BlueprintImplementableEvent, Category = "TresBodyCollPrimitive")
	void OnBodyEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "TresBodyCollPrimitive")
	void OnBodyBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};
