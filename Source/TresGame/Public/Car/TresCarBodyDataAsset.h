#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "TresCarBodyDataAsset.generated.h"

class ATresBxCarActor;

UCLASS(BlueprintType)
class UTresCarBodyDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ATresBxCarActor> CarActorClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarFrontLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarBackLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightOffsetForward;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightOffsetSide;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightOffsetHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTransform> TyreTransforms1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTransform> TyreTransforms2;
    
    UTresCarBodyDataAsset();
};

