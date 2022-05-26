#pragma once
#include "CoreMinimal.h"
#include "EX359_LaserInfo.h"
#include "EX359_LaserWaveInfo.generated.h"

class ATresCharPawnBase;
class AActor;

USTRUCT(BlueprintType)
struct FEX359_LaserWaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEX359_LaserInfo m_LaserInfo;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjSpawnStartWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxProjNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjSpawnInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjSpawnDistance;
    
    UPROPERTY()
    ATresCharPawnBase* m_Owner;
    
    UPROPERTY()
    AActor* m_Target;
    
    UPROPERTY()
    AActor* m_SpawnActor;
    
    TRESGAME_API FEX359_LaserWaveInfo();
};

