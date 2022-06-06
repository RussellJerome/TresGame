#pragma once
#include "CoreMinimal.h"
#include "TresDarkLaserSpawnParams_e_ex352.h"
#include "TresHomingDarkLaserSpawnParams_e_ex352.generated.h"

USTRUCT(BlueprintType)
struct FTresHomingDarkLaserSpawnParams_e_ex352 : public FTresDarkLaserSpawnParams_e_ex352 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_SpawnNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_SpawnSameTimeNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnMinRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnMaxRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnMinHieght;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnMaxHeight;
    
    TRESGAME_API FTresHomingDarkLaserSpawnParams_e_ex352();
};

