#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipHitEffectDataTable.generated.h"

class UParticleSystem;

USTRUCT()
struct FTresGumiShipHitEffectDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pHitEffect;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseScaleFromCameraDistTo;
    
    TRESGAME_API FTresGumiShipHitEffectDataTable();
};

