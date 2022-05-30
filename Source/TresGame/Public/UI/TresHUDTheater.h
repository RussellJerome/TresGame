#pragma once
#include "CoreMinimal.h"
#include "TresHUDBase.h"
#include "TresHUDTheater.generated.h"

class UTresUIDataAsset;

UCLASS(NonTransient)
class ATresHUDTheater : public ATresHUDBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UTresUIDataAsset* m_UIDataAssetTheater;
    
public:
    ATresHUDTheater();
};

