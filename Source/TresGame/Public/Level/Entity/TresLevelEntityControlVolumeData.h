#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresLevelEntityControlVolumeData.generated.h"

UCLASS(Abstract, EditInlineNew)
class TRESGAME_API UTresLevelEntityControlVolumeData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Tag;
    
    UTresLevelEntityControlVolumeData();
};

