#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntityControlVolumeData.h"
#include "TresLevelEntityControlVolumeData_Object.generated.h"

class UObject;

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntityControlVolumeData_Object : public UTresLevelEntityControlVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UObject* m_Object;
    
    UTresLevelEntityControlVolumeData_Object();
};

