#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BX901_DarkCubeMineInfo.generated.h"

USTRUCT(BlueprintType)
struct FBX901_DarkCubeMineInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_vLocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_rRotationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bMoveOnFinish;
    
    TRESGAME_API FBX901_DarkCubeMineInfo();
};

