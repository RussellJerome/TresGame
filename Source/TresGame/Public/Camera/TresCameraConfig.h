#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresCameraConfig.generated.h"

UCLASS(Config=TresCameraConfig)
class UTresCameraConfig : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    uint8 m_bAutoMoveRotationYawOnly: 1;
    
    UPROPERTY(Config)
    uint8 m_bNoCollision: 1;
    
public:
    UTresCameraConfig();
};

