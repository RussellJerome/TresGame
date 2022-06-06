#pragma once
#include "CoreMinimal.h"
#include "TresLoadAsset.h"
#include "TresPhysMatEffectAssetUnit.h"
#include "TresPhysMatEffectAsset.generated.h"

UCLASS()
class UTresPhysMatEffectAsset : public UTresLoadAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresPhysMatEffectAssetUnit m_Effects[63];
    
    UTresPhysMatEffectAsset();
};

