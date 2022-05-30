#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipAtkHitTestType.h"
#include "TresGumiShipSkillParam.h"
#include "TresGumiShipAtkCollisionParam.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipAtkCollisionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ETresGumiShipAtkHitTestType m_eHitTestType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bIsHitProjectile: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bIsHitBackGround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName m_AtkParamName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fTimeOfRefreshIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FTresGumiShipSkillParam m_SkillParam;
    
    TRESGAME_API FTresGumiShipAtkCollisionParam();
};

