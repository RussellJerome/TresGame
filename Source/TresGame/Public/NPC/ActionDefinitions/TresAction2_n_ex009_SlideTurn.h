#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAction2_n_ex009_SlideTurn.generated.h"

UCLASS(HideDropdown)
class UTresAction2_n_ex009_SlideTurn : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bSelectRight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_TurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_TurnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_RunDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_MoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 m_PlayVoiceRate;
    
public:
    UTresAction2_n_ex009_SlideTurn();
};

