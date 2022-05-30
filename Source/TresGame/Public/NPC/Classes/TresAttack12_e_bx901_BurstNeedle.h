#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "BX901_NeedleRainInfo.h"
#include "TresAttack12_e_bx901_BurstNeedle.generated.h"

UCLASS(HideDropdown)
class UTresAttack12_e_bx901_BurstNeedle : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FBX901_NeedleRainInfo m_NeedleRainInfo;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxNeedleNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWingContractPer;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSkipEndAnim;
    
    UTresAttack12_e_bx901_BurstNeedle();
};

