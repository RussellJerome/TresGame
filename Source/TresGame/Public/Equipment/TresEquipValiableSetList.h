#pragma once
#include "CoreMinimal.h"
#include "TresEquipValiableSet.h"
#include "TresEquipValiableSetList.generated.h"

USTRUCT(BlueprintType)
struct FTresEquipValiableSetList {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEquipValiableSet> m_List;
    
public:
    TRESGAME_API FTresEquipValiableSetList();
};

