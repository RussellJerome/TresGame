#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADLayoutObstructionType.h"
#include "UObject/NoExportTypes.h"
#include "SQEXSEADLayoutObstructionInfo.generated.h"

class AStaticMeshActor;

USTRUCT(BlueprintType)
struct FSQEXSEADLayoutObstructionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEXSEADLayoutObstructionType::Type> ObstructionType;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> ObstructionPointLocations;
    
    UPROPERTY(EditAnywhere)
    TArray<AStaticMeshActor*> LinkedMeshActorList;
    
    SQEXSEAD_API FSQEXSEADLayoutObstructionInfo();
};

