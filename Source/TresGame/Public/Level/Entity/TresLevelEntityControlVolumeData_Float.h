#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntityControlVolumeData.h"
#include "TresLevelEntityControlVolumeData_Float.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntityControlVolumeData_Float : public UTresLevelEntityControlVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Float[4];
    
    UTresLevelEntityControlVolumeData_Float();
};

