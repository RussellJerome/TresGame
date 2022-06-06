#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EX354_ArtemaWarpShotSequence_ProjectileInfo.h"
#include "EX354_ArtemaWarpShotSequenceInfo.generated.h"

class ATresCharPawnBase;
class UCurveVector;
class AActor;

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotSequenceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX354_ArtemaWarpShotSequence_ProjectileInfo> m_ProjectileInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fShotWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vSpawnLoc;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* m_SpawnLocCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vAimLoc;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* m_AimLocCurve;
    
protected:
    UPROPERTY()
    ATresCharPawnBase* m_Owner;
    
    UPROPERTY()
    AActor* m_Target;
    
public:
    TRESGAME_API FEX354_ArtemaWarpShotSequenceInfo();
};

