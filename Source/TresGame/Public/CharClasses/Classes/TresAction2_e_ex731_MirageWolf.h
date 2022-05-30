#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "WolfSpawnInfo_e_ex731.h"
#include "TresAction2_e_ex731_MirageWolf.generated.h"

UCLASS(HideDropdown)
class UTresAction2_e_ex731_MirageWolf : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FWolfSpawnInfo_e_ex731> m_WolfSpawnInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWolfLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bJump;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInitJumpVelocityXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFlyAccelXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fJumpAngle;
    
    UTresAction2_e_ex731_MirageWolf();
};

