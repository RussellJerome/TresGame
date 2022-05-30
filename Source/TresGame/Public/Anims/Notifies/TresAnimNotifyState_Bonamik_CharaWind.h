#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ESQEX_Bonamik_EmissiveDirection.h"
#include "UObject/NoExportTypes.h"
#include "TresAnimNotifyState_Bonamik_CharaWind.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_Bonamik_CharaWind : public UAnimNotifyState {
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
    
    UTresAnimNotifyState_Bonamik_CharaWind();
};

