#pragma once
#include "CoreMinimal.h"
#include "ETresFNpcAICombiID.h"
#include "ETresChrUniqueID.h"
#include "TresNpcAICombiData.generated.h"

USTRUCT(BlueprintType)
struct FTresNpcAICombiData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresFNpcAICombiID m_CombiID;
    
    UPROPERTY(EditDefaultsOnly)
    ETresChrUniqueID m_MainChrUID;
    
    UPROPERTY(EditDefaultsOnly)
    ETresChrUniqueID m_PartnerChrUID;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseMP;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StandbyLimitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ExecLength_PtoM;
    
    TRESGAME_API FTresNpcAICombiData();
};

