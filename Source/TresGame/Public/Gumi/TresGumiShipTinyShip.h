#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCharaPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGMInputResult.h"
#include "ETresGumiShipTinyShipFormation.h"
#include "TresGumiShipTinyShip.generated.h"

class ATresGumiShipPlayerControllerBase;

UCLASS()
class ATresGumiShipTinyShip : public ATresGumiShipCharaPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RollSpeedRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector SideOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FVector> OptionOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAccel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxBrake;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxNAccel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxNBrake;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NearRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NearVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float ResetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float ResetVelocity;
    
    ATresGumiShipTinyShip();
    UFUNCTION(BlueprintCallable)
    void SetFormations(ETresGumiShipTinyShipFormation Up, ETresGumiShipTinyShipFormation Right, ETresGumiShipTinyShipFormation Down, ETresGumiShipTinyShipFormation Left);
    
    UFUNCTION(BlueprintCallable)
    void ResetLocation();
    
private:
    UFUNCTION()
    void OnPressLeftRight(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION()
    void OnInputLStick(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
};

