#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipAttackElementType.h"
#include "ETresGumiShipAttackSubElemntType.h"
#include "ETresGumiShipBadStateType.h"
#include "ETresGumiShipReactionType.h"
#include "TresGumiShipSkillParam.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresGumiShipSkillParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackPoint;
    
    UPROPERTY(EditDefaultsOnly)
    ETresGumiShipAttackElementType m_eElementType;
    
    UPROPERTY(EditDefaultsOnly)
    ETresGumiShipAttackSubElemntType m_eSubElementType;
    
    UPROPERTY(EditDefaultsOnly)
    ETresGumiShipBadStateType m_eBadStateType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTimeOfBadStateEffective;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPercentOfBadState;
    
    UPROPERTY(EditDefaultsOnly)
    ETresGumiShipReactionType m_eReactionType;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pHitEffect;
    
    TRESGAME_API FTresGumiShipSkillParam();
};

