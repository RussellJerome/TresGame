#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TeleportTypes_e_ex301.h"
#include "TresAction1_e_ex301_Teleport.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction1_e_ex301_Teleport : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<TeleportTypes_e_ex301> m_PramTeleportType;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditAnywhere)
    float m_WarpTime;
    
public:
    UTresAction1_e_ex301_Teleport();
};

