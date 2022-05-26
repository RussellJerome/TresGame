#pragma once
#include "CoreMinimal.h"
#include "ETresMapSetObjType.h"
#include "TresMapSetObjData.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresMapSetObjData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresMapSetObjType::Type> Type;
    
    FTresMapSetObjData();
};

