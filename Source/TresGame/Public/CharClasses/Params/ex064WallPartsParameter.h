#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "ex064WallPartsLayoutData.h"
#include "ex064WallPartsParameter.generated.h"

class ATresEnemyPawn_e_ex064_Wall;

USTRUCT(BlueprintType)
struct Fex064WallPartsParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumWallParts;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_BaseRelativeLocation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RandYawRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BeginSpawnHPRate;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawn_e_ex064_Wall> m_SpawnClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<Fex064WallPartsLayoutData> m_LayoutList;
    
    TRESGAME_API Fex064WallPartsParameter();
};

