#pragma once
#include "CoreMinimal.h"
#include "EX359_LaserInfoSet.h"
#include "EX359_LaserOnTimeInfo.h"
#include "EX359_LaserOnTimeInfoSet.generated.h"

class ATresCharPawnBase;
class AActor;

USTRUCT(BlueprintType)
struct FEX359_LaserOnTimeInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX359_LaserOnTimeInfo> m_LaserOnTimeInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_LaserInfoSet m_LaserInfoSet;
    
protected:
    UPROPERTY()
    ATresCharPawnBase* m_Owner;
    
    UPROPERTY()
    AActor* m_Target;
    
    UPROPERTY()
    AActor* m_SpawnActor;
    
public:
    TRESGAME_API FEX359_LaserOnTimeInfoSet();
};

