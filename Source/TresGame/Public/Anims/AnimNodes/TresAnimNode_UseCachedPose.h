#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "TresAnimNode_UseCachedPose.generated.h"

USTRUCT()
struct TRESGAME_API FTresAnimNode_UseCachedPose : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 m_bSetRefferedFlag: 1;
    
    UPROPERTY()
    uint8 m_bAlwaysRefferPrevPose: 1;
    
    FTresAnimNode_UseCachedPose();
};

