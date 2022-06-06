#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresScreenshotSaveController.generated.h"

class UTresGameInstance;

UCLASS()
class UTresScreenshotSaveController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UTresGameInstance* m_pTresGameInstance;
    
public:
    UTresScreenshotSaveController();
};

