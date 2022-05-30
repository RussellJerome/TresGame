#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresActionDefinitionBase.h"
#include "TresAction5_e_ex360_PlayVoise.generated.h"

class ATresGenerator_e_ex360_PlayVoise;

UCLASS(HideDropdown)
class UTresAction5_e_ex360_PlayVoise : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresGenerator_e_ex360_PlayVoise> m_Generator;
    
    UTresAction5_e_ex360_PlayVoise();
};

