#pragma once
#include "CoreMinimal.h"
#include "TresGimmickMI_02_LaserArmActionParam.generated.h"

USTRUCT(BlueprintType)
struct FTresGimmickMI_02_LaserArmActionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ArmRotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ArmUpDownSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ArmTargetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ArmStartupTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ArmRotateMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ArmRotateMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LaserChargeTime;
    
    TRESGAME_API FTresGimmickMI_02_LaserArmActionParam();
};

