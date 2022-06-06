#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "TresWorldMapObjData.generated.h"

class ATresWorldMapObject;

USTRUCT()
struct FTresWorldMapObjData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWorldMapObject> m_MapObj;
    
    TRESGAME_API FTresWorldMapObjData();
};

