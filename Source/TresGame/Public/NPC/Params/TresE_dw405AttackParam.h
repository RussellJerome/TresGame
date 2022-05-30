#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Base/TresAttack_e_dw405_Base.h"
#include "TresE_dw405AttackParam.generated.h"

class UTresAttack_e_dw405_Base;

USTRUCT(BlueprintType)
struct FTresE_dw405AttackParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresAttack_e_dw405_Base> AttackDefinition;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableOverrideAppearOffsetAngle: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearOffsetAngle;
    
    TRESGAME_API FTresE_dw405AttackParam();
};

