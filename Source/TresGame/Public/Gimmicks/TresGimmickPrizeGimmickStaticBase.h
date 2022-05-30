#pragma once
#include "CoreMinimal.h"
#include "TresGimmickStaticBase.h"
#include "TresGimmickDitherFadeInterface.h"
#include "TresGimmickPrizeGimmickStaticBase.generated.h"

UCLASS(Abstract, Config=Game)
class ATresGimmickPrizeGimmickStaticBase : public ATresGimmickStaticBase, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName m_GimmickClipDitherParamName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_IsGimmickClipDitherParamInvert;
    
    ATresGimmickPrizeGimmickStaticBase();
    
    // Fix for true pure virtual functions not being implemented
};

