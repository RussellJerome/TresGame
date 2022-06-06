#pragma once
#include "CoreMinimal.h"
#include "TresHUDBase.h"
#include "TresHUDMemoryArchive.generated.h"

class USoundBase;
class UTresUIDataAsset;
class UTresUIManager;

UCLASS(NonTransient)
class ATresHUDMemoryArchive : public ATresHUDBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UTresUIDataAsset* m_UIDataAssetMemoryArchive;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TitleMapName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MemoryArchiveMapName;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_BGM;
    
    UPROPERTY(Transient)
    UTresUIManager* m_UIManager;
    
public:
    ATresHUDMemoryArchive();
};

