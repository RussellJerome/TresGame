#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "ESQEX_Bonamik_EmissiveDirection.h"
#include "UObject/NoExportTypes.h"
#include "TresBonamikEmissiveVolume.generated.h"

class USkinnedMeshComponent;

UCLASS()
class TRESGAME_API ATresBonamikEmissiveVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    TArray<USkinnedMeshComponent*> m_ReferencedComponets;
    
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
    
    ATresBonamikEmissiveVolume();
};

