#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntityControlVolumeData.h"
#include "TresLevelEntityControlVolumeData_Int.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntityControlVolumeData_Int : public UTresLevelEntityControlVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_Int[4];
    
    UTresLevelEntityControlVolumeData_Int();
};

