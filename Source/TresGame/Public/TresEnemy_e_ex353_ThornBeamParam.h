#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx353ThornBeamAfterHitInfo.h"
#include "UObject/Object.h"
#include "TresEnemyEx353ThornBeamIndex.h"
#include "TresEnemyEx353ThornBeamBeforeHitInfo.h"
#include "TresEnemy_e_ex353_ThornBeamParam.generated.h"

UCLASS(Abstract)
class UTresEnemy_e_ex353_ThornBeamParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyEx353ThornBeamBeforeHitInfo> m_ThornBeamBeforeInfo;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyEx353ThornBeamAfterHitInfo> m_ThornBeamAfterInfo;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyEx353ThornBeamIndex> m_ThornBeamIndexList;
    
    UTresEnemy_e_ex353_ThornBeamParam();
};

