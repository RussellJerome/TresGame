#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresGameOverHintSelector.generated.h"

class UTresUIManager;

UCLASS()
class UTresGameOverHintSelector : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UTresUIManager* m_UIManager;
    
public:
    UTresGameOverHintSelector();
};

