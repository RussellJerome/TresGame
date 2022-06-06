#pragma once
#include "CoreMinimal.h"
#include "BX901_DarkCubeMineSpawnInfo.h"
#include "BX901_DarkCubeMineGroupSpawnInfo.generated.h"

class ATresCharPawnBase;
class AActor;

USTRUCT(BlueprintType)
struct FBX901_DarkCubeMineGroupSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FBX901_DarkCubeMineSpawnInfo m_ProjSpawnInfo;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWaitTimeAfterFinish;
    
protected:
    UPROPERTY()
    ATresCharPawnBase* m_Owner;
    
    UPROPERTY()
    AActor* m_Target;
    
public:
    TRESGAME_API FBX901_DarkCubeMineGroupSpawnInfo();
};

