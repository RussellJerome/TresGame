#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraNormal.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraTargetInfo.h"
#include "TresCameraTeaCup.generated.h"

class UCameraShake;

UCLASS(NotPlaceable)
class ATresCameraTeaCup : public ATresCameraNormal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LerpTimeLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RotYawSpeedLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DistanceLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_BaseRotationLow;
    
    UPROPERTY(EditAnywhere)
    FTresCameraTargetInfo m_TargetInfoLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LerpTimeHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RotYawSpeedHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DistanceHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_BaseRotationHigh;
    
    UPROPERTY(EditAnywhere)
    FTresCameraTargetInfo m_TargetInfoHigh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCameraShake> m_HitShake;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCameraShake> m_LandingShake;
    
public:
    ATresCameraTeaCup();
};

