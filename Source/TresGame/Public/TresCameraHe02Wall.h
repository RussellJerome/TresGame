#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraRotTarget.h"
#include "TresCameraHe02Wall.generated.h"

class UCameraShake;

UCLASS()
class ATresCameraHe02Wall : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TSubclassOf<UCameraShake> m_CameraShakeClass;
    
public:
    ATresCameraHe02Wall();
};

