#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresVehiclePawnBase.h"
#include "TresVehiclePawnSmallAirplane.generated.h"

class ATresProjectileBase;
class ATresCameraAirplane;
class UTresReactorComponent;

UCLASS()
class ATresVehiclePawnSmallAirplane : public ATresVehiclePawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjVulcan;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjMissile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_InputPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_VulcanTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MovePitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_AimDis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_Param_AimCenterFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_AttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MissileLockonDis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DashSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DashBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DodgeLRSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DodgeLRBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DodgeLRDirRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DodgeInputRate;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* m_Reactor;
    
    UPROPERTY()
    ATresCameraAirplane* m_Camera;
    
public:
    ATresVehiclePawnSmallAirplane();
    UFUNCTION()
    void OnStartBossDefeatEffect();
    
};

