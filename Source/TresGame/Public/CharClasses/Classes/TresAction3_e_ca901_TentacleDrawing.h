#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_ca901_TentacleDrawing.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAction3_e_ca901_TentacleDrawing : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_TentacleProjectileAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_TentacleShootUpProjectileAsset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnTentacleTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDarkVortexVisiblity: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkVortexHomingRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimTargetMoveOffset;
    
    UTresAction3_e_ca901_TentacleDrawing();
};

