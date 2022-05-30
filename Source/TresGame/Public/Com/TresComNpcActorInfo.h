#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresComNpcActorInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTresComNpcActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_ActorType;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_BodyType;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> m_ActorClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MaxActorNum;
    
    TRESGAME_API FTresComNpcActorInfo();
};

