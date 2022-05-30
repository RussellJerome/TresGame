#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_EmissiveDirection.h"
#include "UObject/NoExportTypes.h"
#include "TresHologramCharaWindParam.generated.h"

USTRUCT(BlueprintType)
struct FTresHologramCharaWindParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> m_Groups;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_EmissiveDirection> m_DirectionSpace;
    
    UPROPERTY(EditAnywhere)
    FVector m_DirectionVec;
    
    UPROPERTY(EditAnywhere)
    float m_BaseStrength;
    
    UPROPERTY(EditAnywhere)
    float m_WaveAmplitude;
    
    UPROPERTY(EditAnywhere)
    float m_WavePeriod;
    
    TRESGAME_API FTresHologramCharaWindParam();
};

