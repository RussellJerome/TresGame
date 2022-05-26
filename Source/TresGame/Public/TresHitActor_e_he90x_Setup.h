#pragma once
#include "CoreMinimal.h"
#include "TresHitActor_e_he90x_Setup.generated.h"

USTRUCT(BlueprintType)
struct FTresHitActor_e_he90x_Setup {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHeight;
    
    TRESGAME_API FTresHitActor_e_he90x_Setup();
};

