#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "MoveSlashTypes_e_ex367.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack1_e_ex367_MoveSlashCurve.generated.h"

class UCurveVector;

UCLASS(HideDropdown)
class UTresAttack1_e_ex367_MoveSlashCurve : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<MoveSlashTypes_e_ex367> m_PramMoveSlashType;
    
    UPROPERTY(EditAnywhere)
    float m_InitSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_AccelSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_MoveTimeMin;
    
    UPROPERTY(EditAnywhere)
    UCurveVector* m_MoveScaleCurve;
    
    UPROPERTY(EditAnywhere)
    float m_AttackStartRot;
    
    UPROPERTY(EditAnywhere)
    float m_DirectMoveDist;
    
    UPROPERTY(EditAnywhere)
    bool m_IsDamagedTeleportMode;
    
    UPROPERTY(EditAnywhere)
    bool m_StrongAttack;
    
    UPROPERTY(EditAnywhere)
    bool m_UseSwordWave;
    
    UPROPERTY(EditAnywhere)
    FVector m_SwordWaveOffset;
    
    UPROPERTY(EditAnywhere)
    int32 m_SlashEffectGroupID;
    
    UPROPERTY(EditAnywhere)
    float m_SlashRotOffset;
    
    UPROPERTY(EditAnywhere)
    float m_MoveWide;
    
    UPROPERTY(EditAnywhere)
    float m_MoveToTargetAddWide;
    
    UPROPERTY(EditAnywhere)
    float m_OffsetZ;
    
    UPROPERTY(EditAnywhere)
    float m_OffsetDist;
    
    UPROPERTY(EditAnywhere)
    float m_AttackStartTime;
    
    UPROPERTY(EditAnywhere)
    float m_WavePitchOffset;
    
public:
    UTresAttack1_e_ex367_MoveSlashCurve();
};

