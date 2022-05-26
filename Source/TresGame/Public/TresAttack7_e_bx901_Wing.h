#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "BX901_DarkCubeMine_DarkWingInfo.h"
#include "TresAttack7_e_bx901_Wing.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack7_e_bx901_Wing : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fWingScale;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_DarkCubeMineProjClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DarkCubeMineNum;
    
    UPROPERTY(EditDefaultsOnly)
    FBX901_DarkCubeMine_DarkWingInfo m_DarkCubeMine_DarkWingInfo;
    
    UTresAttack7_e_bx901_Wing();
};

