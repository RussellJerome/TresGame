#pragma once
#include "CoreMinimal.h"
#include "EX105_JOINT_INFO.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FEX105_JOINT_INFO {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresProjectileBase* pCube;
    
    TRESGAME_API FEX105_JOINT_INFO();
};

