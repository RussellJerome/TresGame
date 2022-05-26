#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "e_ex064_AnimParam.h"
#include "ex064WallPartsLayoutData.generated.h"

USTRUCT(BlueprintType)
struct Fex064WallPartsLayoutData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_SelectWeight;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_RandLocationRange;
    
    UPROPERTY(EditAnywhere)
    FName m_AnimIdle0;
    
    UPROPERTY(EditDefaultsOnly)
    Fe_ex064_AnimParam m_AnimIdleOptional1;
    
    UPROPERTY(EditDefaultsOnly)
    Fe_ex064_AnimParam m_AnimIdleOptional2;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> m_SpawnList;
    
    TRESGAME_API Fex064WallPartsLayoutData();
};

