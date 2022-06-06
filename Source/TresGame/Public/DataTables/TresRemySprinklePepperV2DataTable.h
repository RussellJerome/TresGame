#pragma once
#include "CoreMinimal.h"
#include "TresRemyCookingGameDataTableBase.h"
#include "RemySprinklePepperContentsType.h"
#include "RemySprinklePepperEquipmentType.h"
#include "TresRemySprinklePepperV2DataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresRemySprinklePepperV2DataTable : public FTresRemyCookingGameDataTableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    RemySprinklePepperEquipmentType EquipmentType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    RemySprinklePepperContentsType ContentsType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ValidInputValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StickNeutralValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GreatSuccessInputBonusCorrectionCoefficient;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InputTimingSuccessPercent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InputTimingGreatSuccessPercent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InputTimingTooSlowPercent;
    
    TRESGAME_API FTresRemySprinklePepperV2DataTable();
};

