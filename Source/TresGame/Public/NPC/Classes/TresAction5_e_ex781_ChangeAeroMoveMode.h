#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction5_e_ex781_ChangeAeroMoveMode.generated.h"

UCLASS()
class UTresAction5_e_ex781_ChangeAeroMoveMode : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_IsAeroMoveMode;
    
    UTresAction5_e_ex781_ChangeAeroMoveMode();
};

