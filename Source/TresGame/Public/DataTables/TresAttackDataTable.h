#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresAtkCollReflectReaction.h"
#include "ETresDamageKind.h"
#include "ETresAtkTeamCheckType.h"
#include "ETresDamageAttribute.h"
#include "ETresPhysDamageForceLevel.h"
#include "ETresAtkHitKnockbackType.h"
#include "ETresBadStatusType.h"
#include "TresAttackDataTable.generated.h"

USTRUCT()
struct FTresAttackDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_Power;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresDamageKind> m_DamageKind;
    
    UPROPERTY(EditDefaultsOnly)
    ETresDamageAttribute m_DamageAttribute;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DamagePowerScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DamageParabolaAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DamageMoveLength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DamageBrakeParam;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAtkHitKnockbackType m_KnockbackType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DamageExecRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DamageEffectTime;
    
    UPROPERTY(EditDefaultsOnly)
    ETresBadStatusType m_BadStatusKind;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BadStatusGenRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BadStatusEffectTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BadStatusEffectParam;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAtkTeamCheckType m_TeamCheckType;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ReactionPowerValue;
    
    UPROPERTY(VisibleAnywhere)
    uint8 m_bIsScrumAttack: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ArmorAttackPower;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_FormPoint;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsMagicAttack: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsIvalidGuard: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsRapidFire: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsKillerAttack: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsAttractionDamage: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsCounterAttack: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsEnableWeakGuardAttack: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ReflectLevel;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAtkCollReflectReaction m_ReflectReaction;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RevengePoint;
    
    UPROPERTY(EditDefaultsOnly)
    ETresPhysDamageForceLevel m_PhysForceLv;
    
    TRESGAME_API FTresAttackDataTable();
};

