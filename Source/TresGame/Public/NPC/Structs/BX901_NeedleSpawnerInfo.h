#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BX901_NeedleSpawnerInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FBX901_NeedleSpawnerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> m_NeedleSpawnerClass;
    
    TRESGAME_API FBX901_NeedleSpawnerInfo();
};

