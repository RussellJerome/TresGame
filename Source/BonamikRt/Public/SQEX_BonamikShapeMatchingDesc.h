#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikShapeMatchingDesc.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikShapeMatchingDesc {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_TotalParticle;
    
    UPROPERTY()
    int32 m_RegionSize;
    
    UPROPERTY()
    float m_Stiffness;
    
    UPROPERTY()
    uint32 m_ParticleIds[50];
    
    BONAMIKRT_API FSQEX_BonamikShapeMatchingDesc();
};

