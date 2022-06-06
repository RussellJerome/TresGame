#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "BX901_DarkCubeMineGroupSpawnInfo.h"
#include "EBX901_QuickMoveDir.h"
#include "TresAction4_e_bx901_QuickMove.generated.h"

UCLASS(HideDropdown)
class UTresAction4_e_bx901_QuickMove : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EBX901_QuickMoveDir> m_Direction;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAngleFromFront;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInitVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBrakeAccel;
    
    UPROPERTY(EditDefaultsOnly)
    FBX901_DarkCubeMineGroupSpawnInfo m_DarkCubeMineGroupSpawnInfo;
    
    UTresAction4_e_bx901_QuickMove();
};

