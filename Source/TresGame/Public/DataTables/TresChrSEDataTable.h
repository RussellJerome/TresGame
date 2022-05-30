#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresChrSEDataTable.generated.h"

class USoundBase;

USTRUCT()
struct FTresChrSEDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_Asset;
    
    TRESGAME_API FTresChrSEDataTable();
};

