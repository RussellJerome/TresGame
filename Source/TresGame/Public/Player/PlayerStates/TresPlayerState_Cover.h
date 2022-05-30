#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Cover.h"
#include "TresPlayerState_Cover.generated.h"

class UTresLockonTargetComponent;
class ATresCameraNormal;

UCLASS()
class UTresPlayerState_Cover : public UTresCharState_Cover {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UTresLockonTargetComponent* m_pTargetComponent;
    
    UPROPERTY()
    ATresCameraNormal* m_pCamera;
    
    UTresPlayerState_Cover();
};

