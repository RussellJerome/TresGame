#pragma once
#include "CoreMinimal.h"
#include "TresDarkHomingProjectileNum_e_dw407.h"
#include "TresDarkHomingProjectileNumParams_e_dw407.generated.h"

USTRUCT(BlueprintType)
struct FTresDarkHomingProjectileNumParams_e_dw407 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresDarkHomingProjectileNum_e_dw407> m_SpawnProjectileNumParams;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsUseIntervalGameLevelParam: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsUseSpeedGameLevelParam: 1;
    
    TRESGAME_API FTresDarkHomingProjectileNumParams_e_dw407();
};

