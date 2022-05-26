#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPrimitiveComponentBase.h"
#include "TresGumiShipLockonPrimitive.generated.h"

class UBodySetup;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipLockonPrimitive : public UTresGumiShipPrimitiveComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoEnableWhenBegin;
    
    UPROPERTY(DuplicateTransient, Transient)
    UBodySetup* m_pBodySetup;
    
public:
    UTresGumiShipLockonPrimitive();
};

