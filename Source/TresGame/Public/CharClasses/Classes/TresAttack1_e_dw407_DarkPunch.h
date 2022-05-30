#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_dw407_DarkPunch.generated.h"

class UForceFeedbackEffect;
class UCameraShake;

UCLASS(HideDropdown)
class UTresAttack1_e_dw407_DarkPunch : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCameraShake> m_ShakeCameraClass;
    
    UPROPERTY(EditDefaultsOnly)
    UForceFeedbackEffect* m_ForceFeedbackClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TimeUntilSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_SpawnShadowNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ShadowMaxNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnShadowInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnProjectileHollowOutRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnShadowRadius;
    
public:
    UTresAttack1_e_dw407_DarkPunch();
};

