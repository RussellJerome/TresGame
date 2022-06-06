#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipAttackElementResistance.h"
#include "TresGumiShipHitEffectInfo.h"
#include "TresGumiShipBodyCollisionParam.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipBodyCollisionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FTresGumiShipAttackElementResistance m_ElementResistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FTresGumiShipHitEffectInfo m_EffectInfo;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bDontUseGrazeCollision;
    
    TRESGAME_API FTresGumiShipBodyCollisionParam();
};

