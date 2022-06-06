#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickDitherFadeInterface.h"
#include "TresGimmickPrizeGimmickSkeletalBase.generated.h"

UCLASS(Abstract, Config=Game)
class ATresGimmickPrizeGimmickSkeletalBase : public ATresGimmickSkeletalBase, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName m_GimmickClipDitherParamName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_IsGimmickClipDitherParamInvert;
    
    ATresGimmickPrizeGimmickSkeletalBase();
    
    // Fix for true pure virtual functions not being implemented
};

