#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_Wipe.generated.h"

UCLASS()
class UTresUIP_Wipe : public UTresUIParts {
    GENERATED_BODY()
public:
    UTresUIP_Wipe();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};

