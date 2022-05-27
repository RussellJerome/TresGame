#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "CloneBurstSlashTypes_e_ex360.h"
#include "TresAttack10_e_ex360_CloneBurstSlash.generated.h"

class UCurveVector;
class ATresProjectile_e_ex360_KeyBlades;

UCLASS(HideDropdown)
class UTresAttack10_e_ex360_CloneBurstSlash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<CloneBurstSlashTypes_e_ex360> m_SlashType;
    
    UPROPERTY(EditAnywhere)
    float m_MoveStartMotPlayRate;
    
    UPROPERTY(EditAnywhere)
    float m_AttackMotPlayRate;
    
    UPROPERTY(EditAnywhere)
    float m_MoveHight;
    
    UPROPERTY(EditAnywhere)
    float m_MoveWide;
    
    UPROPERTY(EditAnywhere)
    float m_MoveToTargetAddWide;
    
    UPROPERTY(EditAnywhere)
    float m_Move2TimeMin;
    
    UPROPERTY(EditAnywhere)
    float m_Move2Speed;
    
    UPROPERTY(EditAnywhere)
    float m_OffsetZ;
    
    UPROPERTY(EditAnywhere)
    float m_OffsetDist;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UCurveVector* m_MoveScaleCurve;
    
    UPROPERTY(EditAnywhere)
    float m_AttackMotDefaultSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_AttackMotSpeedMin;
    
    UPROPERTY(EditAnywhere)
    float m_AttackMotChectDist;
    
    UPROPERTY(EditAnywhere)
    float m_AttackStartTime;
    
    UPROPERTY(EditAnywhere)
    float m_AttackMotScaleRate;
    
private:
    UPROPERTY()
    ATresProjectile_e_ex360_KeyBlades* m_RidedKeyBlades;
    
public:
    UTresAttack10_e_ex360_CloneBurstSlash();
};

