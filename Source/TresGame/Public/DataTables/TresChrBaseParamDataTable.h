#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresChrBiologicalType.h"
#include "ETresBodyPushPowerLevel.h"
#include "ETresDropItemID.h"
#include "TresChrBaseParamDataTable.generated.h"

USTRUCT()
struct FTresChrBaseParamDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_MaxHitPoint;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxHPRate;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MaxMagicPoint;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MaxFocusPoint;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttackPower;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MagicPower;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DefensePower;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AbilityPoint;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ExpRate;
    
    UPROPERTY(EditDefaultsOnly)
    ETresBodyPushPowerLevel m_BodyPushPower;
    
    UPROPERTY(EditDefaultsOnly)
    ETresChrBiologicalType m_BioType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttractionRate;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MaxBodyStrongValue;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MaxArmorHP;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DamageMin;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DamageMax;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_NeedReactionSameTeamZeroDmgAtk: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RevengeLimit;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MaxRevengeCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RevengeCoolDownTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RevengeCoefficientPhysical;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RevengeCoefficientFire;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RevengeCoefficientBlizzard;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RevengeCoefficientThunder;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RevengeCoefficientWater;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RevengeCoefficientAero;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RevengeCoefficientDark;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RevengeCoefficientNoType;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttrResistPhysical;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttrResistFire;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttrResistBlizzard;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttrResistThunder;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttrResistWater;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttrResistAero;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttrResistDark;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttrResistNoType;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ResistRapidFire;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ResistComboParam;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_AttrWeekPointPhysical: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_AttrWeekPointFire: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_AttrWeekPointBlizzard: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_AttrWeekPointThunder: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_AttrWeekPointWater: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_AttrWeekPointAero: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_AttrWeekPointDark: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_AttrWeekPointNoType: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bResistEffectFreeFlow: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bResistEffectDeath: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bResistEffectCatch: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bResistEffectDrillBind: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bResistEffectYoBind: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bResistEffectRalphBind: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bResistEffectEnergyBurst: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bResistEffectFreeze: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bResistEffectStop: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bResistEffectMagnet: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bResistEffectStun: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bResistEffectSneeze: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bResistEffectHoney: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bResistEffectCloud: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bResistEffectDischarge: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bResistEffectBurn: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bResistEffectPoleSpinTurn: 1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresDropItemID m_DropPrize1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumDropPrize1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresDropItemID m_DropPrize2;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumDropPrize2;
    
    UPROPERTY(EditDefaultsOnly)
    ETresDropItemID m_DropItemID;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DropItemRate;
    
    UPROPERTY(EditDefaultsOnly)
    ETresDropItemID m_DropItemID2;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DropItemRate2;
    
    UPROPERTY(EditDefaultsOnly)
    ETresDropItemID m_DropItemID3;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DropItemRate3;
    
    TRESGAME_API FTresChrBaseParamDataTable();
};

