#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipDropPrizeData.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipGimmickCannonTable.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickCannonTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pDeadVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_vDeadOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCannonDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTresGumiShipDropPrizeData m_Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fPcDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_MultiCannon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_CannonHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fRespawnTime;
    
    TRESGAME_API FTresGumiShipGimmickCannonTable();
};

