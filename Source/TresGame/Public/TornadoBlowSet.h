#pragma once
#include "CoreMinimal.h"
#include "TornadoBlowSet.generated.h"

USTRUCT(BlueprintType)
struct FTornadoBlowSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float fMaxStartDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float fEndDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float fBlowTime;
    
    UPROPERTY(EditDefaultsOnly)
    float fEndHeight;
    
    UPROPERTY(EditAnywhere)
    bool bForceEndHeight;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSetFloatingMode;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBlowToDebrisOwnerDir;
    
    TRESGAME_API FTornadoBlowSet();
};

