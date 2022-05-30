#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntityControlVolumeData.h"
#include "TresEnemyControlVolumeData_e_ex081.generated.h"

UCLASS(EditInlineNew)
class UTresEnemyControlVolumeData_e_ex081 : public UTresLevelEntityControlVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 m_bIsDistance2D: 1;
    
    UPROPERTY(EditAnywhere)
    float m_DistanceJumpOff;
    
    UTresEnemyControlVolumeData_e_ex081();
};

