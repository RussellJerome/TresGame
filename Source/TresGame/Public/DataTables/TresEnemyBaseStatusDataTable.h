#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresEnemyBaseStatusDataTable.generated.h"

USTRUCT()
struct FTresEnemyBaseStatusDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_BaseHP;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_BaseExp;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_BaseAttackPower;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_BaseDefensePower;
    
    TRESGAME_API FTresEnemyBaseStatusDataTable();
};

