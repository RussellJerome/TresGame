#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ca010_CoopInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyPawn_e_ca010_CoopInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_attachBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_OffsetLoc;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_OffsetRot;
    
    TRESGAME_API FTresEnemyPawn_e_ca010_CoopInfo();
};

