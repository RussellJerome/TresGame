#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack8_e_ex362_DarkRush.generated.h"

class UTresStateBase;
class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack8_e_ex362_DarkRush : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_BuddyState;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditAnywhere)
    float m_TeleportWaitTime;
    
    UPROPERTY(EditAnywhere)
    bool m_IsFinishAttack;
    
    UPROPERTY(EditAnywhere)
    bool m_NotBuddyWarp;
    
    UPROPERTY(EditAnywhere)
    float m_CameraDist;
    
    UPROPERTY(EditAnywhere)
    float m_CameraTransition;
    
    UTresAttack8_e_ex362_DarkRush();
};

