#pragma once
#include "CoreMinimal.h"
#include "TresHUDBase.h"
#include "TresHUDPhilharmonic.generated.h"

class USoundBase;
class UTresUIDataAsset;
class UTresUIManager;

UCLASS(NonTransient)
class ATresHUDPhilharmonic : public ATresHUDBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UTresUIDataAsset* m_UIDataAssetPhilharmonic;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TitleMapName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_PhilharmonicMapName;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_BGM;
    
    UPROPERTY(Transient)
    UTresUIManager* m_UIManager;
    
public:
    ATresHUDPhilharmonic();
};

