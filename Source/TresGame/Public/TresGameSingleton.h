#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresGameSingleton.generated.h"

class UTresGameInstance;

UCLASS(Transient)
class TRESGAME_API UTresGameSingleton : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bInitialized;
    
    UPROPERTY()
    UTresGameInstance* TresGameInstance;
    
    UTresGameSingleton();
};

