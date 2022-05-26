#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "UObject/NoExportTypes.h"
#include "TresSplineLinkLineComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresSplineLinkLineComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor SplineColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SplineArrowTipSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSplineDisabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* m_LinkSplineActor;
    
    UTresSplineLinkLineComponent();
};

