#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoopDefinitionTest_Formation.generated.h"

UCLASS(HideDropdown)
class UTresCoopDefinitionTest_Formation : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float UpOffset;
    
    UPROPERTY(EditAnywhere)
    float ForwardOffset;
    
    UPROPERTY(EditAnywhere)
    float SpaceDistance;
    
    UTresCoopDefinitionTest_Formation();
};

