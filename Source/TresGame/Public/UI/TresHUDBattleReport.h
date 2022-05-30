#pragma once
#include "CoreMinimal.h"
#include "TresHUDBase.h"
#include "TresHUDBattleReport.generated.h"

class UTresUIP_BattleReport;
class UTresUIDataAsset;
class USoundBase;
class UTresUIP_SaveLoad;

UCLASS(NonTransient)
class ATresHUDBattleReport : public ATresHUDBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_BGM;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUIDataAsset* m_UIDataAssetBattleReport;
    
    UPROPERTY(Transient)
    UTresUIP_BattleReport* m_BattleReport;
    
    UPROPERTY(Transient)
    UTresUIP_SaveLoad* m_SaveLoad;
    
public:
    ATresHUDBattleReport();
};

