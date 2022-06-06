#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx721HandID.h"
#include "TresThornWavingDummyMeshAttachInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresThornWavingDummyMeshAttachInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    ETresEnemyEx721HandID m_HandID;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttachName;
    
    TRESGAME_API FTresThornWavingDummyMeshAttachInfo();
};

