#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAction4_e_ex059_BeatenSnowCoverSwing.generated.h"

UCLASS(HideDropdown)
class UTresAction4_e_ex059_BeatenSnowCoverSwing : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float m_AccelSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    FVector m_WarpOffsetLocation;
    
public:
    UTresAction4_e_ex059_BeatenSnowCoverSwing();
};

