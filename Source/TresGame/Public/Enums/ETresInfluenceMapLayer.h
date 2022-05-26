#pragma once
#include "CoreMinimal.h"
#include "ETresInfluenceMapLayer.generated.h"

UENUM(BlueprintType)
namespace ETresInfluenceMapLayer {
    enum Type {
        PlayerAndFriendNpc,
        Enemy,
        Wall,
        VectorField,
        Extra1,
        Extra2,
        Extra3,
        Extra4,
        LayerMax,
    };
}

