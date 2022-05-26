#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "EX355_CutUpTractionInfo.h"
#include "TresAttack15_e_ex355_CutUp.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack15_e_ex355_CutUp : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bWarpDisappear;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWarpDisappearTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bWarpMove;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQS_Warp;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_WarpBBKeyName;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEndWarpMove;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQS_EndWarp;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_EndWarpBBKeyName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEndWarpTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX355_CutUpTractionInfo> m_TractionInfoArray;
    
    UTresAttack15_e_ex355_CutUp();
};

