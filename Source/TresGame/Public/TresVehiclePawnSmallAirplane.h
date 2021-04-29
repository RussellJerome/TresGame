// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVehiclePawnBase.h"
#include "TresVehiclePawnSmallAirplane.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresVehiclePawnSmallAirplane : public ATresVehiclePawnBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnSmallAirplane")
	class UClass* m_ProjVulcan;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnSmallAirplane")
	class UClass* m_ProjMissile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnSmallAirplane")
	float m_Param_InputPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnSmallAirplane")
	float m_Param_VulcanTurnRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnSmallAirplane")
	float m_Param_MovePitchMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnSmallAirplane")
	float m_Param_AimDis;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnSmallAirplane")
	bool m_Param_AimCenterFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnSmallAirplane")
	float m_Param_AttackTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnSmallAirplane")
	float m_Param_MissileLockonDis;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnSmallAirplane")
	float m_Param_DashSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnSmallAirplane")
	float m_Param_DashBrake;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnSmallAirplane")
	float m_Param_DodgeLRSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnSmallAirplane")
	float m_Param_DodgeLRBrake;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnSmallAirplane")
	float m_Param_DodgeLRDirRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnSmallAirplane")
	float m_Param_DodgeInputRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnSmallAirplane")
	class UTresReactorComponent* m_Reactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVehiclePawnSmallAirplane")
	class ATresCameraAirplane* m_Camera;

	//void OnStartBossDefeatEffect() {};
};
