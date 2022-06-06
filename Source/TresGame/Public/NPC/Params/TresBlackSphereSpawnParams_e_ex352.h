#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresBlackSphereSpawnParams_e_ex352.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FTresBlackSphereSpawnParams_e_ex352 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_SpawnBlackSphere;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_AttackTimes;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_FiringAngle;
    
    TRESGAME_API FTresBlackSphereSpawnParams_e_ex352();
};

