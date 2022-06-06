#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresGumiShipAttackElementType.h"
#include "ETresGumiShipAttackSubElemntType.h"
#include "ETresGumiShipReactionType.h"
#include "ETresGumiShipBadStateType.h"
#include "TresGumiShipAttackDataTable.generated.h"

USTRUCT()
struct FTresGumiShipAttackDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackPoint;
    
    UPROPERTY(EditDefaultsOnly)
    ETresGumiShipAttackElementType m_eElementType;
    
    UPROPERTY(EditDefaultsOnly)
    ETresGumiShipAttackSubElemntType m_eSubElementType;
    
    UPROPERTY(EditDefaultsOnly)
    ETresGumiShipReactionType m_eReactionType;
    
    UPROPERTY(EditDefaultsOnly)
    ETresGumiShipBadStateType m_eBadStateType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTimeOfBadStateEffective;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPercentOfBadState;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_HitEffectDataName;
    
    TRESGAME_API FTresGumiShipAttackDataTable();
};

