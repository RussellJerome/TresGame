#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack2_n_ex005_SpiralBloom.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_n_ex005_SpiralBloom : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_AttackStartAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_AttackLoopAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_AttackEndAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_LandMaxHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_LoopMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_TractionMaxJumpHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_TractionMaxJumpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bEnableTractionMove: 1;
    
public:
    UTresAttack2_n_ex005_SpiralBloom();
};

