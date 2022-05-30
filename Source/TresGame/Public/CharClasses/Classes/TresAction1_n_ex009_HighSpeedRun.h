#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAction1_n_ex009_HighSpeedRun.generated.h"

UCLASS(HideDropdown)
class UTresAction1_n_ex009_HighSpeedRun : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_MoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_MoveTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_StopDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_PlayVoiceRate;
    
public:
    UTresAction1_n_ex009_HighSpeedRun();
};

