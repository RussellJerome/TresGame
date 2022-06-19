#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ETresDamageAttribute.h"
#include "ETresCommandKind.h"
#include "ETresPhysDamageForceLevel.h"
#include "ETresAtkHitKnockbackType.h"
#include "ETresShootFlowKind.h"
#include "ETresDamageKind.h"
#include "ETresBadStatusType.h"
#include "TresDamageInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresDamageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName m_AttackDataIDName;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<ETresCommandKind> m_CommandKind;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<ETresShootFlowKind> m_ShootFlowKind;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<ETresDamageKind> m_DamageKind;
    
    UPROPERTY(BlueprintReadOnly)
    ETresDamageAttribute m_DamageAttribute;
    
    UPROPERTY(BlueprintReadOnly)
    float m_AttackSrcPower;
    
    UPROPERTY(BlueprintReadOnly)
    float m_DamagePowerScale;
    
    UPROPERTY(BlueprintReadOnly)
    float m_DamageParabolaAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float m_DamageMoveLength;
    
    UPROPERTY(BlueprintReadOnly)
    float m_DamageBrakeParam;
    
    UPROPERTY(BlueprintReadOnly)
    float m_DamageEffectTime;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAtkHitKnockbackType m_KnockbackType;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_KnockbackDir;
    
    UPROPERTY(BlueprintReadOnly)
    ETresBadStatusType m_BadStatusKind;
    
    UPROPERTY(BlueprintReadOnly)
    float m_BadStatusEffectTime;
    
    UPROPERTY(BlueprintReadOnly)
    float m_BadStatusEffectParam;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_ReactionPower;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_ArmorAttackPower;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_FormPoint;
    
    UPROPERTY(BlueprintReadOnly)
    uint32 m_bIsMagicAttack: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint32 m_bIsFinishAttack: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint32 m_bIsKillerAttack: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint32 m_bIsIgnoreGuard: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint32 m_bIsRapidFireAttack: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint32 m_bIsCriticalHit: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint32 m_bIsArmorDamage: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint32 m_bIsAerialAttack: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint32 m_bIsAttractionDamage: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint32 m_bIsCounterAttack: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint32 m_bIsJustGuardAttack: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint32 m_bIsEnableWeakGuardAttack: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint32 m_bIsEnableFullMpBurst: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint32 m_bIsEnableMagicDraw: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint32 m_bIsEnableNoReactBodyCorrection: 1;
    
    UPROPERTY(BlueprintReadOnly)
    ETresPhysDamageForceLevel m_PhysForceLv;
    
    TRESGAME_API FTresDamageInfo();
};

