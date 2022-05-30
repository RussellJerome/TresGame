#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleObjectPool.generated.h"

class ATresWinniePuzzleUnitBase;
class ATresWinniePuzzleBucket;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleObjectPool : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 ReserveUnitsNumPerUnitType;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ReserveHoneypotsNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ReserveBucketsNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ReserveSpecialBucketsNum;
    
private:
    UPROPERTY(Transient)
    TArray<ATresWinniePuzzleUnitBase*> m_unitPool;
    
    UPROPERTY(Transient)
    TArray<ATresWinniePuzzleBucket*> m_bucketPool;
    
    UPROPERTY(Transient)
    TArray<ATresWinniePuzzleBucket*> m_specialBucketPool;
    
public:
    UTresWinniePuzzleObjectPool();
};

