#pragma once
#include "CoreMinimal.h"
#include "TresDarkLaserSpawnParams_e_ex352.generated.h"

USTRUCT(BlueprintType)
struct FTresDarkLaserSpawnParams_e_ex352 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_BeginLaserIrradiationTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaserShiftMinTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaserShiftMaxTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaserIrradiationSignTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaserIrradiationLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaserExtendSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SignStartRequiredTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SignEndRequiredTime;
    
    TRESGAME_API FTresDarkLaserSpawnParams_e_ex352();
};

