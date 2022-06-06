#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "TresGimmickBX_Kousokugaitou.generated.h"

UCLASS(Abstract, Config=Game)
class ATresGimmickBX_Kousokugaitou : public AStaticMeshActor {
    GENERATED_BODY()
public:
    ATresGimmickBX_Kousokugaitou();
};

