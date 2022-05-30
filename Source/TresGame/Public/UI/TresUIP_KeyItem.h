#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_KeyItem.generated.h"

UCLASS()
class UTresUIP_KeyItem : public UTresUIParts {
    GENERATED_BODY()
public:
    UTresUIP_KeyItem();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};

