#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresComNpcEntityMoveData.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcEntityMoveData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName m_EntityName;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> m_ReplaceMovePoints;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FVector> m_MovePoints;
    
    TRESGAME_API FTresComNpcEntityMoveData();
};

