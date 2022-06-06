#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TeleportTypes_e_ex367.h"
#include "TresAction1_e_ex367_Teleport.generated.h"

class UEnvQuery;

UCLASS()
class UTresAction1_e_ex367_Teleport : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<TeleportTypes_e_ex367> m_PramTeleportType;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditAnywhere)
    float m_WarpTime;
    
    UPROPERTY(EditAnywhere)
    bool m_PlayerHigh;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_LockOnContinue;
    
public:
    UTresAction1_e_ex367_Teleport();
};

