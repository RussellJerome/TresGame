#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresPlayerAttackStateParameterDataTable.generated.h"

USTRUCT()
struct FTresPlayerAttackStateParameterDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_MotionName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAnimStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseTractionMove;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseRootMoveScale;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIsJumpAttack;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIsDownAttack;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bNotFallingUntilStartAttack;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bStabSuppression;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTractionSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTractionSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTractionRateZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRootMoveLength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCloseRangeXY;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIsFinish;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIsAerial;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIsInvincible;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIsImmpbile;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIsFaceTrgUntil;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIgnoreCoolDown;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInvincibleTimer;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIsWarp;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWarpTimer;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_WarpMotionName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_dWarpAuraEffectGroup;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_dEffectGroup;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_dVoiceGroup;
    
    TRESGAME_API FTresPlayerAttackStateParameterDataTable();
};

