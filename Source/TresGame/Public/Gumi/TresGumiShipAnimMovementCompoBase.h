#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipMovementCompoBase.h"
#include "Animation/AnimationAsset.h"
#include "TresGumiShipAnimMovementCompoBase.generated.h"

class ATresGumiShipCharaPawnBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipAnimMovementCompoBase : public UTresGumiShipMovementCompoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ATresGumiShipCharaPawnBase* m_pCharaPawn;
    
private:
    UPROPERTY(Transient)
    FRootMotionMovementParams m_RootMotionParams;
    
public:
    UTresGumiShipAnimMovementCompoBase();
};

