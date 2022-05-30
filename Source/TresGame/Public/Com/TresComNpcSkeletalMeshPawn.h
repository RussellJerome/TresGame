#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresComNpcSkeletalMeshPawn.generated.h"

UCLASS()
class TRESGAME_API ATresComNpcSkeletalMeshPawn : public ATresCharPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fNearCameraRange;
    
    ATresComNpcSkeletalMeshPawn();
};

