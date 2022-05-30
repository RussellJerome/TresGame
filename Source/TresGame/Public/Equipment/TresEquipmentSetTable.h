#pragma once
#include "CoreMinimal.h"
#include "TresEquipmentSetNameTable.h"
#include "TresEquipmentSetTable.generated.h"

USTRUCT(BlueprintType)
struct FTresEquipmentSetTable {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName EquipName;
    
    UPROPERTY(EditDefaultsOnly)
    FName EquipSetName[25];
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEquipmentSetNameTable> m_EquipSetNames;
    
    TRESGAME_API FTresEquipmentSetTable();
};

