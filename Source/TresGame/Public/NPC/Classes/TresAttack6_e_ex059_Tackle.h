#pragma once
#include "CoreMinimal.h"
#include "ETresDashLimit.h"
#include "TresAttackDefinitionBase.h"
#include "ETresHitWallAction_e_ex059.h"
#include "TresAttack6_e_ex059_Tackle.generated.h"

UCLASS(HideDropdown)
class UTresAttack6_e_ex059_Tackle : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fMoveVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRotateVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinHomingDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ETresDashLimit::Type> m_DashLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_DashAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ETresHitWallAction_e_ex059::Type> m_HitWallAction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bProhibitOutOfBattleVolume;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_MinLoopDashDistance;
    
    UPROPERTY()
    bool m_bMaxReflectCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_iMaxReflectCount;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    float m_fRootTransformAmount_Start;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    float m_fRootTransformAmount_End;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    bool m_bDispDebug;
    
    UTresAttack6_e_ex059_Tackle();
};

