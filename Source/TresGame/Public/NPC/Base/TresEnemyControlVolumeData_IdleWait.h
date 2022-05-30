#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntityControlVolumeData.h"
#include "TresEnemyControlVolumeData_IdleWait.generated.h"

UCLASS(EditInlineNew)
class UTresEnemyControlVolumeData_IdleWait : public UTresLevelEntityControlVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 m_bIsDistance2D: 1;
    
    UPROPERTY(EditAnywhere)
    float m_StartMoveDistance;
    
    UTresEnemyControlVolumeData_IdleWait();
};

