#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mercuna3DMovementProperties.generated.h"

USTRUCT(BlueprintType)
struct FMercuna3DMovementProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector MaxAccel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxAngSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxAngAccel;
    
    MERCUNA3DMOVEMENT_API FMercuna3DMovementProperties();
};

