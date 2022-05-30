#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimSingleNodeInstanceProxy.h"
#include "TresGummiShipAnimInstanceProxy.generated.h"

USTRUCT()
struct FTresGummiShipAnimInstanceProxy : public FAnimSingleNodeInstanceProxy {
    GENERATED_BODY()
public:
    TRESGAME_API FTresGummiShipAnimInstanceProxy();
};

