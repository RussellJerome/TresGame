#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "ESQEX_Bonamik_WindType.h"
#include "SQEX_BonamikWindDesc.generated.h"

UCLASS()
class BONAMIKRT_API USQEX_BonamikWindDesc : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ESQEX_Bonamik_WindType> m_WindType;
    
    UPROPERTY()
    FVector m_WindForce;
    
    UPROPERTY()
    FVector m_RandomRange;
    
    UPROPERTY()
    float m_RandomTime;
    
    UPROPERTY()
    FVector m_WaveMagnitude;
    
    UPROPERTY()
    FVector m_WaveFrequency;
    
    UPROPERTY()
    FVector m_WaveMagOffset;
    
    UPROPERTY()
    FVector m_WaveFreqOffset;
    
    UPROPERTY()
    float m_WaveTime;
    
    UPROPERTY()
    FVector m_CustomWaveScale;
    
    UPROPERTY()
    FVector m_CustomWaveOffset;
    
    UPROPERTY()
    float m_CustomWaveTime;
    
    UPROPERTY()
    TArray<float> m_DataX;
    
    UPROPERTY()
    TArray<float> m_DataY;
    
    UPROPERTY()
    TArray<float> m_DataZ;
    
    UPROPERTY()
    float m_PointStrength;
    
    UPROPERTY()
    float m_BlastRange;
    
    UPROPERTY()
    float m_BlastSpeed;
    
    UPROPERTY()
    float m_PointRadius;
    
    UPROPERTY()
    float m_PeakInRange;
    
    UPROPERTY()
    int32 m_StartFrame;
    
    UPROPERTY()
    int32 m_LoopNum;
    
    USQEX_BonamikWindDesc();
};

