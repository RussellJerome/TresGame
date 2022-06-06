#pragma once
#include "CoreMinimal.h"
#include "TresHomingDarkLaserSpawnParams_e_ex316.generated.h"

USTRUCT(BlueprintType)
struct FTresHomingDarkLaserSpawnParams_e_ex316 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnMinRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnMaxRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnMinHieght;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnMaxHeight;
    
    TRESGAME_API FTresHomingDarkLaserSpawnParams_e_ex316();
};

