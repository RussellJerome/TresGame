#pragma once
#include "CoreMinimal.h"
#include "WaveOneCollInfo_e_ex359.h"
#include "UObject/NoExportTypes.h"
#include "EX355_DashClaymoreInfo.generated.h"

class UCurveVector;
class UCurveFloat;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FEX355_DashClaymoreInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fRevolveRadius;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_RevolveRadiusCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRevolveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_RevolvePhaseCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRevolveHeight;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_RevolveHeightCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* m_RotationCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FWaveOneCollInfo_e_ex359 m_OneCollInfo;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_WaveSpawnLocOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWaveWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GroundHitEffectClass;
    
    TRESGAME_API FEX355_DashClaymoreInfo();
};

