#pragma once
#include "CoreMinimal.h"
#include "EX354_ArtemaWarpShotInfo.h"
#include "EX354_ArtemaWarpShotSet.generated.h"

class ATresCharPawnBase;
class AActor;

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX354_ArtemaWarpShotInfo> m_ArtemaWarpShotInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSendEventOnEnd;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIgnoreTargetModify;
    
    UPROPERTY()
    ATresCharPawnBase* m_Owner;
    
    UPROPERTY()
    AActor* m_Target;
    
    TRESGAME_API FEX354_ArtemaWarpShotSet();
};

