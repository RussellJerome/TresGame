#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WolfSpawnInfo_e_ex731.generated.h"

USTRUCT(BlueprintType)
struct FWolfSpawnInfo_e_ex731 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_NotifyParam;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_BoneName;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_SpawnRot;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSpawnOnBoneRot;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearMoveVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAppearMoveDistance;
    
    TRESGAME_API FWolfSpawnInfo_e_ex731();
};

