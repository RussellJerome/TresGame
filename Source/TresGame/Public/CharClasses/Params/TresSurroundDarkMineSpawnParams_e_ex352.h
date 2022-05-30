#pragma once
#include "CoreMinimal.h"
#include "TresSurroundDarkMineSpawnParams_e_ex352.generated.h"

USTRUCT(BlueprintType)
struct FTresSurroundDarkMineSpawnParams_e_ex352 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_DMNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DMBootRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DMTimeToExplodeAfterBoot;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DMRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DMSpreadStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DMSpreadSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DMSpreadTime;
    
    TRESGAME_API FTresSurroundDarkMineSpawnParams_e_ex352();
};

