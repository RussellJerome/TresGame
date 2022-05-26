#pragma once
#include "CoreMinimal.h"
#include "TresCodeMenuScoreData.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresCodeMenuScoreData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxObject* m_pRecord;
    
    UPROPERTY(Transient)
    UGFxObject* m_pObj;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLabel1;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLabelName1;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLabelName2;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLabelName3;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLabelNum;
    
    TRESGAME_API FTresCodeMenuScoreData();
};

