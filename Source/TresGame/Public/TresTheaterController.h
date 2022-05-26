#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresTheaterController.generated.h"

class UTresTheaterData;
class UTresUIManager;
class UTresUIP_Theater;

UCLASS()
class UTresTheaterController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresUIManager* m_UIManager;
    
    UPROPERTY(Transient)
    UTresUIP_Theater* m_Theater;
    
    UPROPERTY(Transient)
    UTresTheaterData* m_TheaterData;
    
public:
    UTresTheaterController();
};

