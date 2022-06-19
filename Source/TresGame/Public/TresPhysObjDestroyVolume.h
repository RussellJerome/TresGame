#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresPhysObjDestroyVolume.generated.h"

UCLASS()
class ATresPhysObjDestroyVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bDisappearFilterTag: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> m_DisappearActorTags;
    
    ATresPhysObjDestroyVolume();
};

