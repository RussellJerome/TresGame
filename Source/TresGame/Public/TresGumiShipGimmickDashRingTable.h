#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipGimmickDashRingTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickDashRingTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Accelerat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AcceleratTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RingRenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fDashDistance;
    
    TRESGAME_API FTresGumiShipGimmickDashRingTable();
};

