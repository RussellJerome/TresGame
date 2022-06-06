#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipGimmickMagmaTable.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickMagmaTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pMagmaVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fPlayerDistance;
    
    TRESGAME_API FTresGumiShipGimmickMagmaTable();
};

