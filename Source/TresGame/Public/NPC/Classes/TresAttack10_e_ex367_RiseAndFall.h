#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack10_e_ex367_RiseAndFall.generated.h"

class ATresProjectileBase;
class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack10_e_ex367_RiseAndFall : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
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
    float m_BrakeSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_rRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_rCharaRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_BrakeDistance;
    
    UPROPERTY(EditAnywhere)
    float m_MinSpeed;
    
    UPROPERTY(EditAnywhere)
    bool m_IsHoldAtkDistance;
    
    UPROPERTY(EditAnywhere)
    float m_HoldAtkDistance;
    
    UPROPERTY(EditAnywhere)
    float m_MoveMaxTime;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditAnywhere)
    float m_WarpRange;
    
    UPROPERTY(EditAnywhere)
    bool m_StrongAttack;
    
    UPROPERTY(EditAnywhere)
    FVector m_SwordWaveOffset;
    
    UTresAttack10_e_ex367_RiseAndFall();
};

