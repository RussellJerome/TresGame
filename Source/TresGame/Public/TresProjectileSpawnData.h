#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresProjectileRespawnType.h"
#include "ETresProjectileRespawnRotType.h"
#include "TresProjectileSpawnData.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FTresProjectileSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_GenerateClass;
    
    UPROPERTY(EditDefaultsOnly)
    ETresProjectileRespawnType m_CheckType;
    
    UPROPERTY(EditDefaultsOnly)
    ETresProjectileRespawnRotType m_RotInheritType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CheckRange;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bOnGroundOnly: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bBlockByWaterSurface: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bTakeOverAtkTarget: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bTakeOverAtkCollHitList: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bTakeOverAtkCollFinishFlag: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIgnoreSendShutdownMsgToOwner: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bTakeOverEffectColorParam: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bTakeOverEffectAlphaParam: 1;
    
    TRESGAME_API FTresProjectileSpawnData();
};

