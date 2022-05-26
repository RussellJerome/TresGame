#pragma once
#include "CoreMinimal.h"
#include "EX359_ThrowInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX359_ThrowInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fStopTime;
    
    UPROPERTY()
    bool m_bStopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLifeTime;
    
    UPROPERTY()
    bool m_bLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_iNoStopOnHit;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_iNoDestroyOnHit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLifeTimeAfterHit;
    
    TRESGAME_API FEX359_ThrowInfo();
};

