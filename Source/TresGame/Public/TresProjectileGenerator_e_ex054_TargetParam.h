#pragma once
#include "CoreMinimal.h"
#include "TresProjectileGenerator_e_ex054_TargetParam.generated.h"

class ATresCharPawnBase;

USTRUCT()
struct FTresProjectileGenerator_e_ex054_TargetParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresCharPawnBase* m_pTarget;
    
    TRESGAME_API FTresProjectileGenerator_e_ex054_TargetParam();
};

