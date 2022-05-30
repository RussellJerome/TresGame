#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipConstellationCode.h"
#include "TresDetectMarkerComponentBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipConstellationMarkerComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipConstellationMarkerComponent : public UTresDetectMarkerComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresGumiShipConstellationCode> ConstellationCode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D SizeRectangle;
    
public:
    UTresGumiShipConstellationMarkerComponent();
};

