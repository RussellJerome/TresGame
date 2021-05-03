// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SQEX_KineDriver_Component.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class KINEDRIVERRT_API USQEX_KineDriver_Component : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_KineDriver_Component")
	TArray<class USQEX_KineDriverData*> KineDriverData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_KineDriver_Component")
	bool EnableScaleOpChildSSC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_KineDriver_Component")
	TEnumAsByte<ETickingGroup> TickGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_KineDriver_Component")
	FName ComponentTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_KineDriver_Component")
	bool Enabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_KineDriver_Component")
	bool EnableLOD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_KineDriver_Component")
	float MinScreenSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_KineDriver_Component")
	bool EnableFrustumCulling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_KineDriver_Component")
	bool EnableCheckDrawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_KineDriver_Component")
	class USkeletalMeshComponent* SkeletalMeshComponent;
};
