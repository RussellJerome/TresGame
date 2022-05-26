#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormal.h"
#include "TresCameraWall.generated.h"

UCLASS(NotPlaceable)
class ATresCameraWall : public ATresCameraNormal {
    GENERATED_BODY()
public:
    ATresCameraWall();
};

