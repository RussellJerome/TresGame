#pragma once
#include "CoreMinimal.h"
#include "TresGimmickBxSingouki.h"
#include "TresGimmickBxSingouki01.generated.h"

class USpotLightComponent;

UCLASS()
class ATresGimmickBxSingouki01 : public ATresGimmickBxSingouki {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USpotLightComponent* SpotLightComp;
    
    UPROPERTY(EditAnywhere)
    FName GameFlagName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> NoLightsFlagName;
    
    ATresGimmickBxSingouki01();
};

