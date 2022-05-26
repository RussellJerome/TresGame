#pragma once
#include "CoreMinimal.h"
#include "TresUInt8_Range.h"
#include "Engine/DataTable.h"
#include "TresSoKcKeyHoleGimmickCommonParameter.generated.h"

USTRUCT()
struct FTresSoKcKeyHoleGimmickCommonParameter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fConnectBeamMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fConnectBeamInitialSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fConnectBeamAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLastLightConnectBeamMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLastLightConnectBeamInitialSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLastLightConnectBeamAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nConnectedKeyHolePassableLimitNum;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUInt8_Range m_NormalKeyHoleConnectableCountRange;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUInt8_Range m_ChanceMarkerKeyHoleConnectableCountRange;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUInt8_Range m_BigChanceMarkerKeyHoleConnectableCountRange;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_uChanceMarkerLimitNum;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_uBigChanceMarkerLimitNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fChanceMarkerProbability;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBigChanceMarkerProbability;
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    TArray<uint8> m_ChanceMarkerPatternDistributionTable;
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    TArray<float> m_ChanceMarkerLimitTimeTable;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBigChanceMarkerLimitTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nBigChanceMarkerNormaConnectedCount;
    
    TRESGAME_API FTresSoKcKeyHoleGimmickCommonParameter();
};

