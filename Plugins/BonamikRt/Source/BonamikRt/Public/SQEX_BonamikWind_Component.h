// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "BonamikRt_StructsAndEnums.h"
#include"SQEX_BonamikWind.h"
#include "SQEX_BonamikWind_Component.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BONAMIKRT_API USQEX_BonamikWind_Component : public USceneComponent
{
	GENERATED_BODY()

public:	
	USQEX_BonamikWind_Component();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWind_Component")
	TEnumAsByte<ESQEX_Bonamik_WindAreaType> m_BonamikWindAreaType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWind_Component")
	bool m_BonamikWindGlobalAddition;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWind_Component")
	FVector m_BonamikWindBoxAreaSize;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWind_Component")
	FVector m_BonamikWindBoxAreaHalfSize;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWind_Component")
	float m_BonamikWindSphereAreaRadius;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWind_Component")
	float m_BonamikWindAreaMargin;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWind_Component")
	bool m_BonamikWindAbsoluteDirection;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWind_Component")
	float m_BonamikWindDirectionYaw;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWind_Component")
	float m_BonamikWindDirectionPitch;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWind_Component")
	USQEX_BonamikWind* m_BonamikWind;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "SQEX_BonamikWind_Component")
	void SetWindScale(float Value) {};

	UFUNCTION(BlueprintCallable, Category = "SQEX_BonamikWind_Component")
	float GetWindScale() { return 0.0f; };

	UFUNCTION(BlueprintCallable, Category = "SQEX_BonamikWind_Component")
	void Enable(bool Value) {};
	
};
