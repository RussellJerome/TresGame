#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SQEX_BonamikWindPreset_Actor.generated.h"

class USQEX_BonamikWindCollectionAsset;

UCLASS()
class BONAMIKRT_API ASQEX_BonamikWindPreset_Actor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USQEX_BonamikWindCollectionAsset* m_BonamikWindCollectionAsset;
    
    ASQEX_BonamikWindPreset_Actor();
};

