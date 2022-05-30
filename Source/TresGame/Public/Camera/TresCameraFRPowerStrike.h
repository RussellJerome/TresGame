#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraNormal.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraTargetInfo.h"
#include "TresCameraFRPowerStrike.generated.h"

class UCameraShake;

UCLASS(NotPlaceable)
class ATresCameraFRPowerStrike : public ATresCameraNormal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LerpTimeNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RotYawSpeedNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DistanceNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_BaseRotationNormal;
    
    UPROPERTY(EditAnywhere)
    FTresCameraTargetInfo m_TargetInfoNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LerpTimeJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RotYawSpeedJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DistanceJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_BaseRotationJump;
    
    UPROPERTY(EditAnywhere)
    FTresCameraTargetInfo m_TargetInfoJump;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCameraShake> m_HitShake;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCameraShake> m_LandingShake;
    
public:
    ATresCameraFRPowerStrike();
};

