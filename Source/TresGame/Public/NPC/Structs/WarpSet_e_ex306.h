#pragma once
#include "CoreMinimal.h"
#include "WarpSet_e_ex306.generated.h"

class ATresCharPawnBase;

USTRUCT(BlueprintType)
struct FWarpSet_e_ex306 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_GoalBBKeyName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpTime;
    
protected:
    UPROPERTY()
    ATresCharPawnBase* m_pOwner;
    
public:
    TRESGAME_API FWarpSet_e_ex306();
};

