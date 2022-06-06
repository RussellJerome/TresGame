#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProj_MagicReaction.h"
#include "TresProj_MagicBase.generated.h"

UCLASS(Abstract)
class ATresProj_MagicBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FTresProj_MagicReaction m_Reaction[8];
    
public:
    ATresProj_MagicBase();
};

