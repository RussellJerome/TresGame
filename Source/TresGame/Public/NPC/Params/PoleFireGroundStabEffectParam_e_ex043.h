#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PoleFireGroundStabEffectParam_e_ex043.generated.h"

class UParticleSystem;
class ATresCharPawnBase;

USTRUCT(BlueprintType)
struct FPoleFireGroundStabEffectParam_e_ex043 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_iNotifyParam;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GroundStabEffectParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWorldGroundHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fGroundStabEffectSpawnHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_GroundStabEffectLocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_GroundStabEffectRotationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bGroundStabEffectLoopSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fGroundStabEffectSpawnInterval;
    
    UPROPERTY()
    ATresCharPawnBase* MyCharPawn;
    
    TRESGAME_API FPoleFireGroundStabEffectParam_e_ex043();
};

