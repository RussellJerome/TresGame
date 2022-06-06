#pragma once
#include "CoreMinimal.h"
#include "TresGameMode.h"
#include "TresSoKcGameMode.generated.h"

class UDataTable;
class UStaticMesh;

UCLASS(NonTransient)
class ATresSoKcGameMode : public ATresGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pCommonParameterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UStaticMesh* m_pInstancingDrawKeyHoleStaticMesh;
    
    UPROPERTY(EditDefaultsOnly)
    TSet<int32> m_BgmChangeEventThresholdList;
    
public:
    ATresSoKcGameMode();
};

