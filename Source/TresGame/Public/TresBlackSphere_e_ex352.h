#pragma once
#include "CoreMinimal.h"
#include "TresBlackSphereSpawnParams_e_ex352.h"
#include "TresBlackSphere_e_ex352.generated.h"

USTRUCT(BlueprintType)
struct FTresBlackSphere_e_ex352 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresBlackSphereSpawnParams_e_ex352> m_BlackSphereSpawnParams;
    
    TRESGAME_API FTresBlackSphere_e_ex352();
};

