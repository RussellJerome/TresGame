#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipDropPrizeData.h"
#include "TresGumiShipEnemyBaseParameterDataTable.generated.h"

USTRUCT()
struct FTresGumiShipEnemyBaseParameterDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_nMaxHitPoint;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nScorePoint;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxRotateSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchLimitAngle;
    
    UPROPERTY(EditDefaultsOnly)
    FTresGumiShipDropPrizeData m_DropPrizeSettingData;
    
    TRESGAME_API FTresGumiShipEnemyBaseParameterDataTable();
};

