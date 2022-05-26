#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "EX355_RushAwayTractionInfo.h"
#include "EX355_RushTractionInfo.h"
#include "EX355_RushAwayTurnInfo.h"
#include "TresAttack2_e_ex355_Rush.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack2_e_ex355_Rush : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxAttackCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVerticalHomingVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX355_RushTractionInfo> m_TractionInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAwayDistanceFromTargetOnFinish;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX355_RushAwayTurnInfo> m_AwayTurnInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX355_RushAwayTractionInfo> m_AwayTractionInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bAwayWhileTargetDamage;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bNoAwayWhileTargetAttack;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDisableAtkCollWhileAway;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_bDisableAtkCollWhileAwayID;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQS_Away;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAwayRootMotionScale;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSkipSpinOnAway;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bLandOnAway;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAwayAnimInterpTime;
    
    UPROPERTY()
    bool m_bAwayAnimInterpTime;
    
    UTresAttack2_e_ex355_Rush();
};

