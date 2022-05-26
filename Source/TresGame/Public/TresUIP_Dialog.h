#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_Dialog.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_Dialog : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UGFxObject* m_RootMain;
    
public:
    UTresUIP_Dialog();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};

