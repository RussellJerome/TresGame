#pragma once
#include "CoreMinimal.h"
#include "TresProj_MagicBase.h"
#include "ETresDamageKind.h"
#include "TresProj_MagicAero.generated.h"

UCLASS(Abstract)
class ATresProj_MagicAero : public ATresProj_MagicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 m_SwirlLimit;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresDamageKind> m_AfterDamageKind;
    
public:
    ATresProj_MagicAero();
};

