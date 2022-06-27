#pragma once
#include "CoreMinimal.h"
#include "TresEquipmentSetNameTable.h"
#include "TresEquipmentSetTable.generated.h"

USTRUCT(BlueprintType)
struct FTresEquipmentSetTable {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName EquipName;
    
    UPROPERTY(EditDefaultsOnly)
    FName EquipSetName[25];
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FTresEquipmentSetNameTable> m_EquipSetNames;
    
    TRESGAME_API FTresEquipmentSetTable();
};

