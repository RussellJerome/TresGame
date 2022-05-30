#pragma once
#include "CoreMinimal.h"
#include "ETresItemDefGumiMaterial.h"
#include "ETresItemDefGumiParts.h"
#include "ETresItemDefGumiSticker.h"
#include "ETresItemDefGumiPattern.h"
#include "ETresItemDefGumiEtc.h"
#include "ETresItemDefGumiShipBP.h"
#include "ETresItemDefMaterial.h"
#include "TresGumiShipDropPrizeData.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipDropPrizeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ExpMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ExpMidCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ExpMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_HPMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_HPMidCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_HPMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_MunnyMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_MunnyMidCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_MunnyMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ETresItemDefGumiParts> m_GumiParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ETresItemDefGumiMaterial> m_GumiMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ETresItemDefGumiPattern> m_GumiPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ETresItemDefGumiSticker> m_GumiSticker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ETresItemDefGumiShipBP> m_GumiShipBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ETresItemDefGumiEtc> m_GumiEtc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ETresItemDefMaterial> m_Material;
    
    TRESGAME_API FTresGumiShipDropPrizeData();
};

