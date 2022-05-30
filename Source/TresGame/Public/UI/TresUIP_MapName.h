#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_MapName.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_MapName : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_MapNameRoot;
    
public:
    UTresUIP_MapName();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};

