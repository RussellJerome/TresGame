#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_EmissiveDirection.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "TresInterpTrackBonamikCharaWindKey.h"
#include "UObject/NoExportTypes.h"
#include "TresInterpTrackBonamikCharaWind.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackBonamikCharaWind : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresInterpTrackBonamikCharaWindKey> m_Keys;
    
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
    
    UTresInterpTrackBonamikCharaWind();
};

