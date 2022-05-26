#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresMemoryArchiveController.generated.h"

class UTresUIP_MemoryArchive;
class UTresUIManager;
class UDataTable;

UCLASS()
class UTresMemoryArchiveController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresUIManager* m_UIManager;
    
    UPROPERTY(Transient)
    UTresUIP_MemoryArchive* m_MemoryArchive;
    
    UPROPERTY(Transient)
    UDataTable* m_MemoryArchiveData;
    
public:
    UTresMemoryArchiveController();
};

