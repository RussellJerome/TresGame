#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction7_e_ex781_GenerateTetraBit.generated.h"

UCLASS()
class UTresAction7_e_ex781_GenerateTetraBit : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_GenerateTetraBitDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GenerateTetraBitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GenerateTetraBitOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TetraBitFormationWaitTime;
    
    UTresAction7_e_ex781_GenerateTetraBit();
};

