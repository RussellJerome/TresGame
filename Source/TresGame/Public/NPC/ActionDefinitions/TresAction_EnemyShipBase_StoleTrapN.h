#pragma once
#include "CoreMinimal.h"
#include "TresAction_EnemyShipBase_StoleTrapBase.h"
#include "UObject/NoExportTypes.h"
#include "EStoleTrapN.h"
#include "StoleTrapWorkData.h"
#include "TresAction_EnemyShipBase_StoleTrapN.generated.h"

UCLASS(HideDropdown)
class UTresAction_EnemyShipBase_StoleTrapN : public UTresAction_EnemyShipBase_StoleTrapBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_StoleTrapNum;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_RadiusRange;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_SpawnRandamTimeRange;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_InvalidRadiusRangeFromBattleCenter;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CircleDistortionRate;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EStoleTrapN::Type> m_CenterType;
    
protected:
    UPROPERTY(Transient)
    TArray<FStoleTrapWorkData> m_ProjList;
    
public:
    UTresAction_EnemyShipBase_StoleTrapN();
};

