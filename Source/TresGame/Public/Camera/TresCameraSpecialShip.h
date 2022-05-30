#pragma once
#include "CoreMinimal.h"
#include "TresCameraRotTarget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraSpecialShip.generated.h"

UCLASS()
class ATresCameraSpecialShip : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_PluralTargetDistance[4];
    
    UPROPERTY(EditAnywhere)
    float m_PluralTargetDistanceFront[2];
    
    UPROPERTY(EditAnywhere)
    FVector m_PluralTargetOffset[4];
    
    UPROPERTY(EditAnywhere)
    FVector m_PluralTargetLocalOffset[4];
    
    UPROPERTY(EditAnywhere)
    float m_PluralGuardDistance[4];
    
    UPROPERTY(EditAnywhere)
    float m_PluralGuardPitchOffset[4];
    
    UPROPERTY(EditAnywhere)
    float m_GuardDistanceInTime;
    
    UPROPERTY(EditAnywhere)
    float m_GuardDistanceOutTime;
    
    UPROPERTY(EditAnywhere)
    float m_PluralRushDistance[4];
    
    UPROPERTY(EditAnywhere)
    float m_RushDistanceInTime;
    
    UPROPERTY(EditAnywhere)
    float m_RushDistanceOutTime;
    
    UPROPERTY(EditAnywhere)
    float m_RushPitch;
    
    UPROPERTY(EditAnywhere)
    float m_LimitPitchMin;
    
    UPROPERTY(EditAnywhere)
    float m_LimitPitchMax;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bShipAttach: 1;
    
public:
    ATresCameraSpecialShip();
    UFUNCTION(BlueprintCallable)
    void BP_SetCameraSpecialShipRotation(FRotator Rot, bool bWorld);
    
};

