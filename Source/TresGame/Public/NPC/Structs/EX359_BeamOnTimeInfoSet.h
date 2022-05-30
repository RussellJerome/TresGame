#pragma once
#include "CoreMinimal.h"
#include "EX359_BeamOnTimeInfo.h"
#include "EX359_BeamInfoSet.h"
#include "EX359_BeamOnTimeInfoSet.generated.h"

class AActor;
class ATresCharPawnBase;

USTRUCT(BlueprintType)
struct FEX359_BeamOnTimeInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX359_BeamOnTimeInfo> m_BeamOnTimeInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_BeamInfoSet m_BeamInfoSet;
    
protected:
    UPROPERTY()
    ATresCharPawnBase* m_Owner;
    
    UPROPERTY()
    AActor* m_Target;
    
    UPROPERTY()
    AActor* m_SpawnActor;
    
public:
    TRESGAME_API FEX359_BeamOnTimeInfoSet();
};

