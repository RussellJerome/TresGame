#pragma once
#include "CoreMinimal.h"
#include "EX359_BeamOnSplineInfo.h"
#include "EEX359_SpawnDirType.h"
#include "EX359_BeamOnSplineInfoSet.generated.h"

USTRUCT(BlueprintType)
struct FEX359_BeamOnSplineInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX359_BeamOnSplineInfo> m_BeamOnSplineInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX359_SpawnDirType> m_DirType;
    
    TRESGAME_API FEX359_BeamOnSplineInfoSet();
};

