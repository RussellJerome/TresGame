#pragma once
#include "CoreMinimal.h"
#include "TresDarkHomingProjectileNum_e_dw407.generated.h"

USTRUCT(BlueprintType)
struct FTresDarkHomingProjectileNum_e_dw407 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint32 m_ForwardProjectileNum;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_BackwardProjectileNum;
    
    TRESGAME_API FTresDarkHomingProjectileNum_e_dw407();
};

