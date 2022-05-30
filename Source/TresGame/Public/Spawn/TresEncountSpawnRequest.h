#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEncountSpawnRequest.generated.h"

class AActor;
class ATresEncountVolume;

USTRUCT(BlueprintType)
struct TRESGAME_API FTresEncountSpawnRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<AActor> m_Class;
    
    UPROPERTY()
    ATresEncountVolume* m_EncountVolume;
    
    UPROPERTY()
    TArray<FName> m_Groups;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> m_Template;
    
    FTresEncountSpawnRequest();
};

