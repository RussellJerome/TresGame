#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipHudRaderParam.h"
#include "TresGumiShipHudGuideAreaParam.h"
#include "TresGumiShipHudStanderdDataTable.generated.h"

USTRUCT()
struct FTresGumiShipHudStanderdDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresGumiShipHudRaderParam m_RaderParam;
    
    UPROPERTY(EditDefaultsOnly)
    FTresGumiShipHudGuideAreaParam m_GuideParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fShowMessageWindowTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_dEnemyHPGaugeMax;
    
    TRESGAME_API FTresGumiShipHudStanderdDataTable();
};

