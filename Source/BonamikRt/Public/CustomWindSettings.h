#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESQEX_Bonamik_CustomWindType.h"
#include "CustomWindSettings.generated.h"

USTRUCT(BlueprintType)
struct FCustomWindSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_CustomWindType> m_WindType;
    
    UPROPERTY(EditAnywhere)
    FVector m_WindForce;
    
    UPROPERTY(EditAnywhere)
    FVector m_RandomRange;
    
    UPROPERTY(EditAnywhere)
    float m_RandomTime;
    
    UPROPERTY(EditAnywhere)
    FVector m_WaveMagnitude;
    
    UPROPERTY(EditAnywhere)
    FVector m_WaveFrequency;
    
    UPROPERTY(EditAnywhere)
    FVector m_WaveMagOffset;
    
    UPROPERTY(EditAnywhere)
    FVector m_WaveFreqOffset;
    
    UPROPERTY(EditAnywhere)
    float m_WaveTime;
    
    UPROPERTY(EditAnywhere)
    float m_PointStrength;
    
    UPROPERTY(EditAnywhere)
    float m_BlastRange;
    
    UPROPERTY(EditAnywhere)
    float m_BlastSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_PointRadius;
    
    UPROPERTY(EditAnywhere)
    float m_PeakInRange;
    
    UPROPERTY(EditAnywhere)
    int32 m_StartFrame;
    
    UPROPERTY(EditAnywhere)
    int32 m_LoopNum;
    
    BONAMIKRT_API FCustomWindSettings();
};

