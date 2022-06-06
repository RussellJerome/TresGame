#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresCommandKindData.generated.h"

USTRUCT()
struct FTresCommandKindData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    uint8 Type;
    
    UPROPERTY()
    uint8 Cate;
    
    UPROPERTY()
    uint8 Old;
    
    UPROPERTY()
    uint8 Attr;
    
    UPROPERTY()
    uint8 Local;
    
    UPROPERTY()
    uint8 Flag;
    
    UPROPERTY()
    uint8 Sp;
    
    UPROPERTY()
    uint8 Mp;
    
    UPROPERTY()
    uint8 Fp;
    
    UPROPERTY()
    int32 Param0;
    
    UPROPERTY()
    int32 Param1;
    
    UPROPERTY()
    int32 Param2;
    
    UPROPERTY()
    int32 Param3;
    
    UPROPERTY()
    FString LocKey;
    
    TRESGAME_API FTresCommandKindData();
};

