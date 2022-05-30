#pragma once
#include "CoreMinimal.h"
#include "ETresLevelEntityDisappearMode.h"
#include "TresLevelEntitySequenceAction.h"
#include "TresLevelEntitySequenceAction_Destroy.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceAction_Destroy : public UTresLevelEntitySequenceAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresLevelEntityDisappearMode> m_DisappearMode;
    
    UTresLevelEntitySequenceAction_Destroy();
};

