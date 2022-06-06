#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresPhilharmonicController.generated.h"

class UTresUIManager;
class UTresUIP_Philharmonic;
class UDataTable;

UCLASS()
class UTresPhilharmonicController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresUIManager* m_UIManager;
    
    UPROPERTY(Transient)
    UTresUIP_Philharmonic* m_Philharmonic;
    
    UPROPERTY(Transient)
    UDataTable* m_PhilharmonicData;
    
public:
    UTresPhilharmonicController();
};

