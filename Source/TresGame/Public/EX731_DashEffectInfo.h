#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EX731_DashEffectInfo.generated.h"

class UParticleSystem;
class ATresCharPawnBase;

USTRUCT(BlueprintType)
struct FEX731_DashEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_iNotifyParam;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DashEffectClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWorldGroundHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDashEffectSpawnHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_DashEffectLocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_DashEffectRotationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDashEffectLoopSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDashEffectSpawnInterval;
    
    UPROPERTY()
    ATresCharPawnBase* MyCharPawn;
    
    TRESGAME_API FEX731_DashEffectInfo();
};

