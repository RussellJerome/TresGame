#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex203_Smash.generated.h"

class UAnimSequenceBase;
class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack3_e_ex203_Smash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_RiseLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_FallStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_FallLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_FallRiseAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumSmash;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetFollowDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_GravityScales;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SubHeight;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RunEQSIntervalTime;
    
public:
    UTresAttack3_e_ex203_Smash();
};

