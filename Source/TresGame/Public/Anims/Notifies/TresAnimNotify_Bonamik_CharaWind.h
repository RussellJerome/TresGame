#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESQEX_Bonamik_EmissiveDirection.h"
#include "UObject/NoExportTypes.h"
#include "TresAnimNotify_Bonamik_CharaWind.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_Bonamik_CharaWind : public UAnimNotify {
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
    
    UTresAnimNotify_Bonamik_CharaWind();
};

