#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "MoveSlashTypes_e_ex301.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack1_e_ex301_MoveSlash.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex301_MoveSlash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<MoveSlashTypes_e_ex301> m_PramMoveSlashType;
    
    UPROPERTY(EditAnywhere)
    float m_InitSpeedZ;
    
    UPROPERTY(EditAnywhere)
    bool m_IsCheckHigh;
    
    UPROPERTY(EditAnywhere)
    float m_OffsetTargetHigh;
    
    UPROPERTY(EditAnywhere)
    float m_OffsetTargetHighKey;
    
    UPROPERTY(EditAnywhere)
    float m_NotMoveZRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AccelSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_MinSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_rRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_BrakeDistance;
    
    UPROPERTY(EditAnywhere)
    float m_BrakeSpeed;
    
    UPROPERTY(EditAnywhere)
    bool m_IsHoldAtkDistance;
    
    UPROPERTY(EditAnywhere)
    float m_HoldAtkDistance;
    
    UPROPERTY(EditAnywhere)
    float m_MoveMaxTime;
    
    UPROPERTY(EditAnywhere)
    float m_WarpTime;
    
    UPROPERTY(EditAnywhere)
    bool m_IsAttackCancel;
    
    UPROPERTY(EditAnywhere)
    bool m_IsDamagedTeleportMode;
    
    UPROPERTY(EditAnywhere)
    bool m_StrongAttack;
    
    UPROPERTY(EditAnywhere)
    bool m_UseSwordWave;
    
    UPROPERTY(EditAnywhere)
    float m_WarpRange;
    
    UPROPERTY(EditAnywhere)
    bool m_IsMoveOnly;
    
    UPROPERTY(EditAnywhere)
    FVector m_SwordWaveOffset;
    
    UPROPERTY(EditAnywhere)
    int32 m_SlashEffectGroupID;
    
    UPROPERTY(EditAnywhere)
    float m_SlashRotOffset;
    
public:
    UTresAttack1_e_ex301_MoveSlash();
};

