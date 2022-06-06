#pragma once
#include "CoreMinimal.h"
#include "TresClaymoreIdleInfo_e_ex355.generated.h"

USTRUCT(BlueprintType)
struct FTresClaymoreIdleInfo_e_ex355 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fRevolveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fRevolveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fRevolveHeight;
    
    TRESGAME_API FTresClaymoreIdleInfo_e_ex355();
};

