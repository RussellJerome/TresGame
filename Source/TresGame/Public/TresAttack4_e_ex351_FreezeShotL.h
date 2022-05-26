#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex351_Base.h"
#include "TresEnemyEx351SpawnInfoL.h"
#include "TresEnemyEx351FreezeShotInfo.h"
#include "TresEnemyEx351FreezeShotSpawnWorker.h"
#include "TresAttack4_e_ex351_FreezeShotL.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack4_e_ex351_FreezeShotL : public UTresAttack_e_ex351_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_FreezeShotAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyEx351SpawnInfoL> m_SpawnInfos;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bSpawnLocationCorrection: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnLocationCorrectionDist;
    
    UPROPERTY()
    TArray<FTresEnemyEx351FreezeShotSpawnWorker> m_FreezeShotSpawnWorker;
    
    UPROPERTY()
    TArray<FTresEnemyEx351FreezeShotInfo> m_FreezeShotList;
    
    UTresAttack4_e_ex351_FreezeShotL();
};

