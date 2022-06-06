#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemyGeneratorDataTable.generated.h"

class ATresGumiShipEnemyPawnBase;

USTRUCT()
struct FTresGumiShipEnemyGeneratorDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresGumiShipEnemyPawnBase> m_SpawnEnemyClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fOffsetX;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fOffsetY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nAttackPriority;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpawnDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    FGuid m_EnemyGUID;
    
    TRESGAME_API FTresGumiShipEnemyGeneratorDataTable();
};

