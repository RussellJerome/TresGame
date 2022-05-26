#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "TresRemyPawnDataTable.generated.h"

USTRUCT()
struct FTresRemyPawnDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector PawnLocation;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator PawnRotation;
    
    UPROPERTY(EditDefaultsOnly)
    FVector HourglassLocation;
    
    UPROPERTY(EditDefaultsOnly)
    FVector GreatSuccessEffectLocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FVector GreatSuccessBGEffectLocation;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator GreatSuccessBGEffectRotation;
    
    UPROPERTY(EditDefaultsOnly)
    FVector GasStoveFireEffectLocation;
    
    TRESGAME_API FTresRemyPawnDataTable();
};

